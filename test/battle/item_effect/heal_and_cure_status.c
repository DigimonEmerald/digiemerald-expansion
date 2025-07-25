#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_FULL_RESTORE].battleUsage == EFFECT_ITEM_HEAL_AND_CURE_STATUS);
}

SINGLE_BATTLE_TEST("Full Restore restores a battler's HP and cures any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_NONE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); MaxHP(300); Status1(status); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx had its HP restored!");
=======
        MESSAGE("Lopmonx had its HP restored.");
>>>>>>> upstream/master
        if (status != STATUS1_NONE) {
            MESSAGE("Lopmonx had its status healed!"); // The message is not printed if status wasn't healed.
        }
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore restores a party members HP and cures any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_NONE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); MaxHP(300); Status1(status); }
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(300); Status1(status); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 1); }
        TURN { SWITCH(player, 1); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon had its HP restored!");
=======
        MESSAGE("Exveemon had its HP restored.");
>>>>>>> upstream/master
        if (status != STATUS1_NONE) {
            MESSAGE("Exveemon had its status healed!"); // The message is not printed if status wasn't healed.
        }
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->species, SPECIES_EXVEEMON);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore heals a battler from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(status); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
<<<<<<< HEAD
        NOT MESSAGE("Lopmonx had its HP restored!"); // The message is not printed if mon has max HP.
        MESSAGE("Lopmonx had its status healed!");
=======
        NOT MESSAGE("Lopmonx had its HP restored."); // The message is not printed if mon has max HP.
        MESSAGE("Lopmonx had its status healed!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore heals a party member from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Status1(status); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 1); }
        TURN { SWITCH(player, 1); }
    } SCENE {
<<<<<<< HEAD
        NOT MESSAGE("Exveemon had its HP restored!"); // The message is not printed if mon has max HP.
        MESSAGE("Exveemon had its status healed!");
=======
        NOT MESSAGE("Exveemon had its HP restored."); // The message is not printed if mon has max HP.
        MESSAGE("Exveemon had its status healed!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_EXVEEMON);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore restores a battler's HP and cures confusion")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN{ MOVE(opponent, MOVE_CONFUSE_RAY); }
        TURN{ USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
        TURN{ MOVE(player, MOVE_SCRATCH); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx had its HP restored!");
        NONE_OF { MESSAGE("Lopmonx is confused!"); }
=======
        MESSAGE("Lopmonx had its HP restored.");
        NONE_OF { MESSAGE("Lopmonx is confused!"); }
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

SINGLE_BATTLE_TEST("Full Restore resets Toxic Counter")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TOXIC); }
        TURN { ; }
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Toxic!");
        MESSAGE("Lopmonx had its HP restored!");
        MESSAGE("Lopmonx had its status healed!");
=======
        MESSAGE("The opposing Lopmonx used Toxic!");
        MESSAGE("Lopmonx had its HP restored.");
        MESSAGE("Lopmonx had its status healed!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}
