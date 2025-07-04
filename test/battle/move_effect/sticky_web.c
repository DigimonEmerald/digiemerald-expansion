#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
}

SINGLE_BATTLE_TEST("Sticky Web lowers Speed by 1 on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); }
        TURN { SWITCH(opponent, 1); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        MESSAGE("A sticky web has been laid out on the ground around the opposing team!");
        MESSAGE("2 sent out Exveemon!");
        MESSAGE("The opposing Exveemon was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Exveemon's Speed fell!");
    }
}

SINGLE_BATTLE_TEST("Sticky Web can only be set up 1 time")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); }
        TURN { MOVE(player, MOVE_STICKY_WEB); }
    } SCENE {
        MESSAGE("Lopmonx used Sticky Web!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        MESSAGE("A sticky web has been laid out on the ground around the opposing team!");

        MESSAGE("Lopmonx used Sticky Web!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        MESSAGE("But it failed!");
    }
}


DOUBLE_BATTLE_TEST("Sticky Web lowers Speed by 1 in a double battle after Explosion fainting both mons")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX) {Speed(5);}
        PLAYER(SPECIES_LOPMONX) {HP(1500); Speed(10);}
        PLAYER(SPECIES_LOPMONX) {Speed(10);}
        OPPONENT(SPECIES_LOPMONX) {HP(1); Speed(1);}
        OPPONENT(SPECIES_LOPMONX) {HP(1); Speed(1);}
        OPPONENT(SPECIES_EXVEEMON) {Speed(10);}
        OPPONENT(SPECIES_EXVEEMON) {Speed(10);}
    } WHEN {
        TURN { MOVE(playerRight, MOVE_STICKY_WEB); MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(opponentRight, 3); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, playerRight);
        MESSAGE("A sticky web has been laid out on the ground around the opposing team!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        MESSAGE("2 sent out Exveemon!");
        MESSAGE("2 sent out Kapurimon!");
        MESSAGE("The opposing Kapurimon was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Kapurimon's Speed fell!");
        MESSAGE("The opposing Exveemon was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("The opposing Exveemon's Speed fell!");
    }
}

SINGLE_BATTLE_TEST("Sticky Web raises Speed by 1 for a Pokemon with Contrary")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_MORPHOMON) { Ability(ABILITY_CONTRARY); }
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); }
        TURN { SWITCH(opponent, 1); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        MESSAGE("A sticky web has been laid out on the ground around the opposing team!");
        MESSAGE("2 sent out Morphomon!");
        MESSAGE("The opposing Morphomon was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Morphomon's Speed rose!");
    }
}

#define BATTLER_OPPONENT (opponentSetUpper == 0 ? opponentLeft : opponentRight)
#define BATTLER_PLAYER (playerSetUpper == 0 ? playerLeft : playerRight)

DOUBLE_BATTLE_TEST("Sticky Web has correct interactions with Mirror Armor - the battler which set up Sticky Web has its Speed lowered instead")
{
    u8 playerSetUpper, opponentSetUpper; // 0 left, 1 right

    PARAMETRIZE {playerSetUpper = 0; opponentSetUpper = 0; }
    PARAMETRIZE {playerSetUpper = 0; opponentSetUpper = 1; }
    PARAMETRIZE {playerSetUpper = 1; opponentSetUpper = 0; }
    PARAMETRIZE {playerSetUpper = 1; opponentSetUpper = 1; }

    GIVEN {
        PLAYER(SPECIES_CONOMON);
        PLAYER(SPECIES_BOTAMON);
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); } // Iron Ball, so that flying type Corviknight is affected by Sticky Web.
        OPPONENT(SPECIES_DATIRIMON);
        OPPONENT(SPECIES_FUFUMON);
    } WHEN {
        TURN { MOVE(BATTLER_OPPONENT, MOVE_STICKY_WEB); }
        TURN { MOVE(BATTLER_PLAYER, MOVE_STICKY_WEB); }
        TURN { SWITCH(playerRight, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, BATTLER_OPPONENT);
        MESSAGE("A sticky web has been laid out on the ground around your team!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, BATTLER_PLAYER);
        MESSAGE("A sticky web has been laid out on the ground around the opposing team!");

        SEND_IN_MESSAGE("Corviknight");
        MESSAGE("Corviknight was caught in a sticky web!");
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, BATTLER_OPPONENT);
        if (opponentSetUpper == 0) {
            MESSAGE("The opposing Datirimon's Speed fell!");
            NONE_OF {
                MESSAGE("The opposing Datirimon was caught in a sticky web!");
            }
        } else {
            MESSAGE("The opposing Fufumon's Speed fell!");
            NONE_OF {
                MESSAGE("The opposing Fufumon was caught in a sticky web!");
            }
        }
    }
}

#undef BATTLER_OPPONENT
#undef BATTLER_PLAYER

