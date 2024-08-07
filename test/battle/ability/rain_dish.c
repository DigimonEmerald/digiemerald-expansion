#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Rain Dish recovers 1/16th of Max HP in Rain")
{
    GIVEN {
        PLAYER(SPECIES_AGUNIMON) { Ability(ABILITY_RAIN_DISH); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_RAIN_DISH);
        MESSAGE("Agunimon's Rain Dish restored its HP a little!");
        HP_BAR(player, damage: -(100 / 16));
    }
}
