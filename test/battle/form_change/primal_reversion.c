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
<<<<<<< HEAD
            MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
            MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
<<<<<<< HEAD
                MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
                MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
            MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
=======
            MESSAGE("The opposing Gatomon_x's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponent);
<<<<<<< HEAD
                MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
=======
                MESSAGE("The opposing Gatomon_x's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerRight);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("Foe Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("The opposing Gatomon_x's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerRight);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("The opposing Gekomon's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("Foe Gekomon's Primal Reversion! It reverted to its primal form!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentRight);
        MESSAGE("Foe Gatomon_x's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, playerLeft);
        MESSAGE("Gatomon_x's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentLeft);
        MESSAGE("The opposing Gekomon's Primal Reversion! It reverted to its primal state!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponentRight);
        MESSAGE("The opposing Gatomon_x's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        PLAYER(SPECIES_LOPMONX) {HP(1); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(!IS_MOVE_STATUS(MOVE_TACKLE));
        PLAYER(SPECIES_LOPMONX) {HP(1); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
<<<<<<< HEAD
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a switch-in caused by Eject Button")
{
    GIVEN {
        ASSUME(!IS_MOVE_STATUS(MOVE_TACKLE));
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_LOPMONX) {Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx is switched out with the Eject Button!");
        MESSAGE("Go! Gekomon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("Lopmonx is switched out with the Eject Button!");
        SEND_IN_MESSAGE("Gekomon");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}

SINGLE_BATTLE_TEST("Primal reversion happens after a switch-in caused by Red Card")
{
    GIVEN {
        ASSUME(!IS_MOVE_STATUS(MOVE_TACKLE));
        ASSUME(gItemsInfo[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_LOPMONX) {Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx held up its Red Card against Lopmonx!");
        MESSAGE("Gekomon was dragged out!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
        MESSAGE("The opposing Lopmonx held up its Red Card against Lopmonx!");
        MESSAGE("Gekomon was dragged out!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        MESSAGE("Go! Gekomon!");
        HP_BAR(player);
        MESSAGE("Gekomon is hurt by spikes!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
=======
        SEND_IN_MESSAGE("Gekomon");
        HP_BAR(player);
        MESSAGE("Gekomon was hurt by the spikes!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal form!");
        MESSAGE("2 sent out Exveemon!");
=======
        MESSAGE("Gekomon's Primal Reversion! It reverted to its primal state!");
        MESSAGE("2 sent out Exveemon!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEKOMON_PRIMAL);
    }
}


DOUBLE_BATTLE_TEST("Primal reversion triggers for multiple battlers if multiple fainted the previous turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_DATIRIMON) { HP(1); }
        PLAYER(SPECIES_RESHIRAM);
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); }
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE);
               SEND_OUT(opponentRight, 3);
               SEND_OUT(opponentLeft, 2);
               SEND_OUT(playerRight, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_PRIMORDIAL_SEA);
        ABILITY_POPUP(opponentRight, ABILITY_DESOLATE_LAND);
    }
}

DOUBLE_BATTLE_TEST("Primal reversion triggers for all battlers if multiple fainted the previous turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        ASSUME(gMovesInfo[MOVE_EXPLOSION].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_DATIRIMON) { HP(1); }
        PLAYER(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); }
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); }
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION);
               SEND_OUT(opponentRight, 3);
               SEND_OUT(opponentLeft, 2);
               SEND_OUT(playerRight, 3);
               SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        ABILITY_POPUP(playerLeft, ABILITY_PRIMORDIAL_SEA);
        ABILITY_POPUP(playerRight, ABILITY_DESOLATE_LAND);
        ABILITY_POPUP(opponentLeft, ABILITY_PRIMORDIAL_SEA);
        ABILITY_POPUP(opponentRight, ABILITY_DESOLATE_LAND);
    }
}

DOUBLE_BATTLE_TEST("Primal reversion and other switch-in effects trigger for all battlers if multiple fainted the previous turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        ASSUME(gMovesInfo[MOVE_EXPLOSION].target == MOVE_TARGET_FOES_AND_ALLY);
        ASSUME(gMovesInfo[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
        ASSUME(gMovesInfo[MOVE_SPIKES].effect == EFFECT_SPIKES);
        ASSUME(gMovesInfo[MOVE_TOXIC_SPIKES].effect == EFFECT_TOXIC_SPIKES);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_DATIRIMON) { HP(1); }
        PLAYER(SPECIES_SCRAFTY) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_RESHIRAM);
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        OPPONENT(SPECIES_GATOMON_X) { Item(ITEM_BLUE_ORB); }
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB);
               MOVE(opponentLeft, MOVE_SPIKES);
               MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_EXPLOSION);
               SEND_OUT(opponentRight, 3);
               SEND_OUT(opponentLeft, 2);
               SEND_OUT(playerRight, 3);
               SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC_SPIKES, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ABILITY_POPUP(playerRight, ABILITY_TURBOBLAZE);
        ABILITY_POPUP(opponentLeft, ABILITY_PRIMORDIAL_SEA);
        ABILITY_POPUP(opponentRight, ABILITY_DESOLATE_LAND);
    } THEN {
        EXPECT_NE(playerLeft->hp, playerLeft->maxHP);
        EXPECT_NE(playerRight->hp, playerRight->maxHP);
        EXPECT_EQ(opponentLeft->status1, STATUS1_POISON);
        EXPECT_EQ(opponentRight->status1, STATUS1_POISON);
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(opponentRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
    }
}
