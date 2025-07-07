#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "sprite.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/metatile_behaviors.h"

static u8 GetValidFalcomonMoveDirection(u8);
static bool8 ShouldFalcomonMoveNorth(struct ObjectEvent *, u8);
static bool8 ShouldFalcomonMoveSouth(struct ObjectEvent *, u8);
static bool8 ShouldFalcomonMoveEast(struct ObjectEvent *, u8);
static bool8 ShouldFalcomonMoveWest(struct ObjectEvent *, u8);
static u8 GetRandomFalcomonDirectionCandidate(u8);
static bool8 CanFalcomonMoveToCoords(s16, s16);

static EWRAM_DATA u8 sGrassSpriteId = 0;

static s16 sPlayerToFalcomonDeltaX;
static s16 sPlayerToFalcomonDeltaY;
static u8 sFalcomonDirectionCandidates[4];

extern const struct SpritePalette gSpritePalette_GeneralFieldEffect1;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

static const s16 sFarawayIslandRockCoords[4][2] =
{
    {14 + MAP_OFFSET,  9 + MAP_OFFSET},
    {18 + MAP_OFFSET,  9 + MAP_OFFSET},
    { 9 + MAP_OFFSET, 10 + MAP_OFFSET},
    {13 + MAP_OFFSET, 13 + MAP_OFFSET},
};

static u8 GetFalcomonObjectEventId(void)
{
    u8 objectEventId;
    TryGetObjectEventIdByLocalIdAndMap(LOCALID_FARAWAY_ISLAND_FALCOMON, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, &objectEventId);
    return objectEventId;
}

// When the player enters Faraway Island interior it begins a "hide and seek" minigame where Falcomon disappears into the grass
// This function returns the direction Falcomon will take a step, and is run every time the player takes a step
u32 GetFalcomonMoveDirection(void)
{
    u8 i;
    int falcomonSafeFromTrap;
    struct ObjectEvent *falcomon = &gObjectEvents[GetFalcomonObjectEventId()];

    sPlayerToFalcomonDeltaX = gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x - falcomon->currentCoords.x;
    sPlayerToFalcomonDeltaY = gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y - falcomon->currentCoords.y;
    for (i = 0; i < ARRAY_COUNT(sFalcomonDirectionCandidates); i++)
        sFalcomonDirectionCandidates[i] = DIR_NONE;

    // Player hasn't moved (just facing new direction), don't move
    if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x == gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x
     && gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y == gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y)
    {
        return DIR_NONE;
    }

    // Falcomon is invisible except for every 8th step
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 8 == 0)
        falcomon->invisible = FALSE;
    else
        falcomon->invisible = TRUE;

    // Falcomon will stay in place for 1 step after its visible
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 9 == 0)
        return DIR_NONE;

    // Below loop is for Falcomon to try to avoid getting trapped between the player and a rock
    for (i = 0; i < ARRAY_COUNT(sFarawayIslandRockCoords); i++)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x == sFarawayIslandRockCoords[i][0])
        {
            falcomonSafeFromTrap = FALSE;
            if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y < sFarawayIslandRockCoords[i][1])
            {
                if (falcomon->currentCoords.y <= sFarawayIslandRockCoords[i][1])
                    falcomonSafeFromTrap = TRUE;
            }
            else
            {
                if (falcomon->currentCoords.y >= sFarawayIslandRockCoords[i][1])
                    falcomonSafeFromTrap = TRUE;
            }

            if (!falcomonSafeFromTrap)
            {
                if (sPlayerToFalcomonDeltaX > 0)
                {
                    if (falcomon->currentCoords.x + 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y))
                            return DIR_EAST;
                    }
                }
                else if (sPlayerToFalcomonDeltaX < 0)
                {
                    if (falcomon->currentCoords.x - 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y))
                            return DIR_WEST;
                    }
                }

                if (falcomon->currentCoords.x == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x)
                {
                    if (sPlayerToFalcomonDeltaY > 0)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1))
                            return DIR_NORTH;
                    }
                    else
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1))
                            return DIR_SOUTH;
                    }
                }
            }
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y == sFarawayIslandRockCoords[i][1])
        {
            falcomonSafeFromTrap = FALSE;
            if (gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.x < sFarawayIslandRockCoords[i][0])
            {
                if (falcomon->currentCoords.x <= sFarawayIslandRockCoords[i][0])
                    falcomonSafeFromTrap = TRUE;
            }
            else
            {
                if (falcomon->currentCoords.x >= sFarawayIslandRockCoords[i][0])
                    falcomonSafeFromTrap = TRUE;
            }

            if (!falcomonSafeFromTrap)
            {
                if (sPlayerToFalcomonDeltaY > 0)
                {
                    if (falcomon->currentCoords.y + 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1))
                            return DIR_SOUTH;
                    }
                }
                else if (sPlayerToFalcomonDeltaY < 0)
                {
                    if (falcomon->currentCoords.y - 1 == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1))
                            return DIR_NORTH;
                    }
                }

                if (falcomon->currentCoords.y == gObjectEvents[gPlayerAvatar.objectEventId].previousCoords.y)
                {
                    if (sPlayerToFalcomonDeltaX > 0)
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y))
                            return DIR_WEST;
                    }
                    else
                    {
                        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y))
                            return DIR_EAST;
                    }
                }
            }
        }
    }

    // Check if Falcomon can move in any direction without getting closer to the player
    // If so load into sFalcomonDirectionCandidates
    // If Falcomon can move in two of the checked directions, choose one randomly
    if (ShouldFalcomonMoveNorth(falcomon, 0))
    {
        if (ShouldFalcomonMoveEast(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else if (ShouldFalcomonMoveWest(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else
            return DIR_NORTH;
    }

    if (ShouldFalcomonMoveSouth(falcomon, 0))
    {
        if (ShouldFalcomonMoveEast(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else if (ShouldFalcomonMoveWest(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else
            return DIR_SOUTH;
    }

    if (ShouldFalcomonMoveEast(falcomon, 0))
    {
        if (ShouldFalcomonMoveNorth(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else if (ShouldFalcomonMoveSouth(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else
            return DIR_EAST;
    }

    if (ShouldFalcomonMoveWest(falcomon, 0))
    {
        if (ShouldFalcomonMoveNorth(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else if (ShouldFalcomonMoveSouth(falcomon, 1))
            return GetRandomFalcomonDirectionCandidate(2);
        else
            return DIR_WEST;
    }

    // If this point is reached, Falcomon cannot move without getting closer to the player

    // Avoid player on same Y, try move North/South
    if (sPlayerToFalcomonDeltaY == 0)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y > falcomon->currentCoords.y)
        {
            if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1))
                return DIR_NORTH;
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y < falcomon->currentCoords.y)
        {
            if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1))
                return DIR_SOUTH;
        }

        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1))
            return DIR_NORTH;

        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1))
            return DIR_SOUTH;
    }

    // Avoid player on same X, try move West/East
    if (sPlayerToFalcomonDeltaX == 0)
    {
        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x > falcomon->currentCoords.x)
        {
            if (CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y))
                return DIR_WEST;
        }

        if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x < falcomon->currentCoords.x)
        {
            if (CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y))
                return DIR_EAST;
        }

        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y))
            return DIR_EAST;

        if (CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y))
            return DIR_WEST;
    }

    // Can't avoid player on axis, move any valid direction
    return GetValidFalcomonMoveDirection(DIR_NONE);
}

