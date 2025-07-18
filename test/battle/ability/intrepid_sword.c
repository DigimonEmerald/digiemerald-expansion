#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(B_INTREPID_SWORD == GEN_9);
}

SINGLE_BATTLE_TEST("Intrepid Sword raises Attack by one stage")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZACIAN) { Ability(ABILITY_INTREPID_SWORD); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Intrepid Sword raises Attack by one stage only once per battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZACIAN) { Ability(ABILITY_INTREPID_SWORD); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");
        }
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Intrepid Sword activates when it's no longer effected by Neutralizing Gas")
{
    GIVEN {
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZACIAN) { Ability(ABILITY_INTREPID_SWORD); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
<<<<<<< HEAD
        MESSAGE("Neutralizing Gas filled the area!");
        MESSAGE("Armadilmon, that's enough! Come back!");
        MESSAGE("The effects of Neutralizing Gas wore off!");
=======
        MESSAGE("Neutralizing gas filled the area!");
        SWITCH_OUT_MESSAGE("Armadilmon");
        MESSAGE("The effects of the neutralizing gas wore off!");
>>>>>>> upstream/master
        ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");
    }
}

SINGLE_BATTLE_TEST("Intrepid Sword and Dauntless Shield both can be Skill Swapped and active their effects on the Skill Swap user")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SKILL_SWAP) == EFFECT_SKILL_SWAP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZACIAN) { Ability(ABILITY_INTREPID_SWORD); }
        OPPONENT(SPECIES_ZAMAZENTA) { Ability(ABILITY_DAUNTLESS_SHIELD); }
    } WHEN {
        TURN { MOVE(player, MOVE_SKILL_SWAP); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SKILL_SWAP); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zacian's Intrepid Sword raised its Attack!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, player);
        ABILITY_POPUP(player, ABILITY_INTREPID_SWORD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Intrepid Sword raised its Attack!");

        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, player);
        ABILITY_POPUP(player, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Dauntless Shield raised its Defense!");
    }
}
