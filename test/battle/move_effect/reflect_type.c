#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Reflect Type does not affect any of Arceus' forms")
{
    u32 j;
    static const u16 sArceusFormSpeciesIdTable[] = {
        SPECIES_ARCEUS,
        SPECIES_ARCEUS_FIGHTING,
        SPECIES_ARCEUS_FLYING,
        SPECIES_ARCEUS_POISON,
        SPECIES_ARCEUS_GROUND,
        SPECIES_ARCEUS_ROCK,
        SPECIES_ARCEUS_BUG,
        SPECIES_ARCEUS_GHOST,
        SPECIES_ARCEUS_STEEL,
        SPECIES_ARCEUS_FIRE,
        SPECIES_ARCEUS_WATER,
        SPECIES_ARCEUS_GRASS,
        SPECIES_ARCEUS_ELECTRIC,
        SPECIES_ARCEUS_PSYCHIC,
        SPECIES_ARCEUS_ICE,
        SPECIES_ARCEUS_DRAGON,
        SPECIES_ARCEUS_DARK,
        SPECIES_ARCEUS_FAIRY,
    };
    u16 species = SPECIES_NONE;

    for (j = 0; j < ARRAY_COUNT(sArceusFormSpeciesIdTable); j++)
    {
        PARAMETRIZE { species = sArceusFormSpeciesIdTable[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Lopmonx used Reflect Type!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type does not affect any of Silvally's forms")
{
    u32 j;
    static const u16 sSilvallyFormSpeciesIdTable[] = {
        SPECIES_SILVALLY,
        SPECIES_SILVALLY_FIGHTING,
        SPECIES_SILVALLY_FLYING,
        SPECIES_SILVALLY_POISON,
        SPECIES_SILVALLY_GROUND,
        SPECIES_SILVALLY_ROCK,
        SPECIES_SILVALLY_BUG,
        SPECIES_SILVALLY_GHOST,
        SPECIES_SILVALLY_STEEL,
        SPECIES_SILVALLY_FIRE,
        SPECIES_SILVALLY_WATER,
        SPECIES_SILVALLY_GRASS,
        SPECIES_SILVALLY_ELECTRIC,
        SPECIES_SILVALLY_PSYCHIC,
        SPECIES_SILVALLY_ICE,
        SPECIES_SILVALLY_DRAGON,
        SPECIES_SILVALLY_DARK,
        SPECIES_SILVALLY_FAIRY,
    };
    u16 species = SPECIES_NONE;

    for (j = 0; j < ARRAY_COUNT(sSilvallyFormSpeciesIdTable); j++)
    {
        PARAMETRIZE { species = sSilvallyFormSpeciesIdTable[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Lopmonx used Reflect Type!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type fails if the target has no types")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[1] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[0] == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[1] == TYPE_FIGHTING);
        PLAYER(SPECIES_GIGIMON);
        OPPONENT(SPECIES_HIYARIMON);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); MOVE(opponent, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Gigimon used Burn Up!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        MESSAGE("Gigimon burned itself out!");
        MESSAGE("The opposing Hiyarimon used Reflect Type!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type copies a target's dual types")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[1] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[0] == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[1] == TYPE_FIGHTING);
        PLAYER(SPECIES_GIGIMON);
        OPPONENT(SPECIES_HIYARIMON);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Gigimon used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Gigimon became the same type as the opposing Hiyarimon!");
    } THEN {
        EXPECT_EQ(player->types[0], TYPE_WATER);
        EXPECT_EQ(player->types[1], TYPE_FIGHTING);
        EXPECT_EQ(player->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Reflect Type copies a target's pure type")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[1] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_JUNKMON].types[0] == TYPE_ROCK);
        ASSUME(gSpeciesInfo[SPECIES_JUNKMON].types[1] == TYPE_ROCK);
        PLAYER(SPECIES_GIGIMON);
        OPPONENT(SPECIES_JUNKMON);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Gigimon used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Gigimon became the same type as the opposing Junkmon!");
    } THEN {
        EXPECT_EQ(player->types[0], TYPE_ROCK);
        EXPECT_EQ(player->types[1], TYPE_ROCK);
        EXPECT_EQ(player->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Reflect Type defaults to Normal type for the user's 1st and 2nd types if the target only has a 3rd type")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[1] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_GIGIMON].types[1] == TYPE_FIRE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GIGIMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_FORESTS_CURSE); }
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        // Turn 1
        MESSAGE("The opposing Gigimon used Burn Up!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, opponent);
        HP_BAR(player);
        MESSAGE("The opposing Gigimon burned itself out!");
        // Turn 2
        MESSAGE("Lopmonx used Forest's Curse!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESTS_CURSE, player);
        MESSAGE("Grass type was added to the opposing Gigimon!");
        // Turn 3
        MESSAGE("Lopmonx used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Lopmonx became the same type as the opposing Gigimon!");
    } THEN {
        EXPECT_EQ(player->types[0], TYPE_NORMAL);
        EXPECT_EQ(player->types[1], TYPE_NORMAL);
        EXPECT_EQ(player->types[2], TYPE_GRASS);
    }
}

SINGLE_BATTLE_TEST("Reflect Type fails if the user is Terastallized")
{
    GIVEN {
        PLAYER(SPECIES_GIGIMON) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_HIYARIMON);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE, gimmick: GIMMICK_TERA); }
    } SCENE {
        MESSAGE("Gigimon used Reflect Type!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->types[0], TYPE_FIRE);
        EXPECT_EQ(player->types[1], TYPE_FIRE);
        EXPECT_EQ(player->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Reflect Type succeeds against a Terastallized target and copies its Tera type")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[0] != TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_HIYARIMON].types[1] != TYPE_NORMAL);
        PLAYER(SPECIES_GIGIMON) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_HIYARIMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, gimmick: GIMMICK_TERA); MOVE(opponent, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("The opposing Hiyarimon used Reflect Type!");
    } THEN {
        EXPECT_EQ(opponent->types[0], TYPE_NORMAL);
        EXPECT_EQ(opponent->types[1], TYPE_NORMAL);
        EXPECT_EQ(opponent->types[2], TYPE_NORMAL);
    }
}
