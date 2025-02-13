#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hyper Cutter prevents intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;

    GIVEN {
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_SHED_SKIN); }
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_TACKLE); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Hyper Cutter prevents Attack loss!");
=======
        MESSAGE("The opposing Krabby's Hyper Cutter prevents Attack loss!");
>>>>>>> upstream/master
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter prevents Attack stage reduction from moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Hyper Cutter prevents Attack loss!");
=======
        MESSAGE("The opposing Krabby's Hyper Cutter prevents Attack loss!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Attack reduction from burn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
<<<<<<< HEAD
        MESSAGE("Foe Viximon was burned!");
=======
        MESSAGE("The opposing Krabby was burned!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter is ignored by Mold Breaker")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MOLD_BREAKER);
        MESSAGE("Tyutyumon breaks the mold!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, player);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Attack fell!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
            MESSAGE("Foe Viximon's Hyper Cutter prevents Attack loss!");
=======
        MESSAGE("The opposing Krabby's Attack fell!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
            MESSAGE("The opposing Krabby's Hyper Cutter prevents Attack loss!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Attack stage reduction from moves used by the user")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_SUPERPOWER, MOVE_EFFECT_ATK_DEF_DOWN) == TRUE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUPERPOWER); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUPERPOWER, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Attack fell!");
        MESSAGE("Foe Viximon's Defense fell!");
=======
        MESSAGE("The opposing Krabby's Attack fell!");
        MESSAGE("The opposing Krabby's Defense fell!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Topsy-Turvy")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
        ASSUME(gMovesInfo[MOVE_TOPSY_TURVY].effect == EFFECT_TOPSY_TURVY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWORDS_DANCE); MOVE(player, MOVE_TOPSY_TURVY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
        MESSAGE("Foe Viximon's stat changes were all reversed!");
=======
        MESSAGE("The opposing Krabby's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
        MESSAGE("All stat changes on the opposing Krabby were inverted!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 2);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Spectral Thief from resetting positive Attack stage changes")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
<<<<<<< HEAD
        ASSUME(MoveHasAdditionalEffect(MOVE_SPECTRAL_THIEF, MOVE_EFFECT_SPECTRAL_THIEF));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
=======
        ASSUME(gMovesInfo[MOVE_SPECTRAL_THIEF].effect == EFFECT_SPECTRAL_THIEF);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWORDS_DANCE); MOVE(player, MOVE_SPECTRAL_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Viximon's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
        MESSAGE("Lopmonx stole the target's boosted stats!");
=======
        MESSAGE("The opposing Krabby's Attack sharply rose!");
        MESSAGE("Wobbuffet stole the target's boosted stats!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent receiving negative Attack stage changes from Baton Pass")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_VIXIMON) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL);
               MOVE(opponent, MOVE_BATON_PASS);
               SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        MESSAGE("2 sent out Viximon!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}
