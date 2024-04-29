#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dusk Mane Necrozma can Ultra Burst holding Ultranecrozium Z")
{
    GIVEN {
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, ultraBurst: TRUE); }
    } SCENE {
        MESSAGE("Bright light is about to burst out of Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, player);
        MESSAGE("Necrozma regained its true power through Ultra Burst!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_NECROZMA_ULTRA);
    }
}

DOUBLE_BATTLE_TEST("Ultra Burst's order is determined by Speed - opponent faster")
{
    GIVEN {
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_NECROZMA_DAWN_WINGS) { Item(ITEM_ULTRANECROZIUM_Z); Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, ultraBurst: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, ultraBurst: TRUE); }
    } SCENE {
        MESSAGE("Bright light is about to burst out of Foe Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, opponentLeft);
        MESSAGE("Foe Necrozma regained its true power through Ultra Burst!");
        MESSAGE("Bright light is about to burst out of Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, playerLeft);
        MESSAGE("Necrozma regained its true power through Ultra Burst!");
    }
}

DOUBLE_BATTLE_TEST("Ultra Burst's order is determined by Speed - player faster")
{
    GIVEN {
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); Speed(5); }
        PLAYER(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(SPECIES_NECROZMA_DAWN_WINGS) { Item(ITEM_ULTRANECROZIUM_Z); Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, ultraBurst: TRUE); MOVE(playerLeft, MOVE_CELEBRATE, ultraBurst: TRUE); }
    } SCENE {
        MESSAGE("Bright light is about to burst out of Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, playerLeft);
        MESSAGE("Necrozma regained its true power through Ultra Burst!");
        MESSAGE("Bright light is about to burst out of Foe Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, opponentLeft);
        MESSAGE("Foe Necrozma regained its true power through Ultra Burst!");
    }
}

SINGLE_BATTLE_TEST("Ultra Burst affects turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); Speed(105); }
        OPPONENT(SPECIES_LOPMONX) { Speed(106); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, ultraBurst: TRUE); }
    } SCENE {
        MESSAGE("Necrozma used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
    } THEN {
        ASSUME(player->speed == 263);
    }
}

DOUBLE_BATTLE_TEST("Ultra Burst happens after switching, but before Focus Punch-like Moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FOCUS_PUNCH].effect == EFFECT_FOCUS_PUNCH);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(opponentRight, 2); MOVE(playerRight, MOVE_FOCUS_PUNCH, ultraBurst: TRUE, target: opponentLeft); MOVE(playerLeft, MOVE_FOCUS_PUNCH, target: opponentLeft); }
        TURN {}
    } SCENE {
        MESSAGE("2 withdrew Lopmonx!");
        MESSAGE("2 sent out Lopmonx!");

        MESSAGE("Bright light is about to burst out of Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, playerRight);
        MESSAGE("Necrozma regained its true power through Ultra Burst!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerRight);
        MESSAGE("Necrozma is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerLeft);
        MESSAGE("Lopmonx is tightening its focus!");
    }
}

SINGLE_BATTLE_TEST("Ultra Burst and Mega Evolution can happen on the same turn")
{
    GIVEN {
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); Speed(3); }
        OPPONENT(SPECIES_ARCADIAMON_CHAMPION) { Item(ITEM_ARCADIAMON_CHAMPIONITE); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, ultraBurst: TRUE); MOVE(opponent, MOVE_CELEBRATE, megaEvolve: TRUE); }
    } SCENE {
        MESSAGE("Bright light is about to burst out of Necrozma!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, player);
        MESSAGE("Necrozma regained its true power through Ultra Burst!");

        MESSAGE("Foe Arcadiamon_champion's Arcadiamon_championite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("Foe Arcadiamon_champion has Mega Evolved into Mega Arcadiamon_champion!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_NECROZMA_ULTRA);
        EXPECT_EQ(opponent->species, SPECIES_ARCADIAMON_CHAMPION_MEGA);
    }
}
