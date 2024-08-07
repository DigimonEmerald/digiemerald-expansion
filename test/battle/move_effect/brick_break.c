#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BRICK_BREAK].effect == EFFECT_BRICK_BREAK);
    ASSUME(gMovesInfo[MOVE_SNOWSCAPE].effect == EFFECT_SNOWSCAPE);
    ASSUME(gMovesInfo[MOVE_LIGHT_SCREEN].effect == EFFECT_LIGHT_SCREEN);
    ASSUME(gMovesInfo[MOVE_REFLECT].effect == EFFECT_REFLECT);
    ASSUME(gMovesInfo[MOVE_AURORA_VEIL].effect == EFFECT_AURORA_VEIL);
}

SINGLE_BATTLE_TEST("Brick Break removes Light Screen, Reflect and Aurora Veil from the target's side of the field")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move); MOVE(player, MOVE_BRICK_BREAK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BRICK_BREAK, player);
        MESSAGE("The wall shattered!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Brick Break doesn't remove Light Screen, Reflect and Aurora Veil if the target is immune")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_TOKOMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move); MOVE(player, MOVE_BRICK_BREAK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BRICK_BREAK, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Brick Break doesn't remove Light Screen, Reflect and Aurora Veil if the target Protected")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_BRICK_BREAK); MOVE(opponent, MOVE_PROTECT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BRICK_BREAK, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Brick Break doesn't remove Light Screen, Reflect and Aurora Veil if it misses")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_BRIGHT_POWDER); }
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_BRICK_BREAK, hit: FALSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BRICK_BREAK, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Brick Break can remove Light Screen, Reflect and Aurora Veil on users side")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_SNOWSCAPE);
            MOVE(playerLeft, move);
            MOVE(playerRight, MOVE_BRICK_BREAK, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BRICK_BREAK, playerRight);
        MESSAGE("The wall shattered!");
        HP_BAR(playerLeft);
    }
}
