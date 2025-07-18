#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Crit Chance: Side effected by Lucky Chant blocks critical hits")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LUCKY_CHANT].effect == EFFECT_LUCKY_CHANT);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_LUCKY_CHANT); MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Battle Armor and Shell Armor block critical hits")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_WANYAMON; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_DOBERMON_X; ability = ABILITY_BATTLE_ARMOR; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Flag ignoresTargetAbility ignores Battle Armor and Shell Armor")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_WANYAMON; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_DOBERMON_X; ability = ABILITY_BATTLE_ARMOR; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUNSTEEL_STRIKE].ignoresTargetAbility == TRUE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNSTEEL_STRIKE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNSTEEL_STRIKE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Mold Breaker, Teravolt and Turboblaze ignore Battle Armor and Shell Armor")
{
    u32 j;
    static const u32 pokemonPlayer[][2] =
    {
        {SPECIES_TYUTYUMON, ABILITY_MOLD_BREAKER},
        {SPECIES_ZEKROM, ABILITY_TERAVOLT},
        {SPECIES_KYUREM_WHITE,  ABILITY_TURBOBLAZE},
    };

    u32 speciesPlayer;
    u32 abilityPlayer;
    u32 speciesOpponent;
    u32 abilityOpponent;

    for (j = 0; j < ARRAY_COUNT(pokemonPlayer); j++)
    {
        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_WANYAMON;
            abilityOpponent = ABILITY_SHELL_ARMOR;
        }

        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_DOBERMON_X;
            abilityOpponent = ABILITY_BATTLE_ARMOR;
        }
    }

    GIVEN {
        PLAYER(speciesPlayer) { Ability(abilityPlayer); }
        OPPONENT(speciesOpponent) { Ability(abilityOpponent); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: User effected by Laser Focus causes moves to result in a critical hit")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LASER_FOCUS].effect == EFFECT_LASER_FOCUS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LASER_FOCUS); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LASER_FOCUS, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: If the target is poisoned the ability Merciless causes a move to result in a critical hit")
{
    GIVEN {
        PLAYER(SPECIES_MAREANIE) { Ability(ABILITY_MERCILESS); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_POISON); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Focus Energy increases the user's critical hit ratio by two stage")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: High crit rate increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Super Luck increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_HAGURUMON) { Ability(ABILITY_SUPER_LUCK); };
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        PLAYER(SPECIES_HAGURUMON) { Ability(ABILITY_SUPER_LUCK); };
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Scope Lens increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: High crit rate, Super Luck and Scope Lens cause the move to result in a critical hit")
{
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_LOPMONX) { Ability(ABILITY_SUPER_LUCK); Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Signature items Leek and Lucky Punch increase the critical hit ratio by 2 stages")
{
    u32 species;
    u32 item;

    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);

<<<<<<< HEAD
    PARAMETRIZE { species = SPECIES_PINAMON; item = ITEM_LEEK; }
    PARAMETRIZE { species = SPECIES_PINAMON_GALARIAN; item = ITEM_LEEK; }
=======
    PARAMETRIZE { species = SPECIES_PINAMON; item = ITEM_LEEK; }
    PARAMETRIZE { species = SPECIES_PINAMON_GALAR; item = ITEM_LEEK; }
>>>>>>> upstream/master
    PARAMETRIZE { species = SPECIES_SIRFETCHD; item = ITEM_LEEK; }
    PARAMETRIZE { species = SPECIES_BEARMON; item = ITEM_LUCKY_PUNCH; }

    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_LEEK].holdEffect == HOLD_EFFECT_LEEK);
        ASSUME(gItemsInfo[ITEM_LUCKY_PUNCH].holdEffect == HOLD_EFFECT_LUCKY_PUNCH);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Dire Hit increases a battler's critical hit chance by 2 stages")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_DIRE_HIT].battleUsage == EFFECT_ITEM_SET_FOCUS_ENERGY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_DIRE_HIT, partyIndex: 0); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx used Dire Hit to get pumped!");
        MESSAGE("Lopmonx used Scratch!");
=======
        MESSAGE("Lopmonx used the Dire Hit to get pumped!");
        MESSAGE("Lopmonx used Scratch!");
>>>>>>> upstream/master
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Focus Energy increases critical hit ratio by two")
{
    PASSES_RANDOMLY(8, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        MESSAGE("Lopmonx is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}
<<<<<<< HEAD

SINGLE_BATTLE_TEST("Dragon Cheer fails in a single battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_CHEER); }
    } SCENE {
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer increases critical hit ratio by one on non Dragon types")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Exveemon is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer increases critical hit ratio by two on Dragon types")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_ELECMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Elecmon is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Dragon Cheer fails if critical hit stage was already increased by Focus Energy")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FOCUS_ENERGY); MOVE(playerRight, MOVE_DRAGON_CHEER, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, playerLeft);
        MESSAGE("But it failed!");
    }
}
=======
>>>>>>> upstream/master
