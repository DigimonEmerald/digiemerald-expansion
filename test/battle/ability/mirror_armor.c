#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mirror Armor lowers a stat of the attacking pokemon")
{
    u16 move, statId;

    PARAMETRIZE { move = MOVE_LEER; statId = STAT_DEF; }
    PARAMETRIZE { move = MOVE_GROWL; statId = STAT_ATK; }
    PARAMETRIZE { move = MOVE_SWEET_SCENT; statId = STAT_EVASION; }
    PARAMETRIZE { move = MOVE_SAND_ATTACK; statId = STAT_ACC; }
    PARAMETRIZE { move = MOVE_CONFIDE; statId = STAT_SPATK; }
    PARAMETRIZE { move = MOVE_FAKE_TEARS; statId = STAT_SPDEF; }

    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        switch (statId)
        {
        case STAT_DEF:
<<<<<<< HEAD
            MESSAGE("Foe Exveemon's Defense fell!");
            break;
        case STAT_ATK:
            MESSAGE("Foe Exveemon's Attack fell!");
            break;
        case STAT_EVASION:
            MESSAGE("Foe Exveemon's evasiveness harshly fell!");
            break;
        case STAT_ACC:
            MESSAGE("Foe Exveemon's accuracy fell!");
            break;
        case STAT_SPATK:
            MESSAGE("Foe Exveemon's Sp. Atk fell!");
            break;
        case STAT_SPDEF:
            MESSAGE("Foe Exveemon's Sp. Def harshly fell!");
=======
            MESSAGE("The opposing Exveemon's Defense fell!");
            break;
        case STAT_ATK:
            MESSAGE("The opposing Exveemon's Attack fell!");
            break;
        case STAT_EVASION:
            MESSAGE("The opposing Exveemon's evasiveness harshly fell!");
            break;
        case STAT_ACC:
            MESSAGE("The opposing Exveemon's accuracy fell!");
            break;
        case STAT_SPATK:
            MESSAGE("The opposing Exveemon's Sp. Atk fell!");
            break;
        case STAT_SPDEF:
            MESSAGE("The opposing Exveemon's Sp. Def harshly fell!");
>>>>>>> upstream/master
            break;
        }
    } THEN {
        EXPECT_EQ(player->statStages[statId], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[statId], (statId == STAT_SPDEF || statId == STAT_EVASION) ? DEFAULT_STAT_STAGE - 2 : DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor triggers even if the attacking Pokemon also has Mirror Armor ability")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE("The opposing Corviknight used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Corviknight's Defense fell!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stats of an attacking Pokemon with the Clear Body ability")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_EXVEEMON) { Ability(ABILITY_CLEAR_BODY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Exveemon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
        MESSAGE("Foe Exveemon's Clear Body prevents stat loss!");
=======
        MESSAGE("The opposing Exveemon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
        MESSAGE("The opposing Exveemon's Clear Body prevents stat loss!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor lowers the Attack of Pokemon with Intimidate")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_COMMDRAMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Commdramon's Attack fell!");
=======
        MESSAGE("The opposing Commdramon's Attack fell!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stats of an attacking Pokemon behind Substitute")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Exveemon used Substitute!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        MESSAGE("Foe Exveemon used Leer!");
=======
        MESSAGE("The opposing Exveemon used Substitute!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        MESSAGE("The opposing Exveemon used Leer!");
>>>>>>> upstream/master
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor raises the stat of an attacking Pokemon with Contrary")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_MORPHOMON) {Ability(ABILITY_CONTRARY);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Morphomon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Morphomon's Defense rose!");
=======
        MESSAGE("The opposing Morphomon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Morphomon's Defense rose!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stat of the attacking Pokemon if it is already at -6")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Corviknigh used Screech!");
        MESSAGE("Corviknigh used Screech!");
        MESSAGE("Corviknigh used Screech!");
        MESSAGE("Foe Exveemon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Exveemon's Defense won't go lower!");
=======
        MESSAGE("Corviknight used Screech!");
        MESSAGE("Corviknight used Screech!");
        MESSAGE("Corviknight used Screech!");
        MESSAGE("The opposing Exveemon used Leer!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Exveemon's Defense won't go any lower!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], MIN_STAT_STAGE);
    }
}

// This behaviour needs to be verified in the actual games. Currently it's written to follow Showdown's logic.
DOUBLE_BATTLE_TEST("Mirror Armor lowers Speed of the partner Pokemon after Court Change was used by the opponent after it set up Sticky Web")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_STICKY_WEB) == EFFECT_STICKY_WEB);
        ASSUME(GetMoveEffect(MOVE_COURT_CHANGE) == EFFECT_COURT_CHANGE);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerRight, 2);}
        TURN { }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx used Sticky Web!");
        MESSAGE("Foe Exveemon used Court Change!");
        MESSAGE("Foe Exveemon swapped the battle effects affecting each side!");
        MESSAGE("Go! Corviknigh!");
        MESSAGE("Corviknigh was caught in a Sticky Web!");
=======
        MESSAGE("Lopmonx used Sticky Web!");
        MESSAGE("The opposing Exveemon used Court Change!");
        MESSAGE("The opposing Exveemon swapped the battle effects affecting each side of the field!");
        SEND_IN_MESSAGE("Corviknight");
        MESSAGE("Corviknight was caught in a sticky web!");
>>>>>>> upstream/master
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Lopmonx's Speed fell!");
    }
}

SINGLE_BATTLE_TEST("Mirror Armor reflects Tangling Hair speed drop")
{
    GIVEN {
        PLAYER(SPECIES_BUKAMON) { Ability(ABILITY_TANGLING_HAIR); }
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        ABILITY_POPUP(opponent, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor reflects Obstruct defense drop")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
    } WHEN {
        TURN { MOVE(player, MOVE_OBSTRUCT); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OBSTRUCT, player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        ABILITY_POPUP(opponent, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
    }
}
