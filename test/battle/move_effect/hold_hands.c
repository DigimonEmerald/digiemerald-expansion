#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HOLD_HANDS) == EFFECT_HOLD_HANDS);
}

DOUBLE_BATTLE_TEST("Hold Hands is blocked by Crafty Shield")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_CRAFTY_SHIELD, target: opponentLeft);
            MOVE(playerRight, MOVE_HOLD_HANDS, target: playerLeft);
        }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HOLD_HANDS, playerLeft);
        MESSAGE("Exveemon protected itself!");
    }
}
