#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Thunder bypasses accuracy checks in Rain")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(MoveAlwaysHitsInRain(MOVE_THUNDER) == TRUE);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_THUNDER); }
    } SCENE {
        NONE_OF { MESSAGE("Lopmon_x's attack missed!"); }
    }
}
