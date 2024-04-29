#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_COURT_CHANGE].effect == EFFECT_COURT_CHANGE);
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the opponent")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(opponentLeft, MOVE_SPIKES); MOVE(opponentRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerLeft, 2); SWITCH(opponentLeft, 2); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Sticky Web!");
        MESSAGE("Foe Lopmonx used Stealth Rock!");
        MESSAGE("Foe Lopmonx used Spikes!");
        MESSAGE("Foe Lopmonx used Toxic Spikes!");
        MESSAGE("Exveemon used Court Change!");
        MESSAGE("Exveemon swapped the battle effects affecting each side!");
        MESSAGE("Go! Exveemon!");
        NONE_OF {
            MESSAGE("Exveemon is hurt by spikes!");
            MESSAGE("Pointed stones dug into Exveemon!");
            MESSAGE("Exveemon was poisoned!");
            MESSAGE("Exveemon was caught in a Sticky Web!");
        }
        MESSAGE("2 sent out Lopmonx!");
        MESSAGE("Foe Lopmonx is hurt by spikes!");
        MESSAGE("Pointed stones dug into Foe Lopmonx!");
        MESSAGE("Foe Lopmonx was poisoned!");
        MESSAGE("Foe Lopmonx was caught in a Sticky Web!");
    }
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the player")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_SPIKES); MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE("Lopmonx used Sticky Web!");
        MESSAGE("Lopmonx used Stealth Rock!");
        MESSAGE("Lopmonx used Spikes!");
        MESSAGE("Lopmonx used Toxic Spikes!");
        MESSAGE("Foe Exveemon used Court Change!");
        MESSAGE("Foe Exveemon swapped the battle effects affecting each side!");
        MESSAGE("Go! Lopmonx!");
        MESSAGE("Lopmonx is hurt by spikes!");
        MESSAGE("Pointed stones dug into Lopmonx!");
        MESSAGE("Lopmonx was poisoned!");
        MESSAGE("Lopmonx was caught in a Sticky Web!");
        MESSAGE("2 sent out Exveemon!");
        NONE_OF {
            MESSAGE("Foe Exveemon is hurt by spikes!");
            MESSAGE("Pointed stones dug into Foe Exveemon!");
            MESSAGE("Foe Exveemon was poisoned!");
            MESSAGE("Foe Exveemon was caught in a Sticky Web!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_LUCKY_CHANT); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Foe Lopmonx used Mist!");
        MESSAGE("Foe Lopmonx used Safeguard!");
        MESSAGE("Foe Lopmonx used Lucky Chant!");
        MESSAGE("Foe Lopmonx used Reflect!");
        MESSAGE("Foe Lopmonx used Light Screen!");
        MESSAGE("Foe Lopmonx used Tailwind!");
        MESSAGE("Exveemon used Court Change!");
        MESSAGE("Exveemon swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Ally's Mist wore off!");
        MESSAGE("Ally's party is no longer protected by Safeguard!");
        MESSAGE("Ally's Reflect wore off!");
        MESSAGE("Your team's Lucky Chant wore off!");
        MESSAGE("Your team's tailwind petered out!");
        MESSAGE("Ally's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_LUCKY_CHANT); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Lopmonx used Mist!");
        MESSAGE("Lopmonx used Safeguard!");
        MESSAGE("Lopmonx used Lucky Chant!");
        MESSAGE("Lopmonx used Reflect!");
        MESSAGE("Lopmonx used Light Screen!");
        MESSAGE("Lopmonx used Tailwind!");
        MESSAGE("Foe Exveemon used Court Change!");
        MESSAGE("Foe Exveemon swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Foe's Mist wore off!");
        MESSAGE("Foe's party is no longer protected by Safeguard!");
        MESSAGE("Foe's Reflect wore off!");
        MESSAGE("The opposing team's Lucky Chant wore off!");
        MESSAGE("The opposing team's tailwind petered out!");
        MESSAGE("Foe's Light Screen wore off!");
    }
}
