#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Being airborne causes the target to take double damage from certain moves", s16 damage)
{
    bool32 useDive;
    PARAMETRIZE { useDive = FALSE; }
    PARAMETRIZE { useDive = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TWISTER].damagesAirborneDoubleDamage);
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
    } WHEN {
        if (useDive)
            TURN { MOVE(opponent, MOVE_FLY); MOVE(player, MOVE_TWISTER); }
        else
            TURN { MOVE(player, MOVE_TWISTER); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.0), results[1].damage);
    }
}
