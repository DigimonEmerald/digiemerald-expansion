#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("AI prefers to set up a powerful Status over fainting a target")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TRICK_ROOM].effect == EFFECT_TRICK_ROOM);
        ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_POWERFUL_STATUS);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EBIDRAMON) { Moves(MOVE_TRICK_ROOM, MOVE_TACKLE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_TRICK_ROOM); }
        TURN { EXPECT_MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI will try to do damage on target instead of setting up hazards if target has a way to remove them")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_RAPID_SPIN].effect == EFFECT_RAPID_SPIN);
        ASSUME(gMovesInfo[MOVE_STEALTH_ROCK].effect == EFFECT_STEALTH_ROCK);
        ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_POWERFUL_STATUS | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_LOPMONX) { HP(1); Moves(MOVE_RAPID_SPIN, MOVE_DEFOG, MOVE_CELEBRATE); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_METABEE) { Moves(MOVE_STEALTH_ROCK, MOVE_TACKLE); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI will not set up Rain if it is already raining")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_RAIN_DANCE].effect == EFFECT_RAIN_DANCE);
        ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_POWERFUL_STATUS);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_RAIN_DANCE, MOVE_TACKLE); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_RAIN_DANCE); }
        TURN { EXPECT_MOVE(opponent, MOVE_TACKLE); }
    }
}
