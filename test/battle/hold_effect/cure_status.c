#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
}

SINGLE_BATTLE_TEST("Pecha and Lum Berries cure poison")
{
    u16 item;

    PARAMETRIZE { item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_PECHA_BERRY].holdEffect == HOLD_EFFECT_CURE_PSN);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_POWDER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_POWDER, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, poison: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        STATUS_ICON(opponent, poison: FALSE);
    }
}

SINGLE_BATTLE_TEST("Pecha and Lum Berries cure bad poison")
{
    u16 item;

    PARAMETRIZE { item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_PECHA_BERRY].holdEffect == HOLD_EFFECT_CURE_PSN);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, badPoison: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        STATUS_ICON(opponent, badPoison: FALSE);
    }
}

SINGLE_BATTLE_TEST("Rawst and Lum Berries cure burn")
{
    u16 item;

    PARAMETRIZE { item = ITEM_RAWST_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_RAWST_BERRY].holdEffect == HOLD_EFFECT_CURE_BRN);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
        STATUS_ICON(opponent, burn: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        STATUS_ICON(opponent, burn: FALSE);
    }
}

SINGLE_BATTLE_TEST("Aspear and Lum Berries cure freeze or frostbite")
{
    u16 item;

    PARAMETRIZE { item = ITEM_ASPEAR_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_ASPEAR_BERRY].holdEffect == HOLD_EFFECT_CURE_FRZ);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_ICE_PUNCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ICE_PUNCH, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
        FREEZE_OR_FROSTBURN_STATUS(opponent, TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        FREEZE_OR_FROSTBURN_STATUS(opponent, FALSE);
    }
}

SINGLE_BATTLE_TEST("Chesto and Lum Berries cure sleep")
{
    u16 item;

    PARAMETRIZE { item = ITEM_CHESTO_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_HYPNOSIS); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPNOSIS, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        STATUS_ICON(opponent, sleep: FALSE);
    }
}

SINGLE_BATTLE_TEST("Cheri and Lum Berries cure paralysis")
{
    u16 item;

    PARAMETRIZE { item = ITEM_CHERI_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_CHERI_BERRY].holdEffect == HOLD_EFFECT_CURE_PAR);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_WAVE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        STATUS_ICON(opponent, paralysis: FALSE);
    }
}

SINGLE_BATTLE_TEST("Perism and Lum Berries cure confusion")
{
    u16 item;

    PARAMETRIZE { item = ITEM_PERSIM_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_PERSIM_BERRY].holdEffect == HOLD_EFFECT_CURE_CONFUSION);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
    }
}

SINGLE_BATTLE_TEST("Berry hold effect cures status if a pokemon enters a battle")
{
    u16 status;
    u16 item;

    PARAMETRIZE { status = STATUS1_BURN; item = ITEM_RAWST_BERRY; }
    PARAMETRIZE { status = STATUS1_FREEZE; item = ITEM_ASPEAR_BERRY; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; item = ITEM_CHERI_BERRY; }
    PARAMETRIZE { status = STATUS1_POISON; item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { status = STATUS1_SLEEP; item = ITEM_CHESTO_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_RAWST_BERRY].holdEffect == HOLD_EFFECT_CURE_BRN);
        ASSUME(gItemsInfo[ITEM_ASPEAR_BERRY].holdEffect == HOLD_EFFECT_CURE_FRZ);
        ASSUME(gItemsInfo[ITEM_CHERI_BERRY].holdEffect == HOLD_EFFECT_CURE_PAR);
        ASSUME(gItemsInfo[ITEM_PECHA_BERRY].holdEffect == HOLD_EFFECT_CURE_PSN);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        PLAYER(SPECIES_LOPMONX) { Status1(status); Item(ITEM_LUM_BERRY); }
        OPPONENT(SPECIES_LOPMONX) { Status1(status); Item(item); }
    } WHEN {
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
    }
}

SINGLE_BATTLE_TEST("Opponent Pokemon can be further poisoned with Toxic spikes after a status healing hold effect was previously used")
{
    u16 item;

    PARAMETRIZE { item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_PECHA_BERRY].holdEffect == HOLD_EFFECT_CURE_PSN);
        ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC_SPIKES); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        MESSAGE("Lopmonx used Toxic Spikes!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC_SPIKES, player);
        MESSAGE("Poison spikes were scattered on the ground all around the opposing team!");
        // 1st switch-in
        MESSAGE("2 sent out Exveemon!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, poison: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        if (item == ITEM_PECHA_BERRY) {
<<<<<<< HEAD
            MESSAGE("Foe Exveemon's Pecha Berry cured poison!");
        } else {
            MESSAGE("Foe Exveemon's Lum Berry cured its poison problem!");
=======
            MESSAGE("The opposing Exveemon's Pecha Berry cured its poison!");
        } else {
            MESSAGE("The opposing Exveemon's Lum Berry cured its poison problem!");
>>>>>>> upstream/master
        }
        STATUS_ICON(opponent, poison: FALSE);
        // 2nd switch-in
        MESSAGE("2 sent out Lopmonx!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, poison: TRUE);
    }
}

// Basically same as above, but with the sides reversed.
SINGLE_BATTLE_TEST("Player Pokemon can be further poisoned with Toxic spikes after a status healing hold effect was previously used")
{
    u16 item;

    PARAMETRIZE { item = ITEM_PECHA_BERRY; }
    PARAMETRIZE { item = ITEM_LUM_BERRY; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_PECHA_BERRY].holdEffect == HOLD_EFFECT_CURE_PSN);
        ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) {Item(item); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TOXIC_SPIKES); }
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 2); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Toxic Spikes!");
=======
        MESSAGE("The opposing Lopmonx used Toxic Spikes!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC_SPIKES, opponent);
        MESSAGE("Poison spikes were scattered on the ground all around your team!");
        // 1st switch-in
<<<<<<< HEAD
        MESSAGE("Go! Lopmonx!");
=======
        SEND_IN_MESSAGE("Lopmonx");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
        STATUS_ICON(player, poison: TRUE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        if (item == ITEM_PECHA_BERRY) {
<<<<<<< HEAD
            MESSAGE("Lopmonx's Pecha Berry cured poison!");
=======
            MESSAGE("Lopmonx's Pecha Berry cured its poison!");
>>>>>>> upstream/master
        } else {
            MESSAGE("Lopmonx's Lum Berry cured its poison problem!");
        }
        STATUS_ICON(player, poison: FALSE);
        // 2nd switch-in
<<<<<<< HEAD
        MESSAGE("Go! Exveemon!");
=======
        SEND_IN_MESSAGE("Exveemon");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
        STATUS_ICON(player, poison: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Lum Berry correctly cures all battlers if multiple fainted the previous turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_DATIRIMON) { HP(1); }
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_LUM_BERRY); Status1(STATUS1_BURN); }
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_LUM_BERRY); Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_LUM_BERRY); Status1(STATUS1_PARALYSIS); }
        OPPONENT(SPECIES_DATIRIMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION);
               SEND_OUT(opponentRight, 3);
               SEND_OUT(opponentLeft, 2);
               SEND_OUT(playerRight, 3);
               SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
    } THEN {
        EXPECT_EQ(playerLeft->status1, STATUS1_NONE);
        EXPECT_EQ(playerRight->status1, STATUS1_NONE);
        EXPECT_EQ(opponentLeft->status1, STATUS1_NONE);

    }
}
