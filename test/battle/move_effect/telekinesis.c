#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TELEKINESIS].effect == EFFECT_TELEKINESIS);
}

SINGLE_BATTLE_TEST("Telekinesis makes the target unable to avoid any attacks made against it")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MINIMIZE].effect == EFFECT_MINIMIZE); // Raises evs by 2
        ASSUME(gMovesInfo[MOVE_SCREECH].accuracy < 100);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_TELEKINESIS); MOVE(opponent, MOVE_MINIMIZE); }
        TURN { MOVE(player, MOVE_SCREECH, hit:FALSE); }
    } SCENE {
        MESSAGE("Lopmonx used Telekinesis!");
        MESSAGE("Foe Exveemon was hurled into the air!");
        MESSAGE("Foe Exveemon used Minimize!");
        MESSAGE("Lopmonx used Screech!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, player);
        NOT MESSAGE("Lopmonx's attack missed!");
    }
}

SINGLE_BATTLE_TEST("Telekinesis ends after 3 turns")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_TELEKINESIS); }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Lopmonx used Telekinesis!");
        MESSAGE("Foe Exveemon was hurled into the air!");
        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Exveemon was freed from the telekinesis!");
    }
}

SINGLE_BATTLE_TEST("Telekinesis makes the target immune to Ground-type attacks")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BULLDOZE].type == TYPE_GROUND);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_BULLDOZE); }
        TURN { MOVE(player, MOVE_TELEKINESIS); }
        TURN { MOVE(player, MOVE_BULLDOZE); }
    } SCENE {
        MESSAGE("Lopmonx used Bulldoze!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLDOZE, player);
        HP_BAR(opponent);
        MESSAGE("Lopmonx used Telekinesis!");
        MESSAGE("Foe Exveemon was hurled into the air!");
        MESSAGE("Lopmonx used Bulldoze!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLDOZE, player);
            HP_BAR(opponent);
        }
        MESSAGE("It doesn't affect Foe Exveemon…");
    }
}

TO_DO_BATTLE_TEST("Baton Pass passes Telekinesis' effect");
//Bulbapedia doesn't confirm what happens with Diglett, Dugtrio, Sandygast and Palossand, so it needs to be tested in-game.
TO_DO_BATTLE_TEST("Baton Pass removes Telekinesis' effect disappears if the switching-in mon is Mega Tsumemon"); 
