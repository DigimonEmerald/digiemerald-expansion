#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

<<<<<<< HEAD:test/battle/ai.c
AI_SINGLE_BATTLE_TEST("AI gets baited by Protect Switch tactics") // This behavior is to be fixed.
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_STUNFISK);
        PLAYER(SPECIES_ANKYLOMON);
        OPPONENT(SPECIES_DARKRAI) { Moves(MOVE_TACKLE, MOVE_PECK, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT); }
        OPPONENT(SPECIES_MONODRAMON) { Moves(MOVE_HYPER_BEAM, MOVE_FACADE, MOVE_GIGA_IMPACT, MOVE_EXTREME_SPEED); }
    } WHEN {

        TURN { MOVE(player, MOVE_PROTECT);  EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); } // E-quake
        TURN { SWITCH(player, 1);           EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); } // E-quake
        TURN { MOVE(player, MOVE_PROTECT);  EXPECT_MOVE(opponent, MOVE_THUNDERBOLT); } // T-Bolt
        TURN { SWITCH(player, 0);           EXPECT_MOVE(opponent, MOVE_THUNDERBOLT); } // T-Bolt
        TURN { MOVE(player, MOVE_PROTECT);  EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); } // E-quake
        TURN { SWITCH(player, 1);           EXPECT_MOVE(opponent, MOVE_EARTHQUAKE);} // E-quake
        TURN { MOVE(player, MOVE_PROTECT);  EXPECT_MOVE(opponent, MOVE_THUNDERBOLT); } // T-Bolt
    }
}

