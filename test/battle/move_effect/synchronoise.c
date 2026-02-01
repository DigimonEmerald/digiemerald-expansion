#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SYNCHRONOISE) == EFFECT_SYNCHRONOISE);
    ASSUME(GetSpeciesType(SPECIES_WOBBUFFET, 0) == TYPE_PSYCHIC);
    ASSUME(GetSpeciesType(SPECIES_WOBBUFFET, 1) == TYPE_PSYCHIC);
    ASSUME(GetSpeciesType(SPECIES_BULBASAUR, 0) == TYPE_GRASS);
    ASSUME(GetSpeciesType(SPECIES_BULBASAUR, 1) == TYPE_POISON);
    ASSUME(GetSpeciesType(SPECIES_ARCANINE, 0) == TYPE_FIRE);
    ASSUME(GetSpeciesType(SPECIES_ARCANINE, 1) == TYPE_FIRE);
}

DOUBLE_BATTLE_TEST("Synchronoise hits all Pokemon that share a type with the attacker")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SYNCHRONOISE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Synchronoise will fail if there is no corresponding typing on the field")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ARGOMON);
        OPPONENT(SPECIES_ARGOMON);
        OPPONENT(SPECIES_ARGOMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SYNCHRONOISE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, playerLeft);
        MESSAGE("Lopmonx used Synchronoise!");
        MESSAGE("It doesn't affect the opposing Argomon…");
        MESSAGE("It doesn't affect Argomon…");
        MESSAGE("It doesn't affect the opposing Argomon…");
        NOT MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Synchronoise will hit if there is at least one target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ARGOMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARGOMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SYNCHRONOISE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, playerLeft);
        HP_BAR(opponentLeft);
        NONE_OF {
            HP_BAR(playerRight);
            HP_BAR(opponentRight);
            MESSAGE("But it failed!");
        }
    }
}

DOUBLE_BATTLE_TEST("Synchronoise will fail if the corresponding typing mon protects")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ARGOMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARGOMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_PROTECT); MOVE(playerLeft, MOVE_SYNCHRONOISE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, playerLeft);
    }
}

DOUBLE_BATTLE_TEST("Synchronoise will fail for a typeless user even if a target is typeless")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_BURN_UP) == EFFECT_FAIL_IF_NOT_ARG_TYPE);
        PLAYER(SPECIES_ARCANINE) { Moves(MOVE_BURN_UP, MOVE_SYNCHRONOISE); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARCANINE) { Moves(MOVE_BURN_UP, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_BURN_UP, target: opponentRight);
            MOVE(opponentLeft, MOVE_BURN_UP, target: playerRight);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
        TURN {
            MOVE(playerLeft, MOVE_SYNCHRONOISE);
            MOVE(opponentLeft, MOVE_CELEBRATE);
            MOVE(playerRight, MOVE_CELEBRATE);
            MOVE(opponentRight, MOVE_CELEBRATE);
        }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, playerLeft);
        MESSAGE("Arcanine used Synchronoise!");
        MESSAGE("It doesn't affect the opposing Arcanine…");
        MESSAGE("It doesn't affect Wobbuffet…");
        MESSAGE("It doesn't affect the opposing Wobbuffet…");
        NOT MESSAGE("But it failed!");
    }
}

TO_DO_BATTLE_TEST("TODO: Write Synchronoise (Move Effect) test titles")
