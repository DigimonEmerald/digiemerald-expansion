#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_SPARKLING_ARIA, MOVE_EFFECT_REMOVE_STATUS) == TRUE);
    ASSUME(gMovesInfo[MOVE_SPARKLING_ARIA].argument == STATUS1_BURN);
    ASSUME(gMovesInfo[MOVE_SPARKLING_ARIA].soundMove == TRUE);
}

DOUBLE_BATTLE_TEST("Sparkling Aria cures burns from all Pokemon on the field and behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_PRIMARINA);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_EXVEEMON) { Status1(STATUS1_BURN); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SUBSTITUTE); MOVE(opponentRight, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); MOVE(playerLeft, MOVE_SPARKLING_ARIA); }
    } SCENE {
        MESSAGE("Foe Lopmonx's burn was healed.");
        MESSAGE("Lopmonx's burn was healed.");
        MESSAGE("Foe Exveemon's burn was healed.");
    }
}
