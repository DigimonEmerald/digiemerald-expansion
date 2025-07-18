#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Stalwart ignores redirection from Follow-Me")
{
    GIVEN {
        PLAYER(SPECIES_ARCHALUDON) { Ability(ABILITY_STALWART); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_FOLLOW_ME); MOVE(playerLeft, MOVE_DRACO_METEOR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOLLOW_ME, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRACO_METEOR, playerLeft);
        HP_BAR(opponentRight);
        NOT HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Stalwart stops Lightning Rod and Storm Drain from redirecting moves")
{
    u32 ability, species;
    PARAMETRIZE { ability = ABILITY_STORM_DRAIN; species = SPECIES_LUMINEON; }
    PARAMETRIZE { ability = ABILITY_LIGHTNING_ROD; species = SPECIES_PICHIMON; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_SPARK) == TYPE_ELECTRIC);
        ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
        PLAYER(SPECIES_LOPMONX) { Ability(ABILITY_STALWART); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            if (ability == ABILITY_LIGHTNING_ROD)
                MOVE(playerLeft, MOVE_SPARK, target: opponentRight);
            else
                MOVE(playerLeft, MOVE_WATER_GUN, target: opponentRight);
        }
    } SCENE {
        if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5) {
            HP_BAR(opponentRight);
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ability);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
                MESSAGE("The opposing Pichimon's Sp. Atk rose!");
            }
        } else {
            HP_BAR(opponentRight);
            NONE_OF {
                HP_BAR(opponentLeft);
            }
        }
    }
}
