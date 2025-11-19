#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_MAGIC_COAT].effect == EFFECT_MAGIC_COAT);
}

SINGLE_BATTLE_TEST("Magic Coat prints the correct message when bouncing back a move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
        MESSAGE("Toyagumon bounced the Spore back!");;
        MESSAGE("The opposing Exveemon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Magic Coat reflects hazards regardless of the user's position")
{
    struct BattlePokemon *coatUser = NULL;
    PARAMETRIZE { coatUser = playerLeft; }
    PARAMETRIZE { coatUser = playerRight; }
    ASSUME(GetMoveEffect(MOVE_SPIKES) == EFFECT_SPIKES);
    ASSUME(GetMoveEffect(MOVE_STEALTH_ROCK) == EFFECT_STEALTH_ROCK);

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(coatUser, MOVE_MAGIC_COAT); MOVE(opponentRight, MOVE_STEALTH_ROCK); MOVE(opponentLeft, MOVE_SPIKES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, coatUser);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponentRight);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, opponentLeft);
        }
    } THEN {
        EXPECT(!IsHazardOnSide(B_SIDE_PLAYER, HAZARDS_STEALTH_ROCK));
        EXPECT(!IsHazardOnSide(B_SIDE_PLAYER, HAZARDS_SPIKES));
        EXPECT(IsHazardOnSide(B_SIDE_OPPONENT, HAZARDS_STEALTH_ROCK));
        EXPECT(IsHazardOnSide(B_SIDE_OPPONENT, HAZARDS_SPIKES));
    }
}