=======
>>>>>>> upstream/master:test/battle/ai/ai.c
AI_SINGLE_BATTLE_TEST("AI prefers Bubble over Water Gun if it's slower")
{
    u32 speedPlayer, speedAi;

    PARAMETRIZE { speedPlayer = 200; speedAi = 10; }
    PARAMETRIZE { speedPlayer = 10; speedAi = 200; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MONODRAMON) { Speed(speedPlayer); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_WATER_GUN, MOVE_BUBBLE); Speed(speedAi); }
    } WHEN {
        if (speedPlayer > speedAi)
        {
            TURN { SCORE_GT(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
            TURN { SCORE_GT(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
        }
        else
        {
            TURN { SCORE_EQ(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
            TURN { SCORE_EQ(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers Water Gun over Bubble if it knows that foe has Contrary")
{
    u32 abilityAI;

    PARAMETRIZE { abilityAI = ABILITY_MOXIE; }
    PARAMETRIZE { abilityAI = ABILITY_MOLD_BREAKER; } // Mold Breaker ignores Contrary.
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MORPHOMON) { Ability(ABILITY_CONTRARY); }
        OPPONENT(SPECIES_TYUTYUMON) { Moves(MOVE_WATER_GUN, MOVE_BUBBLE); Ability(abilityAI); }
    } WHEN {
            TURN { MOVE(player, MOVE_DEFENSE_CURL); }
            TURN { MOVE(player, MOVE_DEFENSE_CURL);
                   if (abilityAI == ABILITY_MOLD_BREAKER) { SCORE_EQ(opponent, MOVE_WATER_GUN, MOVE_BUBBLE); }
                   else { SCORE_GT(opponent, MOVE_WATER_GUN, MOVE_BUBBLE); }}
    } SCENE {
        MESSAGE("Morphomon's Defense fell!"); // Contrary activates
    } THEN {
        EXPECT(gBattleResources->aiData->abilities[B_POSITION_PLAYER_LEFT] == ABILITY_CONTRARY);
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers moves with better accuracy, but only if they both require the same number of hits to ko")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 hp, expectedMove, turns, abilityAtk, expectedMove2;

    abilityAtk = ABILITY_NONE;
    expectedMove2 = MOVE_NONE;

    // Here it's a simple test, both Slam and Strength deal the same damage, but Strength always hits, whereas Slam often misses.
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_TACKLE; hp = 490; expectedMove = MOVE_STRENGTH; turns = 4; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 365; expectedMove = MOVE_STRENGTH; turns = 3; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 245; expectedMove = MOVE_STRENGTH; turns = 2; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 125; expectedMove = MOVE_STRENGTH; turns = 1; }
    // Mega Kick deals more damage, but can miss more often. Here, AI should choose Mega Kick if it can faint target in less number of turns than Strength. Otherwise, it should use Strength.
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 170; expectedMove = MOVE_MEGA_KICK; turns = 1; }
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 245; expectedMove = MOVE_STRENGTH; turns = 2; }
    // Swift always hits and Guts has accuracy of 100%. Hustle lowers accuracy of all physical moves.
    PARAMETRIZE { abilityAtk = ABILITY_HUSTLE; move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 5; expectedMove = MOVE_SWIFT; turns = 1; }
    PARAMETRIZE { abilityAtk = ABILITY_HUSTLE; move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_GUST; move4 = MOVE_TACKLE; hp = 5; expectedMove = MOVE_GUST; turns = 1; }
    // Mega Kick and Slam both have lower accuracy. Gust and Tackle both have 100, so AI can choose either of them.
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_SLAM; move3 = MOVE_TACKLE; move4 = MOVE_GUST; hp = 5; expectedMove = MOVE_GUST; expectedMove2 = MOVE_TACKLE; turns = 1; }
    // All moves hit with No guard ability
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_GUST; hp = 5; expectedMove = MOVE_MEGA_KICK; expectedMove2 = MOVE_GUST; turns = 1; }
    // Tests to compare move that always hits and a beneficial effect. A move with higher acc should be chosen in this case.
    PARAMETRIZE { move1 = MOVE_SHOCK_WAVE; move2 = MOVE_ICY_WIND; hp = 5; expectedMove = MOVE_SHOCK_WAVE; turns = 1; }
    PARAMETRIZE { move1 = MOVE_SHOCK_WAVE; move2 = MOVE_ICY_WIND; move3 = MOVE_THUNDERBOLT; hp = 5; expectedMove = MOVE_SHOCK_WAVE; expectedMove2 = MOVE_THUNDERBOLT; turns = 1; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(hp); }
        PLAYER(SPECIES_LOPMONX);
        ASSUME(gMovesInfo[MOVE_SWIFT].accuracy == 0);
        ASSUME(gMovesInfo[MOVE_SLAM].power == gMovesInfo[MOVE_STRENGTH].power);
        ASSUME(gMovesInfo[MOVE_MEGA_KICK].power > gMovesInfo[MOVE_STRENGTH].power);
        ASSUME(gMovesInfo[MOVE_SLAM].accuracy < gMovesInfo[MOVE_STRENGTH].accuracy);
        ASSUME(gMovesInfo[MOVE_MEGA_KICK].accuracy < gMovesInfo[MOVE_STRENGTH].accuracy);
        ASSUME(gMovesInfo[MOVE_TACKLE].accuracy == 100);
        ASSUME(gMovesInfo[MOVE_GUST].accuracy == 100);
        ASSUME(gMovesInfo[MOVE_SHOCK_WAVE].accuracy == 0);
        ASSUME(gMovesInfo[MOVE_THUNDERBOLT].accuracy == 100);
        ASSUME(gMovesInfo[MOVE_ICY_WIND].accuracy != 100);
        ASSUME(gMovesInfo[MOVE_SLAM].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_STRENGTH].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_MEGA_KICK].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_SHOCK_WAVE].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_ICY_WIND].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_THUNDERBOLT].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_GUST].category == DAMAGE_CATEGORY_SPECIAL);
        OPPONENT(SPECIES_TRAILMON_BATTLE_ARMAMENT) { Moves(move1, move2, move3, move4); Ability(abilityAtk); SpAttack(50); } // Low Sp.Atk, so Swift deals less damage than Strength.
    } WHEN {
            switch (turns)
            {
            case 1:
                if (expectedMove2 != MOVE_NONE) {
                    TURN { EXPECT_MOVES(opponent, expectedMove, expectedMove2); SEND_OUT(player, 1); }
                }
                else {
                    TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                }
                break;
            case 2:
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                break;
            case 3:
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                break;
            case 4:
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                break;
            }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers moves which deal more damage instead of moves which are super-effective but deal less damage")
{
    u8 turns = 0;
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 expectedMove, abilityAtk, abilityDef;

    abilityAtk = ABILITY_NONE;

    // Scald and Poison Jab take 3 hits, Waterfall takes 2.
    PARAMETRIZE { move1 = MOVE_WATERFALL; move2 = MOVE_SCALD; move3 = MOVE_POISON_JAB; move4 = MOVE_WATER_GUN; expectedMove = MOVE_WATERFALL; turns = 2; }
    // Poison Jab takes 3 hits, Water gun 5. Immunity so there's no poison chip damage.
    PARAMETRIZE { move1 = MOVE_POISON_JAB; move2 = MOVE_WATER_GUN; expectedMove = MOVE_POISON_JAB; abilityDef = ABILITY_IMMUNITY; turns = 3; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATERFALL].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_SCALD].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_POISON_JAB].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_WATER_GUN].category == DAMAGE_CATEGORY_SPECIAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_GABUMON_X) { Ability(abilityDef); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PURURUMON) { Moves(move1, move2, move3, move4); Ability(abilityAtk); }
    } WHEN {
            switch (turns)
            {
            case 2:
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                break;
            case 3:
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); }
                TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                break;
            }
    } SCENE {
        MESSAGE("Gabumon_x fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers Earthquake over Drill Run if both require the same number of hits to ko")
{
    // Drill Run has less accuracy than E-quake, but can score a higher crit. However the chance is too small, so AI should ignore it.
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].category == DAMAGE_CATEGORY_PHYSICAL); // Added because Monimon has to KO Gabumon_x
        ASSUME(gMovesInfo[MOVE_DRILL_RUN].category == DAMAGE_CATEGORY_PHYSICAL);  // Added because Monimon has to KO Gabumon_x
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_GABUMON_X);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_MONIMON) { Moves(MOVE_EARTHQUAKE, MOVE_DRILL_RUN); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); SEND_OUT(player, 1); }
    }
    SCENE {
        MESSAGE("Gabumon_x fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers a weaker move over a one with a downside effect if both require the same number of hits to ko")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 hp, expectedMove, turns;

    // Both moves require the same number of turns but Flamethrower will be chosen over Overheat (powerful effect)
    PARAMETRIZE { move1 = MOVE_OVERHEAT; move2 = MOVE_FLAMETHROWER; hp = 300; expectedMove = MOVE_FLAMETHROWER; turns = 2; }
    // Overheat kill in least amount of turns
    PARAMETRIZE { move1 = MOVE_OVERHEAT; move2 = MOVE_FLAMETHROWER; hp = 250; expectedMove = MOVE_OVERHEAT; turns = 1; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLAMETHROWER].category == DAMAGE_CATEGORY_SPECIAL); // Added because Gabumon_x has to KO Lopmonx
        ASSUME(gMovesInfo[MOVE_OVERHEAT].category == DAMAGE_CATEGORY_SPECIAL);     // Added because Gabumon_x has to KO Lopmonx
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(hp); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GABUMON_X) { Moves(move1, move2, move3, move4); }
    } WHEN {
        switch (turns)
        {
        case 1:
            TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
            break;
        case 2:
            TURN { EXPECT_MOVE(opponent, expectedMove); }
            TURN { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
            break;
        }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI prefers moves with the best possible score, chosen randomly if tied")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(5); };
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_TAKE_DOWN); }
    } WHEN {
        TURN { EXPECT_MOVES(opponent, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB); SEND_OUT(player, 1); }
    }
    SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI can choose a status move that boosts the attack by two")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STRENGTH].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_HORN_ATTACK].category == DAMAGE_CATEGORY_PHYSICAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(277); };
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_BETAMON_X) { Moves(MOVE_STRENGTH, MOVE_HORN_ATTACK, MOVE_SWORDS_DANCE); }
    } WHEN {
        TURN { EXPECT_MOVES(opponent, MOVE_STRENGTH, MOVE_SWORDS_DANCE); }
        TURN { EXPECT_MOVE(opponent, MOVE_STRENGTH); SEND_OUT(player, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI chooses the safest option to faint the target, taking into account accuracy and move effect")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 expectedMove, expectedMove2 = MOVE_NONE;
    u16 abilityAtk = ABILITY_NONE, holdItemAtk = ITEM_NONE;

    // Psychic is not very effective, but always hits. Solarbeam requires a charging turn, Double Edge has recoil and Focus Blast can miss;
    PARAMETRIZE { abilityAtk = ABILITY_STURDY; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SOLAR_BEAM; move3 = MOVE_PSYCHIC; move4 = MOVE_DOUBLE_EDGE; expectedMove = MOVE_PSYCHIC; }
    // Same as above, but ai mon has rock head ability, so it can use Double Edge without taking recoil damage. Psychic can also lower Special Defense,
    // but because it faints the target it doesn't matter.
    PARAMETRIZE { abilityAtk = ABILITY_ROCK_HEAD; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SOLAR_BEAM; move3 = MOVE_PSYCHIC; move4 = MOVE_DOUBLE_EDGE;
                  expectedMove = MOVE_PSYCHIC; expectedMove2 = MOVE_DOUBLE_EDGE; }
    // This time it's Solarbeam + Psychic, because the weather is sunny.
    PARAMETRIZE { abilityAtk = ABILITY_DROUGHT; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SOLAR_BEAM; move3 = MOVE_PSYCHIC; move4 = MOVE_DOUBLE_EDGE;
                  expectedMove = MOVE_PSYCHIC; expectedMove2 = MOVE_SOLAR_BEAM; }
    // Psychic and Solar Beam are chosen because user is holding Power Herb
    PARAMETRIZE { abilityAtk = ABILITY_STURDY; holdItemAtk = ITEM_POWER_HERB; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SOLAR_BEAM; move3 = MOVE_PSYCHIC; move4 = MOVE_DOUBLE_EDGE;
                  expectedMove = MOVE_PSYCHIC; expectedMove2 = MOVE_SOLAR_BEAM; }
    // Skull Bash is chosen because it's the most accurate and is holding Power Herb
    PARAMETRIZE { abilityAtk = ABILITY_STURDY; holdItemAtk = ITEM_POWER_HERB; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SKULL_BASH; move3 = MOVE_SLAM; move4 = MOVE_DOUBLE_EDGE;
                  expectedMove = MOVE_SKULL_BASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(5); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_MONIMON) { Moves(move1, move2, move3, move4); Ability(abilityAtk); Item(holdItemAtk); }
    } WHEN {
        TURN {  if (expectedMove2 == MOVE_NONE) { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                else {EXPECT_MOVES(opponent, expectedMove, expectedMove2); SCORE_EQ(opponent, expectedMove, expectedMove2); SEND_OUT(player, 1);}
             }
    }
    SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI chooses the safest option to faint the target, taking into account accuracy and move effect failing")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 expectedMove, expectedMove2 = MOVE_NONE;
    u16 abilityAtk = ABILITY_NONE, holdItemAtk = ITEM_NONE;

    // Fiery Dance and Skull Bash are chosen because user is holding Power Herb
    PARAMETRIZE { abilityAtk = ABILITY_STURDY; holdItemAtk = ITEM_POWER_HERB; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SKULL_BASH; move3 = MOVE_FIERY_DANCE; move4 = MOVE_DOUBLE_EDGE;
                  expectedMove = MOVE_FIERY_DANCE; expectedMove2 = MOVE_SKULL_BASH; }
    // Crabhammer is chosen even if Skull Bash is more accurate, the user has no Power Herb
    PARAMETRIZE { abilityAtk = ABILITY_STURDY; move1 = MOVE_FOCUS_BLAST; move2 = MOVE_SKULL_BASH; move3 = MOVE_SLAM; move4 = MOVE_CRABHAMMER;
                  expectedMove = MOVE_CRABHAMMER; }

    KNOWN_FAILING;
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(5); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_MONIMON) { Moves(move1, move2, move3, move4); Ability(abilityAtk); Item(holdItemAtk); }
    } WHEN {
        TURN {  if (expectedMove2 == MOVE_NONE) { EXPECT_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                else {EXPECT_MOVES(opponent, expectedMove, expectedMove2); SCORE_EQ(opponent, expectedMove, expectedMove2); SEND_OUT(player, 1);}
             }
    }
    SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use Solar Beam if there is no Sun up or the user is not holding Power Herb")
{
    u16 abilityAtk = ABILITY_NONE;
    u16 holdItemAtk = ITEM_NONE;

    PARAMETRIZE { abilityAtk = ABILITY_DROUGHT; }
    PARAMETRIZE { holdItemAtk = ITEM_POWER_HERB; }
    PARAMETRIZE { }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SOLAR_BEAM].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_GRASS_PLEDGE].category == DAMAGE_CATEGORY_SPECIAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(211); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GABUMON_X) { Moves(MOVE_SOLAR_BEAM, MOVE_GRASS_PLEDGE); Ability(abilityAtk); Item(holdItemAtk); }
    } WHEN {
        if (abilityAtk == ABILITY_DROUGHT) {
            TURN { EXPECT_MOVES(opponent, MOVE_SOLAR_BEAM, MOVE_GRASS_PLEDGE); }
            TURN { EXPECT_MOVES(opponent, MOVE_SOLAR_BEAM, MOVE_GRASS_PLEDGE); SEND_OUT(player, 1); }
        } else if (holdItemAtk == ITEM_POWER_HERB) {
            TURN { EXPECT_MOVES(opponent, MOVE_SOLAR_BEAM, MOVE_GRASS_PLEDGE); MOVE(player, MOVE_KNOCK_OFF); }
            TURN { EXPECT_MOVE(opponent, MOVE_GRASS_PLEDGE); SEND_OUT(player, 1); }
        } else {
            TURN { EXPECT_MOVE(opponent, MOVE_GRASS_PLEDGE); }
            TURN { EXPECT_MOVE(opponent, MOVE_GRASS_PLEDGE); SEND_OUT(player, 1); }
        }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use ground type attacks against flying type Pokemon unless Gravity is in effect")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].category == DAMAGE_CATEGORY_PHYSICAL); // Otherwise, it doesn't KO Gotsumon
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_GOTSUMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PURURUMON) { Moves(MOVE_EARTHQUAKE, MOVE_TACKLE, MOVE_POISON_STING, MOVE_GUST); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { MOVE(player, MOVE_GRAVITY); NOT_EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Gravity intensified!");
    }
}