// Falcomon can move to any Tall/Long Grass metatile the player isn't currently on
static bool8 CanFalcomonMoveToCoords(s16 x, s16 y)
{
    if (gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.x == x
     && gObjectEvents[gPlayerAvatar.objectEventId].currentCoords.y == y)
    {
        return FALSE;
    }

    return MetatileBehavior_IsPokeGrass(MapGridGetMetatileBehaviorAt(x, y));
}

// Last ditch effort to move, clear move candidates and try all directions again
static u8 GetValidFalcomonMoveDirection(u8 ignoredDir)
{
    u8 i;
    u8 count = 0;
    struct ObjectEvent *falcomon = &gObjectEvents[GetFalcomonObjectEventId()];

    for (i = 0; i < ARRAY_COUNT(sFalcomonDirectionCandidates); i++)
        sFalcomonDirectionCandidates[i] = DIR_NONE;

    if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1) == TRUE && ignoredDir != DIR_NORTH)
    {
        sFalcomonDirectionCandidates[count] = DIR_NORTH;
        count++;
    }

    if (CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y) == TRUE && ignoredDir != DIR_EAST)
    {
        sFalcomonDirectionCandidates[count] = DIR_EAST;
        count++;
    }

    if (CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1) == TRUE && ignoredDir != DIR_SOUTH)
    {
        sFalcomonDirectionCandidates[count] = DIR_SOUTH;
        count++;
    }

    if (CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y) == TRUE && ignoredDir != DIR_WEST)
    {
        sFalcomonDirectionCandidates[count] = DIR_WEST;
        count++;
    }

    if (count > 1)
        return sFalcomonDirectionCandidates[VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % count];
    else
        return sFalcomonDirectionCandidates[0];
}

