#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_REFRESH].effect == EFFECT_REFRESH);
}

SINGLE_BATTLE_TEST("Refresh cures the user of burn, frostbite, poison, and paralysis")
{
    u32 status1;
    PARAMETRIZE { status1 = STATUS1_POISON; }
    PARAMETRIZE { status1 = STATUS1_BURN; }
    PARAMETRIZE { status1 = STATUS1_PARALYSIS; }
    PARAMETRIZE { status1 = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status1 = STATUS1_FROSTBITE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(status1); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REFRESH); }
    } SCENE {
        MESSAGE("Lopmonx's status returned to normal!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Refresh does not cure the user of Freeze")
{
    PASSES_RANDOMLY(20, 100, RNG_FROZEN);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REFRESH); }
    } SCENE {
        MESSAGE("Lopmonx used Refresh!");
        NONE_OF { 
            ANIMATION(ANIM_TYPE_MOVE, MOVE_REFRESH, player);
            STATUS_ICON(player, none: TRUE); }
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Refresh does not cure sleep when used by Sleep Talk")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gMovesInfo[MOVE_SLEEP_TALK].effect == EFFECT_SLEEP_TALK);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_SLEEP_TALK, MOVE_REFRESH); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SLEEP_TALK); }
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_REFRESH); }
    } SCENE {
        MESSAGE("Lopmonx used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Lopmonx fell asleep!");
        MESSAGE("The opposing Lopmonx used Sleep Talk!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, opponent);
        MESSAGE("The opposing Lopmonx used Refresh!");
        NONE_OF { 
            ANIMATION(ANIM_TYPE_MOVE, MOVE_REFRESH, player);
            STATUS_ICON(player, none: TRUE); }
        MESSAGE("But it failed!");
    }
}