AI_DOUBLE_BATTLE_TEST("AI won't use a Weather changing move if partner already chose such move")
{
    u32 j, k;
    static const u16 weatherMoves[] = {MOVE_SUNNY_DAY, MOVE_HAIL, MOVE_RAIN_DANCE, MOVE_SANDSTORM, MOVE_SNOWSCAPE};
    u16 weatherMoveLeft = MOVE_NONE, weatherMoveRight = MOVE_NONE;

    for (j = 0; j < ARRAY_COUNT(weatherMoves); j++)
    {
        for (k = 0; k < ARRAY_COUNT(weatherMoves); k++)
        {
            PARAMETRIZE { weatherMoveLeft = weatherMoves[j]; weatherMoveRight = weatherMoves[k]; }
        }
    }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(weatherMoveLeft); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_TACKLE, weatherMoveRight); }
    } WHEN {
            TURN {  NOT_EXPECT_MOVE(opponentRight, weatherMoveRight);
                    SCORE_LT_VAL(opponentRight, weatherMoveRight, AI_SCORE_DEFAULT, target:playerLeft);
                    SCORE_LT_VAL(opponentRight, weatherMoveRight, AI_SCORE_DEFAULT, target:playerRight);
                    SCORE_LT_VAL(opponentRight, weatherMoveRight, AI_SCORE_DEFAULT, target:opponentLeft);
                 }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will not use Helping Hand if partner does not have any damage moves")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;

    PARAMETRIZE { move1 = MOVE_LEER; move2 = MOVE_TOXIC; }
    PARAMETRIZE { move1 = MOVE_HELPING_HAND; move2 = MOVE_PROTECT; }
    PARAMETRIZE { move1 = MOVE_ACUPRESSURE; move2 = MOVE_DOUBLE_TEAM; move3 = MOVE_TOXIC; move4 = MOVE_PROTECT; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_HELPING_HAND, MOVE_TACKLE); }
        OPPONENT(SPECIES_LOPMONX) { Moves(move1, move2, move3, move4); }
    } WHEN {
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_HELPING_HAND);
                    SCORE_LT_VAL(opponentLeft, MOVE_HELPING_HAND, AI_SCORE_DEFAULT, target:playerLeft);
                    SCORE_LT_VAL(opponentLeft, MOVE_HELPING_HAND, AI_SCORE_DEFAULT, target:playerRight);
                    SCORE_LT_VAL(opponentLeft, MOVE_HELPING_HAND, AI_SCORE_DEFAULT, target:opponentLeft);
                 }
    } SCENE {
<<<<<<< HEAD:test/battle/ai.c
        NOT MESSAGE("Foe Lopmonx used Helping Hand!");
=======
        NOT MESSAGE("The opposing Lopmonx used Helping Hand!");
>>>>>>> upstream/master:test/battle/ai/ai.c
    }
}

AI_DOUBLE_BATTLE_TEST("AI will not use a status move if partner already chose Helping Hand")
{
    s32 j;
    u32 statusMove = MOVE_NONE;

    for (j = MOVE_NONE + 1; j < MOVES_COUNT; j++)
    {
        if (gMovesInfo[j].category == DAMAGE_CATEGORY_STATUS) {
            PARAMETRIZE { statusMove = j; }
        }
    }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_HELPING_HAND); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_TACKLE, statusMove); }
    } WHEN {
            TURN {  NOT_EXPECT_MOVE(opponentRight, statusMove);
                    SCORE_LT_VAL(opponentRight, statusMove, AI_SCORE_DEFAULT, target:playerLeft);
                    SCORE_LT_VAL(opponentRight, statusMove, AI_SCORE_DEFAULT, target:playerRight);
                    SCORE_LT_VAL(opponentRight, statusMove, AI_SCORE_DEFAULT, target:opponentLeft);
                 }
    } SCENE {
<<<<<<< HEAD:test/battle/ai.c
        MESSAGE("Foe Lopmonx used Helping Hand!");
=======
        MESSAGE("The opposing Lopmonx used Helping Hand!");
>>>>>>> upstream/master:test/battle/ai/ai.c
    }
}

AI_SINGLE_BATTLE_TEST("AI without any flags chooses moves at random - singles")
{
    GIVEN {
        AI_FLAGS(0);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PURURUMON) { Moves(MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND); }
    } WHEN {
            TURN { EXPECT_MOVES(opponent, MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND);
                   SCORE_EQ_VAL(opponent, MOVE_SPLASH, AI_SCORE_DEFAULT);
                   SCORE_EQ_VAL(opponent, MOVE_EXPLOSION, AI_SCORE_DEFAULT);
                   SCORE_EQ_VAL(opponent, MOVE_RAGE, AI_SCORE_DEFAULT);
                   SCORE_EQ_VAL(opponent, MOVE_HELPING_HAND, AI_SCORE_DEFAULT);
                }
    }
}

