#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Teraform Zero clears weather and terrain upon activation")
{
    GIVEN {
        PLAYER(SPECIES_TERAPAGOS_TERASTAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GATOMON_X) {Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_TAPU_KOKO) {Ability(ABILITY_ELECTRIC_SURGE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_TERAFORM_ZERO);
        MESSAGE("The rain stopped.");
        MESSAGE("The electricity disappeared from the battlefield.");
    }
}

DOUBLE_BATTLE_TEST("Teraform Zero can be supressed")
{
    GIVEN {
        PLAYER(SPECIES_TERAPAGOS_TERASTAL);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ARMADILMON) {Ability(ABILITY_NEUTRALIZING_GAS); }
        OPPONENT(SPECIES_GATOMON_X) {Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_TAPU_KOKO) {Ability(ABILITY_ELECTRIC_SURGE); }
    } WHEN {
        TURN { SWITCH(playerRight, 2); MOVE(playerLeft, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_NEUTRALIZING_GAS);
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The electricity disappeared from the battlefield.");
        }
    }
}

SINGLE_BATTLE_TEST("Teraform Zero can be replaced")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WORRY_SEED) == EFFECT_WORRY_SEED);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_TERAPAGOS);
        OPPONENT(SPECIES_WHIMSICOTT) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_WORRY_SEED); MOVE(player, MOVE_REST, gimmick: GIMMICK_TERA); }
    } SCENE {
        MESSAGE("The opposing Whimsicott used Worry Seed!");
        MESSAGE("Terapagos acquired Insomnia!");
        MESSAGE("Terapagos used Rest!");
        ABILITY_POPUP(player, ABILITY_INSOMNIA);
        MESSAGE("Terapagos stayed awake using its Insomnia!");
    }
}

SINGLE_BATTLE_TEST("Teraform Zero cannot be swapped")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SKILL_SWAP) == EFFECT_SKILL_SWAP);
        PLAYER(SPECIES_TERAPAGOS);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); MOVE(opponent, MOVE_SKILL_SWAP); }
    } SCENE {
        MESSAGE("The opposing Lopmonx used Skill Swap!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Teraform Zero cannot be copied")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ROLE_PLAY) == EFFECT_ROLE_PLAY);
        PLAYER(SPECIES_TERAPAGOS);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); MOVE(opponent, MOVE_ROLE_PLAY); }
    } SCENE {
        MESSAGE("The opposing Lopmonx used Role Play!");
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Teraform Zero shouldn't cause Neutralizing Gas to show it's popup when trying to activate")
{
    GIVEN {
        PLAYER(SPECIES_TERAPAGOS_TERASTAL);
        PLAYER(SPECIES_EXERMON) {Ability(ABILITY_PRESSURE); }
        PLAYER(SPECIES_ARMADILMON) {Ability(ABILITY_NEUTRALIZING_GAS); }
        OPPONENT(SPECIES_GATOMON_X) {Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_TAPU_KOKO) {Ability(ABILITY_ELECTRIC_SURGE); }
    } WHEN {
        TURN {  SWITCH(playerRight, 2); MOVE(playerLeft, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); }
    } SCENE {
        MESSAGE("Terapagos is storing energy!");
        MESSAGE("Terapagos terastallized into the Stellar type!");
        NOT ABILITY_POPUP(playerRight, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Terapagos used Celebrate!");
    }
}
