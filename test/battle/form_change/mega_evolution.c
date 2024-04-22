#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Bommon can Mega Evolve holding Bommonite")
{
    GIVEN {
        PLAYER(SPECIES_BOMMON) { Item(ITEM_BOMMONITE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Bommon's Bommonite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Bommon has Mega Evolved into Mega Bommon!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_BOMMON_MEGA);
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution's order is determined by Speed - opponent faster")
{
    GIVEN {
        PLAYER(SPECIES_BOMMON) { Item(ITEM_BOMMONITE); Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Foe Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("Foe Gardevoir has Mega Evolved into Mega Gardevoir!");
        MESSAGE("Bommon's Bommonite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerLeft);
        MESSAGE("Bommon has Mega Evolved into Mega Bommon!");
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution's order is determined by Speed - player faster")
{
    GIVEN {
        PLAYER(SPECIES_BOMMON) { Item(ITEM_BOMMONITE); Speed(5); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Bommon's Bommonite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerLeft);
        MESSAGE("Bommon has Mega Evolved into Mega Bommon!");
        MESSAGE("Foe Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("Foe Gardevoir has Mega Evolved into Mega Gardevoir!");
    }
}

SINGLE_BATTLE_TEST("Rayquaza can Mega Evolve knowing Dragon Ascent")
{
    GIVEN {
        PLAYER(SPECIES_RAYQUAZA) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Rayquaza!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Rayquaza has Mega Evolved into Mega Rayquaza!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_RAYQUAZA_MEGA);
    }
}

SINGLE_BATTLE_TEST("Mega Evolution affects turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        PLAYER(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(105); }
        OPPONENT(SPECIES_LOPMONX) { Speed(106); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Gardevoir used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
    } THEN {
        ASSUME(player->speed == 205);
    }
}

SINGLE_BATTLE_TEST("Abilities replaced by Mega Evolution do not affect turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        ASSUME(gSpeciesInfo[SPECIES_SABLEYE_MEGA].abilities[0] != ABILITY_STALL
            && gSpeciesInfo[SPECIES_SABLEYE_MEGA].abilities[1] != ABILITY_STALL);
        PLAYER(SPECIES_SABLEYE) { Item(ITEM_SABLENITE); Ability(ABILITY_STALL); Speed(105); }
        OPPONENT(SPECIES_LOPMONX) { Speed(44); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Sableye used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
    } THEN {
        ASSUME(player->speed == 45);
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution happens after switching, but before Focus Punch-like Moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FOCUS_PUNCH].effect == EFFECT_FOCUS_PUNCH);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_BOMMON) { Item(ITEM_BOMMONITE); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(opponentRight, 2); MOVE(playerRight, MOVE_FOCUS_PUNCH, megaEvolve: TRUE, target: opponentLeft); MOVE(playerLeft, MOVE_FOCUS_PUNCH, target: opponentLeft); }
        TURN {}
    } SCENE {
        MESSAGE("2 withdrew Lopmonx!");
        MESSAGE("2 sent out Lopmonx!");

        MESSAGE("Bommon's Bommonite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerRight);
        MESSAGE("Bommon has Mega Evolved into Mega Bommon!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerRight);
        MESSAGE("Bommon is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerLeft);
        MESSAGE("Lopmonx is tightening its focus!");
    }
}

SINGLE_BATTLE_TEST("Regular Mega Evolution and Fervent Wish Mega Evolution can happen on the same turn")
{
    GIVEN {
        PLAYER(SPECIES_RAYQUAZA) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(opponent, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Rayquaza!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Rayquaza has Mega Evolved into Mega Rayquaza!");

        MESSAGE("Foe Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("Foe Gardevoir has Mega Evolved into Mega Gardevoir!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_RAYQUAZA_MEGA);
        EXPECT_EQ(opponent->species, SPECIES_GARDEVOIR_MEGA);
    }
}
