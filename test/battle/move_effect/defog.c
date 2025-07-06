#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DEFOG].effect == EFFECT_DEFOG);
    ASSUME(gMovesInfo[MOVE_REFLECT].effect == EFFECT_REFLECT);
    ASSUME(gMovesInfo[MOVE_LIGHT_SCREEN].effect == EFFECT_LIGHT_SCREEN);
    ASSUME(gMovesInfo[MOVE_MIST].effect == EFFECT_MIST);
    ASSUME(gMovesInfo[MOVE_SAFEGUARD].effect == EFFECT_SAFEGUARD);
    ASSUME(gMovesInfo[MOVE_AURORA_VEIL].effect == EFFECT_AURORA_VEIL);
    ASSUME(gMovesInfo[MOVE_STEALTH_ROCK].effect == EFFECT_STEALTH_ROCK);
    ASSUME(gMovesInfo[MOVE_SPIKES].effect == EFFECT_SPIKES);
    ASSUME(gMovesInfo[MOVE_TOXIC_SPIKES].effect == EFFECT_TOXIC_SPIKES);
    ASSUME(gMovesInfo[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
    ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
    ASSUME(gMovesInfo[MOVE_SCREECH].effect == EFFECT_DEFENSE_DOWN_2);
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
    ASSUME(gMovesInfo[MOVE_GUST].category == DAMAGE_CATEGORY_SPECIAL);
}

SINGLE_BATTLE_TEST("Defog lowers evasiveness by 1 stage")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DEFOG); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DEFOG, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx's evasiveness fell!");
=======
        MESSAGE("The opposing Lopmonx's evasiveness fell!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Defog does not lower evasiveness if target behind Substitute")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_DEFOG); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Substitute!");
=======
        MESSAGE("The opposing Lopmonx used Substitute!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DEFOG, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx's evasiveness fell!");
=======
            MESSAGE("The opposing Lopmonx's evasiveness fell!");
>>>>>>> upstream/master
        }
    }
}

TO_DO_BATTLE_TEST("Defog doesn't remove Reflect or Light Screen from the user's side");
DOUBLE_BATTLE_TEST("Defog removes Reflect and Light Screen from target's side", s16 damagePhysical, s16 damageSpecial)
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_REFLECT); MOVE(opponentRight, MOVE_LIGHT_SCREEN); }
        TURN { MOVE(playerLeft, move, target: opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); MOVE(playerRight, MOVE_GUST, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LIGHT_SCREEN, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
        if (move == MOVE_DEFOG) {
<<<<<<< HEAD
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("Foe Lopmonx's evasiveness fell!");
            MESSAGE("Foe's Reflect wore off!");
            MESSAGE("Foe's Light Screen wore off!");
=======
            MESSAGE("The opposing team's Reflect wore off!");
            MESSAGE("The opposing team's Light Screen wore off!");
>>>>>>> upstream/master
        }
        MESSAGE("Lopmonx used Tackle!");
        HP_BAR(opponentLeft, captureDamage: &results[i].damagePhysical);
        MESSAGE("Lopmonx used Gust!");
        HP_BAR(opponentRight, captureDamage: &results[i].damageSpecial);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damagePhysical, Q_4_12(1.5), results[0].damagePhysical);
        EXPECT_MUL_EQ(results[1].damageSpecial, Q_4_12(1.5), results[0].damageSpecial);
    }
}

TO_DO_BATTLE_TEST("Defog doesn't remove Mist or Safeguard from the user's side");
DOUBLE_BATTLE_TEST("Defog removes Mist and Safeguard from target's side")
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, move, target: opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SCREECH, target: opponentLeft); MOVE(playerRight, MOVE_TOXIC, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIST, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAFEGUARD, opponentRight);
        if (move == MOVE_DEFOG) {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx is protected by MIST!");
=======
>>>>>>> upstream/master
            ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
            MESSAGE("The opposing team's Mist wore off!");
            MESSAGE("The opposing team's Safeguard wore off!");
        }
        MESSAGE("Lopmonx used Screech!");
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, playerLeft);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
        else {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx is protected by MIST!");
=======
            MESSAGE("The opposing Lopmonx is protected by the mist!");
>>>>>>> upstream/master
            NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
        MESSAGE("Lopmonx used Toxic!");
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, playerRight);
            STATUS_ICON(opponentRight, badPoison: TRUE);
        }
        else {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx's party is protected by Safeguard!");
=======
            MESSAGE("The opposing Lopmonx is protected by Safeguard!");
>>>>>>> upstream/master
            NOT STATUS_ICON(opponentRight, badPoison: TRUE);
        }
    }
}

