#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_COACHING].effect == EFFECT_COACHING);
}

DOUBLE_BATTLE_TEST("Coaching raises Attack and Defense of ally by 1 stage each")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_COACHING, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, playerLeft);
        MESSAGE("Exveemon's Attack rose!");
        MESSAGE("Exveemon's Defense rose!");
    }
}

DOUBLE_BATTLE_TEST("Coaching bypasses Protect")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PROTECT].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_PROTECT); MOVE(playerLeft, MOVE_COACHING, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, playerLeft);
        MESSAGE("Exveemon's Attack rose!");
        MESSAGE("Exveemon's Defense rose!");
    }
}

DOUBLE_BATTLE_TEST("Coaching bypasses Crafty Shield")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CRAFTY_SHIELD].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_CRAFTY_SHIELD); MOVE(playerLeft, MOVE_COACHING, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, playerLeft);
        MESSAGE("Exveemon's Attack rose!");
        MESSAGE("Exveemon's Defense rose!");
    }
}

DOUBLE_BATTLE_TEST("Coaching fails if all allies are is semi-invulnerable")
{
    KNOWN_FAILING; // Coaching succeeds
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLY].effect == EFFECT_SEMI_INVULNERABLE);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_HAWLUCHA);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_FLY, target: opponentLeft); MOVE(playerLeft, MOVE_COACHING, target: playerRight); }
    } SCENE {
        MESSAGE("Hawlucha used Fly!");
        MESSAGE("Lopmonx used Coaching!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, playerLeft);
            MESSAGE("Hawlucha's Attack rose!");
            MESSAGE("Hawlucha's Defense rose!");
        }
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Coaching fails in single battles")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_COACHING); }
    } SCENE {
        MESSAGE("But it failed!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, player);
            MESSAGE("Exveemon's Attack rose!");
            MESSAGE("Exveemon's Defense rose!");
        }
    }
}

DOUBLE_BATTLE_TEST("Coaching fails if there's no ally")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { HP(1); };
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: playerRight); }
        TURN { MOVE(playerLeft, MOVE_COACHING, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        MESSAGE("Exveemon fainted!");
        MESSAGE("Lopmonx used Coaching!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_COACHING, playerLeft);
            MESSAGE("Exveemon's Attack rose!");
            MESSAGE("Exveemon's Defense rose!");
        }
        MESSAGE("But it failed!");
    }
}

AI_DOUBLE_BATTLE_TEST("AI uses Coaching")
{
    u32 move;
    PARAMETRIZE { move = MOVE_HEADBUTT; }
    PARAMETRIZE { move = MOVE_DAZZLING_GLEAM; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_POUND, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_POUND, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_COACHING, MOVE_POUND); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(move); }
    } WHEN {
        if (move == MOVE_HEADBUTT)
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_COACHING); }
        else
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_COACHING); }
    }
}
