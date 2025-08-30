#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_CAPTIVATE) == EFFECT_CAPTIVATE);
    ASSUME(gSpeciesInfo[SPECIES_PUWAMON].genderRatio == MON_MALE);
    ASSUME(gSpeciesInfo[SPECIES_PURURUMON].genderRatio == MON_FEMALE);
    ASSUME(gSpeciesInfo[SPECIES_BOKOMON].genderRatio == MON_GENDERLESS);
}

SINGLE_BATTLE_TEST("Captivate decreases the target's Sp. Attack if they're opposite gender from the user")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_PUWAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_CAPTIVATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CAPTIVATE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Puwamon's Sp. Atk harshly fell!");
    } THEN {
        EXPECT(opponent->statStages[STAT_SPATK] == 4);
    }
}

SINGLE_BATTLE_TEST("Captivate fails if the target and user share gender")
{
    GIVEN {
        PLAYER(SPECIES_PUWAMON);
        OPPONENT(SPECIES_PUWAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_CAPTIVATE); }
    } SCENE {
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->statStages[STAT_SPATK] == 6);
    }
}

SINGLE_BATTLE_TEST("Captivate fails if the target is genderless")
{
    GIVEN {
        PLAYER(SPECIES_PURURUMON);
        OPPONENT(SPECIES_BOKOMON);
    } WHEN {
        TURN { MOVE(player, MOVE_CAPTIVATE); }
    } SCENE {
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->statStages[STAT_SPATK] == 6);
    }
}

SINGLE_BATTLE_TEST("Captivate fails if the user is genderless")
{
    GIVEN {
        PLAYER(SPECIES_BOKOMON);
        OPPONENT(SPECIES_PURURUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_CAPTIVATE); }
    } SCENE {
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->statStages[STAT_SPATK] == 6);
    }
}

SINGLE_BATTLE_TEST("Captivate fails if both the user and the opponent are genderless")
{
    GIVEN {
        PLAYER(SPECIES_BOKOMON);
        OPPONENT(SPECIES_BOKOMON);
    } WHEN {
        TURN { MOVE(player, MOVE_CAPTIVATE); }
    } SCENE {
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->statStages[STAT_SPATK] == 6);
    }
}

SINGLE_BATTLE_TEST("Attract fails when used by a genderless Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_BOKOMON);
        OPPONENT(SPECIES_PURURUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        MESSAGE("Bokomon used Attract!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(!(opponent->volatiles.infatuation));
    }
}

SINGLE_BATTLE_TEST("Attract fails if both the user and the target are genderless")
{
    GIVEN {
        PLAYER(SPECIES_BOKOMON);
        OPPONENT(SPECIES_BOKOMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT); }
    } SCENE {
        MESSAGE("Bokomon used Attract!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(!(opponent->volatiles.infatuation));
    }
}
