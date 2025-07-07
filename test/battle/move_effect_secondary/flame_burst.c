#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FLAME_BURST].additionalEffects->moveEffect == MOVE_EFFECT_FLAME_BURST);
}

//  Flame Burst AoE is supposed to hit through Substitute
DOUBLE_BATTLE_TEST("Flame Burst Substitute")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUBSTITUTE].effect == EFFECT_SUBSTITUTE);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SUBSTITUTE); MOVE(playerRight, MOVE_FLAME_BURST, target: opponentRight); }
    } SCENE {
        MESSAGE("The bursting flames hit the opposing Exveemon!");
        NOT MESSAGE("The substitute took damage for the opposing Exveemon!");
    }
}
