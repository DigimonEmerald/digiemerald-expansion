#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_GUARD_SPLIT) == EFFECT_GUARD_SPLIT);
}

SINGLE_BATTLE_TEST("Guard Split averages users and targets Def and Sp. Def stats")
{
    GIVEN {
        PLAYER(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOMBMON);
    } WHEN {
        TURN { MOVE(player, MOVE_GUARD_SPLIT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUARD_SPLIT, player);
    } THEN {
        EXPECT_EQ(player->defense, opponent->defense);
        EXPECT_EQ(player->spDefense, opponent->spDefense);
    }
}
