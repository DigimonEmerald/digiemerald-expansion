#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Paralysis reduces Speed by 50%")
{
    u16 playerSpeed;
    bool32 playerFirst;
    PARAMETRIZE { playerSpeed = 98; playerFirst = FALSE; }
    PARAMETRIZE { playerSpeed = 102; playerFirst = TRUE; }
    GIVEN {
        ASSUME(B_PARALYSIS_SPEED >= GEN_7);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_PARALYSIS); Speed(playerSpeed); }
        OPPONENT(SPECIES_LOPMONX) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (playerFirst) {
            ONE_OF {
                MESSAGE("Lopmonx used Celebrate!");
                MESSAGE("Lopmonx is paralyzed, so it may be unable to move!");
            }
            MESSAGE("The opposing Lopmonx used Celebrate!");
        } else {
            MESSAGE("The opposing Lopmonx used Celebrate!");
            ONE_OF {
                MESSAGE("Lopmonx used Celebrate!");
                MESSAGE("Lopmonx is paralyzed, so it may be unable to move!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Paralysis has a 25% chance of skipping the turn")
{
    PASSES_RANDOMLY(25, 100, RNG_PARALYSIS);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_PARALYSIS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Lopmonx couldn't move because it's paralyzed!");
    }
}

AI_SINGLE_BATTLE_TEST("AI avoids Thunder Wave when it can not paralyse target")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_AGUMON_X; ability = ABILITY_LIMBER; }
    PARAMETRIZE { species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { species = SPECIES_NACLI; ability = ABILITY_PURIFYING_SALT; }
    PARAMETRIZE { species = SPECIES_PETITMON; ability = ABILITY_STATIC; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_CELEBRATE, MOVE_THUNDER_WAVE); }
    } WHEN {
        TURN { SCORE_EQ(opponent, MOVE_CELEBRATE, MOVE_THUNDER_WAVE); } // Both get -10
    }
}
