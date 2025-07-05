#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_THOUSAND_ARROWS, MOVE_EFFECT_SMACK_DOWN) == TRUE);
    ASSUME(gMovesInfo[MOVE_THOUSAND_ARROWS].ignoreTypeIfFlyingAndUngrounded == TRUE);
}

SINGLE_BATTLE_TEST("Thousand Arrows does not ground mons behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PHASCOMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_THOUSAND_ARROWS); }
    } SCENE {
        NOT MESSAGE("The opposing Phascomon fell straight down!");
    }
}

SINGLE_BATTLE_TEST("Thousand Arrows does neutral damage to non-grounded Flying types regardless of other typings")
{
    u32 pokemon;
    PARAMETRIZE { pokemon = SPECIES_PHASCOMON; }
    PARAMETRIZE { pokemon = SPECIES_BURGERMON; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(pokemon);
    } WHEN {
        TURN { MOVE(player, MOVE_THOUSAND_ARROWS); }
        TURN { MOVE(player, MOVE_THOUSAND_ARROWS); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THOUSAND_ARROWS, player);
        if (pokemon == SPECIES_PHASCOMON) {
            MESSAGE("The opposing Phascomon fell straight down!");
            MESSAGE("The opposing Phascomon used Celebrate!");
        } else {
            MESSAGE("The opposing Burgermon fell straight down!");
            MESSAGE("The opposing Burgermon used Celebrate!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        MESSAGE("Congratulations, 1!");
        MESSAGE("Lopmonx used Thousand Arrows!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THOUSAND_ARROWS, player);
        if (pokemon == SPECIES_PHASCOMON)
        {
            MESSAGE("It's super effective!");
        }
        else
        {
            MESSAGE("It's not very effective…");
        }
    }
}
