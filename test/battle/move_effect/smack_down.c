#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_SMACK_DOWN, MOVE_EFFECT_SMACK_DOWN) == TRUE);
}

SINGLE_BATTLE_TEST("Smack Down does not ground mons behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PHASCOMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_SMACK_DOWN); }
    } SCENE {
        NOT MESSAGE("The opposing Phascomon fell straight down!");
    }
}
