#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Regenerator heals 1/3 of max HP upon switching out")
{
    u32 currHP;
    PARAMETRIZE { currHP = 1; }
    PARAMETRIZE { currHP = 2; }
    PARAMETRIZE { currHP = 3; }
    GIVEN {
        PLAYER(SPECIES_PICKMON_SILVER) { Ability(ABILITY_REGENERATOR); HP(currHP); }
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Pickmon_silver");
        SEND_IN_MESSAGE("Lopmon_x");
        SWITCH_OUT_MESSAGE("Lopmon_x");
        SEND_IN_MESSAGE("Pickmon_silver");
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP / 3 + currHP);
    }
}

SINGLE_BATTLE_TEST("Regenerator heals 1/3 of max HP upon switching out but doesn't surpass max HP")
{
    u32 currHP;
    PARAMETRIZE { currHP = 5; }
    PARAMETRIZE { currHP = 4; }
    PARAMETRIZE { currHP = 3; }
    PARAMETRIZE { currHP = 2; }
    PARAMETRIZE { currHP = 1; }
    GIVEN {
        PLAYER(SPECIES_PICKMON_SILVER) { Ability(ABILITY_REGENERATOR); HP(currHP); MaxHP(5); }
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Pickmon_silver");
        SEND_IN_MESSAGE("Lopmon_x");
        SWITCH_OUT_MESSAGE("Lopmon_x");
        SEND_IN_MESSAGE("Pickmon_silver");
    } THEN {
        EXPECT_LE(player->hp, player->maxHP);
    }
}
