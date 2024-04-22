#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("X Attack sharply raises battler's Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_ATTACK].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_ATTACK); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx used Tackle!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Defense sharply raises battler's Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_DEFENSE].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_DEFENSE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Tackle!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Sp. Atk sharply raises battler's Sp. Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SP_ATK].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(gMovesInfo[MOVE_DISARMING_VOICE].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SP_ATK); }
        TURN { MOVE(player, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Lopmonx used DisrmngVoice!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Sp. Def sharply raises battler's Sp. Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SP_DEF].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(gMovesInfo[MOVE_DISARMING_VOICE].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SP_DEF); }
        TURN { MOVE(opponent, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Foe Lopmonx used DisrmngVoice!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Speed sharply raises battler's Speed stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SPEED].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        if (B_X_ITEMS_BUFF >= GEN_7)
        {
            PLAYER(SPECIES_LOPMONX) { Speed(3); }
            OPPONENT(SPECIES_LOPMONX) { Speed(4); }
        }
        else
        {
            PLAYER(SPECIES_LOPMONX) { Speed(4); }
            OPPONENT(SPECIES_LOPMONX) { Speed(5); }
        }
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SPEED); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (useItem)
        {
            MESSAGE("Lopmonx used Tackle!");
            MESSAGE("Foe Lopmonx used Tackle!");
        }
        else
        {
            MESSAGE("Foe Lopmonx used Tackle!");
            MESSAGE("Lopmonx used Tackle!");
        }
    }
}

SINGLE_BATTLE_TEST("X Accuracy sharply raises battler's Accuracy stat")
{

    ASSUME(gMovesInfo[MOVE_SING].accuracy == 55);
    if (B_X_ITEMS_BUFF >= GEN_7)
        PASSES_RANDOMLY(gMovesInfo[MOVE_SING].accuracy * 5 / 3, 100, RNG_ACCURACY);
    else
        PASSES_RANDOMLY(gMovesInfo[MOVE_SING].accuracy * 4 / 3, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_ACCURACY].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_X_ACCURACY); }
        TURN { MOVE(player, MOVE_SING); }
    } SCENE {
        MESSAGE("Lopmonx used Sing!");
        MESSAGE("Foe Lopmonx fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx used Tackle!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Tackle!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Sp. Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Lopmonx used DisrmngVoice!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms battler's Sp. Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(opponent, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Foe Lopmonx used DisrmngVoice!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Speed stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (useItem)
        {
            MESSAGE("Lopmonx used Tackle!");
            MESSAGE("Foe Lopmonx used Tackle!");
        }
        else
        {
            MESSAGE("Foe Lopmonx used Tackle!");
            MESSAGE("Lopmonx used Tackle!");
        }
    }
}
