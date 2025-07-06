#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Grim Neigh raises Sp. Attack by one stage after directly causing a Pokemon to faint")
{
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_SPECTRIER;            ability = ABILITY_GRIM_NEIGH;          abilityPopUp = ABILITY_GRIM_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_SHADOW; ability = ABILITY_AS_ONE_SHADOW_RIDER; abilityPopUp = ABILITY_GRIM_NEIGH; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DISCHARGE].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(species) { Ability(ability); }
        PLAYER(SPECIES_EXVEEMON_VIRUS) { HP(1); }
        OPPONENT(SPECIES_EYESMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DISCHARGE); SEND_OUT(opponentLeft, 2);  }
    } SCENE {
        int i;

        ANIMATION(ANIM_TYPE_MOVE, MOVE_DISCHARGE, playerLeft);
        for (i = 0; i < 3; i++) {
            ONE_OF {
                MESSAGE("Exveemon_virus fainted!");
                MESSAGE("The opposing Eyesmon fainted!");
                MESSAGE("The opposing Hopmon fainted!");
            }
            ABILITY_POPUP(playerLeft, abilityPopUp);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            if (species == SPECIES_SPECTRIER)
                MESSAGE("Spectrier's Grim Neigh raised its Sp. Atk!");
            else
                MESSAGE("Calyrex's Grim Neigh raised its Sp. Atk!");
        }
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 3);
    }
}

DOUBLE_BATTLE_TEST("Grim Neigh does not trigger if Pokemon faint to indirect damage or damage from other Pokemon")
{
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_SPECTRIER;            ability = ABILITY_GRIM_NEIGH;          abilityPopUp = ABILITY_GRIM_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_SHADOW; ability = ABILITY_AS_ONE_SHADOW_RIDER; abilityPopUp = ABILITY_GRIM_NEIGH; }
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
                MESSAGE("Frogmon's Moxie raised its Sp. Atk!");
                MESSAGE("Spectrier's Grim Neigh raised its Sp. Atk!");
                MESSAGE("Calyrex's Grim Neigh raised its Sp. Atk!");
            }
        }
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Grim Neigh does not increase damage done by the same move that causes another Pokemon to faint")
{
    s16 damage[2];
    u32 species = 0, ability = 0, abilityPopUp = 0;
    PARAMETRIZE { species = SPECIES_SPECTRIER;            ability = ABILITY_GRIM_NEIGH;          abilityPopUp = ABILITY_GRIM_NEIGH; }
    PARAMETRIZE { species = SPECIES_CALYREX_SHADOW; ability = ABILITY_AS_ONE_SHADOW_RIDER; abilityPopUp = ABILITY_GRIM_NEIGH; }

    KNOWN_FAILING; // Requires simultaneous damage implementation
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DISCHARGE].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(species) { Ability(ability); }
        PLAYER(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_EYESMON);
        OPPONENT(SPECIES_EYESMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DISCHARGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DISCHARGE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage[0]);
        HP_BAR(playerRight);
        MESSAGE("Hopmon fainted!");
        ABILITY_POPUP(playerLeft, abilityPopUp);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        if (species == SPECIES_SPECTRIER)
            MESSAGE("Spectrier's Grim Neigh raised its Sp. Atk!");
        else
            MESSAGE("Calyrex's Grim Neigh raised its Sp. Atk!");
        HP_BAR(opponentRight, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(damage[0], damage[1]);
    }
}
