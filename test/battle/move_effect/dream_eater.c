#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DREAM_EATER].effect == EFFECT_DREAM_EATER);
}

SINGLE_BATTLE_TEST("Dream Eater recovers 50% of the damage dealt")
{
    s16 damage;
    s16 healed;
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { MOVE(player, MOVE_DREAM_EATER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DREAM_EATER, player);
        HP_BAR(opponent, captureDamage: &damage);
        HP_BAR(player, captureDamage: &healed);
    } THEN {
        EXPECT_MUL_EQ(damage, Q_4_12(-1.0/2.0), healed);
    }
}

SINGLE_BATTLE_TEST("Dream Eater fails on awake targets")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DREAM_EATER); }
    } SCENE {
        MESSAGE("Lopmonx used Dream Eater!");
        MESSAGE("Foe Lopmonx wasn't affected!");
    }
}

SINGLE_BATTLE_TEST("Dream Eater fails if Heal Block applies")
{
    ASSUME(B_HEAL_BLOCKING >= GEN_6);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); MOVE(player, MOVE_DREAM_EATER); }
    } SCENE {
        MESSAGE("Lopmonx was prevented from healing!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DREAM_EATER, player);
            HP_BAR(opponent);
            HP_BAR(player);
        }
    }
}
