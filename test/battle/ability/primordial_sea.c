#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(!IsBattleMoveStatus(MOVE_EMBER));
    ASSUME(GetMoveType(MOVE_EMBER) == TYPE_FIRE);
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
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Ember!");
=======
        MESSAGE("The opposing Lopmonx used Ember!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("The Fire-type attack fizzled out in the heavy rain!");
        NOT HP_BAR(player);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Ember!");
=======
        MESSAGE("The opposing Lopmonx used Ember!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("The Fire-type attack fizzled out in the heavy rain!");
        NOT HP_BAR(player);
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

DOUBLE_BATTLE_TEST("Primordial Sea blocks damaging Fire-type moves and prints the message only once with moves hitting multiple targets")
{
    GIVEN {
        ASSUME(!IsBattleMoveStatus(MOVE_ERUPTION));
        ASSUME(GetMoveType(MOVE_ERUPTION) == TYPE_FIRE);
        ASSUME(GetMoveTarget(MOVE_ERUPTION) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_GATOMON_X) {Item(ITEM_BLUE_ORB); {Speed(5);}}
        PLAYER(SPECIES_LOPMONX) {Speed(5);}
        OPPONENT(SPECIES_LOPMONX) {Speed(10);}
        OPPONENT(SPECIES_LOPMONX) {Speed(8);}
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_ERUPTION); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Eruption!");
=======
        MESSAGE("The opposing Lopmonx used Eruption!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ERUPTION, opponentLeft);
        MESSAGE("The Fire-type attack fizzled out in the heavy rain!");
        NOT MESSAGE("The Fire-type attack fizzled out in the heavy rain!");
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
<<<<<<< HEAD
        NOT MESSAGE("The Fire-type attack fizzled out\nin the heavy rain!");
        MESSAGE("Foe Lopmonx is fast asleep.");
=======
        NOT MESSAGE("The Fire-type attack fizzled out in the heavy rain!");
        MESSAGE("The opposing Lopmonx is fast asleep.");
>>>>>>> upstream/master
    }
}