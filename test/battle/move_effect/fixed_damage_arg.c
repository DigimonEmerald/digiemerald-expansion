#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SONIC_BOOM].effect == EFFECT_FIXED_DAMAGE_ARG);
}

SINGLE_BATTLE_TEST("Sonic Boom deals fixed damage", s16 damage)
{
    u16 mon;
    PARAMETRIZE { mon = SPECIES_CHOROMON; }
    PARAMETRIZE { mon = SPECIES_BLKGATOMON; }
    
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SONIC_BOOM].argument == 20);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_SONIC_BOOM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SONIC_BOOM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT(results[0].damage == 20);
        EXPECT(results[1].damage == 20);
    }
}

SINGLE_BATTLE_TEST("Sonic Boom doesn't affect ghost types")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_TOKOMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SONIC_BOOM); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SONIC_BOOM, player);
        MESSAGE("It doesn't affect the opposing Tokomon_x…");
    }
}
