#include "global.h"
#include "test/battle.h"


ASSUMPTIONS
{
    ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) > 0);
}

DOUBLE_BATTLE_TEST("Dazzling, Queenly Majesty and Armor Tail protect the user from priority moves")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_BRUXISH; ability = ABILITY_DAZZLING; }
    PARAMETRIZE { species = SPECIES_FARIGIRAF; ability = ABILITY_ARMOR_TAIL; }
    PARAMETRIZE { species = SPECIES_TSAREENA; ability = ABILITY_QUEENLY_MAJESTY; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ability);
        MESSAGE("Lopmonx cannot use Quick Attack!");
    }
}

DOUBLE_BATTLE_TEST("Dazzling, Queenly Majesty and Armor Tail protect users partner from priority moves")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_BRUXISH; ability = ABILITY_DAZZLING; }
    PARAMETRIZE { species = SPECIES_FARIGIRAF; ability = ABILITY_ARMOR_TAIL; }
    PARAMETRIZE { species = SPECIES_TSAREENA; ability = ABILITY_QUEENLY_MAJESTY; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentRight); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ability);
        MESSAGE("Lopmonx cannot use Quick Attack!");
    }
}

DOUBLE_BATTLE_TEST("Dazzling, Queenly Majesty and Armor Tail don't protect the user from negative priority")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_BRUXISH; ability = ABILITY_DAZZLING; }
    PARAMETRIZE { species = SPECIES_FARIGIRAF; ability = ABILITY_ARMOR_TAIL; }
    PARAMETRIZE { species = SPECIES_TSAREENA; ability = ABILITY_QUEENLY_MAJESTY; }

    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_AVALANCHE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AVALANCHE, playerLeft);
        NOT ABILITY_POPUP(opponentLeft, ability);
    }
}

SINGLE_BATTLE_TEST("Dazzling, Queenly Majesty and Armor Tail protect from all multi hit hits with one activation")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_BRUXISH; ability = ABILITY_DAZZLING; }
    PARAMETRIZE { species = SPECIES_FARIGIRAF; ability = ABILITY_ARMOR_TAIL; }
    PARAMETRIZE { species = SPECIES_TSAREENA; ability = ABILITY_QUEENLY_MAJESTY; }

    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_SHURIKEN); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
        ABILITY_POPUP(opponent, ability);
        NONE_OF {
            ABILITY_POPUP(opponent, ability);
            ABILITY_POPUP(opponent, ability);
            ABILITY_POPUP(opponent, ability);
            ABILITY_POPUP(opponent, ability);
        }
    }
}
