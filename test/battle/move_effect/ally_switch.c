#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ALLY_SWITCH].effect == EFFECT_ALLY_SWITCH);
}

SINGLE_BATTLE_TEST("Ally Switch fails in a single battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, player);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch fails if there is no partner")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target:playerRight); }
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
        MESSAGE("Lopmonx used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch changes the position of battlers")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCREECH].effect == EFFECT_DEFENSE_DOWN_2);
        ASSUME(gMovesInfo[MOVE_SCREECH].target == MOVE_TARGET_SELECTED);
        PLAYER(SPECIES_LOPMONX) { Speed(5); } // Wobb is playerLeft, but it'll be Exveemon after Ally Switch
        PLAYER(SPECIES_EXVEEMON) { Speed(4); }
        OPPONENT(SPECIES_KAKKINMON) { Speed(3); }
        OPPONENT(SPECIES_HOPMON) { Speed(2); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_SCREECH, target:playerLeft); MOVE(opponentRight, MOVE_SCREECH, target:playerLeft); }
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        MESSAGE("Foe Kakkinmon used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Exveemon's Defense harshly fell!");

        MESSAGE("Foe Hopmon used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Exveemon's Defense harshly fell!");
    } THEN {
        EXPECT_EQ(playerLeft->speed, 4);
        EXPECT_EQ(playerLeft->species, SPECIES_EXVEEMON);
        EXPECT_EQ(playerRight->speed, 5);
        EXPECT_EQ(playerRight->species, SPECIES_LOPMONX);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch does not redirect the target of Snipe Shot")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SNIPE_SHOT].effect == EFFECT_SNIPE_SHOT);
        PLAYER(SPECIES_LOPMONX); // Wobb is playerLeft, but it'll be Exveemon after Ally Switch
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KAKKINMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_SNIPE_SHOT, target:playerLeft); } // Kakkinmon targets Wobb and Snipe Shot ignores Ally Switch position change.
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        MESSAGE("Foe Kakkinmon used Snipe Shot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNIPE_SHOT, opponentLeft);
        HP_BAR(playerRight);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch does not redirect moves done by pokemon with Stalwart and Propeller Tail")
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_STALWART; }
    PARAMETRIZE { ability = ABILITY_PROPELLER_TAIL; }
    PARAMETRIZE { ability = ABILITY_TELEPATHY; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX); // Wobb is playerLeft, but it'll be Exveemon after Ally Switch
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KAKKINMON) { Ability(ability); }
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_TACKLE, target:playerRight); } // Kakkinmon targets playerRight Exveemon.
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        MESSAGE("Foe Kakkinmon used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        HP_BAR((ability == ABILITY_STALWART || ability == ABILITY_PROPELLER_TAIL) ? playerLeft : playerRight);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch has no effect on parnter's chosen move")
{
    u16 chosenMove;
    struct BattlePokemon *chosenTarget = NULL;

    PARAMETRIZE { chosenMove = MOVE_TACKLE; chosenTarget = opponentLeft; }
    PARAMETRIZE { chosenMove = MOVE_TACKLE; chosenTarget = opponentRight; }
    PARAMETRIZE { chosenMove = MOVE_POUND; chosenTarget = opponentLeft; }
    PARAMETRIZE { chosenMove = MOVE_POUND; chosenTarget = opponentRight; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Moves(MOVE_TACKLE, MOVE_POUND, MOVE_CELEBRATE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_KAKKINMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(playerRight, chosenMove, target:chosenTarget); }
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        ANIMATION(ANIM_TYPE_MOVE, chosenMove, playerLeft);
        HP_BAR(chosenTarget);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch - move fails if the target was ally which changed position")
{
    u32 move = MOVE_NONE;

    PARAMETRIZE { move = MOVE_COACHING; }
    PARAMETRIZE { move = MOVE_AROMATIC_MIST; }
    PARAMETRIZE { move = MOVE_HOLD_HANDS; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KAKKINMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(playerRight, move, target:playerLeft); }
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        NOT ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
        MESSAGE("But it failed!");
    }
}

// Verified on Showdown, even though Bulbapedia says otherwise.
DOUBLE_BATTLE_TEST("Acupressure works after ally used Ally Switch")
{
    struct BattlePokemon *battlerTarget = NULL;

    PARAMETRIZE { battlerTarget = playerLeft; }
    PARAMETRIZE { battlerTarget = playerRight; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KAKKINMON);
        OPPONENT(SPECIES_HOPMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(playerRight, MOVE_ACUPRESSURE, target:battlerTarget); }
    } SCENE {
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ACUPRESSURE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, battlerTarget);
        NOT MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch increases the Protect-like moves counter")
{
    GIVEN {
        ASSUME(B_ALLY_SWITCH_FAIL_CHANCE >= GEN_9);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } THEN {
        EXPECT(gDisableStructs[B_POSITION_PLAYER_RIGHT].protectUses == 1);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch works if ally used two-turn move like Dig")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_DIG, target:opponentRight); }
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); SKIP_TURN(playerRight); }
    } SCENE {
        MESSAGE("Exveemon used Dig!");
        MESSAGE("Lopmonx used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Lopmonx and Exveemon switched places!");
        NOT MESSAGE("Exveemon used -!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIG);
        HP_BAR(opponentRight);
    }
}
