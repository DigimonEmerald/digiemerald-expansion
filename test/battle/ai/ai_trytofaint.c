#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("AI prefers priority moves if it's slower and can kill target")
{
    GIVEN {
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) == 1);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(100); }
        PLAYER(SPECIES_LOPMONX) { Speed(100); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); Moves(MOVE_QUICK_ATTACK, MOVE_STRENGTH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_QUICK_ATTACK); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose a random move if it's faster and can kill target")
{
    GIVEN {
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) == 1);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); Moves(MOVE_QUICK_ATTACK, MOVE_STRENGTH); }
    } WHEN {
        TURN { EXPECT_MOVES(opponent, MOVE_QUICK_ATTACK, MOVE_STRENGTH); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose a priority move if it is slower then the target and will be killed")
{
    GIVEN {
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) == 1);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { Speed(100); }
        OPPONENT(SPECIES_LOPMONX) { HP(60); Speed(1); Moves(MOVE_QUICK_ATTACK, MOVE_STRENGTH); }
    } WHEN {
        TURN { MOVE(player, MOVE_STRENGTH); EXPECT_MOVE(opponent, MOVE_STRENGTH); }
        TURN { MOVE(player, MOVE_STRENGTH); EXPECT_MOVE(opponent, MOVE_QUICK_ATTACK); }
    } SCENE {
<<<<<<< HEAD:test/battle/ai_trytofaint.c
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees Loaded Dice damage increase from multi hit moves")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(44); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_LOADED_DICE); Moves(MOVE_SEED_BOMB, MOVE_BULLET_SEED); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_BULLET_SEED); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
>>>>>>> upstream/master:test/battle/ai/ai_trytofaint.c
    }
}
