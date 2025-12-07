#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_LAST_RESORT].effect == EFFECT_LAST_RESORT);
}

SINGLE_BATTLE_TEST("Last Resort always fails if it's the only known move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_LAST_RESORT); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
    } SCENE {
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        NOT HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Last Resort works only when all of the known moves have been used - 2 moves")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_LAST_RESORT, MOVE_TACKLE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
    } SCENE {
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Last Resort!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Last Resort works only when all of the known moves have been used - 3 moves")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_LAST_RESORT, MOVE_TACKLE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
    } SCENE {
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("Lopmonx used Last Resort!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Last Resort works only when all of the known moves have been used - 4 moves")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_LAST_RESORT, MOVE_TACKLE, MOVE_SCRATCH, MOVE_GUST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_GUST); }
        TURN { MOVE(player, MOVE_LAST_RESORT); }
    } SCENE {
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("Lopmonx used Last Resort!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Gust!");
        MESSAGE("Lopmonx used Last Resort!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Last Resort works with Sleep Talk")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLEEP_TALK].effect == EFFECT_SLEEP_TALK);
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_LAST_RESORT, MOVE_SLEEP_TALK); Status1(STATUS1_SLEEP_TURN(3)); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SLEEP_TALK); }
        TURN { MOVE(player, MOVE_SLEEP_TALK); }
    } SCENE {
        // Turn 1
        MESSAGE("Lopmonx used Sleep Talk!");
        MESSAGE("Lopmonx used Last Resort!");
        NOT MESSAGE("But it failed!");
        HP_BAR(opponent);
        // Turn 2
        MESSAGE("Lopmonx used Sleep Talk!");
        MESSAGE("Lopmonx used Last Resort!");
        NOT MESSAGE("But it failed!");
        HP_BAR(opponent);
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Last Resort - 2 moves")
{
    AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_LAST_RESORT, MOVE_SCRATCH); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Last Resort - 3 moves")
{
    AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { MovesWithPP({MOVE_LAST_RESORT, 5}, {MOVE_QUICK_ATTACK, 1}, {MOVE_SCRATCH, 35}); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Last Resort - 4 moves")
{
    AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { MovesWithPP({MOVE_LAST_RESORT, 5}, {MOVE_QUICK_ATTACK, 1}, {MOVE_SCRATCH, 1}, {MOVE_GUST, 35}); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
    }
}

