#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SPIKES) == EFFECT_SPIKES);
}

SINGLE_BATTLE_TEST("Spikes damage on switch in")
{
    u32 layers;
    u32 divisor;
    PARAMETRIZE { layers = 1; divisor = 8; }
    PARAMETRIZE { layers = 2; divisor = 6; }
    PARAMETRIZE { layers = 3; divisor = 4; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        u32 count;
        for (count = 0; count < layers; ++count) {
            TURN { MOVE(player, MOVE_SPIKES); }
        }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        u32 count;
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        for (count = 0; count < layers; ++count) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, player);
            MESSAGE("Spikes were scattered on the ground all around the opposing team!");
        }
        MESSAGE("2 sent out Exveemon!");
        HP_BAR(opponent, damage: maxHP / divisor);
        MESSAGE("The opposing Exveemon was hurt by the spikes!");
    }
}

SINGLE_BATTLE_TEST("Spikes fails after 3 layers")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPIKES); }
        TURN { MOVE(player, MOVE_SPIKES); }
        TURN { MOVE(player, MOVE_SPIKES); }
        TURN { MOVE(player, MOVE_SPIKES); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, player);
        MESSAGE("Spikes were scattered on the ground all around the opposing team!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, player);
        MESSAGE("Spikes were scattered on the ground all around the opposing team!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, player);
        MESSAGE("Spikes were scattered on the ground all around the opposing team!");
        MESSAGE("Lopmonx used Spikes!");
        MESSAGE("But it failed!");
        MESSAGE("2 sent out Exveemon!");
        HP_BAR(opponent, damage: maxHP / 4);
        MESSAGE("The opposing Exveemon was hurt by the spikes!");
    }
}

SINGLE_BATTLE_TEST("Spikes damage on subsequent switch ins")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPIKES); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        s32 maxHP0 = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        s32 maxHP1 = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        MESSAGE("2 sent out Exveemon!");
        HP_BAR(opponent, damage: maxHP1 / 8);
        MESSAGE("The opposing Exveemon was hurt by the spikes!");
        MESSAGE("2 sent out Lopmonx!");
        HP_BAR(opponent, damage: maxHP0 / 8);
        MESSAGE("The opposing Lopmonx was hurt by the spikes!");
    }
}

SINGLE_BATTLE_TEST("Spikes do not damage airborne Pokemon")
{
    u32 species = SPECIES_LOPMONX;
    u32 item = ITEM_NONE;
    u32 move1 = MOVE_CELEBRATE;
    u32 move2 = MOVE_CELEBRATE;
    bool32 airborne;

    ASSUME(gSpeciesInfo[SPECIES_KETOMON].types[1] == TYPE_FLYING);
    PARAMETRIZE { species = SPECIES_KETOMON; airborne = TRUE; }
    PARAMETRIZE { species = SPECIES_KETOMON; item = ITEM_IRON_BALL; airborne = FALSE; }
    PARAMETRIZE { species = SPECIES_KETOMON; move1 = MOVE_GRAVITY; airborne = FALSE; }
    PARAMETRIZE { species = SPECIES_KETOMON; move1 = MOVE_INGRAIN; airborne = FALSE; }

    ASSUME(gSpeciesInfo[SPECIES_LOPMON].abilities[0] == ABILITY_LEVITATE);
    PARAMETRIZE { species = SPECIES_LOPMON; airborne = TRUE; }
    PARAMETRIZE { species = SPECIES_LOPMON; item = ITEM_IRON_BALL; airborne = FALSE; }
    PARAMETRIZE { species = SPECIES_LOPMON; move1 = MOVE_GRAVITY; airborne = FALSE; }
    PARAMETRIZE { species = SPECIES_LOPMON; move1 = MOVE_INGRAIN; airborne = FALSE; }

    PARAMETRIZE { move1 = MOVE_MAGNET_RISE; airborne = TRUE; }
    PARAMETRIZE { move1 = MOVE_MAGNET_RISE; item = ITEM_IRON_BALL; airborne = FALSE; }
    PARAMETRIZE { move1 = MOVE_MAGNET_RISE; move2 = MOVE_GRAVITY; airborne = FALSE; }
    // Magnet Rise fails under Gravity.
    // Magnet Rise fails under Ingrain and vice-versa.

    PARAMETRIZE { item = ITEM_AIR_BALLOON; airborne = TRUE; }
    PARAMETRIZE { item = ITEM_AIR_BALLOON; move1 = MOVE_GRAVITY; airborne = FALSE; }
    PARAMETRIZE { item = ITEM_AIR_BALLOON; move1 = MOVE_INGRAIN; airborne = FALSE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPIKES); MOVE(opponent, move1); }
        TURN { MOVE(opponent, move2); }
        TURN { MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        if (airborne) {
            NOT HP_BAR(opponent, damage: maxHP / 8);
        } else {
            HP_BAR(opponent, damage: maxHP / 8);
        }
    }
}