void UpdateFarawayIslandStepCounter(void)
{
    u16 steps = VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER);
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_FARAWAY_ISLAND_INTERIOR))
    {
        steps++;
        if (steps >= 9999)
            VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, 0);
        else
            VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, steps);
    }
}

bool8 ObjectEventIsFarawayIslandFalcomon(struct ObjectEvent *objectEvent)
{
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_FARAWAY_ISLAND_INTERIOR))
    {
        if (objectEvent->graphicsId == OBJ_EVENT_GFX_FALCOMON)
            return TRUE;
    }

    return FALSE;
}

bool8 IsFalcomonPlayingHideAndSeek(void)
{
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_FARAWAY_ISLAND_INTERIOR)
     && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_FARAWAY_ISLAND_INTERIOR))
    {
        if (FlagGet(FLAG_CAUGHT_FALCOMON) != TRUE && FlagGet(FLAG_HIDE_FALCOMON) != TRUE)
            return TRUE;
    }

    return FALSE;
}

// Every 4th step Falcomon will shake the grass it steps into
// Otherwise its movement leaves grass undisturbed
bool8 ShouldFalcomonShakeGrass(struct ObjectEvent *objectEvent)
{
    if (VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) != 0xFFFF
     && VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % 4 == 0)
        return TRUE;

    return FALSE;
}

void SetFalcomonAboveGrass(void)
{
    s16 x;
    s16 y;
    struct ObjectEvent *falcomon = &gObjectEvents[GetFalcomonObjectEventId()];

    falcomon->invisible = FALSE;
    if (gSpecialVar_0x8004 == 1)
    {
        // For after battle where Falcomon should still be present (e.g. if ran from battle)
        falcomon->fixedPriority = 1;
        gSprites[falcomon->spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        gSprites[falcomon->spriteId].subpriority = 1;
    }
    else
    {
        // Falcomon emerging from grass when found
        // Also do field effect for grass shaking as it emerges
        VarSet(VAR_FARAWAY_ISLAND_STEP_COUNTER, 0xFFFF);
        falcomon->fixedPriority = 1;
        gSprites[falcomon->spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
        if (gSpecialVar_Facing != DIR_NORTH)
            gSprites[falcomon->spriteId].subpriority = 1;

        LoadSpritePalette(&gSpritePalette_GeneralFieldEffect1);
        UpdateSpritePaletteWithWeather(IndexOfSpritePaletteTag(gSpritePalette_GeneralFieldEffect1.tag), FALSE);

        x = falcomon->currentCoords.x;
        y = falcomon->currentCoords.y;
        SetSpritePosToOffsetMapCoords(&x, &y, 8, 8);
        sGrassSpriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_LONG_GRASS], x, y, gSprites[falcomon->spriteId].subpriority - 1);
        if (sGrassSpriteId != MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[sGrassSpriteId];
            sprite->coordOffsetEnabled = 1;
            sprite->oam.priority = 2;
            sprite->callback = SpriteCallbackDummy;
        }
    }
}

void DestroyFalcomonEmergingGrassSprite(void)
{
    if (sGrassSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sGrassSpriteId]);
}

static bool8 ShouldFalcomonMoveNorth(struct ObjectEvent *falcomon, u8 index)
{
    if (sPlayerToFalcomonDeltaY > 0 && CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y - 1))
    {
        sFalcomonDirectionCandidates[index] = DIR_NORTH;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldFalcomonMoveEast(struct ObjectEvent *falcomon, u8 index)
{
    if (sPlayerToFalcomonDeltaX < 0 && CanFalcomonMoveToCoords(falcomon->currentCoords.x + 1, falcomon->currentCoords.y))
    {
        sFalcomonDirectionCandidates[index] = DIR_EAST;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldFalcomonMoveSouth(struct ObjectEvent *falcomon, u8 index)
{
    if (sPlayerToFalcomonDeltaY < 0 && CanFalcomonMoveToCoords(falcomon->currentCoords.x, falcomon->currentCoords.y + 1))
    {
        sFalcomonDirectionCandidates[index] = DIR_SOUTH;
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldFalcomonMoveWest(struct ObjectEvent *falcomon, u8 index)
{
    if (sPlayerToFalcomonDeltaX > 0 && CanFalcomonMoveToCoords(falcomon->currentCoords.x - 1, falcomon->currentCoords.y))
    {
        sFalcomonDirectionCandidates[index] = DIR_WEST;
        return TRUE;
    }

    return FALSE;
}

static u8 GetRandomFalcomonDirectionCandidate(u8 numDirections)
{
    return sFalcomonDirectionCandidates[VarGet(VAR_FARAWAY_ISLAND_STEP_COUNTER) % numDirections];
}