TO_DO_BATTLE_TEST("Defog removes Stealth Rock and Sticky Web from target's side");
TO_DO_BATTLE_TEST("Defog doesn't remove Stealth Rock or Sticky Web from user's side (Gen 4-5)");
DOUBLE_BATTLE_TEST("Defog removes Stealth Rock and Sticky Web from user's side (Gen 6+)")
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STEALTH_ROCK); MOVE(opponentRight, MOVE_STICKY_WEB); }
        TURN { MOVE(playerLeft, move, target: opponentLeft); }
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
<<<<<<< HEAD
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("Foe Lopmonx's evasiveness fell!");
=======
        if (move == MOVE_DEFOG && B_DEFOG_EFFECT_CLEARING >= GEN_6) {
>>>>>>> upstream/master
            MESSAGE("The pointed stones disappeared from around your team!");
            MESSAGE("The sticky web has disappeared from the ground around your team!");
        }
        // Switch happens
<<<<<<< HEAD
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Lopmonx!");
        if (move != MOVE_DEFOG) {
            HP_BAR(playerLeft);
            MESSAGE("Pointed stones dug into Lopmonx!");
            MESSAGE("Lopmonx was caught in a Sticky Web!");
=======
        SWITCH_OUT_MESSAGE("Lopmonx");
        SEND_IN_MESSAGE("Lopmonx");
        if (move != MOVE_DEFOG || B_DEFOG_EFFECT_CLEARING <= GEN_5) {
            HP_BAR(playerLeft);
            MESSAGE("Pointed stones dug into Lopmonx!");
            MESSAGE("Lopmonx was caught in a sticky web!");
>>>>>>> upstream/master
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Lopmonx's Speed fell!");
        }
        else {
            NONE_OF {
                HP_BAR(playerLeft);
<<<<<<< HEAD
                MESSAGE("Pointed stones dug into Lopmonx!");
                MESSAGE("Lopmonx was caught in a Sticky Web!");
=======
                MESSAGE("Pointed stones dug into Lopmonx!");
                MESSAGE("Lopmonx was caught in a sticky web!");
>>>>>>> upstream/master
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
                MESSAGE("Lopmonx's Speed fell!");
            }
        }
    }
}

TO_DO_BATTLE_TEST("Defog removes Spikes from target's side");
TO_DO_BATTLE_TEST("Defog doesn't remove Spikes from user's side (Gen 4-5)");
SINGLE_BATTLE_TEST("Defog removes Spikes from user's side (Gen 6+)")
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPIKES); MOVE(player, move); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
<<<<<<< HEAD
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe Lopmonx's evasiveness fell!");
=======
        if (move == MOVE_DEFOG && B_DEFOG_EFFECT_CLEARING >= GEN_6)
>>>>>>> upstream/master
            MESSAGE("The spikes disappeared from the ground around your team!");
        // Switch happens
<<<<<<< HEAD
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Lopmonx!");
        if (move != MOVE_DEFOG) {
            HP_BAR(player);
            MESSAGE("Lopmonx is hurt by spikes!");
=======
        SWITCH_OUT_MESSAGE("Lopmonx");
        SEND_IN_MESSAGE("Lopmonx");
        if (move != MOVE_DEFOG || B_DEFOG_EFFECT_CLEARING <= GEN_5) {
            HP_BAR(player);
            MESSAGE("Lopmonx was hurt by the spikes!");
>>>>>>> upstream/master
        }
        else {
            NONE_OF {
                HP_BAR(player);
<<<<<<< HEAD
                MESSAGE("Lopmonx is hurt by spikes!");
=======
                MESSAGE("Lopmonx was hurt by the spikes!");
>>>>>>> upstream/master
            }
        }
    }
}

