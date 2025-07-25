#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dragon Cheer fails in a single battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_CHEER); }
    } SCENE {
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer increases critical hit ratio by one on non-Dragon types")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Exveemon is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer increases critical hit ratio by two on Dragon types")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ELECMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Elecmon is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer fails if critical hit stage was already increased by Focus Energy")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FOCUS_ENERGY); MOVE(playerRight, MOVE_DRAGON_CHEER, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, playerLeft);
        MESSAGE("But it failed!");
    }
}

TO_DO_BATTLE_TEST("Baton Pass passes Dragon Cheer's effect");
