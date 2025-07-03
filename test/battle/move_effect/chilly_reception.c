#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_CHILLY_RECEPTION].effect == EFFECT_CHILLY_RECEPTION);
}

SINGLE_BATTLE_TEST("Chilly Reception sets up snow and switches the user out")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LIOLLMON_GALARIAN);
        PLAYER(SPECIES_PAGUMON_GALARIAN);
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_PAGUMON_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Liollmon is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
<<<<<<< HEAD
        MESSAGE("Liollmon went back to  1");
        MESSAGE("Go! Pagumon!");
=======
        MESSAGE("Slowking went back to 1!");
        SEND_IN_MESSAGE("Pagumon");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("Chilly Reception switches the user out, even if the weather does not change")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LIOLLMON_GALARIAN);
        PLAYER(SPECIES_PAGUMON_GALARIAN);
        OPPONENT(SPECIES_GATOMON_X)  { Item(ITEM_BLUE_ORB); }
=======
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_PAGUMON_GALAR);
        OPPONENT(SPECIES_KYOGRE)  { Item(ITEM_BLUE_ORB); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Liollmon is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("There is no relief from this heavy rain!");
<<<<<<< HEAD
        MESSAGE("Liollmon went back to  1");
        MESSAGE("Go! Pagumon!");
=======
        MESSAGE("Slowking went back to 1!");
        SEND_IN_MESSAGE("Pagumon");
>>>>>>> upstream/master
        MESSAGE("Rain continues to fall.");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if no replacements")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LIOLLMON_GALARIAN);
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(SPECIES_SLOWKING_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Liollmon is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
<<<<<<< HEAD
        NOT MESSAGE("Liollmon went back to  1");
=======
        NOT MESSAGE("Slowking went back to 1!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if replacements fainted")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LIOLLMON_GALARIAN);
        PLAYER(SPECIES_PAGUMON_GALARIAN) { HP(0); }
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(SPECIES_SLOWKING_GALAR);
        PLAYER(SPECIES_PAGUMON_GALAR) { HP(0); }
        OPPONENT(SPECIES_WOBBUFFET);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Liollmon is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
<<<<<<< HEAD
        NOT MESSAGE("Liollmon went back to  1");
=======
        NOT MESSAGE("Slowking went back to 1!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Chilly Reception changes the weather, even if the user cannot switch out")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LIOLLMON_GALARIAN);
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(SPECIES_SLOWKING_GALAR);
        OPPONENT(SPECIES_WOBBUFFET);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Liollmon is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
<<<<<<< HEAD
        NOT MESSAGE("Liollmon went back to  1");
=======
        NOT MESSAGE("Slowking went back to 1!");
>>>>>>> upstream/master
    }
}

TO_DO_BATTLE_TEST("Chilly Reception doesn't announce its move if it's called by a different move");
