#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
    ASSUME(gMovesInfo[MOVE_LOCK_ON].effect == EFFECT_LOCK_ON);
}

SINGLE_BATTLE_TEST("Dragon Tail switches the target with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOTAMON);
        OPPONENT(SPECIES_CONOMON) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
<<<<<<< HEAD
        MESSAGE("Foe Argomon_f was dragged out!");
=======
        MESSAGE("The opposing Argomon_f was dragged out!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Dragon Tail switches the target with a random non-battler, non-fainted replacement")
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
        TURN { MOVE(playerLeft, MOVE_DRAGON_TAIL, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, playerLeft);
<<<<<<< HEAD
        MESSAGE("Foe Argomon_f was dragged out!");
=======
        MESSAGE("The opposing Argomon_f was dragged out!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Dragon Tail does not fail if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
        NOT MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Dragon Tail does not fail if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
        NOT MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Dragon Tail switches the target after Rocky Helmet and Iron Barbs")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_TOGEDEMARU) { Ability(ABILITY_IRON_BARBS); Item(ITEM_ROCKY_HELMET); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_BOTAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
        HP_BAR(player);
        MESSAGE("Lopmonx was hurt by the opposing Togedemaru's Iron Barbs!");
        HP_BAR(player);
        MESSAGE("Lopmonx was hurt by the opposing Togedemaru's Rocky Helmet!");
        MESSAGE("The opposing Botamon was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Dragon Tail effect fails against target with Guard Dog")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_OKIDOGI) { Ability(ABILITY_GUARD_DOG); }
        OPPONENT(SPECIES_BOTAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
        NOT MESSAGE("The opposing Botamon was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Dragon Tail effect fails against target with Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAWNMON_WHITE) { Ability(ABILITY_SUCTION_CUPS); }
        OPPONENT(SPECIES_BOTAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
        ABILITY_POPUP(opponent, ABILITY_SUCTION_CUPS);
        MESSAGE("The opposing Pawnmon_white anchors itself with Suction Cups!");
        NOT MESSAGE("The opposing Botamon was dragged out!");
    }
}
