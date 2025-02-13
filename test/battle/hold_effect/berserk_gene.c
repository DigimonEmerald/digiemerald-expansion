#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_BERSERK_GENE].holdEffect == HOLD_EFFECT_BERSERK_GENE);
}

SINGLE_BATTLE_TEST("Berserk Gene sharply raises attack at the start of a single battle", s16 damage)
{
    u16 item;
    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, WITH_RNG(RNG_CONFUSION, FALSE)); }
    } SCENE {
        if (item == ITEM_BERSERK_GENE)
        {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Using Berserk Gene, the Attack of Lopmonx sharply rose!");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, player);
            MESSAGE("Lopmonx became confused!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Berserk Gene sharply raises attack at the start of a double battle", s16 damage)
{
    u16 item;
    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_TACKLE, target:opponentLeft, WITH_RNG(RNG_CONFUSION, FALSE)); }
    } SCENE {
        if (item == ITEM_BERSERK_GENE)
        {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
            MESSAGE("Using Berserk Gene, the Attack of Lopmonx sharply rose!");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, playerRight);
            MESSAGE("Lopmonx became confused!");
        }
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Berserk Gene activates on switch in", s16 damage)
{
    u16 item;
    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { MOVE(player, MOVE_TACKLE, WITH_RNG(RNG_CONFUSION, FALSE)); }
    } SCENE {
        if (item == ITEM_BERSERK_GENE)
        {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Using Berserk Gene, the Attack of Lopmonx sharply rose!");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, player);
            MESSAGE("Lopmonx became confused!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Berserk Gene does not confuse a Pokemon with Own Tempo but still raises attack sharply in a single battle", s16 damage)
{
    u16 item;
    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_PICKMON_SILVER) { Ability(ABILITY_OWN_TEMPO); Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_TACKLE);
        }
    } SCENE {
        if (item == ITEM_BERSERK_GENE)
        {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Using Berserk Gene, the Attack of Pickmon_silver sharply rose!");
            ABILITY_POPUP(player, ABILITY_OWN_TEMPO);
            MESSAGE("Pickmon_silver's Own Tempo prevents confusion!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
        NOT MESSAGE("Pickmon_silver became confused!");
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Berserk Gene does not confuse a Pokemon with Own Tempo but still raises attack sharply in a double battle", s16 damage)
{
    u16 item;
    bool8 positionLeft = FALSE;

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; positionLeft = TRUE; }
    PARAMETRIZE { item = ITEM_BERSERK_GENE; positionLeft = FALSE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        if (positionLeft) {
            PLAYER(SPECIES_PICKMON_SILVER) { Ability(ABILITY_OWN_TEMPO); Item(item); }
            PLAYER(SPECIES_LOPMONX);
        } else {
            PLAYER(SPECIES_LOPMONX);
            PLAYER(SPECIES_PICKMON_SILVER) { Ability(ABILITY_OWN_TEMPO); Item(item); }
        }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE((positionLeft != 0) ? playerLeft : playerRight, MOVE_TACKLE, target: opponentLeft);
        }
    } SCENE {
        if (item == ITEM_BERSERK_GENE)
        {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, (positionLeft != 0) ? playerLeft : playerRight);
            MESSAGE("Using Berserk Gene, the Attack of Pickmon_silver sharply rose!");
            ABILITY_POPUP((positionLeft != 0) ? playerLeft : playerRight, ABILITY_OWN_TEMPO);
            MESSAGE("Pickmon_silver's Own Tempo prevents confusion!");
        }
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
        NOT MESSAGE("Pickmon_silver became confused!");
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[2].damage);
        EXPECT_EQ(((positionLeft != 0) ? playerLeft : playerRight)->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Berserk Gene does not confuse on Misty Terrain but still raises attack sharply")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_TAPU_FINI) { Ability(ABILITY_MISTY_SURGE); Item(ITEM_BERSERK_GENE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Using Berserk Gene, the Attack of Tapu Fini sharply rose!");
        NOT MESSAGE("Tapu Fini became confused!");
    }
}

SINGLE_BATTLE_TEST("Berserk Gene does not confuse when Safeguard is active")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_BERSERK_GENE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SAFEGUARD); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
<<<<<<< HEAD
        MESSAGE("Using Berserk Gene, the Attack of Lopmonx sharply rose!");
        MESSAGE("Lopmonx's party is protected by Safeguard!");
        NOT MESSAGE("Lopmonx became confused!");
=======
        MESSAGE("Using Berserk Gene, the Attack of Wobbuffet sharply rose!");
        MESSAGE("Wobbuffet is protected by Safeguard!");
        NOT MESSAGE("Wobbuffet became confused!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Berserk Gene causes confusion for more than 5 turns") // how else would be check for infinite?
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_BERSERK_GENE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        NOT MESSAGE("Lopmonx snapped out of confusion!");
    }
}

SINGLE_BATTLE_TEST("Berserk Gene causes infinite confusion") // check if bit is set
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_BERSERK_GENE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {}
    } SCENE {
    } THEN {
        EXPECT(gStatuses4[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] & STATUS4_INFINITE_CONFUSION);
    }
}

SINGLE_BATTLE_TEST("Berserk Gene causes confusion timer to not tick down", u32 status2)
{
    u32 turns;
    PARAMETRIZE { turns = 1; }
    PARAMETRIZE { turns = 2; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_BERSERK_GENE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        u32 count;
        for (count = 0; count < turns; count++) {
            TURN {}
        }
    } THEN {
        results[i].status2 = player->status2;
    } FINALLY {
        EXPECT_EQ(results[0].status2, results[1].status2);
    }
}
