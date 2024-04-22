#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_CLANGING_SCALES, MOVE_EFFECT_DEF_MINUS_1) == TRUE);
}

DOUBLE_BATTLE_TEST("Clanging Scales lowers defense by one stage if it hits both targets")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX)
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CLANGING_SCALES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CLANGING_SCALES, playerLeft);
        HP_BAR(opponentLeft);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Lopmonx's Defense fell!");
        }
        HP_BAR(opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Lopmonx's Defense fell!");
    }
}
