#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ATTRACT) == EFFECT_ATTRACT);
    ASSUME(gSpeciesInfo[SPECIES_PUWAMON].genderRatio == MON_MALE);
    ASSUME(gSpeciesInfo[SPECIES_PURURUMON].genderRatio == MON_FEMALE);
}

SINGLE_BATTLE_TEST("Attract causes the target to become infatuated with the user if they have opposite genders")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_PUWAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ATTRACT, player);
        MESSAGE("The opposing Puwamon fell in love!");
    } THEN {
        EXPECT(opponent->status2 & STATUS2_INFATUATION);
    }
}

SINGLE_BATTLE_TEST("Attract ignores type immunity")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_ATTRACT) == TYPE_NORMAL);
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_LOOGAMON) { Gender(MON_MALE); }
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ATTRACT, player);
        MESSAGE("The opposing Loogamon fell in love!");
    } THEN {
        EXPECT(opponent->status2 & STATUS2_INFATUATION);
    }
}

SINGLE_BATTLE_TEST("Attract bypasses Substitute")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON) { Speed(90); }
        OPPONENT(SPECIES_PUWAMON) { Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ATTRACT, player);
        MESSAGE("The opposing Puwamon fell in love!");
    } THEN {
        EXPECT(opponent->status2 & STATUS2_INFATUATION);
    }
}

SINGLE_BATTLE_TEST("Attract fails if the target is already infatuated")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_PUWAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ATTRACT, player);
        MESSAGE("The opposing Puwamon fell in love!");
        MESSAGE("Pururumon used Attract!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->status2 & STATUS2_INFATUATION);
    }
}

SINGLE_BATTLE_TEST("Attract fails when used on a Pokémon of the same gender")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_PURURUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        MESSAGE("Pururumon used Attract!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(!(opponent->status2 & STATUS2_INFATUATION));
    }
}

SINGLE_BATTLE_TEST("Attract fails when used on a genderless Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_BOKOMON].genderRatio == MON_GENDERLESS);
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_BOKOMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        MESSAGE("Pururumon used Attract!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(!(opponent->status2 & STATUS2_INFATUATION));
    }
}
