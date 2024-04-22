#include "global.h"
#include "test/battle.h"

// Note: Since these tests are recorded battle, they don't test the right battle controller
// behaviors. These have been tested in-game, in double, in multi, and in link battles. AI will always
// revive their first fainted party member in order.

#if B_EXPANDED_MOVE_NAMES
#define REVIVAL_BLESSING "Revival Blessing"
#else
#define REVIVAL_BLESSING "RevivlBlesng"
#endif

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_REVIVAL_BLESSING].effect == EFFECT_REVIVAL_BLESSING);
}

SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(0); }
        PLAYER(SPECIES_WYNAUT) { HP(0); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); SEND_OUT(player, 2); }
    } SCENE {
        MESSAGE("Lopmonx used " REVIVAL_BLESSING "!");
        MESSAGE("Wynaut was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing revives a fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PICHIMON);
        OPPONENT(SPECIES_GUILMON_X) { HP(0); }
        OPPONENT(SPECIES_PETITMON) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING); SEND_OUT(opponent, 1); }
    } SCENE {
        MESSAGE("Foe Pichimon used " REVIVAL_BLESSING "!");
        MESSAGE("Guilmon_x was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Lopmonx used " REVIVAL_BLESSING "!");
        MESSAGE("But it failed!");
    }
}

// Note: There isn't a good way to test multi battles at the moment, but
// this PASSES in game!
TO_DO_BATTLE_TEST("Revival Blessing cannot revive a partner's party member");
// DOUBLE_BATTLE_TEST("Revival Blessing cannot revive a partner's party member")
// {
//     struct BattlePokemon *user;
//     gBattleTypeFlags |= BATTLE_TYPE_TWO_OPPONENTS;
//     PARAMETRIZE { user = opponentLeft; }
//     PARAMETRIZE { user = opponentRight; }
//     GIVEN {
//         ASSUME((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) != FALSE);
//         PLAYER(SPECIES_LOPMONX);
//         PLAYER(SPECIES_LOPMONX);
//         OPPONENT(SPECIES_LOPMONX);
//         OPPONENT(SPECIES_LOPMONX);
//         OPPONENT(SPECIES_LOPMONX);
//         OPPONENT(SPECIES_WYNAUT);
//         OPPONENT(SPECIES_WYNAUT) { HP(0); }
//         OPPONENT(SPECIES_WYNAUT);
//     } WHEN {
//         TURN { MOVE(user, MOVE_REVIVAL_BLESSING); }
//     } SCENE {
//         if (user == opponentLeft) {
//             MESSAGE("Foe Lopmonx used " REVIVAL_BLESSING "!");
//             MESSAGE("But it failed!");
//         } else {
//             MESSAGE("Foe Wynaut used " REVIVAL_BLESSING "!");
//             MESSAGE("Wynaut was revived and is ready to fight again!");
//         }
//     }
// }

// Note: The test runner gets upset about "sending out" a battler on the field,
// but this PASSES in game!
TO_DO_BATTLE_TEST("Revived battlers still lose their turn");
// DOUBLE_BATTLE_TEST("Revived battlers still lose their turn")
// {
//     GIVEN {
//         PLAYER(SPECIES_LOPMONX);
//         PLAYER(SPECIES_WYNAUT);
//         OPPONENT(SPECIES_LOPMONX);
//         OPPONENT(SPECIES_WYNAUT) { HP(1); }
//     } WHEN {
//         TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight);
//                MOVE(opponentLeft, MOVE_REVIVAL_BLESSING);
//                SEND_OUT(opponentLeft, 1); }
//     } SCENE {
//         MESSAGE("Lopmonx used Tackle!");
//         MESSAGE("Foe Wynaut fainted!");
//         MESSAGE("Foe Lopmonx used " REVIVAL_BLESSING "!");
//         MESSAGE("Wynaut was revived and is ready to fight again!");
//         NOT { MESSAGE("Wynaut used Celebrate!"); }
//     }
// }
