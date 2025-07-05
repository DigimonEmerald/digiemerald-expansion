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
<<<<<<< HEAD
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
=======
        MESSAGE("The opposing Lopmonx used Sticky Web!");
        MESSAGE("The opposing Lopmonx used Stealth Rock!");
        MESSAGE("The opposing Lopmonx used Spikes!");
        MESSAGE("The opposing Lopmonx used Toxic Spikes!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side of the field!");
        SEND_IN_MESSAGE("Wynaut");
        NONE_OF {
            MESSAGE("Wynaut was hurt by the spikes!");
            MESSAGE("Pointed stones dug into Wynaut!");
            MESSAGE("Wynaut was poisoned!");
            MESSAGE("Wynaut was caught in a sticky web!");
        }
        MESSAGE("2 sent out Lopmonx!");
        MESSAGE("The opposing Lopmonx was hurt by the spikes!");
        MESSAGE("Pointed stones dug into the opposing Lopmonx!");
        MESSAGE("The opposing Lopmonx was poisoned!");
        MESSAGE("The opposing Lopmonx was caught in a sticky web!");
>>>>>>> upstream/master
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
<<<<<<< HEAD
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
=======
        MESSAGE("Lopmonx used Sticky Web!");
        MESSAGE("Lopmonx used Stealth Rock!");
        MESSAGE("Lopmonx used Spikes!");
        MESSAGE("Lopmonx used Toxic Spikes!");
        MESSAGE("The opposing Wynaut used Court Change!");
        MESSAGE("The opposing Wynaut swapped the battle effects affecting each side of the field!");
        SEND_IN_MESSAGE("Lopmonx");
        MESSAGE("Lopmonx was hurt by the spikes!");
        MESSAGE("Pointed stones dug into Lopmonx!");
        MESSAGE("Lopmonx was poisoned!");
        MESSAGE("Lopmonx was caught in a sticky web!");
        MESSAGE("2 sent out Wynaut!");
        NONE_OF {
            MESSAGE("The opposing Wynaut was hurt by the spikes!");
            MESSAGE("Pointed stones dug into the opposing Wynaut!");
            MESSAGE("The opposing Wynaut was poisoned!");
            MESSAGE("The opposing Wynaut was caught in a sticky web!");
>>>>>>> upstream/master
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SNOWSCAPE); MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_AURORA_VEIL); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
<<<<<<< HEAD
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
=======
        MESSAGE("Wynaut used Snowscape!");
        MESSAGE("The opposing Lopmonx used Mist!");
        MESSAGE("The opposing Lopmonx used Safeguard!");
        MESSAGE("The opposing Lopmonx used Aurora Veil!");
        MESSAGE("The opposing Lopmonx used Reflect!");
        MESSAGE("The opposing Lopmonx used Light Screen!");
        MESSAGE("The opposing Lopmonx used Tailwind!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side of the field!");
        // The effects now end for the player side.        
        MESSAGE("Your team's Mist wore off!");
        MESSAGE("Your team is no longer protected by Safeguard!");
        MESSAGE("Your team's Reflect wore off!");
        MESSAGE("Your team's Aurora Veil wore off!");
        MESSAGE("Your team's Tailwind petered out!");
        MESSAGE("Your team's Light Screen wore off!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SNOWSCAPE); MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_AURORA_VEIL); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx used Mist!");
        MESSAGE("Lopmonx used Safeguard!");
        MESSAGE("Lopmonx used Lucky Chant!");
        MESSAGE("Lopmonx used Reflect!");
        MESSAGE("Lopmonx used Light Screen!");
        MESSAGE("Lopmonx used Tailwind!");
        MESSAGE("Foe Exveemon used Court Change!");
        MESSAGE("Foe Exveemon swapped the battle effects affecting each side!");
=======
        MESSAGE("Lopmonx used Mist!");
        MESSAGE("Lopmonx used Safeguard!");
        MESSAGE("Lopmonx used Aurora Veil!");
        MESSAGE("Lopmonx used Reflect!");
        MESSAGE("Lopmonx used Light Screen!");
        MESSAGE("Lopmonx used Tailwind!");
        MESSAGE("The opposing Wynaut used Court Change!");
        MESSAGE("The opposing Wynaut swapped the battle effects affecting each side of the field!");
>>>>>>> upstream/master
        // The effects now end for the player side.
        MESSAGE("The opposing team's Mist wore off!");
        MESSAGE("The opposing team is no longer protected by Safeguard!");
        MESSAGE("The opposing team's Reflect wore off!");
        MESSAGE("The opposing team's Aurora Veil wore off!");
        MESSAGE("The opposing team's Tailwind petered out!");
        MESSAGE("The opposing team's Light Screen wore off!");
    }
}

TO_DO_BATTLE_TEST("Court Change used by the player swaps G-Max Steelsurge, G-Max Vine Lash, G-Max Wildfire, G-Max Cannonade");
