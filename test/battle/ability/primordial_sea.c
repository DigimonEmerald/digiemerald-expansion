#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_EMBER].power != 0);
    ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
}

SINGLE_BATTLE_TEST("Primordial Sea blocks damaging Fire-type moves")
{
    GIVEN {
        PLAYER(SPECIES_GATOMON_X) {Item(ITEM_BLUE_ORB);}
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); }
        TURN { MOVE(opponent, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Ember!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
        NOT HP_BAR(player);
        MESSAGE("Foe Lopmonx used Ember!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
        NOT HP_BAR(player);
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

DOUBLE_BATTLE_TEST("Primordial Sea blocks damaging Fire-type moves and prints the message only once with moves hitting multiple targets")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ERUPTION].power != 0);
        ASSUME(gMovesInfo[MOVE_ERUPTION].type == TYPE_FIRE);
        ASSUME(gMovesInfo[MOVE_ERUPTION].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_GATOMON_X) {Item(ITEM_BLUE_ORB); {Speed(5);}}
        PLAYER(SPECIES_LOPMONX) {Speed(5);}
        OPPONENT(SPECIES_LOPMONX) {Speed(10);}
        OPPONENT(SPECIES_LOPMONX) {Speed(8);}
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_ERUPTION); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Eruption!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ERUPTION, opponentLeft);
        MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
        NOT MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
    } THEN {
        EXPECT_EQ(playerLeft->hp, playerLeft->maxHP);
        EXPECT_EQ(playerRight->hp, playerRight->maxHP);
    }
}

SINGLE_BATTLE_TEST("Primordial Sea does not block a move if pokemon is asleep and uses a Fire-type move") // Sleep/confusion/paralysis all happen before the check for primal weather
{
    GIVEN {
        PLAYER(SPECIES_GATOMON_X) {Item(ITEM_BLUE_ORB);}
        OPPONENT(SPECIES_LOPMONX) {Status1(STATUS1_SLEEP);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); }
    } SCENE {
        NOT MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
        MESSAGE("Foe Lopmonx is fast asleep.");
    }
}