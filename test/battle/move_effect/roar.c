#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ROAR) == EFFECT_ROAR);
}

SINGLE_BATTLE_TEST("Roar switches the target with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOTAMON);
        OPPONENT(SPECIES_CONOMON) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
        MESSAGE("The opposing Argomon_f was dragged out!");
    }
}

DOUBLE_BATTLE_TEST("Roar switches the target with a random non-battler, non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOTAMON);
        OPPONENT(SPECIES_CONOMON) { HP(0); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROAR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, playerLeft);
        MESSAGE("The opposing Argomon_f was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Lopmonx used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Lopmonx used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails against target with Guard Dog")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Lopmonx used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails against target with Guard Dog")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_OKIDOGI) { Ability(ABILITY_GUARD_DOG); }
        OPPONENT(SPECIES_BOTAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
            MESSAGE("The opposing Botamon was dragged out!");
        }
        MESSAGE("Lopmonx used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails to switch out target with Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAWNMON_WHITE) { Ability(ABILITY_SUCTION_CUPS); }
        OPPONENT(SPECIES_BOTAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Lopmonx used Roar!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
        ABILITY_POPUP(opponent, ABILITY_SUCTION_CUPS);
        MESSAGE("The opposing Pawnmon_white anchors itself with Suction Cups!");
        NOT MESSAGE("The opposing Botamon was dragged out!");
    }
}
