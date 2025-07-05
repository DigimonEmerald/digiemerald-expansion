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

<<<<<<< HEAD
        MESSAGE("Foe Kakkinmon used Screech!");
=======
        MESSAGE("The opposing Kakkinmon used Screech!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Exveemon's Defense harshly fell!");

<<<<<<< HEAD
        MESSAGE("Foe Hopmon used Screech!");
=======
        MESSAGE("The opposing Hopmon used Screech!");
>>>>>>> upstream/master
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

<<<<<<< HEAD
        MESSAGE("Foe Kakkinmon used Snipe Shot!");
=======
        MESSAGE("The opposing Kakkinmon used Snipe Shot!");
>>>>>>> upstream/master
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

<<<<<<< HEAD
        MESSAGE("Foe Kakkinmon used Tackle!");
=======
        MESSAGE("The opposing Kakkinmon used Tackle!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        HP_BAR((ability == ABILITY_STALWART || ability == ABILITY_PROPELLER_TAIL) ? playerLeft : playerRight);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch has no effect on partner's chosen move")
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

DOUBLE_BATTLE_TEST("Ally switch swaps sky drop targets if being used by partner")
{
    u8 visibility;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SKY_DROP].effect == EFFECT_SKY_DROP);
        PLAYER(SPECIES_PABUMON) { Speed(100); }
        PLAYER(SPECIES_HERISSMON)   { Speed(150); }
        OPPONENT(SPECIES_ARON) { Speed(25); Ability(ABILITY_STURDY); }
        OPPONENT(SPECIES_WYNAUT) { Speed(30); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SKY_DROP, target: opponentLeft); }
        TURN { MOVE(playerRight, MOVE_ALLY_SWITCH); SKIP_TURN(playerLeft); MOVE(opponentRight, MOVE_MUD_SPORT); MOVE(opponentLeft, MOVE_IRON_DEFENSE); }
    } SCENE {
        MESSAGE("Pabumon used Sky Drop!");
        MESSAGE("Pabumon took the opposing Aron into the sky!");
        // turn 2
        MESSAGE("Herissmon used Ally Switch!");
        MESSAGE("Herissmon and Pabumon switched places!");
        MESSAGE("Pabumon used Sky Drop!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Wynaut used Mud Sport!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MUD_SPORT, opponentRight);
        MESSAGE("The opposing Aron used Iron Defense!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_IRON_DEFENSE, opponentLeft);
    } THEN {
        // all battlers should be visible
        visibility = gBattleSpritesDataPtr->battlerData[0].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[1].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[2].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[3].invisible;
        EXPECT_EQ(visibility, 0);
    }
}

DOUBLE_BATTLE_TEST("Ally switch swaps opposing sky drop targets if partner is being held in the air")
{
    u8 visibility;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SKY_DROP].effect == EFFECT_SKY_DROP);
        PLAYER(SPECIES_ARON) { Speed(25); Ability(ABILITY_STURDY); }
        PLAYER(SPECIES_WYNAUT) { Speed(30); }
        OPPONENT(SPECIES_PABUMON) { Speed(100); }
        OPPONENT(SPECIES_HERISSMON)   { Speed(150); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SKY_DROP, target: playerLeft); }
        TURN { MOVE(opponentRight, MOVE_ALLY_SWITCH); SKIP_TURN(opponentLeft); MOVE(playerRight, MOVE_MUD_SPORT); MOVE(playerLeft, MOVE_IRON_DEFENSE); }
    } SCENE {
        MESSAGE("The opposing Pabumon used Sky Drop!");
        MESSAGE("The opposing Pabumon took Aron into the sky!");
        // turn 2
        MESSAGE("The opposing Herissmon used Ally Switch!");
        MESSAGE("The opposing Herissmon and the opposing Pabumon switched places!");
        MESSAGE("The opposing Pabumon used Sky Drop!");
        HP_BAR(playerLeft);
        MESSAGE("Wynaut used Mud Sport!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MUD_SPORT, playerRight);
        MESSAGE("Aron used Iron Defense!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_IRON_DEFENSE, playerLeft);
    } THEN {
        // all battlers should be visible
        visibility = gBattleSpritesDataPtr->battlerData[0].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[1].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[2].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[3].invisible;
        EXPECT_EQ(visibility, 0);
    }
}

// Test passes in isolation but fails on CI
/*
DOUBLE_BATTLE_TEST("Ally Switch swaps Illusion data")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ALLY_SWITCH].effect == EFFECT_ALLY_SWITCH);
        PLAYER(SPECIES_HOOPA);
        PLAYER(SPECIES_ZOROARK);
        PLAYER(SPECIES_MAMOSWINE); // the third member here is required for zoroark
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } THEN {
        EXPECT(&gPlayerParty[2] == gBattleStruct->illusion[0].mon);
    }
}
*/

// Triple Battles required to test
//TO_DO_BATTLE_TEST("Ally Switch fails if the user is in the middle of the field in a Triple Battle");
