#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Anger Shell activates only if the target had more than 50% of its HP")
{
    bool32 activates = FALSE;
    u16 maxHp = 500, hp = 0;

    PARAMETRIZE { hp = 250; activates = FALSE; }
    PARAMETRIZE { hp = 249; activates = FALSE; }
    PARAMETRIZE { hp = 100; activates = FALSE; }
    PARAMETRIZE { hp = 50; activates = FALSE; }
    PARAMETRIZE { hp = 251; activates = TRUE; }
    PARAMETRIZE { hp = 254; activates = TRUE; }

    GIVEN {
        ASSUME(!IsBattleMoveStatus(MOVE_SCRATCH));
        PLAYER(SPECIES_KLAWF) { Ability(ABILITY_ANGER_SHELL); MaxHP(maxHp); HP(hp); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        if (activates) {
            ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
        } else {
            NOT ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
        }
    } THEN {
        if (activates) {
            EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
            EXPECT_EQ(player->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE - 1);
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
            EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
            EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
        }
    }
}

SINGLE_BATTLE_TEST("Anger Shell lowers Def/Sp.Def by 1 and raises Atk/Sp.Atk/Spd by 1")
{
    u16 maxHp = 500;
    GIVEN {
<<<<<<< HEAD
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        PLAYER(SPECIES_LOPMONX) { Ability(ABILITY_ANGER_SHELL); MaxHP(maxHp); HP(maxHp / 2 + 1); }
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(!IsBattleMoveStatus(MOVE_SCRATCH));
        PLAYER(SPECIES_KLAWF) { Ability(ABILITY_ANGER_SHELL); MaxHP(maxHp); HP(maxHp / 2 + 1); }
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Defense fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Sp. Def fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Attack rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Sp. Atk rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Speed rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(player->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Anger Shell activates after all hits from a multi-hit move")
{
    u32 j;
    u16 maxHp = 500;
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DOUBLE_SLAP) == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_LOPMONX) { Ability(ABILITY_ANGER_SHELL); MaxHP(maxHp); HP(maxHp / 2 + 1); }
        OPPONENT(SPECIES_TANEMON) { Ability(ABILITY_SKILL_LINK); } // Always hits 5 times.
    } WHEN {
        TURN { MOVE(opponent, MOVE_DOUBLE_SLAP); }
    } SCENE {
        for (j = 0; j < 4; j++) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SLAP, opponent);
            NOT ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SLAP, opponent);
        ABILITY_POPUP(player, ABILITY_ANGER_SHELL);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(player->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
    }
}
