#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Moxie/Chilling Neigh raises Attack by one stage after directly causing a Pokemon to faint")
{
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_FROGMON;         ability = ABILITY_MOXIE;            abilityPopUp = ABILITY_MOXIE;          }
    PARAMETRIZE { species = SPECIES_GLASTRIER;         ability = ABILITY_CHILLING_NEIGH;   abilityPopUp = ABILITY_CHILLING_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_ICE; ability = ABILITY_AS_ONE_ICE_RIDER; abilityPopUp = ABILITY_CHILLING_NEIGH; }
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_EARTHQUAKE) == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(species) { Ability(ability); }
        PLAYER(SPECIES_EXVEEMON_VIRUS) { HP(1); }
        OPPONENT(SPECIES_EYESMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); SEND_OUT(opponentLeft, 2);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, playerLeft);
        MESSAGE("The opposing Eyesmon fainted!");
        MESSAGE("Exveemon_virus fainted!");
        MESSAGE("The opposing Hopmon fainted!");
        ABILITY_POPUP(playerLeft, abilityPopUp);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        if (species == SPECIES_FROGMON)
            MESSAGE("Frogmon's Attack drastically rose!");
        else if (species == SPECIES_GLASTRIER)
            MESSAGE("Glastrier's Attack drastically rose!");
        else
            MESSAGE("Calyrex's Attack drastically rose!");
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 3);
    }
}

DOUBLE_BATTLE_TEST("Moxie/Chilling Neigh does not trigger if Pokemon faint to indirect damage or damage from other Pokemon")
{
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_FROGMON;         ability = ABILITY_MOXIE;            abilityPopUp = ABILITY_MOXIE;          }
    PARAMETRIZE { species = SPECIES_GLASTRIER;         ability = ABILITY_CHILLING_NEIGH;   abilityPopUp = ABILITY_CHILLING_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_ICE; ability = ABILITY_AS_ONE_ICE_RIDER; abilityPopUp = ABILITY_CHILLING_NEIGH; }
    GIVEN {
        PLAYER(species) { Ability(ability); }
        PLAYER(SPECIES_EXVEEMON_VIRUS) { HP(1); Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_EYESMON) { HP(1); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_QUICK_ATTACK, target: opponentRight); SEND_OUT(opponentLeft, 2);  }
    } SCENE {
        int i;

        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, playerRight);
        for (i = 0; i < 3; i++) {
            ONE_OF {
                MESSAGE("Exveemon_virus fainted!");
                MESSAGE("The opposing Eyesmon fainted!");
                MESSAGE("The opposing Hopmon fainted!");
            }
            NONE_OF {
                ABILITY_POPUP(playerLeft, abilityPopUp);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
                MESSAGE("Frogmon's Moxie raised its Attack!");
                MESSAGE("Glastrier's Chilling Neigh raised its Attack!");
                MESSAGE("Calyrex's Chilling Neigh raised its Attack!");
            }
        }
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Moxie/Chilling Neigh does not trigger when already at maximum Attack stage")
{
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_FROGMON;         ability = ABILITY_MOXIE;            abilityPopUp = ABILITY_MOXIE;          }
    PARAMETRIZE { species = SPECIES_GLASTRIER;         ability = ABILITY_CHILLING_NEIGH;   abilityPopUp = ABILITY_CHILLING_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_ICE; ability = ABILITY_AS_ONE_ICE_RIDER; abilityPopUp = ABILITY_CHILLING_NEIGH; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_BELLY_DRUM) == EFFECT_BELLY_DRUM);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_EXVEEMON_VIRUS) { HP(1); }
        OPPONENT(SPECIES_EXVEEMON_VIRUS);
    } WHEN {
        TURN { MOVE(player, MOVE_BELLY_DRUM); }
        TURN { MOVE(player, MOVE_QUICK_ATTACK); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BELLY_DRUM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        if (species == SPECIES_FROGMON)
            MESSAGE("Frogmon cut its own HP and maximized its Attack!");
        else if (species == SPECIES_GLASTRIER)
            MESSAGE("Glastrier cut its own HP and maximized its Attack!");
        else
            MESSAGE("Calyrex cut its own HP and maximized its Attack!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        MESSAGE("The opposing Exveemon_virus fainted!");
        NONE_OF {
            ABILITY_POPUP(player, abilityPopUp);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Frogmon's Moxie raised its Attack!");
            MESSAGE("Glastrier's Chilling Neigh raised its Attack!");
            MESSAGE("Calyrex's Chilling Neigh raised its Attack!");
        }
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], MAX_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Moxie/Chilling Neigh does not increase damage done by the same move that causes another Pokemon to faint")
{
    s16 damage[2];
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_FROGMON;         ability = ABILITY_MOXIE;            abilityPopUp = ABILITY_MOXIE;          }
    PARAMETRIZE { species = SPECIES_GLASTRIER;         ability = ABILITY_CHILLING_NEIGH;   abilityPopUp = ABILITY_CHILLING_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_ICE;       ability = ABILITY_AS_ONE_ICE_RIDER; abilityPopUp = ABILITY_CHILLING_NEIGH; }

    GIVEN {
        ASSUME(GetMoveTarget(MOVE_EARTHQUAKE) == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(species) { Ability(ability); }
        PLAYER(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_EYESMON);
        OPPONENT(SPECIES_EYESMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage[0]);
        HP_BAR(playerRight);
        HP_BAR(opponentRight, captureDamage: &damage[1]);
        MESSAGE("Hopmon fainted!");
        ABILITY_POPUP(playerLeft, abilityPopUp);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        if (species == SPECIES_FROGMON)
            MESSAGE("Frogmon's Attack rose!");
        else if (species == SPECIES_GLASTRIER)
            MESSAGE("Glastrier's Attack rose!");
        else
            MESSAGE("Calyrex's Attack rose!");
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(damage[0], damage[1]);
    }
}
