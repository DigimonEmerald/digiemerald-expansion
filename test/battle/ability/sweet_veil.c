#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HYPNOSIS) == EFFECT_NON_VOLATILE_STATUS);
    ASSUME(GetMoveNonVolatileStatus(MOVE_HYPNOSIS) == MOVE_EFFECT_SLEEP);
}

DOUBLE_BATTLE_TEST("Sweet Veil prevents Sleep on partner - right target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_BOUNSWEET) { Ability(ABILITY_SWEET_VEIL); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HYPNOSIS, target: opponentRight); }
    } SCENE {
        MESSAGE("Lopmon_x used Hypnosis!");
        ABILITY_POPUP(opponentLeft, ABILITY_SWEET_VEIL);
        NOT STATUS_ICON(opponentRight, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sweet Veil prevents Sleep on partner - left target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_BOUNSWEET) { Ability(ABILITY_SWEET_VEIL); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HYPNOSIS, target: opponentLeft); }
    } SCENE {
        MESSAGE("Lopmon_x used Hypnosis!");
        ABILITY_POPUP(opponentRight, ABILITY_SWEET_VEIL);
        NOT STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}