AI_DOUBLE_BATTLE_TEST("AI without any flags chooses moves at random - doubles")
{
    GIVEN {
        AI_FLAGS(0);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PURURUMON) { Moves(MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND); }
        OPPONENT(SPECIES_PURURUMON) { Moves(MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND); }
    } WHEN {
            TURN { EXPECT_MOVES(opponentLeft, MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND);
                   EXPECT_MOVES(opponentRight, MOVE_SPLASH, MOVE_EXPLOSION, MOVE_RAGE, MOVE_HELPING_HAND);
                   SCORE_EQ_VAL(opponentLeft, MOVE_SPLASH, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentLeft, MOVE_EXPLOSION, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentLeft, MOVE_RAGE, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentLeft, MOVE_HELPING_HAND, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentRight, MOVE_SPLASH, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentRight, MOVE_EXPLOSION, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentRight, MOVE_RAGE, AI_SCORE_DEFAULT, target:playerLeft);
                   SCORE_EQ_VAL(opponentRight, MOVE_HELPING_HAND, AI_SCORE_DEFAULT, target:playerLeft);
                }
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose either Rock Tomb or Bulldoze if Stat drop effect will activate and they kill with the same number of hits")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { HP(46); Speed(20); }
        PLAYER(SPECIES_EXVEEMON) { Speed(20); }
        OPPONENT(SPECIES_LOPMONX) { Speed(10); Moves(MOVE_BULLDOZE, MOVE_ROCK_TOMB); }
    } WHEN {
            TURN { EXPECT_MOVES(opponent, MOVE_BULLDOZE, MOVE_ROCK_TOMB); }
            TURN { EXPECT_MOVES(opponent, MOVE_BULLDOZE, MOVE_ROCK_TOMB); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx fainted!");
    }
}

