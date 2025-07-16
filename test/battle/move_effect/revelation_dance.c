#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_REVELATION_DANCE) == EFFECT_REVELATION_DANCE);
    ASSUME(IsDanceMove(MOVE_REVELATION_DANCE));
    ASSUME(IsMoveEffectRemoveSpeciesType(MOVE_BURN_UP, MOVE_EFFECT_REMOVE_ARG_TYPE, TYPE_FIRE));
    ASSUME(GetMoveEffect(MOVE_FORESTS_CURSE) == EFFECT_THIRD_TYPE);
    ASSUME(GetMoveArgType(MOVE_FORESTS_CURSE) == TYPE_GRASS);
    ASSUME(GetMoveEffect(MOVE_ROOST) == EFFECT_ROOST);
}

SINGLE_BATTLE_TEST("Revelation Dance changes its type depending on the user's 1st Type")
{
    u16 speciesPlayer;
    u16 speciesOpponent;

    PARAMETRIZE { speciesPlayer = SPECIES_ORICORIO_POM_POM; speciesOpponent = SPECIES_BUKAMON; }
    PARAMETRIZE { speciesPlayer = SPECIES_ORICORIO_BAILE; speciesOpponent = SPECIES_CURIMON; }
    PARAMETRIZE { speciesPlayer = SPECIES_ORICORIO_PAU; speciesOpponent = SPECIES_ETEMON; }
    PARAMETRIZE { speciesPlayer = SPECIES_ORICORIO_SENSU; speciesOpponent = SPECIES_CHAPMON; }

    GIVEN {
        PLAYER(speciesPlayer);
        OPPONENT(speciesOpponent);
    } WHEN {
        TURN { MOVE(player, MOVE_REVELATION_DANCE); }
    } SCENE {
        if (speciesPlayer == SPECIES_ORICORIO_BAILE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
            HP_BAR(opponent);
            MESSAGE("It's not very effective…");
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
                HP_BAR(opponent);
                MESSAGE("It's not very effective…");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Revelation Dance changes its type depending on the user's 2nd Type if it has no 1st type")
{
    GIVEN {
        PLAYER(SPECIES_ORICORIO_BAILE);
        OPPONENT(SPECIES_WHAMON);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_REVELATION_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        NONE_OF {
            MESSAGE("It's not very effective…");
            MESSAGE("It's super effective!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
        HP_BAR(opponent);
        MESSAGE("It's not very effective…");
    }
}

SINGLE_BATTLE_TEST("Revelation Dance changes its type depending on the user's 3rd Type if it has no 1st or 2nd type")
{
    GIVEN {
        PLAYER(SPECIES_FRIMON);
        OPPONENT(SPECIES_TREVENANT);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); MOVE(opponent, MOVE_FORESTS_CURSE); }
        TURN { MOVE(player, MOVE_REVELATION_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESTS_CURSE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
        HP_BAR(opponent);
        MESSAGE("It's not very effective…");
    }
}

SINGLE_BATTLE_TEST("Revelation Dance becomes Typeless if its user is Typeless")
{
    u16 speciesOpponent;

    PARAMETRIZE { speciesOpponent = SPECIES_SHOUTMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_CURIMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_CHIBOMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_BOMMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_MOTIMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_AEGISLASH; }

    GIVEN {
        PLAYER(SPECIES_FRIMON);
        OPPONENT(speciesOpponent);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_REVELATION_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
        HP_BAR(opponent);
        NONE_OF {
            MESSAGE("It's not very effective…");
            MESSAGE("It's super effective!");
        }
    }
}

SINGLE_BATTLE_TEST("Revelation Dance becomes Normal type if used by a Typeless Pokemon due to Roost")
{
    u16 speciesOpponent;

    PARAMETRIZE { speciesOpponent = SPECIES_BLGARGOMON; }
    PARAMETRIZE { speciesOpponent = SPECIES_BLGROWLMON; }

    ASSUME(B_ROOST_PURE_FLYING >= GEN_5);

    GIVEN {
        PLAYER(SPECIES_ORICORIO_BAILE) { Ability(ABILITY_DANCER); }
        OPPONENT(speciesOpponent);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); MOVE(opponent, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_REVELATION_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_DANCER);
        if (speciesOpponent == SPECIES_BLGROWLMON) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
            HP_BAR(opponent);
            MESSAGE("It's not very effective…");
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
                HP_BAR(opponent);
                MESSAGE("It's not very effective…");
            }
        }
    }
}