DOUBLE_BATTLE_TEST("Sticky Web has correct interactions with Mirror Armor - no one has their Speed lowered if the set upper switched")
{
    u16 speedPlayer, speedOpponent;

    // We need to make sure Sticky Web user saves for both sides, so it doesn't matter who sets it first.
    PARAMETRIZE { speedPlayer = 5; speedOpponent = 10; }
    PARAMETRIZE { speedPlayer = 10; speedOpponent = 5; }

    GIVEN {
        PLAYER(SPECIES_CONOMON) { Speed(speedPlayer); }
        PLAYER(SPECIES_BOTAMON) { Speed(speedPlayer); }
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); Speed(speedOpponent); } // Iron Ball, so that flying type Corviknight is affected by Sticky Web.
        OPPONENT(SPECIES_DATIRIMON) { Speed(speedOpponent); }
        OPPONENT(SPECIES_FUFUMON) { Speed(speedOpponent); }
        OPPONENT(SPECIES_KETOMON) { Speed(speedOpponent); } // Flying type,so not affected by Sticky Web.
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STICKY_WEB); }
        TURN { SWITCH(opponentLeft, 2); }
        TURN { SWITCH(playerRight, 2); }
    } SCENE {
        if (speedPlayer > speedOpponent) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, playerRight);
            MESSAGE("A sticky web has been laid out on the ground around the opposing team!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponentLeft);
            MESSAGE("A sticky web has been laid out on the ground around your team!");
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponentLeft);
            MESSAGE("A sticky web has been laid out on the ground around your team!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, playerRight);
            MESSAGE("A sticky web has been laid out on the ground around the opposing team!");
        }

        SEND_IN_MESSAGE("Corviknight");
        MESSAGE("Corviknight was caught in a sticky web!");
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Sticky Web has correct interactions with Mirror Armor - no one has their Speed lowered if the set upper fainted")
{
    bool8 hasReplacement;

    // We need to make sure Sticky Web user saves for both sides, so it doesn't matter who sets it first.
    PARAMETRIZE {hasReplacement = TRUE;}
    PARAMETRIZE {hasReplacement = FALSE;}

    GIVEN {
        ASSUME(gMovesInfo[MOVE_MEMENTO].effect == EFFECT_MEMENTO);
        PLAYER(SPECIES_CONOMON) {Speed(5); }
        PLAYER(SPECIES_BOTAMON) {Speed(5); }
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); Speed(5); } // Iron Ball, so that flying type Corviknight is affected by Sticky Web.
        OPPONENT(SPECIES_DATIRIMON) {Speed(7); }
        OPPONENT(SPECIES_FUFUMON) {Speed(7); }
        if (hasReplacement) {
            OPPONENT(SPECIES_KETOMON) {Speed(7); }
        }

    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); }
        if (hasReplacement) {
            TURN { MOVE(opponentLeft, MOVE_MEMENTO, target:playerLeft); SEND_OUT(opponentLeft, 2); }
        } else {
            TURN { MOVE(opponentLeft, MOVE_MEMENTO, target:playerLeft);}
        }
        TURN { SWITCH(playerRight, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponentLeft);
        MESSAGE("A sticky web has been laid out on the ground around your team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, opponentLeft);
        MESSAGE("The opposing Datirimon fainted!");
        if (hasReplacement) {
            MESSAGE("2 sent out Ketomon!");
        }

        SEND_IN_MESSAGE("Corviknight");
        MESSAGE("Corviknight was caught in a sticky web!");
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
    } THEN {
        if (hasReplacement) {
            EXPECT_EQ(opponentLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        }
        EXPECT_EQ(playerLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
    }
}
SINGLE_BATTLE_TEST("Sticky Web is placed on the correct side after Explosion")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); MOVE(opponent, MOVE_STICKY_WEB); SEND_OUT(player, 1);}
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("Lopmonx fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        MESSAGE("A sticky web has been laid out on the ground around your team!");
   }
}

SINGLE_BATTLE_TEST("Sticky Web is placed on the correct side after Memento")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MEMENTO); MOVE(opponent, MOVE_STICKY_WEB); SEND_OUT(player, 1); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, player);
        MESSAGE("Lopmonx fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        MESSAGE("A sticky web has been laid out on the ground around your team!");
    }
}

DOUBLE_BATTLE_TEST("Sticky Web setter has their speed lowered with Mirror Armor even after Ally Switch")
{
    GIVEN {
        PLAYER(SPECIES_CONOMON);
        PLAYER(SPECIES_BOTAMON);
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); } // Iron Ball, so that flying type Corviknight is affected by Sticky Web.
        OPPONENT(SPECIES_DATIRIMON);
        OPPONENT(SPECIES_HAWKMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); }
        TURN { MOVE(opponentRight, MOVE_ALLY_SWITCH); }
        TURN { SWITCH(playerRight, 2); }
    } SCENE {
        // Turn 1 - set up sticky web
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponentLeft);
        MESSAGE("A sticky web has been laid out on the ground around your team!");
        // Turn 2 - ally switch
        MESSAGE("The opposing Hawkmon used Ally Switch!");
        // turn 3 - send our corviknight
        SEND_IN_MESSAGE("Corviknight");
        MESSAGE("Corviknight was caught in a sticky web!");
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        // sticky web setter - datirimon (now opponentRight) gets speed lowered
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Datirimon's Speed fell!");
    }
}
