#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_UPROAR) == EFFECT_UPROAR);
}

DOUBLE_BATTLE_TEST("Uproar status causes sleeping Pokémon to wake up during an attack")
{
    PASSES_RANDOMLY(1, 2, RNG_RANDOM_TARGET); // test fails if we target soundproof mon
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_XIAOMON) { Ability(ABILITY_SOUNDPROOF); Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_UPROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, playerLeft);
        HP_BAR(opponentRight);
        MESSAGE("The uproar woke Lopmonx!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        MESSAGE("The uproar woke the opposing Xiaomon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        MESSAGE("The uproar woke the opposing Lopmonx!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}

SINGLE_BATTLE_TEST("Uproar wakes up other pokemon on field")
{
    GIVEN {
        ASSUME(B_UPROAR_TURNS >= GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_UPROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, opponent);
        MESSAGE("The uproar woke Wobbuffet!");
    }
}
