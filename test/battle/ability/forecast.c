#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon in weather from an opponent's move")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SUNNY_DAY; }
    PARAMETRIZE { move = MOVE_RAIN_DANCE; }
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        switch (move)
        {
        case MOVE_SUNNY_DAY:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case MOVE_RAIN_DANCE:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_RAINY);
            break;
        case MOVE_HAIL:
        case MOVE_SNOWSCAPE:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SNOWY);
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon in weather from its own move")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SUNNY_DAY; }
    PARAMETRIZE { move = MOVE_RAIN_DANCE; }
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        switch (move)
        {
        case MOVE_SUNNY_DAY:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case MOVE_RAIN_DANCE:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_RAINY);
            break;
        case MOVE_HAIL:
        case MOVE_SNOWSCAPE:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SNOWY);
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Forecast transforms Dolphmon in weather from a partner's move")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SUNNY_DAY; }
    PARAMETRIZE { move = MOVE_RAIN_DANCE; }
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, move); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, playerLeft);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        switch (move)
        {
        case MOVE_SUNNY_DAY:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case MOVE_RAIN_DANCE:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_RAINY);
            break;
        case MOVE_HAIL:
        case MOVE_SNOWSCAPE:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_SNOWY);
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Forecast transforms all Dolphmons present in weather")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SUNNY_DAY; }
    PARAMETRIZE { move = MOVE_RAIN_DANCE; }
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
    } WHEN {
        TURN { MOVE(playerRight, move); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, playerLeft);
        MESSAGE("Dolphmon transformed!");
        ABILITY_POPUP(opponentLeft, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, opponentLeft);
<<<<<<< HEAD
        MESSAGE("Foe Dolphmon transformed!");
=======
        MESSAGE("The opposing Castform transformed!");
>>>>>>> upstream/master
        ABILITY_POPUP(playerRight, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, playerRight);
        MESSAGE("Dolphmon transformed!");
        ABILITY_POPUP(opponentRight, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, opponentRight);
<<<<<<< HEAD
        MESSAGE("Foe Dolphmon transformed!");
=======
        MESSAGE("The opposing Castform transformed!");
>>>>>>> upstream/master
    } THEN {
        switch (move)
        {
        case MOVE_SUNNY_DAY:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_SUNNY);
            EXPECT_EQ(playerRight->species, SPECIES_DOLPHMON_SUNNY);
            EXPECT_EQ(opponentLeft->species, SPECIES_DOLPHMON_SUNNY);
            EXPECT_EQ(opponentRight->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case MOVE_RAIN_DANCE:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_RAINY);
            EXPECT_EQ(playerRight->species, SPECIES_DOLPHMON_RAINY);
            EXPECT_EQ(opponentLeft->species, SPECIES_DOLPHMON_RAINY);
            EXPECT_EQ(opponentRight->species, SPECIES_DOLPHMON_RAINY);
            break;
        case MOVE_HAIL:
        case MOVE_SNOWSCAPE:
            EXPECT_EQ(playerLeft->species, SPECIES_DOLPHMON_SNOWY);
            EXPECT_EQ(playerRight->species, SPECIES_DOLPHMON_SNOWY);
            EXPECT_EQ(opponentLeft->species, SPECIES_DOLPHMON_SNOWY);
            EXPECT_EQ(opponentRight->species, SPECIES_DOLPHMON_SNOWY);
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon in weather from an ability")
{
    u32 species, ability;
    PARAMETRIZE { species = SPECIES_GATOMON_X; ability = ABILITY_DRIZZLE; }
    PARAMETRIZE { species = SPECIES_GEKOMON; ability = ABILITY_DROUGHT; }
    PARAMETRIZE { species = SPECIES_ABOMASNOW; ability = ABILITY_SNOW_WARNING; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        switch (ability)
        {
        case ABILITY_DROUGHT:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case ABILITY_DRIZZLE:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_RAINY);
            break;
        case ABILITY_SNOW_WARNING:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SNOWY);
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon in primal weather")
{
    u32 species, item, ability;
    PARAMETRIZE { species = SPECIES_GATOMON_X; ability = ABILITY_PRIMORDIAL_SEA; item = ITEM_BLUE_ORB; }
    PARAMETRIZE { species = SPECIES_GEKOMON; ability = ABILITY_DESOLATE_LAND; item = ITEM_RED_ORB; }
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        switch (ability)
        {
        case ABILITY_DESOLATE_LAND:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_SUNNY);
            break;
        case ABILITY_PRIMORDIAL_SEA:
            EXPECT_EQ(player->species, SPECIES_DOLPHMON_RAINY);
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back to normal when weather expires")
{
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        // transforms
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        // back to normal
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_NORMAL);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back to normal when Sandstorm is active")
{
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
        // transforms
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        // back to normal
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_NORMAL);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back to normal under Air Lock")
=======
SINGLE_BATTLE_TEST("Forecast transforms Castform back to normal under Cloud Nine/Air Lock")
>>>>>>> upstream/master
{
    u32 species = 0, ability = 0;
    PARAMETRIZE { species = SPECIES_CHICCIMON;  ability = ABILITY_CLOUD_NINE; }
    PARAMETRIZE { species = SPECIES_RAYQUAZA; ability = ABILITY_AIR_LOCK; }
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GEOGREYMON);
=======
        PLAYER(SPECIES_CASTFORM_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        // transforms
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        // back to normal
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_NORMAL);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        // turn 1
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, player);
        // turn 2
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_RAINY);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon when weather changes")
{
    GIVEN {
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
    } SCENE {
        // transforms
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        // transforms again
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_SUNNY);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back to normal when its ability is suppressed")
{
    GIVEN {
        ASSUME(B_WEATHER_FORMS >= GEN_5);
        PLAYER(SPECIES_DOLPHMON_NORMAL) { Ability(ABILITY_FORECAST); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); }
        TURN { MOVE(opponent, MOVE_GASTRO_ACID); }
    } SCENE {
        // transforms in sun
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        // back to normal
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_DOLPHMON_NORMAL);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back when it switches out")
{
    GIVEN {
        ASSUME(B_WEATHER_FORMS >= GEN_5);
        PLAYER(SPECIES_DOLPHMON) { Ability(ABILITY_FORECAST); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        // transforms in sun
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
<<<<<<< HEAD
        MESSAGE("Dolphmon transformed!");
        MESSAGE("Dolphmon, that's enough! Come back!");
=======
        MESSAGE("Castform transformed!");
        SWITCH_OUT_MESSAGE("Castform");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), SPECIES_DOLPHMON);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Dolphmon back when it uses a move that forces it to switch out")
{
    GIVEN {
        ASSUME(B_WEATHER_FORMS >= GEN_5);
        PLAYER(SPECIES_DOLPHMON) { Ability(ABILITY_FORECAST); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); }
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 1); }
    } SCENE {
        // transforms in sun
        ABILITY_POPUP(player, ABILITY_FORECAST);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Dolphmon transformed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
    } THEN {
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), SPECIES_DOLPHMON);
    }
}

SINGLE_BATTLE_TEST("Forecast transforms Castform when Cloud Nine ability user leaves the field")
{
    u32 species = 0, ability = 0;
    PARAMETRIZE { species = SPECIES_CHICCIMON;  ability = ABILITY_CLOUD_NINE; }
    PARAMETRIZE { species = SPECIES_RAYQUAZA; ability = ABILITY_AIR_LOCK; }

    GIVEN {
        PLAYER(SPECIES_CASTFORM) { Ability(ABILITY_FORECAST); }
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        MESSAGE("2 sent out Lopmonx!");
        ABILITY_POPUP(player, ABILITY_FORECAST);
        MESSAGE("Castform transformed!");
    }
}
