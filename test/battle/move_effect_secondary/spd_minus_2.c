#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_SPIN_OUT, MOVE_EFFECT_SPD_MINUS_2) == TRUE);
}

SINGLE_BATTLE_TEST("Spin Out lowers speed by 2 stages")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SPIN_OUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIN_OUT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Speed harshly fell!");
    }
}
