#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SAND_ATTACK].effect == EFFECT_ACCURACY_DOWN);
}

SINGLE_BATTLE_TEST("Sand Attack lowers Accuracy by 1 stage")
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
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx's accuracy fell!");
=======
        MESSAGE("The opposing Lopmonx's accuracy fell!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
