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
                MESSAGE("Lopmonx is paralyzed! It can't move!");
            }
            MESSAGE("Foe Lopmonx used Celebrate!");
        } else {
            MESSAGE("Foe Lopmonx used Celebrate!");
            ONE_OF {
                MESSAGE("Lopmonx used Celebrate!");
                MESSAGE("Lopmonx is paralyzed! It can't move!");
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
        MESSAGE("Lopmonx is paralyzed! It can't move!");
    }
}
