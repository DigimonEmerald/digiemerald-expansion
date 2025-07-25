#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_TAILWIND) == EFFECT_TAILWIND);
}

SINGLE_BATTLE_TEST("Tailwind applies for 4 turns")
{
    GIVEN {
        ASSUME(B_TAILWIND_TURNS >= GEN_5);
        PLAYER(SPECIES_LOPMONX) { Speed(10); }
        OPPONENT(SPECIES_LOPMONX) { Speed(15); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TAILWIND); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("Lopmonx used Tailwind!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("The opposing Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("The opposing Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("The opposing Lopmonx used Celebrate!");

        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("Lopmonx used Celebrate!");
    }
}

DOUBLE_BATTLE_TEST("Tailwind affects partner on first turn")
{
    GIVEN {
        ASSUME(B_RECALC_TURN_AFTER_ACTIONS);
        PLAYER(SPECIES_LOPMONX) { Speed(20); }
        PLAYER(SPECIES_EXVEEMON) { Speed(10); }
        OPPONENT(SPECIES_LOPMONX) { Speed(15); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(14); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TAILWIND); }
    } SCENE {
        MESSAGE("Lopmonx used Tailwind!");
        MESSAGE("Exveemon used Celebrate!");
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("The opposing Exveemon used Celebrate!");
    }
}
