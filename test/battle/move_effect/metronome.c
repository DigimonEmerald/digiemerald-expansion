#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_METRONOME].effect == EFFECT_METRONOME);
}

SINGLE_BATTLE_TEST("Metronome picks a random move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_METRONOME, WITH_RNG(RNG_METRONOME, MOVE_SCRATCH)); }
    } SCENE {
        MESSAGE("Lopmonx used Metronome!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_METRONOME, player);
        MESSAGE("Lopmonx used Scratch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Metronome's called powder move fails against Grass Types")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_POISON_POWDER].powderMove);
        ASSUME(gSpeciesInfo[SPECIES_BETAMON].types[0] == TYPE_GRASS);
        ASSUME(gMovesInfo[MOVE_POISON_POWDER].effect == EFFECT_POISON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_BETAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_METRONOME, WITH_RNG(RNG_METRONOME, MOVE_POISON_POWDER)); }
    } SCENE {
        MESSAGE("Lopmonx used Metronome!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_METRONOME, player);
        MESSAGE("Lopmonx used PoisonPowder!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_POWDER, player);
        MESSAGE("It doesn't affect Foe Betamon…");
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Metronome's called multi-hit move hits multiple times")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ROCK_BLAST].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_METRONOME, WITH_RNG(RNG_METRONOME, MOVE_ROCK_BLAST)); }
    } SCENE {
        MESSAGE("Lopmonx used Metronome!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_METRONOME, player);
        MESSAGE("Lopmonx used Rock Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_BLAST, player);
        HP_BAR(opponent);
        MESSAGE("Hit 5 time(s)!");
    }
}
