#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_PURSUIT].effect == EFFECT_PURSUIT);
}

SINGLE_BATTLE_TEST("Pursuited mon correctly switches out after it got hit and activated ability Tangling Hair")
{
    GIVEN {
        PLAYER(SPECIES_BUKAMON) { Ability(ABILITY_TANGLING_HAIR); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_PURSUIT); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Bukamon");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PURSUIT, opponent);
        ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Exveemon's Speed fell!");
        SEND_IN_MESSAGE("Lopmonx");
    }
}

// Checked so that Pursuit has only 1 PP and it forces the player to use Struggle.
SINGLE_BATTLE_TEST("Pursuit becomes a locked move after being used on switch-out while holding a Choice Item")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_CHOICE_BAND].holdEffect == HOLD_EFFECT_CHOICE_BAND);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_CHOICE_BAND); MovesWithPP({MOVE_PURSUIT, 1}, {MOVE_CELEBRATE, 10}, {MOVE_WATER_GUN, 10}, {MOVE_TACKLE, 10}); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_PURSUIT); }
        TURN { FORCED_MOVE(player); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PURSUIT, player);
        HP_BAR(opponent);
        MESSAGE("2 sent out Lopmonx!");

        MESSAGE("Lopmonx used Struggle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRUGGLE, player);
    }
}

TO_DO_BATTLE_TEST("Baton Pass doesn't cause Pursuit to increase its power or priority");
