#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_AURA_WHEEL, MOVE_EFFECT_SPD_PLUS_1) == TRUE);
    ASSUME(GetMoveEffect(MOVE_AURA_WHEEL) == EFFECT_AURA_WHEEL);
}

SINGLE_BATTLE_TEST("Aura Wheel raises Speed; fails if the user is not Morpeko")
{
    u16 species;
    PARAMETRIZE{ species = SPECIES_LOPMONX; }
    PARAMETRIZE{ species = SPECIES_MORPEKO; }
    GIVEN {
        PLAYER(species);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_AURA_WHEEL); }
    } SCENE {
        if (species != SPECIES_MORPEKO)
        {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, player);
            MESSAGE("But Lopmonx can't use the move!");
        }
        else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Morpeko's Speed rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Aura Wheel changes type depending on Morpeko's form")
{
    GIVEN {
        PLAYER(SPECIES_MORPEKO) { Ability(ABILITY_HUNGER_SWITCH); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_AURA_WHEEL); }
        TURN { MOVE(player, MOVE_AURA_WHEEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, player);
        HP_BAR(opponent);
        NOT MESSAGE("It's super effective!");
        // Turn 2 (Hangry)
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Aura Wheel can be used by Pokémon transformed into Morpeko")
{
    GIVEN {
        PLAYER(SPECIES_MORPEKO) { Moves(MOVE_AURA_WHEEL, MOVE_CELEBRATE); Ability(ABILITY_HUNGER_SWITCH); }
        OPPONENT(SPECIES_CRABMON) { Moves(MOVE_AURA_WHEEL, MOVE_CELEBRATE); Ability(ABILITY_IMPOSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_AURA_WHEEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, opponent);
    }
}

SINGLE_BATTLE_TEST("Aura Wheel can be turned into a Normal-type move after Morpeko gains Normalize")
{
    bool32 hangryMode;
    PARAMETRIZE { hangryMode = FALSE; }
    PARAMETRIZE { hangryMode = TRUE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ENTRAINMENT) == EFFECT_ENTRAINMENT);
        ASSUME(gSpeciesInfo[SPECIES_DRIMOGEMON].types[0] == TYPE_GHOST || gSpeciesInfo[SPECIES_DRIMOGEMON].types[1] == TYPE_GHOST);
        PLAYER(SPECIES_MORPEKO) { Ability(ABILITY_HUNGER_SWITCH); }
        OPPONENT(SPECIES_BLGAOGAMON) { Ability(ABILITY_NORMALIZE); }
        OPPONENT(SPECIES_DRIMOGEMON);
    } WHEN {
        if (hangryMode)
            TURN { }
        TURN { MOVE(opponent, MOVE_ENTRAINMENT); }
        TURN { MOVE(player, MOVE_AURA_WHEEL); SWITCH(opponent, 1); }
    } SCENE {
        if (hangryMode)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AURA_WHEEL, player);
            HP_BAR(opponent);
        }
    }
}