<<<<<<< HEAD:test/battle/ai.c
AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Number of hits to KO calculation checks whether incoming damage is less than recurring healing to avoid an infinite loop")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_BOMMON) { Level(30); Moves(MOVE_TACKLE); }
        // Opponent party courtesy of Skolgrahd, who triggered the bug in the first place
        OPPONENT(SPECIES_PETITMON) { Level(100); Moves(MOVE_ZIPPY_ZAP, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_KNOCK_OFF); }
        OPPONENT(SPECIES_SAKUMON_ALOLA) { Level(100); Moves(MOVE_AURORA_VEIL, MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_DISABLE); }
        OPPONENT(SPECIES_WEAVILE) { Level(100); Moves(MOVE_NIGHT_SLASH, MOVE_TRIPLE_AXEL, MOVE_ICE_SHARD, MOVE_FAKE_OUT); }
        OPPONENT(SPECIES_CRABMON) { Level(100); Moves(MOVE_TRANSFORM); }
        OPPONENT(SPECIES_GABUMON_X) { Level(100); Moves(MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST, MOVE_EXTRASENSORY); }
        OPPONENT(SPECIES_LABRAMON) { Level(100); Item(ITEM_LEFTOVERS); Moves(MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_HELPING_HAND, MOVE_THUNDER_WAVE); }
    } WHEN {
            TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVES(opponent, MOVE_ZIPPY_ZAP, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_KNOCK_OFF); }
    } SCENE {
        MESSAGE("Bommon fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Number of hits to KO calculation checks whether incoming damage is zero to avoid an infinite loop")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LEFTOVERS].holdEffect == HOLD_EFFECT_LEFTOVERS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ARGOMON_F) { Level(5); Moves(MOVE_SWORDS_DANCE, MOVE_WHIRLWIND, MOVE_SAND_ATTACK, MOVE_TAIL_WHIP); }
        // Scenario courtesy of Duke, who triggered the bug in the first place
        OPPONENT(SPECIES_MONIMON) { Level(100); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_MONIMON) { Level(100); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_BIOTHUNMON) { Level(100); Moves(MOVE_TACKLE); }
    } WHEN {
            TURN { MOVE(player, MOVE_SWORDS_DANCE); EXPECT_MOVES(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Argomon_f fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Avoid infinite loop if damage taken is equal to recurring healing")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LEFTOVERS].holdEffect == HOLD_EFFECT_LEFTOVERS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_CALUMON_GALARIAN) { Level(100); Moves(MOVE_GROWL, MOVE_FAKE_OUT, MOVE_HONE_CLAWS); }
        // Scenario courtesy of Duke, who triggered the bug in the first place
        OPPONENT(SPECIES_CALUMON_GALARIAN) { Level(5); Moves(MOVE_GROWL, MOVE_FAKE_OUT, MOVE_HONE_CLAWS); }
        OPPONENT(SPECIES_MONIMON) { Level(5); Moves(MOVE_DOUBLE_EDGE); }
        OPPONENT(SPECIES_MONIMON) { Level(5); Moves(MOVE_DOUBLE_EDGE); }
        OPPONENT(SPECIES_BIOTHUNMON) { Level(5); Moves(MOVE_DOUBLE_EDGE); }
        OPPONENT(SPECIES_HOUNDSTONE) { Level(5); Moves(MOVE_NIGHT_SHADE, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_PROTECT); Item(ITEM_LEFTOVERS); }
    } WHEN {
            TURN { MOVE(player, MOVE_FAKE_OUT); EXPECT_MOVES(opponent, MOVE_FAKE_OUT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: AI will not switch in a Pokemon which is slower and gets 1HKOed after fainting")
{
    bool32 kapurimonFirst;
    u32 speedAlakazm;
    u32 aiSmartSwitchFlags = 0;

    PARAMETRIZE{ speedAlakazm = 200; kapurimonFirst = TRUE; } // AI will always send out Alakazan as it sees a KO with Focus Blast, even if Kapurimon dies before it can get it off
    PARAMETRIZE{ speedAlakazm = 200; kapurimonFirst = FALSE; aiSmartSwitchFlags = AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES; } // AI_FLAG_SMART_MON_CHOICES lets AI see that Kapurimon would be KO'd before it can KO, and won't switch it in
    PARAMETRIZE{ speedAlakazm = 400; kapurimonFirst = TRUE; aiSmartSwitchFlags = AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES; } // AI_FLAG_SMART_MON_CHOICES recognizes that Kapurimon is faster and can KO, and will switch it in
    PARAMETRIZE { speedAlakazm = 200; kapurimonFirst = TRUE; } // AI will always send out Alakazan as it sees a KO with Focus Blast, even if Kapurimon dies before it can get it off
    PARAMETRIZE { speedAlakazm = 200; kapurimonFirst = FALSE; aiSmartSwitchFlags = AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES; } // AI_FLAG_SMART_MON_CHOICES lets AI see that Kapurimon would be KO'd before it can KO, and won't switch it in
    PARAMETRIZE { speedAlakazm = 400; kapurimonFirst = TRUE; aiSmartSwitchFlags = AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES; } // AI_FLAG_SMART_MON_CHOICES recognizes that Kapurimon is faster and can KO, and will switch it in

    GIVEN {
        ASSUME(gMovesInfo[MOVE_PSYCHIC].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_FOCUS_BLAST].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_BUBBLE_BEAM].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_WATER_GUN].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_STRENGTH].category == DAMAGE_CATEGORY_PHYSICAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartSwitchFlags);
        PLAYER(SPECIES_WEAVILE) { Speed(300); Ability(ABILITY_SHADOW_TAG); } // Weavile has Shadow Tag, so AI can't switch on the first turn, but has to do it after fainting.
        OPPONENT(SPECIES_KAKKINMON) { Speed(200); Moves(MOVE_PSYCHIC, MOVE_DISABLE, MOVE_TAUNT, MOVE_CALM_MIND); }
        OPPONENT(SPECIES_KAPURIMON) { Speed(speedAlakazm); Moves(MOVE_FOCUS_BLAST, MOVE_PSYCHIC); } // Kapurimon has a move which OHKOes Weavile, but it doesn't matter if he's getting KO-ed first.
        OPPONENT(SPECIES_CURIMON) { Speed(200); Moves(MOVE_BUBBLE_BEAM, MOVE_WATER_GUN, MOVE_LEER, MOVE_STRENGTH); } // Can't OHKO, but survives a hit from Weavile's Night Slash.
    } WHEN {
            TURN { MOVE(player, MOVE_NIGHT_SLASH) ; EXPECT_SEND_OUT(opponent, kapurimonFirst ? 1 : 2); } // AI doesn't send out Kapurimon if it gets outsped
    } SCENE {
        MESSAGE("Foe Kakkinmon fainted!");
        if (kapurimonFirst) {
            MESSAGE("{PKMN} TRAINER LEAF sent out Kapurimon!");
        } else {
            MESSAGE("{PKMN} TRAINER LEAF sent out Curimon!");
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI switches if Perish Song is about to kill")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) {Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_GOTSUMON) {Moves(MOVE_TACKLE); }
    } WHEN {
            TURN { MOVE(player, MOVE_PERISH_SONG); }
            TURN { ; }
            TURN { ; }
            TURN { EXPECT_SWITCH(opponent, 1); }
    } SCENE {
        MESSAGE("{PKMN} TRAINER LEAF sent out Gotsumon!");
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: AI considers hazard damage when choosing which Pokemon to switch in")
{
    u32 aiIsSmart = 0;
    u32 aiSmartSwitchFlags = 0;

    PARAMETRIZE { aiIsSmart = 0; aiSmartSwitchFlags = 0; } // AI doesn't care about hazard damage resulting in Pokemon being KO'd
    PARAMETRIZE { aiIsSmart = 1; aiSmartSwitchFlags = AI_FLAG_SMART_MON_CHOICES; } // AI_FLAG_SMART_MON_CHOICES avoids being KO'd as a result of hazards damage

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartSwitchFlags);
        PLAYER(SPECIES_FLAMEMON) { Speed(100); SpDefense(328); SpAttack(265); Moves(MOVE_STEALTH_ROCK, MOVE_SURF); } // Flamemon does ~56% minimum ~66% maximum, enough to KO Chibomon after rocks and never KO Gabumon_x after rocks
        OPPONENT(SPECIES_NEGAMON) { Level(5); Speed(5); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_CHIBOMON) { Speed(200); Moves(MOVE_FLAMETHROWER); SpAttack(317); SpDefense(207); MaxHP(297); } // Outspeends and 2HKOs Flamemon
        OPPONENT(SPECIES_GABUMON_X) { Speed(200); Moves(MOVE_FLAMETHROWER); SpAttack(317); SpDefense(207); MaxHP(297); } // Outspeends and 2HKOs Flamemon
    } WHEN {
            TURN { MOVE(player, MOVE_STEALTH_ROCK) ;}
            TURN { MOVE(player, MOVE_SURF); EXPECT_SEND_OUT(opponent, aiIsSmart ? 2 : 1); } // AI sends out Gabumon_x to get the KO with the flag rather than Chibomon
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize type matchup + SE move, then type matchup")
{
    u32 aiSmartSwitchFlags = 0;
    u32 move1;
    u32 move2;
    u32 expectedIndex;

    PARAMETRIZE { expectedIndex = 3; move1 = MOVE_TACKLE; move2 = MOVE_TACKLE; aiSmartSwitchFlags = 0; } // When not smart, AI will only switch in a defensive mon if it has a SE move, otherwise will just default to damage
    PARAMETRIZE { expectedIndex = 1; move1 = MOVE_GIGA_DRAIN; move2 = MOVE_TACKLE; aiSmartSwitchFlags = 0; }
    PARAMETRIZE { expectedIndex = 2; move1 = MOVE_TACKLE; move2 = MOVE_TACKLE; aiSmartSwitchFlags = AI_FLAG_SMART_MON_CHOICES; } // When smart, AI will prioritize SE move, but still switch in good type matchup without SE move
    PARAMETRIZE { expectedIndex = 1; move1 = MOVE_GIGA_DRAIN; move2 = MOVE_TACKLE; aiSmartSwitchFlags = AI_FLAG_SMART_MON_CHOICES; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartSwitchFlags);
        PLAYER(SPECIES_TERRIERMON_ASSISTANT) { Level(30); Moves(MOVE_MUD_BOMB, MOVE_WATER_GUN, MOVE_GROWL, MOVE_MUD_SHOT); Speed(5); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_NONE); Speed(6); } // Forces switchout
        OPPONENT(SPECIES_BETAMON) { Level(30); Moves(move1); Speed(4); }
        OPPONENT(SPECIES_AEGIOMON) { Level(30); Moves(move2); Speed(4); }
        OPPONENT(SPECIES_BIOQUETMON) { Level(30); Moves(MOVE_VITAL_THROW); Speed(4); }
    } WHEN {
            TURN { MOVE(player, MOVE_GROWL); EXPECT_SWITCH(opponent, expectedIndex); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize defensive options")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_NONE); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_HEADBUTT); Speed(4); } // Mid battle, AI sends out Blkgatomon
        OPPONENT(SPECIES_YAAMON) { Level(30); Moves(MOVE_CHARGE_BEAM); Speed(6); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Post-KO switches prioritize offensive options")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_TACKLE); Speed(4); }
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_HEADBUTT); Speed(4); } // Mid battle, AI sends out Blkgatomon
        OPPONENT(SPECIES_YAAMON) { Level(30); Moves(MOVE_CHARGE_BEAM); Speed(6); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: U-Turn will send out Ace Mon if it's the only one remaining")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_ACE_POKEMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI switches out after sufficient stat drops")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_SALAMON_X) { Level(30); Moves(MOVE_CHARM, MOVE_TACKLE); Ability(ABILITY_INTIMIDATE); Speed(5); }
        OPPONENT(SPECIES_SAKUTTOMON) { Level(30); Moves(MOVE_TACKLE); Speed(4); }
        OPPONENT(SPECIES_NEGAMON) { Level(30); Moves(MOVE_HEADBUTT); Speed(4); }
    } WHEN {
        TURN { MOVE(player, MOVE_CHARM); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will not switch out if Pokemon would faint to hazards unless party member can clear them")
{
    u32 move1;

    PARAMETRIZE { move1 = MOVE_TACKLE; }
    PARAMETRIZE { move1 = MOVE_RAPID_SPIN; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_RAPID_SPIN].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_HEADBUTT].category == DAMAGE_CATEGORY_PHYSICAL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_SALAMON_X) { Level(30); Moves(MOVE_CHARM, MOVE_TACKLE, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE); Ability(ABILITY_INTIMIDATE); Speed(5); }
        OPPONENT(SPECIES_SAKUTTOMON) { Level(30); Moves(MOVE_TACKLE); Item(ITEM_FOCUS_SASH); Speed(4); }
        OPPONENT(SPECIES_NEGAMON) { Level(30); Moves(MOVE_HEADBUTT, move1); Speed(4); }
    } WHEN {
        TURN { MOVE(player, MOVE_STEALTH_ROCK); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
        TURN { MOVE(player, MOVE_CHARM); }
        TURN { // If the AI has a mon that can remove hazards, don't prevent them switching out
            MOVE(player, MOVE_CHARM);
            if (move1 == MOVE_RAPID_SPIN)
                EXPECT_SWITCH(opponent, 1);
            else if (move1 == MOVE_TACKLE)
                EXPECT_MOVE(opponent, MOVE_TACKLE);
        }
    }
}

=======
>>>>>>> upstream/master:test/battle/ai/ai.c
AI_SINGLE_BATTLE_TEST("First Impression is preferred on the first turn of the species if it's the best dmg move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FIRST_IMPRESSION].effect == EFFECT_FIRST_TURN_ONLY);
        ASSUME(gMovesInfo[MOVE_FIRST_IMPRESSION].power == 90);
        ASSUME(gMovesInfo[MOVE_LUNGE].power == 80);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_BETAMON_X);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_FIRST_IMPRESSION, MOVE_LUNGE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_FIRST_IMPRESSION); }
        TURN { EXPECT_MOVE(opponent, MOVE_LUNGE); }
    }
}

AI_SINGLE_BATTLE_TEST("First Impression is not chosen if it's blocked by certain abilities")
{
    u16 species;
    u16 ability;

    PARAMETRIZE { species = SPECIES_BRUXISH; ability = ABILITY_DAZZLING; }
    PARAMETRIZE { species = SPECIES_FARIGIRAF; ability = ABILITY_ARMOR_TAIL; }
    PARAMETRIZE { species = SPECIES_TSAREENA; ability = ABILITY_QUEENLY_MAJESTY; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_FIRST_IMPRESSION].effect == EFFECT_FIRST_TURN_ONLY);
        ASSUME(gMovesInfo[MOVE_FIRST_IMPRESSION].power == 90);
        ASSUME(gMovesInfo[MOVE_LUNGE].power == 80);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_FIRST_IMPRESSION, MOVE_LUNGE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_LUNGE); }
    }
}