TO_DO_BATTLE_TEST("Defog doesn't remove terrain (Gen 4-7)");
SINGLE_BATTLE_TEST("Defog removes terrain (Gen 8+)")
{
    u16 move;

    PARAMETRIZE { move = MOVE_PSYCHIC_TERRAIN; }
    PARAMETRIZE { move = MOVE_ELECTRIC_TERRAIN; }
    PARAMETRIZE { move = MOVE_MISTY_TERRAIN; }
    PARAMETRIZE { move = MOVE_GRASSY_TERRAIN; }
    GIVEN {
<<<<<<< HEAD
        ASSUME(B_DEFOG_CLEARS_TERRAIN >= GEN_8);
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
=======
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, MOVE_DEFOG); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DEFOG, opponent);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's evasiveness fell!");
        if (move == MOVE_PSYCHIC_TERRAIN) {
            MESSAGE("The weirdness disappeared from the battlefield.");
=======
        if (B_DEFOG_EFFECT_CLEARING >= GEN_8) {
            if (move == MOVE_PSYCHIC_TERRAIN) {
                MESSAGE("The weirdness disappeared from the battlefield!");
            }
            else if (move == MOVE_ELECTRIC_TERRAIN) {
                MESSAGE("The electricity disappeared from the battlefield.");
            }
            else if (move == MOVE_MISTY_TERRAIN) {
                MESSAGE("The mist disappeared from the battlefield.");
            }
            else if (move == MOVE_GRASSY_TERRAIN) {
                MESSAGE("The grass disappeared from the battlefield.");
            }
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RESTORE_BG, player);
        } else {
            NONE_OF {
                MESSAGE("The weirdness disappeared from the battlefield!");
                MESSAGE("The electricity disappeared from the battlefield.");
                MESSAGE("The mist disappeared from the battlefield.");
                MESSAGE("The grass disappeared from the battlefield.");
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RESTORE_BG, player);
            }
>>>>>>> upstream/master
        }
    }
}

TO_DO_BATTLE_TEST("Defog removes Toxic Spikes from target's side");
TO_DO_BATTLE_TEST("Defog doesn't remove Toxic Spikes from user's side (Gen 4-5)");
SINGLE_BATTLE_TEST("Defog removes Toxic Spikes from user's side (Gen 6+)")
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC_SPIKES); MOVE(opponent, move); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC_SPIKES, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
<<<<<<< HEAD
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Lopmonx's evasiveness fell!");
=======
        if (move == MOVE_DEFOG && B_DEFOG_EFFECT_CLEARING >= GEN_6)
>>>>>>> upstream/master
            MESSAGE("The poison spikes disappeared from the ground around the opposing team!");
        // Switch happens
<<<<<<< HEAD
        MESSAGE("2 sent out Lopmonx!");
        if (move != MOVE_DEFOG) {
            MESSAGE("Foe Lopmonx was poisoned!");
=======
        MESSAGE("2 sent out Lopmonx!");
        if (move != MOVE_DEFOG || B_DEFOG_EFFECT_CLEARING <= GEN_5) {
            MESSAGE("The opposing Lopmonx was poisoned!");
>>>>>>> upstream/master
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            STATUS_ICON(opponent, poison: TRUE);
        }
        else {
            NONE_OF {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx was poisoned!");
=======
                MESSAGE("The opposing Lopmonx was poisoned!");
>>>>>>> upstream/master
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
                STATUS_ICON(opponent, poison: TRUE);
            }
        }
    }
}

TO_DO_BATTLE_TEST("Defog doesn't remove Aurora Veil from the user's side");
DOUBLE_BATTLE_TEST("Defog removes Aurora Veil from target's side", s16 damagePhysical, s16 damageSpecial)
{
    u16 move;

    PARAMETRIZE { move = MOVE_DEFOG; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HAIL].effect == EFFECT_HAIL);
        ASSUME(gSpeciesInfo[SPECIES_EYESMON].types[0] == TYPE_ICE);
        PLAYER(SPECIES_EYESMON) { Speed(4); }
        PLAYER(SPECIES_EYESMON) { Speed(3); }
        OPPONENT(SPECIES_EYESMON) { Speed(2); }
        OPPONENT(SPECIES_EYESMON) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); MOVE(playerRight, MOVE_AURORA_VEIL); }
        TURN { MOVE(opponentLeft, move, target: playerLeft); }
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(opponentRight, MOVE_GUST, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AURORA_VEIL, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, move, opponentLeft);
        if (move == MOVE_DEFOG) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
