#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dauntless Shield raises Defense by one stage")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZAMAZENTA) { Ability(ABILITY_DAUNTLESS_SHIELD); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Dauntless Shield raises Defense by one stage every time it switches in (Gen8)")
{
    GIVEN {
        WITH_CONFIG(GEN_DAUNTLESS_SHIELD, GEN_8);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZAMAZENTA) { Ability(ABILITY_DAUNTLESS_SHIELD); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Dauntless Shield raises Defense by one stage only once per battle (Gen 9+)")
{
    GIVEN {
        WITH_CONFIG(GEN_DAUNTLESS_SHIELD, GEN_9);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZAMAZENTA) { Ability(ABILITY_DAUNTLESS_SHIELD); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
        }
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Dauntless Shield activates when it's no longer effected by Neutralizing Gas")
{
    GIVEN {
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZAMAZENTA) { Ability(ABILITY_DAUNTLESS_SHIELD); }
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
        ABILITY_POPUP(opponent, ABILITY_DAUNTLESS_SHIELD);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Zamazenta's Dauntless Shield raised its Defense!");
    }
}
