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
<<<<<<< HEAD
        MESSAGE("Foe Exveemon used After You!");
=======
        MESSAGE("The opposing Exveemon used After You!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
    }
}

DOUBLE_BATTLE_TEST("After You calculates correct turn order if only one pokemon is left on the opposing side")
{
    GIVEN {
        PLAYER(SPECIES_BIOSUPINOMON) { Speed(120); }
        PLAYER(SPECIES_GARGOMON) { Speed(10); }
        OPPONENT(SPECIES_LEAFMON) { Speed(100); }
        OPPONENT(SPECIES_ESPIMON) { Speed(60); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_AFTER_YOU, target: playerRight);
            MOVE(playerRight, MOVE_STONE_EDGE, target: opponentLeft);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
        TURN {
            MOVE(playerLeft, MOVE_AFTER_YOU, target: playerRight);
            MOVE(playerRight, MOVE_STONE_EDGE, target: opponentRight);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, playerLeft);
        MESSAGE("Gargomon took the kind offer!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_EDGE, playerRight);
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Leafmon fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, playerLeft);
        MESSAGE("Gargomon took the kind offer!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_EDGE, playerRight);
        HP_BAR(opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("After You doesn't fail if the turn order remains the same after After You (Gen8+)")
{
    GIVEN {
        ASSUME(B_AFTER_YOU_TURN_ORDER >= GEN_8);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(3); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_CELEBRATE);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_AFTER_YOU, target: opponentLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
    }
}

DOUBLE_BATTLE_TEST("After You ignores the effects of Quash")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_QUASH].effect == EFFECT_QUASH);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(3); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_QUASH, target: opponentLeft);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_AFTER_YOU, target: opponentLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUASH, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
    }
}