<<<<<<< HEAD:test/battle/ai.c
AI_DOUBLE_BATTLE_TEST("AI will not try to switch for the same pokemon for 2 spots in a double battle")
{
    u32 flags;

    PARAMETRIZE {flags = AI_FLAG_SMART_SWITCHING; }
    PARAMETRIZE {flags = 0; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | flags);
        PLAYER(SPECIES_CHOROMON);
        PLAYER(SPECIES_CHOROMON);
        // No moves to damage player.
        OPPONENT(SPECIES_TSUMEMON) { Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_TORBALLMON) { Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_TSUMEMON) { Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_MOKUMON) { Moves(MOVE_HEADBUTT); }
    } WHEN {
        TURN { EXPECT_SWITCH(opponentLeft, 3); };
    } SCENE {
        MESSAGE("{PKMN} TRAINER LEAF withdrew Tsumemon!");
        MESSAGE("{PKMN} TRAINER LEAF sent out Mokumon!");
        NONE_OF {
            MESSAGE("{PKMN} TRAINER LEAF withdrew Torballmon!");
            MESSAGE("{PKMN} TRAINER LEAF sent out Mokumon!");
        }
    }
}

=======
>>>>>>> upstream/master:test/battle/ai/ai.c
AI_SINGLE_BATTLE_TEST("AI will not choose Burn Up if the user lost the Fire typing")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BURN_UP].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_FLORAMON) { Moves(MOVE_BURN_UP, MOVE_EXTRASENSORY, MOVE_FLAMETHROWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_BURN_UP); }
        TURN { EXPECT_MOVE(opponent, MOVE_FLAMETHROWER); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will only choose Surf 1/3 times if the opposing mon has Volt Absorb")
{
    PASSES_RANDOMLY(1, 3, RNG_AI_ABILITY);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_THUNDERBOLT].type == TYPE_ELECTRIC);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); };
        OPPONENT(SPECIES_GUILMON) { Moves(MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_THUNDERBOLT); }
        TURN { EXPECT_MOVE(opponent, MOVE_SURF); }
        TURN { EXPECT_MOVE(opponent, MOVE_SURF); }
    } SCENE {
<<<<<<< HEAD:test/battle/ai.c
        MESSAGE("Foe Guilmon used Surf!");
        MESSAGE("Foe Guilmon used Surf!");
=======
        MESSAGE("The opposing Guilmon used Surf!");
        MESSAGE("The opposing Guilmon used Surf!");
>>>>>>> upstream/master:test/battle/ai/ai.c
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose Thunderbolt then Surf 2/3 times if the opposing mon has Volt Absorb")
{
    PASSES_RANDOMLY(2, 3, RNG_AI_ABILITY);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_THUNDERBOLT].type == TYPE_ELECTRIC);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); };
        OPPONENT(SPECIES_GUILMON) { Moves(MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_THUNDERBOLT); }
        TURN { EXPECT_MOVE(opponent, MOVE_SURF); }
    } SCENE {
<<<<<<< HEAD:test/battle/ai.c
        MESSAGE("Foe Guilmon used Thunderbolt!");
        MESSAGE("Foe Guilmon used Surf!");
=======
        MESSAGE("The opposing Guilmon used Thunderbolt!");
        MESSAGE("The opposing Guilmon used Surf!");
>>>>>>> upstream/master:test/battle/ai/ai.c
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose Scratch over Power-up Punch with Contrary")
{
    u32 ability;

    PARAMETRIZE {ability = ABILITY_SUCTION_CUPS; }
    PARAMETRIZE {ability = ABILITY_CONTRARY; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCRATCH].power == 40);
        ASSUME(gMovesInfo[MOVE_SCRATCH].type == TYPE_NORMAL);
        ASSUME(gMovesInfo[MOVE_POWER_UP_PUNCH].power == 40);
        ASSUME(gMovesInfo[MOVE_POWER_UP_PUNCH].type == TYPE_FIGHTING);
        ASSUME(gSpeciesInfo[SPECIES_CONOMON].types[0] == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_CONOMON].types[1] == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_CONOMON) { };
        OPPONENT(SPECIES_MALAMAR) { Ability(ability); Moves(MOVE_SCRATCH, MOVE_POWER_UP_PUNCH); }
    } WHEN {
        TURN {
            if (ability != ABILITY_CONTRARY)
                EXPECT_MOVE(opponent, MOVE_POWER_UP_PUNCH);
            else
                EXPECT_MOVE(opponent, MOVE_SCRATCH);
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI will choose Superpower over Outrage with Contrary")
{
    u32 ability;

    PARAMETRIZE {ability = ABILITY_SUCTION_CUPS; }
    PARAMETRIZE {ability = ABILITY_CONTRARY; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUPERPOWER].power == 120);
        ASSUME(gMovesInfo[MOVE_SUPERPOWER].type == TYPE_FIGHTING);
        ASSUME(gMovesInfo[MOVE_OUTRAGE].power == 120);
        ASSUME(gMovesInfo[MOVE_OUTRAGE].type == TYPE_DRAGON);
        ASSUME(gSpeciesInfo[SPECIES_CONOMON].types[0] == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_CONOMON].types[1] == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_CONOMON) { };
        OPPONENT(SPECIES_MALAMAR) { Ability(ability); Moves(MOVE_OUTRAGE, MOVE_SUPERPOWER); }
    } WHEN {
        TURN {
            if (ability != ABILITY_CONTRARY)
                EXPECT_MOVE(opponent, MOVE_OUTRAGE);
            else
                EXPECT_MOVE(opponent, MOVE_SUPERPOWER);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will not choose Earthquake if it damages the partner")
{
    u32 species;

    PARAMETRIZE { species = SPECIES_CHIBOMON; }
    PARAMETRIZE { species = SPECIES_BOTAMON; }
    PARAMETRIZE { species = SPECIES_FALCOMON_06; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PULSEMON) { Moves(MOVE_EARTHQUAKE, MOVE_TACKLE); }
        OPPONENT(species) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (species == SPECIES_CHIBOMON)
            TURN { EXPECT_MOVE(opponentLeft, MOVE_EARTHQUAKE); }
        else
            TURN { EXPECT_MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will choose Earthquake if partner is not alive")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_EARTHQUAKE, MOVE_TACKLE); }
        OPPONENT(SPECIES_PETITMON) { HP(1); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight); }
        TURN { EXPECT_MOVE(opponentLeft, MOVE_EARTHQUAKE); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will choose Earthquake if it kill an opposing mon and does 1/3 of damage to AI")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_EARTHQUAKE, MOVE_TACKLE); }
        OPPONENT(SPECIES_ARGOMON_IT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_EARTHQUAKE); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will the see a corresponding absorbing ability on partner to one of its moves")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_LIGHTNING_ROD; }
    PARAMETRIZE { ability = ABILITY_STATIC; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_DISCHARGE].target == MOVE_TARGET_FOES_AND_ALLY);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_DISCHARGE, MOVE_TACKLE); }
        OPPONENT(SPECIES_PETITMON) { HP(1); Ability(ability); Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (ability == ABILITY_LIGHTNING_ROD)
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DISCHARGE); }
        else
            TURN { EXPECT_MOVE(opponentLeft, MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI calculates guaranteed criticals and detects critical immunity")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_SWIFT_SWIM; }
    PARAMETRIZE { ability = ABILITY_SHELL_ARMOR; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_STORM_THROW].alwaysCriticalHit);
        ASSUME(gMovesInfo[MOVE_STORM_THROW].power == 60);
        ASSUME(gMovesInfo[MOVE_BRICK_BREAK].power == 75);
        ASSUME(gMovesInfo[MOVE_STORM_THROW].type == gMovesInfo[MOVE_BRICK_BREAK].type);
        ASSUME(gMovesInfo[MOVE_STORM_THROW].category == gMovesInfo[MOVE_BRICK_BREAK].category);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_DORUMON) { Ability(ability); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_STORM_THROW, MOVE_BRICK_BREAK); }
    } WHEN {
        if (ability == ABILITY_SHELL_ARMOR)
            TURN { EXPECT_MOVE(opponent, MOVE_BRICK_BREAK); }
        else
            TURN { EXPECT_MOVE(opponent, MOVE_STORM_THROW); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI recognizes Volt Absorb received from Trace")
{
    KNOWN_FAILING; // MGriffin's PR that switched two turn charging moves in AI tests broke this test, waiting on a fix
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_PICKMON_RED);
        PLAYER(SPECIES_ARCADIAMON_CHAMPION) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_DAMEMON) { Ability(ABILITY_VOLT_ABSORB); Moves(MOVE_THUNDER_WAVE, MOVE_THUNDERSHOCK, MOVE_WATER_GUN); }
        OPPONENT(SPECIES_DAMEMON) { Ability(ABILITY_VOLT_ABSORB); Moves(MOVE_THUNDER_WAVE, MOVE_THUNDERSHOCK, MOVE_WATER_GUN); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_THUNDERSHOCK); NOT_EXPECT_MOVE(opponentLeft, MOVE_THUNDER_WAVE); NOT_EXPECT_MOVE(opponentRight, MOVE_THUNDER_WAVE); }
    } THEN {
        EXPECT(gBattleResources->aiData->abilities[B_POSITION_PLAYER_RIGHT] == ABILITY_VOLT_ABSORB);
    }
}

