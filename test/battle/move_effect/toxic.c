#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_TOXIC) == EFFECT_NON_VOLATILE_STATUS);
    ASSUME(GetMoveNonVolatileStatus(MOVE_TOXIC) == MOVE_EFFECT_TOXIC);
}

SINGLE_BATTLE_TEST("Toxic inflicts bad poison")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, badPoison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Toxic can't bad poison a poison or steel type")
{
    u32 species;

    PARAMETRIZE { species = SPECIES_FUGAMON; }
    PARAMETRIZE { species = SPECIES_ARGOMON; }

    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            STATUS_ICON(opponent, badPoison: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Toxic cannot miss if used by a Poison-type")
{
    u32 species;
    bool32 hit;
    PARAMETRIZE { species = SPECIES_LOPMONX; hit = FALSE; }
    PARAMETRIZE { species = SPECIES_PUSUMON; hit = TRUE; }
    GIVEN {
        ASSUME(B_TOXIC_NEVER_MISS >= GEN_6);
        ASSUME(gSpeciesInfo[SPECIES_PUSUMON].types[0] == TYPE_POISON);
        PLAYER(species);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC, hit: FALSE); }
    } SCENE {
        if (hit) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            STATUS_ICON(opponent, badPoison: TRUE);
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
                STATUS_ICON(opponent, badPoison: TRUE);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI avoids toxic when it can not poison target")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_DRACOMON; ability = ABILITY_IMMUNITY; }
    PARAMETRIZE { species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { species = SPECIES_NACLI; ability = ABILITY_PURIFYING_SALT; }
    PARAMETRIZE { species = SPECIES_ARGOMON_F; ability = ABILITY_OVERGROW; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_CELEBRATE, MOVE_TOXIC); }
    } WHEN {
        TURN { SCORE_EQ(opponent, MOVE_CELEBRATE, MOVE_TOXIC); } // Both get -10
    }
}
