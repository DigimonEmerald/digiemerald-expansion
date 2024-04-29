#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Primal reversion happens for Gekomon only when holding Red Orb")
{
    u16 heldItem;
    PARAMETRIZE { heldItem = ITEM_NONE;}
    PARAMETRIZE { heldItem = ITEM_RED_ORB;}
    PARAMETRIZE { heldItem = ITEM_BLUE_ORB;}
    GIVEN {
        PLAYER(SPECIES_GEKOMON) { Item(heldItem); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        if (heldItem == ITEM_RED_ORB) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
            MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
                MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
            }
        }
    } THEN {
        if (heldItem == ITEM_RED_ORB) {
            EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
        }
        else {
            EXPECT_EQ(player->species, SPECIES_GEKOMON);
        }
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens for Gatomon_x only when holding Blue Orb")
{
    u16 heldItem;
    PARAMETRIZE { heldItem = ITEM_NONE;}
    PARAMETRIZE { heldItem = ITEM_RED_ORB;}
    PARAMETRIZE { heldItem = ITEM_BLUE_ORB;}
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GATOMON_X) { Item(heldItem); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (heldItem == ITEM_BLUE_ORB) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponent);
            MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponent);
                MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
            }
        }
    } THEN {
        if (heldItem == ITEM_BLUE_ORB) {
            EXPECT_EQ(opponent->species, SPECIES_GATOMON_X_PRIMAL);
        }
        else {
            EXPECT_EQ(opponent->species, SPECIES_GATOMON_X);
        }
    }
}

DOUBLE_BATTLE_TEST("Primal reversion's order is determined by Speed - opponent faster")
{
    GIVEN {
        PLAYER(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); Speed(5); };
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); Speed(15); };
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); Speed(10); }
        OPPONENT(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); Speed(20); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentRight);
        MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerRight);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("Foe Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(playerLeft->species, SPECIES_GATOMON_X_PRIMAL);
        EXPECT_EQ(opponentLeft->species, SPECIES_GEKOMON_PRIMAL);
        EXPECT_EQ(opponentRight->species, SPECIES_GATOMON_X_PRIMAL);
        EXPECT_EQ(playerRight->species, SPECIES_GEKOMON_PRIMAL);
    }
}

DOUBLE_BATTLE_TEST("Primal reversion's order is determined by Speed - player faster")
{
    GIVEN {
        PLAYER(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); Speed(20); };
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); Speed(30); };
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); Speed(10); }
        OPPONENT(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); Speed(2); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerRight);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("Foe Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentRight);
        MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(playerLeft->species, SPECIES_GATOMON_X_PRIMAL);
        EXPECT_EQ(opponentLeft->species, SPECIES_GEKOMON_PRIMAL);
        EXPECT_EQ(opponentRight->species, SPECIES_GATOMON_X_PRIMAL);
        EXPECT_EQ(playerRight->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a mon is sent out after a mon is fainted")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        PLAYER(SPECIES_LOPMONX) {HP(1); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a mon is switched in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a switch-in caused by Eject Button")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_LOPMONX) {Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx is switched out with the Eject Button!");
        MESSAGE("Go! Gekomon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a switch-in caused by Red Card")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        ASSUME(gItemsInfo[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX) {Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Foe Lopmonx held up its Red Card against Lopmonx!");
        MESSAGE("Gekomon was dragged out!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after the entry hazards damage")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPIKES].effect == EFFECT_SPIKES);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPIKES); }
        TURN { MOVE(opponent, MOVE_SPIKES); SWITCH(player, 1);}
    } SCENE {
        MESSAGE("Go! Gekomon!");
        HP_BAR(player);
        MESSAGE("Gekomon is hurt by spikes!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens immediately if it was brought in by U-turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        MESSAGE("2 sent out Exveemon!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}