<<<<<<< HEAD
            MESSAGE("Eyesmon's evasiveness fell!");
            MESSAGE("Ally's Aurora Veil wore off!");
        }
        MESSAGE("Foe Eyesmon used Tackle!");
        HP_BAR(playerLeft, captureDamage: &results[i].damagePhysical);
        MESSAGE("Foe Eyesmon used Gust!");
=======
            MESSAGE("Eyesmon's evasiveness fell!");
            MESSAGE("Your team's Aurora Veil wore off!");
        }
        MESSAGE("The opposing Eyesmon used Tackle!");
        HP_BAR(playerLeft, captureDamage: &results[i].damagePhysical);
        MESSAGE("The opposing Eyesmon used Gust!");
>>>>>>> upstream/master
        HP_BAR(playerRight, captureDamage: &results[i].damageSpecial);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damagePhysical, Q_4_12(1.5), results[0].damagePhysical);
        EXPECT_MUL_EQ(results[1].damageSpecial, Q_4_12(1.5), results[0].damageSpecial);
    }
}

DOUBLE_BATTLE_TEST("Defog removes everything it can")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HAIL].effect == EFFECT_HAIL);
        ASSUME(gSpeciesInfo[SPECIES_EYESMON].types[0] == TYPE_ICE);
        PLAYER(SPECIES_EYESMON) { Speed(4); }
        PLAYER(SPECIES_EYESMON) { Speed(3); }
        PLAYER(SPECIES_EYESMON) { Speed(12); }
        PLAYER(SPECIES_EYESMON) { Speed(3); }
        OPPONENT(SPECIES_EYESMON) { Speed(2); }
        OPPONENT(SPECIES_EYESMON) { Speed(1); }
        OPPONENT(SPECIES_EYESMON) { Speed(1); }
        OPPONENT(SPECIES_EYESMON) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_SPIKES); MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_SPIKES); }
        TURN { SWITCH(playerLeft, 2); SWITCH(playerRight, 3); SWITCH(opponentLeft, 2); SWITCH(opponentRight, 3); }
        TURN { MOVE(playerLeft, MOVE_TOXIC_SPIKES); MOVE(playerRight, MOVE_STEALTH_ROCK); MOVE(opponentLeft, MOVE_TOXIC_SPIKES); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_HAIL); MOVE(playerRight, MOVE_AURORA_VEIL); MOVE(opponentLeft, MOVE_AURORA_VEIL); MOVE(opponentRight, MOVE_LIGHT_SCREEN); }
        TURN { MOVE(playerLeft, MOVE_REFLECT); MOVE(playerRight, MOVE_LIGHT_SCREEN); MOVE(opponentLeft, MOVE_REFLECT); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_DEFOG, target: playerLeft); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Eyesmon used Defog!");
        MESSAGE("Eyesmon is protected by MIST!");
=======
        MESSAGE("The opposing Eyesmon used Defog!");
        MESSAGE("Eyesmon is protected by the mist!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DEFOG, opponentRight);
        // Player side
        MESSAGE("Your team's Reflect wore off!");
        MESSAGE("Your team's Light Screen wore off!");
        MESSAGE("Your team's Mist wore off!");
        MESSAGE("Your team's Aurora Veil wore off!");
        MESSAGE("Your team's Safeguard wore off!");

        if (B_DEFOG_EFFECT_CLEARING >= GEN_6) {
            MESSAGE("The spikes disappeared from the ground around your team!");
            MESSAGE("The pointed stones disappeared from around your team!");
            MESSAGE("The poison spikes disappeared from the ground around your team!");
            MESSAGE("The sticky web has disappeared from the ground around your team!");

            // Opponent side
            MESSAGE("The spikes disappeared from the ground around the opposing team!");
            MESSAGE("The pointed stones disappeared from around the opposing team!");
            MESSAGE("The poison spikes disappeared from the ground around the opposing team!");
            MESSAGE("The sticky web has disappeared from the ground around the opposing team!");
        }
    }
}

SINGLE_BATTLE_TEST("Defog is used on the correct side if opposing mon is behind a substitute with Screen up")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_LIGHT_SCREEN); }
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_DEFOG); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LIGHT_SCREEN, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        MESSAGE("Lopmonx used Defog!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DEFOG, player);
        MESSAGE("The opposing Lopmonx's evasiveness fell!");
        MESSAGE("The opposing team's Light Screen wore off!");
    }
}
