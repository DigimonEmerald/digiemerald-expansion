#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FOCUS_PUNCH].effect == EFFECT_FOCUS_PUNCH);
}

SINGLE_BATTLE_TEST("Focus Punch activates only if not damaged")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = FALSE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; activate = FALSE; }
    PARAMETRIZE { move = MOVE_LEER; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_PUNCH); MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, player);
        MESSAGE("Lopmonx is tightening its focus!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);

        if (activate) {
            MESSAGE("Lopmonx used Focus Punch!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("Lopmonx lost its focus and couldn't move!");
            NONE_OF {
                MESSAGE("Lopmonx used Focus Punch!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, player);
                HP_BAR(opponent);
            }
        }
    }
}

DOUBLE_BATTLE_TEST("Focus Punch activation is based on Speed")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        PLAYER(SPECIES_EXVEEMON) { Speed(3); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(5); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_FOCUS_PUNCH, target: playerLeft); MOVE(playerRight, MOVE_FOCUS_PUNCH, target: opponentLeft); MOVE(playerLeft, MOVE_FOCUS_PUNCH, target: opponentLeft); MOVE(opponentLeft, MOVE_FOCUS_PUNCH, target: playerLeft); }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, opponentRight);
<<<<<<< HEAD
        MESSAGE("Foe Exveemon is tightening its focus!");
=======
        MESSAGE("The opposing Exveemon is tightening its focus!");
>>>>>>> upstream/master

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerRight);
        MESSAGE("Exveemon is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerLeft);
        MESSAGE("Lopmonx is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, opponentLeft);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx is tightening its focus!");

        MESSAGE("Foe Exveemon used Focus Punch!");
=======
        MESSAGE("The opposing Lopmonx is tightening its focus!");

        MESSAGE("The opposing Exveemon used Focus Punch!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, opponentRight);
        HP_BAR(playerLeft);

        MESSAGE("Exveemon used Focus Punch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, playerRight);
        HP_BAR(opponentLeft);

<<<<<<< HEAD
        MESSAGE("Lopmonx lost its focus and couldn't move!");
        MESSAGE("Foe Lopmonx lost its focus and couldn't move!");
=======
        MESSAGE("Lopmonx lost its focus and couldn't move!");
        MESSAGE("The opposing Lopmonx lost its focus and couldn't move!");
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use Focus Punch if it predicts a damaging move")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MAGNEZONE) { Moves(MOVE_THUNDER_WAVE, MOVE_FLASH_CANNON, MOVE_DISCHARGE, MOVE_TRI_ATTACK); }
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB); }
    } WHEN {
        TURN { MOVE(player, MOVE_DISCHARGE); EXPECT_MOVE(opponent, MOVE_FOCUS_PUNCH); }
        TURN { MOVE(player, MOVE_DISCHARGE); EXPECT_MOVE(opponent, MOVE_SEED_BOMB); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will Incapacitate -> Substitute -> Focus Punch if able")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MAGNEZONE) { Moves(MOVE_THUNDER_WAVE, MOVE_FLASH_CANNON, MOVE_DISCHARGE, MOVE_TRI_ATTACK); }
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_SEED_BOMB); }
    } WHEN {
        TURN { MOVE(player, MOVE_DISCHARGE); EXPECT_MOVE(opponent, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_DISCHARGE); EXPECT_MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_DISCHARGE); EXPECT_MOVE(opponent, MOVE_FOCUS_PUNCH); }
>>>>>>> upstream/master
    }
}
