#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hydration cures non-volatile Status conditions if it is raining")
{
    GIVEN {
        PLAYER(SPECIES_CUTEMON) { Ability(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Cutemon's Hydration cured its burn problem!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Hydration doesn't cure status conditions if Cloud Nine/Air Lock is on the field")
{
    GIVEN {
        PLAYER(SPECIES_CUTEMON) { Ability(ABILITY_HYDRATION); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_DEMMERAMON) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        NOT ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Cutemon was hurt by its burn!");
    }
}
