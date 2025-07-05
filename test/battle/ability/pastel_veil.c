#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Pastel Veil prevents Poison Sting poison")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_POISON_STING, MOVE_EFFECT_POISON) == TRUE);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_STING); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, player);
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil prevents Poison Sting poison on partner")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_POISON_STING, MOVE_EFFECT_POISON) == TRUE);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_EXVEEMON);
=======
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_WYNAUT);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_POISON_STING, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, playerLeft);
        NOT STATUS_ICON(opponentRight, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Pastel Veil immediately cures Mold Breaker poison")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
<<<<<<< HEAD
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
        STATUS_ICON(opponent, badPoison: TRUE);
        ABILITY_POPUP(opponent, ABILITY_PASTEL_VEIL);
<<<<<<< HEAD
        MESSAGE("Foe Negamon's Pastel Veil cured its poison problem!");
=======
        MESSAGE("The opposing Negamon's Pastel Veil cured its poison problem!");
>>>>>>> upstream/master
        STATUS_ICON(opponent, none: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil does not cure Mold Breaker poison on partner")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
<<<<<<< HEAD
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_EXVEEMON);
=======
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_WYNAUT);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TOXIC, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, playerLeft, target: opponentRight);
        STATUS_ICON(opponentRight, badPoison: TRUE);
        NOT STATUS_ICON(opponentRight, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Pastel Veil prevents Toxic bad poison")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        MESSAGE("Lopmonx used Toxic!");
        ABILITY_POPUP(opponent, ABILITY_PASTEL_VEIL);
<<<<<<< HEAD
        MESSAGE("Foe Negamon is protected by a pastel veil!");
=======
        MESSAGE("The opposing Negamon is protected by a pastel veil!");
>>>>>>> upstream/master
        NOT STATUS_ICON(opponent, badPoison: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil prevents Toxic bad poison on partner")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_EXVEEMON);
=======
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_WYNAUT);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TOXIC, target: opponentRight); }
    } SCENE {
        MESSAGE("Lopmonx used Toxic!");
        ABILITY_POPUP(opponentLeft, ABILITY_PASTEL_VEIL);
<<<<<<< HEAD
        MESSAGE("Foe Exveemon is protected by a pastel veil!");
=======
        MESSAGE("The opposing Wynaut is protected by a pastel veil!");
>>>>>>> upstream/master
        NOT STATUS_ICON(opponentRight, badPoison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Pastel Veil prevents Toxic Spikes poison")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC_SPIKES].effect == EFFECT_TOXIC_SPIKES);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC_SPIKES); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        MESSAGE("2 sent out Negamon!");
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil prevents Toxic Spikes poison on partner")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC_SPIKES].effect == EFFECT_TOXIC_SPIKES);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
=======
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_WYNAUT);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TOXIC_SPIKES); }
        TURN { SWITCH(opponentRight, 2); }
    } SCENE {
        MESSAGE("2 sent out Exveemon!");
        NOT STATUS_ICON(opponentRight, poison: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil cures partner's poison on initial switch in")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("2 sent out Lopmonx and Negamon!");
        ABILITY_POPUP(opponentRight, ABILITY_PASTEL_VEIL);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx was cured of its poisoning!");
=======
        MESSAGE("The opposing Lopmonx was cured of its poisoning!");
>>>>>>> upstream/master
        STATUS_ICON(opponentLeft, none: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Pastel Veil cures partner's poison on switch in")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_NEGAMON_GALARIAN) { Ability(ABILITY_PASTEL_VEIL); }
=======
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_NEGAMON_GALAR) { Ability(ABILITY_PASTEL_VEIL); }
>>>>>>> upstream/master
    } WHEN {
        TURN { SWITCH(opponentRight, 2); }
    } SCENE {
        MESSAGE("2 sent out Negamon!");
        ABILITY_POPUP(opponentRight, ABILITY_PASTEL_VEIL);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx was cured of its poisoning!");
=======
        MESSAGE("The opposing Lopmonx was cured of its poisoning!");
>>>>>>> upstream/master
        STATUS_ICON(opponentLeft, none: TRUE);
    }
}