AI_SINGLE_BATTLE_TEST("AI avoids contact moves against rocky helmet")
{
    u32 item;

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_ROCKY_HELMET; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_BRANCH_POKE].makesContact);
        ASSUME(!gMovesInfo[MOVE_LEAFAGE].makesContact);
        ASSUME(gMovesInfo[MOVE_BRANCH_POKE].power == gMovesInfo[MOVE_LEAFAGE].power);
        ASSUME(gMovesInfo[MOVE_BRANCH_POKE].type == gMovesInfo[MOVE_LEAFAGE].type);
        ASSUME(gMovesInfo[MOVE_BRANCH_POKE].category == gMovesInfo[MOVE_LEAFAGE].category);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_BRANCH_POKE, MOVE_LEAFAGE); }
    } WHEN {
        if (item == ITEM_ROCKY_HELMET)
            TURN { EXPECT_MOVE(opponent, MOVE_LEAFAGE); }
        else
            TURN { EXPECT_MOVES(opponent, MOVE_LEAFAGE, MOVE_BRANCH_POKE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses a guaranteed KO move instead of the move with the highest expected damage")
{
    u32 flags;

    PARAMETRIZE { flags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY; }
    PARAMETRIZE { flags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_SLASH].power == 70);
        ASSUME(gMovesInfo[MOVE_STRENGTH].power == 80);
        ASSUME(gMovesInfo[MOVE_SLASH].type == gMovesInfo[MOVE_STRENGTH].type);
        ASSUME(gMovesInfo[MOVE_SLASH].category == gMovesInfo[MOVE_STRENGTH].category);
        AI_FLAGS(flags);
        PLAYER(SPECIES_LOPMONX) { HP(225); }
        OPPONENT(SPECIES_EXERMON) { Ability(ABILITY_SUPER_LUCK); Moves(MOVE_SLASH, MOVE_STRENGTH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_SLASH); }
        if (flags & AI_FLAG_TRY_TO_FAINT)
            TURN { EXPECT_MOVE(opponent, MOVE_STRENGTH); }
        else
            TURN { EXPECT_MOVE(opponent, MOVE_SLASH); }
    } SCENE {
        if (flags & AI_FLAG_TRY_TO_FAINT)
            MESSAGE("Lopmonx fainted!");
        else
            NOT MESSAGE("Lopmonx fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI stays choice locked into moves in spite of the player's ability disabling them")
{
    u32 playerMon, ability, aiMove;
    PARAMETRIZE { ability = ABILITY_DAZZLING;          playerMon = SPECIES_BRUXISH;       aiMove = MOVE_QUICK_ATTACK; }
    PARAMETRIZE { ability = ABILITY_QUEENLY_MAJESTY;   playerMon = SPECIES_TSAREENA;      aiMove = MOVE_QUICK_ATTACK; }
    PARAMETRIZE { ability = ABILITY_ARMOR_TAIL;        playerMon = SPECIES_FARIGIRAF;     aiMove = MOVE_QUICK_ATTACK; }
    PARAMETRIZE { ability = ABILITY_SOUNDPROOF;        playerMon = SPECIES_TRAILMON_BATTLE_ARMAMENT;       aiMove = MOVE_BOOMBURST; }
    PARAMETRIZE { ability = ABILITY_BULLETPROOF;       playerMon = SPECIES_CHESNAUGHT;    aiMove = MOVE_BULLET_SEED; }

    GIVEN {
        ASSUME(gItemsInfo[ITEM_CHOICE_BAND].holdEffect == HOLD_EFFECT_CHOICE_BAND);
        ASSUME(gMovesInfo[MOVE_QUICK_ATTACK].priority == 1);
        ASSUME(gMovesInfo[MOVE_BOOMBURST].soundMove == TRUE);
        ASSUME(gMovesInfo[MOVE_BULLET_SEED].ballisticMove == TRUE);
        ASSUME(gMovesInfo[MOVE_TAIL_WHIP].category == DAMAGE_CATEGORY_STATUS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(playerMon) { Ability(ability); }
        OPPONENT(SPECIES_RYUDAMON) { Item(ITEM_CHOICE_BAND); Moves(aiMove, MOVE_TACKLE); }
    } WHEN {
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, aiMove); }
        TURN { EXPECT_MOVE(opponent, aiMove); }
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use Sucker Punch if it expects a move of the same priority bracket and the opponent is faster")
{
    GIVEN {
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) == 1);
        ASSUME(GetMovePriority(MOVE_SUCKER_PUNCH) == 1);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { Speed(300); Moves(MOVE_QUICK_ATTACK); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); Moves(MOVE_SUCKER_PUNCH, MOVE_SCRATCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); EXPECT_MOVE(opponent, MOVE_SUCKER_PUNCH); }
        TURN { MOVE(player, MOVE_QUICK_ATTACK); EXPECT_MOVE(opponent, MOVE_SCRATCH); }
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use thawing moves if target is frozen unless it is super effective or it has no other options")
{
    u32 aiFlags = 0; u32 status = 0; u32 aiMove = 0;
    PARAMETRIZE { status = STATUS1_FREEZE;      aiMove = MOVE_SCALD;    aiFlags = 0; }
    PARAMETRIZE { status = STATUS1_FREEZE;      aiMove = MOVE_SCALD;    aiFlags = AI_FLAG_CHECK_BAD_MOVE; }
    PARAMETRIZE { status = STATUS1_FROSTBITE;   aiMove = MOVE_SCALD;    aiFlags = 0; }
    PARAMETRIZE { status = STATUS1_FROSTBITE;   aiMove = MOVE_SCALD;    aiFlags = AI_FLAG_CHECK_BAD_MOVE; }
    PARAMETRIZE { status = STATUS1_FREEZE;      aiMove = MOVE_EMBER;    aiFlags = 0; }
    PARAMETRIZE { status = STATUS1_FREEZE;      aiMove = MOVE_EMBER;    aiFlags = AI_FLAG_CHECK_BAD_MOVE; }
    PARAMETRIZE { status = STATUS1_FROSTBITE;   aiMove = MOVE_EMBER;    aiFlags = 0; }
    PARAMETRIZE { status = STATUS1_FROSTBITE;   aiMove = MOVE_EMBER;    aiFlags = AI_FLAG_CHECK_BAD_MOVE; }

    GIVEN {
        ASSUME(GetMoveType(MOVE_EMBER) == TYPE_FIRE);
        ASSUME(GetMoveCategory(MOVE_TACKLE) == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(GetMoveCategory(MOVE_WATER_GUN) == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_SCALD].thawsUser == TRUE);
        AI_FLAGS(aiFlags | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_TACKLE); Status1(status); }
        OPPONENT(SPECIES_RELEMON) { Moves(MOVE_TACKLE, aiMove); }
    } WHEN {
        if (aiFlags == AI_FLAG_CHECK_BAD_MOVE)
            TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
        else
            TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, aiMove); }
    }
}

