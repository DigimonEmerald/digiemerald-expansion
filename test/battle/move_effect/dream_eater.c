#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_DREAM_EATER) == EFFECT_DREAM_EATER);
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
<<<<<<< HEAD
        MESSAGE("Lopmonx used Dream Eater!");
        MESSAGE("Foe Lopmonx wasn't affected!");
=======
        MESSAGE("Lopmonx used Dream Eater!");
        MESSAGE("The opposing Lopmonx wasn't affected!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Dream Eater fails if Heal Block applies")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(B_HEAL_BLOCKING >= GEN_6);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master
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

SINGLE_BATTLE_TEST("Dream Eater works on targets with Comatose")
{
    s16 damage;
    s16 healed;
    GIVEN {
        PLAYER(SPECIES_LOPMON_X) { HP(1); }
        OPPONENT(SPECIES_KOMALA) { Ability(ABILITY_COMATOSE); }
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

#if B_UPDATED_MOVE_FLAGS < GEN_5
SINGLE_BATTLE_TEST("Dream Eater fails if the target is behind a Substitute (Gen 1-4)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        ASSUME(GetMoveEffect(MOVE_SUBSTITUTE) == EFFECT_SUBSTITUTE);
        ASSUME(!MoveIgnoresSubstitute(MOVE_DREAM_EATER));
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, MOVE_YAWN); MOVE(player, MOVE_SUBSTITUTE); }
        TURN { }
        TURN { MOVE(opponent, MOVE_DREAM_EATER); }
    } SCENE {
        MESSAGE("The opposing Lopmon_x used Dream Eater!");
        MESSAGE("Lopmon_x wasn't affected!");
    }
}
#else
SINGLE_BATTLE_TEST("Dream Eater works if the target is behind a Substitute (Gen 5+)")
{
    s16 damage;
    s16 healed;
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        ASSUME(GetMoveEffect(MOVE_SUBSTITUTE) == EFFECT_SUBSTITUTE);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X) { HP(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_YAWN); MOVE(player, MOVE_SUBSTITUTE); }
        TURN { }
        TURN { MOVE(opponent, MOVE_DREAM_EATER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DREAM_EATER, opponent);
        HP_BAR(player, captureDamage: &damage);
        HP_BAR(opponent, captureDamage: &healed);
    } THEN {
        EXPECT_MUL_EQ(damage, Q_4_12(-1.0/2.0), healed);
    }
}
#endif
