#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(!IS_MOVE_STATUS(MOVE_WATER_GUN));
    ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
}

SINGLE_BATTLE_TEST("Desolate Land blocks damaging Water-type moves")
{
    GIVEN {
        PLAYER(SPECIES_GEKOMON) {Item(ITEM_RED_ORB);}
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Water Gun!");
=======
        MESSAGE("The opposing Lopmonx used Water Gun!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        MESSAGE("The Water-type attack evaporated in the extremely harsh sunlight!");
        NOT HP_BAR(player);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Water Gun!");
=======
        MESSAGE("The opposing Lopmonx used Water Gun!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        MESSAGE("The Water-type attack evaporated in the extremely harsh sunlight!");
        NOT HP_BAR(player);
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

DOUBLE_BATTLE_TEST("Desolate Land blocks damaging Water-type moves and prints the message only once with moves hitting multiple targets")
{
    GIVEN {
        ASSUME(!IS_MOVE_STATUS(MOVE_SURF));
        ASSUME(gMovesInfo[MOVE_SURF].type == TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_SURF].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_GEKOMON) {Item(ITEM_RED_ORB); {Speed(5);}}
        PLAYER(SPECIES_LOPMONX) {Speed(5);}
        OPPONENT(SPECIES_LOPMONX) {Speed(10);}
        OPPONENT(SPECIES_LOPMONX) {Speed(8);}
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SURF); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Surf!");
=======
        MESSAGE("The opposing Lopmonx used Surf!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponentLeft);
        MESSAGE("The Water-type attack evaporated in the extremely harsh sunlight!");
        NOT MESSAGE("The Water-type attack evaporated in the extremely harsh sunlight!");
    } THEN {
        EXPECT_EQ(playerLeft->hp, playerLeft->maxHP);
        EXPECT_EQ(playerRight->hp, playerRight->maxHP);
        EXPECT_EQ(opponentRight->hp, opponentRight->maxHP);
    }
}

SINGLE_BATTLE_TEST("Desolate Land does not block a move if pokemon is asleep and uses a Water-type move") // Sleep/confusion/paralysis all happen before the check for primal weather
{
    GIVEN {
        PLAYER(SPECIES_GEKOMON) {Item(ITEM_RED_ORB);}
        OPPONENT(SPECIES_LOPMONX) {Status1(STATUS1_SLEEP);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
<<<<<<< HEAD
        NOT MESSAGE("The Water-type attack evaporated in the harsh sunlight!");
        MESSAGE("Foe Lopmonx is fast asleep.");
=======
        NOT MESSAGE("The Water-type attack evaporated in the extremely harsh sunlight!");
        MESSAGE("The opposing Lopmonx is fast asleep.");
>>>>>>> upstream/master
    }
}
