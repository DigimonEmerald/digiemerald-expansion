#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Freeze has a 20% chance of being thawed")
{
    PASSES_RANDOMLY(20, 100, RNG_FROZEN);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Freeze is thawed by opponent's Fire-type attacks")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("The opposing Lopmonx used Ember!");
        MESSAGE("Lopmonx thawed out!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Freeze is thawed by user's Flame Wheel")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLAME_WHEEL].thawsUser);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FLAME_WHEEL); }
    } SCENE {
        MESSAGE("Lopmonx used Flame Wheel!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Lopmonx used Flame Wheel!");
    }
}

SINGLE_BATTLE_TEST("Freeze isn't thawed if opponent is asleep during thawing attack")
{
    PASSES_RANDOMLY(80, 100, RNG_FROZEN);
    GIVEN {
        ASSUME(GetMoveType(MOVE_EMBER) == TYPE_FIRE);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        NONE_OF {
            MESSAGE("The opposing Lopmonx used Ember!");
            MESSAGE("Lopmonx thawed out!");
            STATUS_ICON(player, none: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Freeze isn't thawed if opponent is asleep during thawing attack")
{
    PASSES_RANDOMLY(80, 100, RNG_FROZEN);
    GIVEN {
        ASSUME(GetMoveType(MOVE_EMBER) == TYPE_FIRE);
        PLAYER(SPECIES_LOPMONX) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        NONE_OF {
            MESSAGE("The opposing Lopmonx used Ember!");
            MESSAGE("Lopmonx thawed out!");
            STATUS_ICON(player, none: TRUE);
        }
    }
}
