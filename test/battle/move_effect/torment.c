#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_TORMENT) == EFFECT_TORMENT);
}

SINGLE_BATTLE_TEST("Torment prevents consecutive move uses")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_SPLASH, MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TORMENT); MOVE(opponent, MOVE_SPLASH); }
        TURN { MOVE(opponent, MOVE_SPLASH, allowed: FALSE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TORMENT, player);
        MESSAGE("The opposing Lopmonx was subjected to torment!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Torment forces Struggle if the only move is prevented")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_SPLASH); }
    } WHEN {
        TURN { MOVE(player, MOVE_TORMENT); MOVE(opponent, MOVE_SPLASH); }
        TURN { MOVE(opponent, MOVE_SPLASH, allowed: FALSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRUGGLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Torment allows non-consecutive move uses")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TORMENT); MOVE(opponent, MOVE_SPLASH); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_SPLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
    }
}
