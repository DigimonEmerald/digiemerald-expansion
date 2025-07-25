#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Blizzard bypasses accuracy checks in Hail and Snow")
{
    u32 move;
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_BLIZZARD) == 70);
        ASSUME(MoveAlwaysHitsInHailSnow(MOVE_BLIZZARD));
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_BLIZZARD); }
    } SCENE {
        NOT MESSAGE("Lopmon_x's attack missed!");
    }
}