AI_SINGLE_BATTLE_TEST("AI score for Mean Look will be decreased if target can escape")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_ARGOMON_F) { Item(ITEM_SHED_SHELL); }
        OPPONENT(SPECIES_ARGOMON_F) { Moves(MOVE_TACKLE, MOVE_MEAN_LOOK); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_MEAN_LOOK, 90); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI considers Focus Sash when determining if it should switch out")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_FOCUS_SASH].holdEffect == HOLD_EFFECT_FOCUS_SASH);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_VORVOMON) { Speed(10); Moves(MOVE_AIR_SLASH); }
        OPPONENT(SPECIES_DARCMON) { Speed(1); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_TAPIRMON) { Speed(1); Moves(MOVE_FLAMETHROWER); Item(ITEM_FOCUS_SASH); }
        OPPONENT(SPECIES_GOTSUMON) { Speed(11); Moves(MOVE_SLUDGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_AIR_SLASH); EXPECT_MOVE(opponent, MOVE_SCRATCH); EXPECT_SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_AIR_SLASH); EXPECT_MOVE(opponent, MOVE_FLAMETHROWER); }
    }
}

AI_SINGLE_BATTLE_TEST("AI sees popped Air Balloon")
{
    GIVEN {
        ASSUME(GetItemHoldEffect(ITEM_AIR_BALLOON) == HOLD_EFFECT_AIR_BALLOON);
        ASSUME(GetMoveType(MOVE_EARTHQUAKE) == TYPE_GROUND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_SYAKOMON_X) { Item(ITEM_AIR_BALLOON); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_MONIMON) { Moves(MOVE_SCRATCH, MOVE_EARTHQUAKE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI sees popped Air Balloon after Air Balloon mon switches out and back in")
{
    GIVEN {
        ASSUME(GetItemHoldEffect(ITEM_AIR_BALLOON) == HOLD_EFFECT_AIR_BALLOON);
        ASSUME(GetMoveType(MOVE_EARTHQUAKE) == TYPE_GROUND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_SYAKOMON_X) { Item(ITEM_AIR_BALLOON); Moves(MOVE_SCRATCH); }
        PLAYER(SPECIES_SYAKOMON_X) { Item(ITEM_AIR_BALLOON); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_MONIMON) { Moves(MOVE_SCRATCH, MOVE_EARTHQUAKE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { SWITCH(player, 0); EXPECT_MOVE(opponent, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_EARTHQUAKE); SEND_OUT(player, 1); }
    }
}

SINGLE_BATTLE_TEST("AI correctly records used moves")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_TACKLE, MOVE_GROWL, MOVE_FLOWER_TRICK, MOVE_TORCH_SONG); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_RAGE_FIST, MOVE_PSYCHIC, MOVE_SCRATCH, MOVE_EARTHQUAKE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE);       MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { MOVE(player, MOVE_FLOWER_TRICK); MOVE(opponent, MOVE_SCRATCH);    }
        TURN { MOVE(player, MOVE_TORCH_SONG);   MOVE(opponent, MOVE_PSYCHIC);    }
        TURN { MOVE(player, MOVE_GROWL);        MOVE(opponent, MOVE_RAGE_FIST);  }
    } THEN {
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][0], MOVE_TACKLE);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][1], MOVE_GROWL);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][2], MOVE_FLOWER_TRICK);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][3], MOVE_TORCH_SONG);

        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_OPPONENT_LEFT][0], MOVE_RAGE_FIST);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_OPPONENT_LEFT][1], MOVE_PSYCHIC);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_OPPONENT_LEFT][2], MOVE_SCRATCH);
        EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_OPPONENT_LEFT][3], MOVE_EARTHQUAKE);
    }
}

AI_SINGLE_BATTLE_TEST("AI won't boost stats against opponent with Unaware")
{
    GIVEN {
        MoveHasAdditionalEffectSelf(MOVE_SWORDS_DANCE, MOVE_EFFECT_ATK_PLUS_2);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_KUDAMON_06) { Ability(ABILITY_UNAWARE); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_BODY_SLAM, MOVE_SWORDS_DANCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, MOVE_BODY_SLAM); }
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use status moves against opponents that would benefit")
{
    u32 aiMove;
    PARAMETRIZE { aiMove = MOVE_WILL_O_WISP; }
    PARAMETRIZE { aiMove = MOVE_TOXIC; }
    PARAMETRIZE { aiMove = MOVE_THUNDER_WAVE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WILL_O_WISP) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_WILL_O_WISP) == MOVE_EFFECT_BURN);
        ASSUME(GetMoveEffect(MOVE_TOXIC) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_TOXIC) == MOVE_EFFECT_TOXIC);
        ASSUME(GetMoveEffect(MOVE_THUNDER_WAVE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_THUNDER_WAVE) == MOVE_EFFECT_PARALYSIS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_ANGELAMON) { Ability(ABILITY_GUTS); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_TACKLE, aiMove); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI sees that Primal weather can block a move by type")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_HYDRO_PUMP) == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_CURIMON) { Moves(MOVE_HYDRO_PUMP, MOVE_POUND); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_POUND); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI sees opposing drain ability")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_THUNDERBOLT) == TYPE_ELECTRIC);
        ASSUME(GetMoveType(MOVE_RAZOR_LEAF) != TYPE_ELECTRIC);
        ASSUME(GetMoveType(MOVE_METAL_CLAW) != TYPE_ELECTRIC);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_PICHIMON) { Ability(ABILITY_LIGHTNING_ROD); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_VIXIMON) { Ability(ABILITY_VOLT_ABSORB); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_PICKMON_RED) { Moves(MOVE_THUNDERBOLT, MOVE_RAZOR_LEAF); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_THUNDERBOLT, MOVE_METAL_CLAW); }
    } WHEN {
        TURN {
            NOT_EXPECT_MOVE(opponentLeft, MOVE_THUNDERBOLT);
            NOT_EXPECT_MOVE(opponentRight, MOVE_THUNDERBOLT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will not set up Weather if it wont have any affect")
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_CLOUD_NINE; }
    PARAMETRIZE { ability = ABILITY_DAMP; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_RAIN_DANCE) == EFFECT_RAIN_DANCE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_DEMMERAMON) { Ability(ability); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_DOTFALCMON) { Ability(ABILITY_SWIFT_SWIM); Moves(MOVE_RAIN_DANCE, MOVE_POUND); }
    } WHEN {
        if (ability == ABILITY_CLOUD_NINE)
            TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_POUND); }
        else
            TURN { MOVE(player, MOVE_SCRATCH); EXPECT_MOVE(opponent, MOVE_RAIN_DANCE); }
    }
}

AI_SINGLE_BATTLE_TEST("Move scoring comparison properly awards bonus point to best OHKO move")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_THUNDER, MOVE_EFFECT_PARALYSIS));
        ASSUME(GetMoveAdditionalEffectCount(MOVE_WATER_SPOUT) == 0);
        ASSUME(GetMoveAdditionalEffectCount(MOVE_WATER_GUN) == 0);
        ASSUME(GetMoveAdditionalEffectCount(MOVE_ORIGIN_PULSE) == 0);
        ASSUME(GetMoveAccuracy(MOVE_WATER_SPOUT) > GetMoveAccuracy(MOVE_THUNDER));
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_CHAMELEMON) { Level(50); }
        OPPONENT(SPECIES_CHAMELEMON) { Moves(MOVE_THUNDER, MOVE_WATER_SPOUT, MOVE_WATER_GUN, MOVE_SURF); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_WATER_SPOUT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will stop setting up at +4")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_ZIGZAGOON) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_TACKLE, MOVE_IRON_DEFENSE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_IRON_DEFENSE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_IRON_DEFENSE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
    }
}
