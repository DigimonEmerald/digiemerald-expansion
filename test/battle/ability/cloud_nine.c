#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cloud Nine prevents weather effects")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SANDSTORM].effect == EFFECT_SANDSTORM);
        PLAYER(SPECIES_CHICCHIMON) { Ability(ABILITY_CLOUD_NINE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); }
        TURN {}
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}
