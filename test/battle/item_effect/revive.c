#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Revive restores a fainted battler's HP to half")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_REVIVE].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(200); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { USE_ITEM(player, ITEM_REVIVE, partyIndex: 0); }
        TURN { SWITCH(player, 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon had its HP restored!");
=======
        MESSAGE("Exveemon had its HP restored.");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->hp, 100);
    }
}

SINGLE_BATTLE_TEST("Max Revive restores a fainted battler's HP fully")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_REVIVE].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(200); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { USE_ITEM(player, ITEM_MAX_REVIVE, partyIndex: 0); }
        TURN { SWITCH(player, 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon had its HP restored!");
=======
        MESSAGE("Exveemon had its HP restored.");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->hp, 200);
    }
}

SINGLE_BATTLE_TEST("Revival Herb restores a fainted battler's HP fully")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_REVIVAL_HERB].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(200); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { USE_ITEM(player, ITEM_REVIVAL_HERB, partyIndex: 0); }
        TURN { SWITCH(player, 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon had its HP restored!");
=======
        MESSAGE("Exveemon had its HP restored.");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->hp, 200);
    }
}

SINGLE_BATTLE_TEST("Max Honey restores a fainted battler's HP fully")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_HONEY].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(200); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
        TURN { USE_ITEM(player, ITEM_MAX_HONEY, partyIndex: 0); }
        TURN { SWITCH(player, 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon had its HP restored!");
=======
        MESSAGE("Exveemon had its HP restored.");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->hp, 200);
    }
}

// Note: this test is oddly specific with implicit moves/speeds, because I had errors/invalids without them.
DOUBLE_BATTLE_TEST("Revive works for a partner in a double battle")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_REVIVE].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(200); Moves(MOVE_IRON_DEFENSE, MOVE_CELEBRATE); Speed(5); }
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(4); }
        OPPONENT(SPECIES_HOPMON) { Speed(3); Moves(MOVE_TACKLE, MOVE_PSYCHIC, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_KAKKINMON) { Speed(2); Moves(MOVE_TACKLE, MOVE_PSYCHIC, MOVE_CELEBRATE, MOVE_EXPLOSION); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_PSYCHIC, target:playerLeft); MOVE(playerLeft, MOVE_CELEBRATE); } // Exveemon faints
        TURN { USE_ITEM(playerRight, ITEM_REVIVE, partyIndex: 0); MOVE(opponentRight, MOVE_PSYCHIC, target:playerRight); } // Exveemon gets revived, Wobb faints
        // Exveemon is functionally back
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target:playerLeft); }
        TURN { MOVE(opponentRight, MOVE_TACKLE, target:playerLeft); }
        TURN { MOVE(opponentRight, MOVE_EXPLOSION); } // Everyone dies, the test can finish.
    } SCENE {
        MESSAGE("Exveemon fainted!");
        MESSAGE("You used Revive!");
        // Switch-in animation
        MESSAGE("Lopmonx fainted!");
        HP_BAR(playerLeft);
        HP_BAR(playerLeft);
    }
}

TO_DO_BATTLE_TEST("Revive won't restore a battler's HP if it hasn't fainted")
