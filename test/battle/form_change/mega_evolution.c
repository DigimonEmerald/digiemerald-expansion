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
        OPPONENT(SPECIES_ARCADIAMON_CHAMPION) { Item(ITEM_ARCADIAMON_CHAMPIONITE); Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Foe Arcadiamon_champion's Arcadiamon_championite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("Foe Arcadiamon_champion has Mega Evolved into Mega Arcadiamon_champion!");
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
        OPPONENT(SPECIES_ARCADIAMON_CHAMPION) { Item(ITEM_ARCADIAMON_CHAMPIONITE); Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Bommon's Bommonite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerLeft);
        MESSAGE("Bommon has Mega Evolved into Mega Bommon!");
        MESSAGE("Foe Arcadiamon_champion's Arcadiamon_championite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("Foe Arcadiamon_champion has Mega Evolved into Mega Arcadiamon_champion!");
    }
}

SINGLE_BATTLE_TEST("Geogreymon can Mega Evolve knowing Dragon Ascent")
{
    GIVEN {
        PLAYER(SPECIES_GEOGREYMON) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Geogreymon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Geogreymon has Mega Evolved into Mega Geogreymon!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEOGREYMON_MEGA);
    }
}

SINGLE_BATTLE_TEST("Mega Evolution affects turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        PLAYER(SPECIES_ARCADIAMON_CHAMPION) { Item(ITEM_ARCADIAMON_CHAMPIONITE); Speed(105); }
        OPPONENT(SPECIES_LOPMONX) { Speed(106); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Arcadiamon_champion used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
    } THEN {
        ASSUME(player->speed == 205);
    }
}

SINGLE_BATTLE_TEST("Abilities replaced by Mega Evolution do not affect turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        ASSUME(gSpeciesInfo[SPECIES_BLGARGOMON_MEGA].abilities[0] != ABILITY_STALL
            && gSpeciesInfo[SPECIES_BLGARGOMON_MEGA].abilities[1] != ABILITY_STALL);
        PLAYER(SPECIES_BLGARGOMON) { Item(ITEM_SABLENITE); Ability(ABILITY_STALL); Speed(105); }
        OPPONENT(SPECIES_LOPMONX) { Speed(44); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Blgargomon used Celebrate!");
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
        OPPONENT(SPECIES_EXVEEMON);
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
        PLAYER(SPECIES_GEOGREYMON) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); Speed(3); }
        OPPONENT(SPECIES_ARCADIAMON_CHAMPION) { Item(ITEM_ARCADIAMON_CHAMPIONITE); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, megaEvolve: TRUE); MOVE(opponent, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Geogreymon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Geogreymon has Mega Evolved into Mega Geogreymon!");

        MESSAGE("Foe Arcadiamon_champion's Arcadiamon_championite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("Foe Arcadiamon_champion has Mega Evolved into Mega Arcadiamon_champion!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_GEOGREYMON_MEGA);
        EXPECT_EQ(opponent->species, SPECIES_ARCADIAMON_CHAMPION_MEGA);
    }
}

SINGLE_BATTLE_TEST("Mega Evolved Pokemon do not change abilities after fainting")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CRUNCH].makesContact == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[0] != ABILITY_ROUGH_SKIN);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[1] != ABILITY_ROUGH_SKIN);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[2] != ABILITY_ROUGH_SKIN);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GARCHOMP) { Ability(ABILITY_ROUGH_SKIN); Item(ITEM_GARCHOMPITE); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_CRUNCH); MOVE(opponent, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, player);
        MESSAGE("Foe Garchomp fainted!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_ROUGH_SKIN);
            MESSAGE("Lopmonx was hurt by Foe Garchomp's Rough Skin!");
            HP_BAR(player);
        }
    }
}
