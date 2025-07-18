#include "global.h"
#include "test/battle.h"

ASSUMPTIONS {
    ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
    ASSUME(gMovesInfo[MOVE_CRUNCH].type == TYPE_DARK);
    ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] == TYPE_PSYCHIC);
    ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[1] == TYPE_PSYCHIC);
}

AI_DOUBLE_BATTLE_TEST("AI_FLAG_DOUBLE_ACE_POKEMON: U-Turn won't send out any of the Ace Mons if other options exist")
{
    u32 flag;

    PARAMETRIZE { flag = AI_FLAG_DOUBLE_ACE_POKEMON; }
    PARAMETRIZE { flag = 0; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | flag);

        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);

        OPPONENT(SPECIES_TOKOMON_X) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_DRIMOGEMON) { Moves(MOVE_U_TURN); }

        OPPONENT(SPECIES_TORBALLMON) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_TSUMEMON) { Moves(MOVE_U_TURN); }

        // Aces
        // Crunch is super effective against Lopmonx Psychic type, so normally the AI would switch them in
        OPPONENT(SPECIES_TINKERMON) { Moves(MOVE_CRUNCH); }
        OPPONENT(SPECIES_TINPET) { Moves(MOVE_CRUNCH); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_U_TURN);
            EXPECT_MOVE(opponentRight, MOVE_U_TURN);

            if(flag == AI_FLAG_DOUBLE_ACE_POKEMON) {
                EXPECT_SEND_OUT(opponentLeft, 3);
                EXPECT_SEND_OUT(opponentRight, 2);
            } else {
                EXPECT_SEND_OUT(opponentLeft, 4);
                EXPECT_SEND_OUT(opponentRight, 5);
            }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI_FLAG_DOUBLE_ACE_POKEMON: U-Turn will send out an Ace Mon if no other options remain")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_DOUBLE_ACE_POKEMON);

        PLAYER(SPECIES_LOPMONX) { Level(50); }
        PLAYER(SPECIES_LOPMONX) { Level(50); }

        OPPONENT(SPECIES_TOKOMON_X) { Moves(MOVE_U_TURN); Level(50); }
        OPPONENT(SPECIES_DRIMOGEMON) { Moves(MOVE_U_TURN); Level(5); }

        // Aces
        // Should choose Tinkermon as its level is higher.
        OPPONENT(SPECIES_TINPET) { Moves(MOVE_CRUNCH); Level(5); }
        OPPONENT(SPECIES_TINKERMON) { Moves(MOVE_CRUNCH); Level(50); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_U_TURN);
            EXPECT_MOVE(opponentRight, MOVE_U_TURN);

            EXPECT_SEND_OUT(opponentLeft, 3);
            EXPECT_SEND_OUT(opponentRight, 0);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI_FLAG_DOUBLE_ACE_POKEMON: Ace mons won't be switched in even if they are the best candidates")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_TSUMEMON].types[0] == TYPE_GHOST);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_DOUBLE_ACE_POKEMON);

        PLAYER(SPECIES_TSUMEMON) { Level(10); }
        PLAYER(SPECIES_TSUMEMON) { Level(10); }

        OPPONENT(SPECIES_CHOROMON) { Moves(MOVE_TACKLE); Level(10); }
        OPPONENT(SPECIES_CHICCHIMON) { Moves(MOVE_TACKLE); Level(10); }

        OPPONENT(SPECIES_HOPMON) { Moves(MOVE_ABSORB); Level(20); }

        // Aces
        OPPONENT(SPECIES_TINPET) { Moves(MOVE_CRUNCH); Level(50); }
        OPPONENT(SPECIES_TINKERMON) { Moves(MOVE_CRUNCH); Level(50); }
    } WHEN {
        TURN { EXPECT_SWITCH(opponentLeft, 2); }
    }
}
