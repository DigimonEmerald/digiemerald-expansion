#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DOUBLE_TEAM].effect == EFFECT_EVASION_UP);
}

SINGLE_BATTLE_TEST("Double Team raises Evasion by 1 stage")
{
    PASSES_RANDOMLY(gMovesInfo[MOVE_SCRATCH].accuracy * 3 / 4, 100, RNG_ACCURACY);
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(gMovesInfo[MOVE_SCRATCH].accuracy == 100);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_TEAM); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_TEAM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's evasiveness rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
