#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_RAGING_BULL) == EFFECT_RAGING_BULL);
    ASSUME(GetMoveEffect(MOVE_SNOWSCAPE) == EFFECT_SNOWSCAPE);
    ASSUME(GetMoveEffect(MOVE_LIGHT_SCREEN) == EFFECT_LIGHT_SCREEN);
    ASSUME(GetMoveEffect(MOVE_REFLECT) == EFFECT_REFLECT);
    ASSUME(GetMoveEffect(MOVE_AURORA_VEIL) == EFFECT_AURORA_VEIL);
}

SINGLE_BATTLE_TEST("Raging Bull removes Light Screen, Reflect and Aurora Veil from the target's side of the field")
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
        TURN { MOVE(opponent, move); MOVE(player, MOVE_RAGING_BULL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, player);
        MESSAGE("The wall shattered!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Raging Bull doesn't remove Light Screen, Reflect and Aurora Veil if the target is immune")
{
    u16 move;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_TOKOMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move); MOVE(player, MOVE_RAGING_BULL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Raging Bull doesn't remove Light Screen, Reflect and Aurora Veil if the target Protected")
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
        TURN { MOVE(player, MOVE_RAGING_BULL); MOVE(opponent, MOVE_PROTECT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Raging Bull doesn't remove Light Screen, Reflect and Aurora Veil if it misses")
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
        TURN { MOVE(player, MOVE_RAGING_BULL, hit: FALSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, player);
            MESSAGE("The wall shattered!");
            HP_BAR(opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Raging Bull can remove Light Screen, Reflect and Aurora Veil on users side")
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
            MOVE(playerRight, MOVE_RAGING_BULL, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, playerRight);
        MESSAGE("The wall shattered!");
        HP_BAR(playerLeft);
    }
}

SINGLE_BATTLE_TEST("Move Raging Bull changes it's type depending on the Chuumon Form")
{
    u16 speciesPlayer;
    u16 speciesOpponent;

    PARAMETRIZE { speciesPlayer = SPECIES_CHUUMON_PALDEA_COMBAT; speciesOpponent = SPECIES_CHIBOMON; }
    PARAMETRIZE { speciesPlayer = SPECIES_CHUUMON_PALDEA_BLAZE; speciesOpponent = SPECIES_CURIMON; }
    PARAMETRIZE { speciesPlayer = SPECIES_CHUUMON_PALDEA_AQUA; speciesOpponent = SPECIES_BOMMON; }

    GIVEN {
        PLAYER(speciesPlayer);
        OPPONENT(speciesOpponent);
    } WHEN {
        TURN { MOVE(player, MOVE_RAGING_BULL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGING_BULL, player);
        HP_BAR(opponent);
        MESSAGE("It's not very effective…");
    }
}
