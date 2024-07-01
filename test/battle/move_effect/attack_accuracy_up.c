#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hone Claws increases Attack and Accuracy by one stage each")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HONE_CLAWS].effect == EFFECT_ATTACK_ACCURACY_UP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_HONE_CLAWS); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Attack rose!");
        MESSAGE("Lopmonx's accuracy rose!");
    }
}
