#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_COTTON_GUARD].effect == EFFECT_DEFENSE_UP_3);
}

SINGLE_BATTLE_TEST("Cotton Guard raises Defense by 3 stages", s16 damage)
{
    bool32 raiseDefense;
    PARAMETRIZE { raiseDefense = FALSE; }
    PARAMETRIZE { raiseDefense = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (raiseDefense) TURN { MOVE(player, MOVE_COTTON_GUARD); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (raiseDefense) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_COTTON_GUARD, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Lopmonx's Defense drastically rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(2.5), results[0].damage);
    }
}
