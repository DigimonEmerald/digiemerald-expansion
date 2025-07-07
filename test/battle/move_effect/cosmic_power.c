#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_COSMIC_POWER) == EFFECT_COSMIC_POWER);
}

SINGLE_BATTLE_TEST("Cosmic Power increases the user's Defense and Sp. Defense by 1 stage each")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_COSMIC_POWER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COSMIC_POWER, player);
        MESSAGE("Lopmonx's Defense rose!");
        MESSAGE("Lopmonx's Sp. Def rose!");
    }
}
