#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BURN_UP].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE);
    ASSUME(MoveHasAdditionalEffectSelfArg(MOVE_BURN_UP, MOVE_EFFECT_REMOVE_ARG_TYPE, TYPE_FIRE) == TRUE);
    ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] != TYPE_FIRE || gSpeciesInfo[SPECIES_LOPMONX].types[1] != TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_FLORAMON].types[0] == TYPE_FIRE || gSpeciesInfo[SPECIES_FLORAMON].types[1] == TYPE_FIRE);
}

SINGLE_BATTLE_TEST("Burn Up user loses its Fire-type")
{
    GIVEN {
        PLAYER(SPECIES_FLORAMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        MESSAGE("Floramon burned itself out!");
        MESSAGE("Floramon used Burn Up!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Burn Up fails if the user isn't a Fire-type")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        NONE_OF { ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player); }
        MESSAGE("Lopmonx used Burn Up!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Burn Up user loses its Fire-type if enemy faints")
{
    GIVEN {
        PLAYER(SPECIES_FLORAMON);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent, hp: 0);
        MESSAGE("Floramon burned itself out!");
    }
}
