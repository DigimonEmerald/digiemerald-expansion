#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Quick Draw has a 30% chance of going first")
{
    PASSES_RANDOMLY(3, 10, RNG_QUICK_DRAW);
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_PICKMON_SILVER_GALARIAN) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
=======
        PLAYER(SPECIES_PICKMON_SILVER_GALAR) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_QUICK_DRAW);
<<<<<<< HEAD
        MESSAGE("Pickmon_silver used Tackle!");
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("Pickmon_silver used Tackle!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Quick Draw does not activate 70% of the time")
{
    PASSES_RANDOMLY(7, 10, RNG_QUICK_DRAW);
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_PICKMON_SILVER_GALARIAN) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
=======
        PLAYER(SPECIES_PICKMON_SILVER_GALAR) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        NOT ABILITY_POPUP(player, ABILITY_QUICK_DRAW);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Celebrate!");
        MESSAGE("Pickmon_silver used Tackle!");
=======
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        MESSAGE("Pickmon_silver used Tackle!");
>>>>>>> upstream/master
    }
}
