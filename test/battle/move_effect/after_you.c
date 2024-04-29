#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_AFTER_YOU].effect == EFFECT_AFTER_YOU);
}

DOUBLE_BATTLE_TEST("After You makes the target move after user")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(2); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_AFTER_YOU, target: playerRight);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, playerLeft);
        MESSAGE("Exveemon took the kind offer!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("After You does nothing if the target has already moved")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(2); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_CELEBRATE);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_AFTER_YOU, target: opponentLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        MESSAGE("Foe Exveemon used After You!");
        MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
    }
}
