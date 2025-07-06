#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TEETER_DANCE].effect == EFFECT_CONFUSE);
}

SINGLE_BATTLE_TEST("Teeter Dance confuses target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TEETER_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx became confused!");
=======
        MESSAGE("The opposing Lopmonx became confused!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Teeter Dance confusion is blocked by Own Tempo")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); }
    } WHEN {
        TURN { MOVE(player, MOVE_TEETER_DANCE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx became confused!");
=======
            MESSAGE("The opposing Lopmonx became confused!");
>>>>>>> upstream/master
        }
    }
}

DOUBLE_BATTLE_TEST("Teeter Dance can confuse foes and allies")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TEETER_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentLeft);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx became confused!");
=======
        MESSAGE("The opposing Lopmonx became confused!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, playerRight);
        MESSAGE("Exveemon became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentRight);
<<<<<<< HEAD
        MESSAGE("Foe Exveemon became confused!");
=======
        MESSAGE("The opposing Exveemon became confused!");
>>>>>>> upstream/master
    }
}
