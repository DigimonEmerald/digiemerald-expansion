#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sleep prevents the battler from using a move")
{
    u32 turns, j;
    PARAMETRIZE { turns = 1; }
    PARAMETRIZE { turns = 2; }
    PARAMETRIZE { turns = 3; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP_TURN(turns)); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        for (j = 0; j < turns; j++)
            TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        for (j = 0; j < turns - 1; j++)
            MESSAGE("Lopmonx is fast asleep.");
        MESSAGE("Lopmonx woke up!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Lopmonx used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Sleep: Spore doesn't affect grass types (Gen 6+)")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_SPORE));
        ASSUME(B_POWDER_GRASS >= GEN_6);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CHIKORITA);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
    }
}

AI_SINGLE_BATTLE_TEST("AI avoids hypnosis when it can not put target to sleep")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_GHOSTMON; ability = ABILITY_INSOMNIA; }
    PARAMETRIZE { species = SPECIES_DEMIVEEMON; ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { species = SPECIES_NACLI; ability = ABILITY_PURIFYING_SALT; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_CELEBRATE, MOVE_HYPNOSIS); }
    } WHEN {
        TURN { SCORE_EQ(opponent, MOVE_CELEBRATE, MOVE_HYPNOSIS); } // Both get -10
    }
}
