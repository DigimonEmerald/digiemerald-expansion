#include "global.h"
#include "test/battle.h"

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

// General switching behaviour
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
        MESSAGE(AI_TRAINER_NAME " sent out Gotsumon!");
    }
}

AI_DOUBLE_BATTLE_TEST("AI will not try to switch for the same pokemon for 2 spots in a double battle (all bad moves)")
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
        MESSAGE(AI_TRAINER_NAME " withdrew Tsumemon!");
        MESSAGE(AI_TRAINER_NAME " sent out Mokumon!");
        NONE_OF {
            MESSAGE(AI_TRAINER_NAME " withdrew Torballmon!");
            MESSAGE(AI_TRAINER_NAME " sent out Mokumon!");
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI will not try to switch for the same pokemon for 2 spots in a double battle (Wonder Guard)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BALUCHIMON);
        PLAYER(SPECIES_BALUCHIMON);
        // No moves to damage player.
        OPPONENT(SPECIES_TSUKAIMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TSUKAIMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TSUMEMON) { Moves(MOVE_SHADOW_BALL); }
    } WHEN {
        TURN { EXPECT_SWITCH(opponentLeft, 3); };
    } SCENE {
        MESSAGE("{PKMN} TRAINER LEAF withdrew Tsukaimon!");
        MESSAGE("{PKMN} TRAINER LEAF sent out Tsumemon!");
        NONE_OF {
            MESSAGE("{PKMN} TRAINER LEAF withdrew Toyagumon!");
            MESSAGE("{PKMN} TRAINER LEAF sent out Tsumemon!");
        }
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

// General AI_FLAG_SMART_MON_CHOICES behaviour
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
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_CALUMON_GALAR) { Level(100); Moves(MOVE_GROWL, MOVE_FAKE_OUT, MOVE_HONE_CLAWS); }
        // Scenario courtesy of Duke, who triggered the bug in the first place
        OPPONENT(SPECIES_CALUMON_GALAR) { Level(5); Moves(MOVE_GROWL, MOVE_FAKE_OUT, MOVE_HONE_CLAWS); }
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
        MESSAGE("The opposing Kakkinmon fainted!");
        if (kapurimonFirst) {
            MESSAGE(AI_TRAINER_NAME " sent out Kapurimon!");
        } else {
            MESSAGE(AI_TRAINER_NAME " sent out Curimon!");
        }
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
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_NONE); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); } // Mid battle, AI sends out Blkgatomon
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53);}
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize offensive options after slow U-Turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FALSE_SWIPE].effect == EFFECT_FALSE_SWIPE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_FALSE_SWIPE, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_U_TURN); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53); }
    } WHEN {
            TURN { MOVE(player, MOVE_FALSE_SWIPE); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize offensive options after Eject Button")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        ASSUME(gMovesInfo[MOVE_FALSE_SWIPE].effect == EFFECT_FALSE_SWIPE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_FALSE_SWIPE, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Item(ITEM_EJECT_BUTTON); Moves(MOVE_TACKLE); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53); }
    } WHEN {
            TURN { MOVE(player, MOVE_FALSE_SWIPE); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize offensive options after Eject Pack")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_GROWL, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Item(ITEM_EJECT_PACK); Moves(MOVE_TACKLE); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53); }
    } WHEN {
            TURN { MOVE(player, MOVE_GROWL); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize defensive options after Eject Pack if mon outspeeds")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_OVERHEAT, MOVE_EFFECT_SP_ATK_MINUS_2) == TRUE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Item(ITEM_EJECT_PACK); Moves(MOVE_OVERHEAT); Speed(6); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Mid-battle switches prioritize offensive options after Eject Pack if mon outspeeds but was Intimidate'd")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_OVERHEAT, MOVE_EFFECT_SP_ATK_MINUS_2) == TRUE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_STARAPTOR) { Level(30); Ability(ABILITY_INTIMIDATE); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); SpAttack(50); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Item(ITEM_EJECT_PACK); Moves(MOVE_OVERHEAT); Speed(6); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); SpDefense(50); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); SpDefense(53); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SWITCH(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Post-KO switches prioritize offensive options")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_TACKLE); Speed(4); }
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_IRON_HEAD); Speed(4); } // Mid battle, AI sends out Blkgatomon
        OPPONENT(SPECIES_YAAMON) { Level(30); Ability(ABILITY_STATIC); Moves(MOVE_CHARGE_BEAM); Speed(6); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: Post-KO switches factor in Trick Room for revenge killing")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TRICK_ROOM].effect == EFFECT_TRICK_ROOM);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Speed(10); Moves(MOVE_WING_ATTACK, MOVE_GROWL); }
        OPPONENT(SPECIES_DEXDORUMON) { Level(1); Speed(10); Moves(MOVE_TRICK_ROOM); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Speed(5); Moves(MOVE_THUNDERBOLT); }
        OPPONENT(SPECIES_YAAMON) { Level(30); Speed(15); Moves(MOVE_THUNDERBOLT); }
    } WHEN {
            TURN { EXPECT_MOVE(opponent, MOVE_TRICK_ROOM); MOVE(player, MOVE_GROWL); }
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SEND_OUT(opponent, 1); }
    }
}

// General AI_FLAG_SMART_SWITCHING behaviour
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

// Trapping behaviour
AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch in trapping mon mid battle")
{
    u32 aiSmartSwitchingFlag = 0;
    PARAMETRIZE { aiSmartSwitchingFlag = 0; }
    PARAMETRIZE { aiSmartSwitchingFlag = AI_FLAG_SMART_SWITCHING; }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GOLURK].types[0] == TYPE_GROUND);
        ASSUME(gSpeciesInfo[SPECIES_GOLURK].types[1] == TYPE_GHOST);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartSwitchingFlag);
        PLAYER(SPECIES_YAAMON) { Speed(4); Moves(MOVE_THUNDERBOLT, MOVE_AURA_SPHERE, MOVE_PROTECT); }
        PLAYER(SPECIES_LOPMONX) { Speed(1); };
        OPPONENT(SPECIES_DRACOMON) { Speed(1); Moves(MOVE_HEADBUTT); }
        OPPONENT(SPECIES_BUKAMON) { Speed(3); Ability(ABILITY_ARENA_TRAP); Moves(MOVE_EARTHQUAKE); }
        OPPONENT(SPECIES_GOLURK) { Speed(5); Moves(MOVE_EARTHQUAKE); }
    } WHEN {
        if (aiSmartSwitchingFlag == AI_FLAG_SMART_SWITCHING)
            TURN { MOVE(player, MOVE_AURA_SPHERE) ; EXPECT_SWITCH(opponent, 1); }
        else
            TURN { MOVE(player, MOVE_AURA_SPHERE) ; EXPECT_MOVE(opponent, MOVE_HEADBUTT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: AI will switch in trapping mon after KO")
{
    u32 aiSmartMonChoicesFlag = 0; // Enables trapping behaviour after KOs
    PARAMETRIZE { aiSmartMonChoicesFlag = 0; } // No trapping behaviour
    PARAMETRIZE { aiSmartMonChoicesFlag = AI_FLAG_SMART_MON_CHOICES; } // Traps with mid battle switches
    GIVEN{
        ASSUME(gSpeciesInfo[SPECIES_BLGARURMON].types[0] == TYPE_STEEL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartMonChoicesFlag);
        PLAYER(SPECIES_BLGARURMON) { Speed(2); Moves(MOVE_PROTECT, MOVE_TACKLE); }
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        OPPONENT(SPECIES_DRACOMON) { Speed(3); Moves(MOVE_SELF_DESTRUCT); }
        OPPONENT(SPECIES_MAGNEZONE) { Speed(1); Ability(ABILITY_MAGNET_PULL); Moves(MOVE_SHOCK_WAVE); }
        OPPONENT(SPECIES_FLAMEMON) { Speed(3); Moves(MOVE_EARTH_POWER); }
    } WHEN {
        if (aiSmartMonChoicesFlag == AI_FLAG_SMART_MON_CHOICES)
            TURN{ MOVE(player, MOVE_PROTECT); EXPECT_MOVE(opponent, MOVE_SELF_DESTRUCT); EXPECT_SEND_OUT(opponent, 1); }
        else
            TURN{ MOVE(player, MOVE_PROTECT); EXPECT_MOVE(opponent, MOVE_SELF_DESTRUCT); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI won't use trapping behaviour if player only has 1 mon left")
{
    u32 aiSmartMonChoicesFlag = 0; // Enables trapping behaviour after KOs
    PARAMETRIZE { aiSmartMonChoicesFlag = 0; } // No trapping behaviour
    PARAMETRIZE { aiSmartMonChoicesFlag = AI_FLAG_SMART_MON_CHOICES; } // Traps with mid battle switches
    GIVEN{
        ASSUME(gSpeciesInfo[SPECIES_BLGARURMON].types[0] == TYPE_STEEL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSmartMonChoicesFlag);
        PLAYER(SPECIES_BLGARURMON) { Speed(2); Moves(MOVE_PROTECT, MOVE_TACKLE); }
        OPPONENT(SPECIES_DRACOMON) { Speed(3); Moves(MOVE_SELF_DESTRUCT); }
        OPPONENT(SPECIES_MAGNEZONE) { Speed(1); Ability(ABILITY_MAGNET_PULL); Moves(MOVE_SHOCK_WAVE); }
        OPPONENT(SPECIES_FLAMEMON) { Speed(3); Moves(MOVE_EARTH_POWER); }
    } WHEN {
            TURN{ MOVE(player, MOVE_PROTECT); EXPECT_MOVE(opponent, MOVE_SELF_DESTRUCT); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if mon would be OKHO'd and they have a good switchin 50% of the time")
{
    PASSES_RANDOMLY(50, 100, RNG_AI_SWITCH_HASBADODDS);
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_BAKOMON].types[0] == TYPE_GROUND);
        ASSUME(gSpeciesInfo[SPECIES_ANKYLOMON].types[0] == TYPE_WATER);
        ASSUME(gSpeciesInfo[SPECIES_ANKYLOMON].types[1] == TYPE_FLYING);
        ASSUME(gMovesInfo[MOVE_THUNDERBOLT].type == TYPE_ELECTRIC);
        ASSUME(gMovesInfo[MOVE_EARTHQUAKE].type == TYPE_GROUND);

        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_YAAMON) { Moves(MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_THUNDER_SHOCK); }
        OPPONENT(SPECIES_ANKYLOMON) { Moves(MOVE_EARTHQUAKE); };
        OPPONENT(SPECIES_BAKOMON) { Moves(MOVE_EARTHQUAKE); Ability(ABILITY_ROCK_HEAD); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDERBOLT) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch out if it can't deal damage to a mon with Wonder Guard")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].types[0] == TYPE_BUG);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].types[1] == TYPE_GHOST);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[0] == ABILITY_WONDER_GUARD);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[1] == ABILITY_NONE);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[2] == ABILITY_NONE);
        ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
        ASSUME(gMovesInfo[MOVE_SHADOW_BALL].type == TYPE_GHOST);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_BALUCHIMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SHADOW_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it can't deal damage to a mon with Wonder Guard")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].types[0] == TYPE_BUG);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].types[1] == TYPE_GHOST);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[0] == ABILITY_WONDER_GUARD);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[1] == ABILITY_NONE);
        ASSUME(gSpeciesInfo[SPECIES_BALUCHIMON].abilities[2] == ABILITY_NONE);
        ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
        ASSUME(gMovesInfo[MOVE_SHADOW_BALL].type == TYPE_GHOST);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BALUCHIMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SHADOW_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Toxic'd for at least two turns 50% of the time with more than 1/3 HP remaining with good switchin")
{
    u32 species = SPECIES_NONE, odds = 0;
    PARAMETRIZE { species = SPECIES_TOYAGUMON, odds = 0; }
    PARAMETRIZE { species = SPECIES_BIOQUETMON, odds = 50; }
    PASSES_RANDOMLY(odds, 100, RNG_AI_SWITCH_BADLY_POISONED);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TOXIC].effect == EFFECT_TOXIC);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE, MOVE_CELEBRATE, MOVE_TOXIC, MOVE_AURA_SPHERE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(species) { Moves(MOVE_ROCK_SMASH); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_AURA_SPHERE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_AURA_SPHERE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Curse'd 50% of the time")
{
    PASSES_RANDOMLY(50, 100, RNG_AI_SWITCH_CURSED);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CURSE].effect == EFFECT_CURSE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_EBIDRAMON) { Moves(MOVE_FIRE_PUNCH, MOVE_CURSE); }
        PLAYER(SPECIES_DOKUGUMON) { Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_EBIDRAMON) { Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_EBIDRAMON) { Moves(MOVE_SHADOW_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE) ; EXPECT_MOVE(opponent, MOVE_SHADOW_BALL); }
        TURN { MOVE(player, MOVE_FIRE_PUNCH); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Nightmare'd 33% of the time")
{
    PASSES_RANDOMLY(33, 100, RNG_AI_SWITCH_NIGHTMARE);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_NIGHTMARE].effect == EFFECT_NIGHTMARE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_TSUMEMON) { Moves(MOVE_NIGHTMARE); }
        OPPONENT(SPECIES_EBIDRAMON) { Moves(MOVE_SHADOW_BALL); Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_EBIDRAMON) { Moves(MOVE_SHADOW_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_NIGHTMARE) ; EXPECT_MOVE(opponent, MOVE_SHADOW_BALL); }
        TURN { MOVE(player, MOVE_NIGHTMARE) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Leech Seed'd 25% of the time")
{
    PASSES_RANDOMLY(25, 100, RNG_AI_SWITCH_SEEDED);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LEECH_SEED].effect == EFFECT_LEECH_SEED);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_WHIMSICOTT) { Moves(MOVE_LEECH_SEED); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_LEECH_SEED) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_LEECH_SEED); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been infatuated")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ATTRACT].effect == EFFECT_ATTRACT);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_FLYBEEMON) { Moves(MOVE_ATTRACT); Gender(MON_FEMALE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); Gender(MON_MALE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); Gender(MON_MALE); }
    } WHEN {
        TURN { MOVE(player, MOVE_ATTRACT) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_ATTRACT) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Yawn'd with more than 1/3 HP remaining")
{
    u32 hp;
    PARAMETRIZE { hp = 30; }
    PARAMETRIZE { hp = 10; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_YAWN].effect == EFFECT_YAWN);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_AURUMON) { Moves(MOVE_TACKLE, MOVE_YAWN); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); HP(hp); MaxHP(30); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_YAWN) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        if (hp == 30)
            TURN { MOVE(player, MOVE_YAWN) ; EXPECT_SWITCH(opponent, 1); }
        else
            TURN { MOVE(player, MOVE_YAWN) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Yawn'd with more than 1/3 HP remaining (Doubles)")
{
    u32 hp;
    PARAMETRIZE { hp = 30; }
    PARAMETRIZE { hp = 10; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_YAWN].effect == EFFECT_YAWN);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_AURUMON) { Moves(MOVE_TACKLE, MOVE_CELEBRATE, MOVE_YAWN); }
        PLAYER(SPECIES_AURUMON) { Moves(MOVE_TACKLE, MOVE_CELEBRATE, MOVE_YAWN); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); HP(hp); MaxHP(30); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_YAWN, target: opponentLeft); MOVE(playerRight, MOVE_CELEBRATE, target: opponentLeft); }
        if (hp == 30)
            TURN { MOVE(playerLeft, MOVE_YAWN, target: opponentLeft); MOVE(playerRight, MOVE_CELEBRATE, target: opponentLeft); EXPECT_SWITCH(opponentLeft, 2); }
        else
            TURN { MOVE(playerLeft, MOVE_YAWN, target: opponentLeft); MOVE(playerRight, MOVE_CELEBRATE, target: opponentLeft); EXPECT_MOVE(opponentLeft, MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if player's mon is semi-invulnerable and it has an absorber")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DIVE].type == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_FLYBEEMON) { Moves(MOVE_DIVE); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_PETITMAMON) { Moves(MOVE_TACKLE); Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_DIVE) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has an absorber but current mon has SE move 33% of the time")
{
    PASSES_RANDOMLY(33, 100, RNG_AI_SWITCH_ABSORBING);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_FLYBEEMON) { Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SHOCK_WAVE); }
        OPPONENT(SPECIES_PETITMAMON) { Moves(MOVE_TACKLE); Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN) ; EXPECT_MOVE(opponent, MOVE_SHOCK_WAVE); }
        TURN { MOVE(player, MOVE_WATER_GUN) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if player's mon is charging and it has an absorber")
{
    PASSES_RANDOMLY(100, 100, RNG_AI_SWITCH_ABSORBING);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SOLAR_BEAM].type == TYPE_GRASS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_IMPMON_X) { Moves(MOVE_SOLAR_BEAM); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_JELLYMON) { Moves(MOVE_PLAY_ROUGH); Ability(ABILITY_SAP_SIPPER); }
    } WHEN {
        TURN { MOVE(player, MOVE_SOLAR_BEAM) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if player's mon is charging and it has a good switchin immunity (type)")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DIG].type == TYPE_GROUND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_POPOMON) { Moves(MOVE_DIG); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_ANGELAMON) { Moves(MOVE_WING_ATTACK); }
    } WHEN {
        TURN { MOVE(player, MOVE_DIG) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if player's mon is charging and it has a good switchin immunity (ability)")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DIG].type == TYPE_GROUND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_POPOMON) { Moves(MOVE_DIG); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_BRONZONG) { Moves(MOVE_PSYCHIC); Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_DIG) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has an absorber")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_FLYBEEMON) { Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_PETITMAMON) { Moves(MOVE_TACKLE); Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN) ; EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_WATER_GUN) ; EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if opponent uses two-turn move and it has a switchin that wins 1v1")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SKY_ATTACK; }
    PARAMETRIZE { move = MOVE_FLY; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLY].effect == EFFECT_SEMI_INVULNERABLE);
        ASSUME(gMovesInfo[MOVE_SKY_ATTACK].effect == EFFECT_TWO_TURNS_ATTACK);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_ANGELAMON) { Moves(move); }
        OPPONENT(SPECIES_DOKUGUMON) { Moves(MOVE_SURF); }
        OPPONENT(SPECIES_BLKGATOMON_UVER) { Moves(MOVE_ROCK_SLIDE); }
    } WHEN {
        TURN { MOVE(player, move); EXPECT_MOVE(opponent, MOVE_SURF); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch out if badly statused with >= 50% HP remaining and has Natural Cure and a good switchin 66% of the time")
{
    PASSES_RANDOMLY(66, 100, RNG_AI_SWITCH_NATURAL_CURE);
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_ZERIMON) { Moves(MOVE_TOXIC, MOVE_TACKLE); }
        OPPONENT(SPECIES_DARLIZAMON) { Ability(ABILITY_NATURAL_CURE); Moves(MOVE_TACKLE, MOVE_PECK); }
        OPPONENT(SPECIES_DARLIZAMON) { Ability(ABILITY_NATURAL_CURE); Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); EXPECT_MOVE(opponent, MOVE_PECK); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch out if it has <= 66% HP remaining and has Regenerator and a good switchin 50% of the time")
{
    PASSES_RANDOMLY(50, 100, RNG_AI_SWITCH_REGENERATOR);
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_TOYAGUMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_PICKMON_SILVER) { MaxHP(100); HP(65); Ability(ABILITY_REGENERATOR); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_PICKMON_SILVER) { Ability(ABILITY_REGENERATOR); Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if it has been Encore'd into a status move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ENCORE].effect == EFFECT_ENCORE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BIOSTEGMON) { Moves(MOVE_TACKLE, MOVE_ENCORE); }
        OPPONENT(SPECIES_ZERIMON) { Moves(MOVE_TOXIC, MOVE_SWEET_SCENT, MOVE_INGRAIN, MOVE_TACKLE); }
        OPPONENT(SPECIES_BLKGATOMON) { Moves(MOVE_METAL_CLAW); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_TOXIC); MOVE(player, MOVE_ENCORE); }
        TURN { MOVE(player, MOVE_ENCORE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will stay in if Encore'd into super effective move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ENCORE].effect == EFFECT_ENCORE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BIOSTEGMON) { Moves(MOVE_TACKLE, MOVE_ENCORE); }
        OPPONENT(SPECIES_ZERIMON) { Moves(MOVE_ACID); }
        OPPONENT(SPECIES_BLKGATOMON) { Moves(MOVE_METAL_CLAW); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_ACID); MOVE(player, MOVE_ENCORE); }
        TURN { EXPECT_MOVE(opponent, MOVE_ACID); MOVE(player, MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if Encore'd into neutral move with good switchin 50% of the time")
{
    KNOWN_FAILING; // AI still switches even if ShouldSwitch is set to immediately return FALSE, something external seems to be triggering this
    PASSES_RANDOMLY(50, 100, RNG_AI_SWITCH_ENCORE);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ENCORE].effect == EFFECT_ENCORE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BIOSTEGMON) { Moves(MOVE_TACKLE, MOVE_ENCORE); }
        OPPONENT(SPECIES_ZERIMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_BLKGATOMON) { Moves(MOVE_METAL_CLAW); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_ENCORE); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch out if mon has Truant and opponent has Protect")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_BLKGATOMON) { Moves(MOVE_TACKLE, MOVE_PROTECT); }
        OPPONENT(SPECIES_BABOONMON) { Ability(ABILITY_TRUANT); Moves(MOVE_BRICK_BREAK); }
        OPPONENT(SPECIES_BLKGATOMON) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_BRICK_BREAK); MOVE(player, MOVE_PROTECT); }
        TURN { EXPECT_SWITCH(opponent, 1); MOVE(player, MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch out if mon has Truant and opponent has invulnerability move and is faster")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_ANGELAMON) { Speed(5); Moves(MOVE_FLY); }
        OPPONENT(SPECIES_BABOONMON) { Speed(4); Ability(ABILITY_TRUANT); Moves(MOVE_ROCK_SLIDE); }
        OPPONENT(SPECIES_BLKGATOMON) { Speed(4); Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLY); EXPECT_MOVE(opponent, MOVE_ROCK_SLIDE); }
        TURN { SKIP_TURN(player); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if main attacking stat lowered by 2 stages with good switchin candidate 50% of the time")
{
    u32 aiSpecies = SPECIES_NONE, aiMove = MOVE_NONE, move = MOVE_NONE;

    PASSES_RANDOMLY(50, 100, RNG_AI_SWITCH_STATS_LOWERED);
    PARAMETRIZE {move = MOVE_CHARM; aiSpecies = SPECIES_DEMIDEVMON; aiMove = MOVE_FIRE_FANG; };
    PARAMETRIZE {move = MOVE_EERIE_IMPULSE; aiSpecies = SPECIES_KUNEMON; aiMove = MOVE_CONFUSION; };

    GIVEN {
        ASSUME(gMovesInfo[MOVE_CHARM].effect == EFFECT_ATTACK_DOWN_2);
        ASSUME(gMovesInfo[MOVE_EERIE_IMPULSE].effect == EFFECT_SPECIAL_ATTACK_DOWN_2);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BLKGATOMON) { Moves(move, MOVE_TACKLE); }
        OPPONENT(aiSpecies) { Moves(aiMove); }
        OPPONENT(SPECIES_DOKUGUMON) { Moves(MOVE_SURF); }
    } WHEN {
        TURN { MOVE(player, move); EXPECT_MOVE(opponent, aiMove); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI will switch out if main attacking stat lowered by 3+ stages")
{
    u32 aiSpecies = SPECIES_NONE, aiMove = MOVE_NONE, move = MOVE_NONE, move2 = MOVE_NONE;

    PASSES_RANDOMLY(100, 100, RNG_AI_SWITCH_STATS_LOWERED);
    PARAMETRIZE {move = MOVE_GROWL; move2 = MOVE_CHARM; aiSpecies = SPECIES_DEMIDEVMON; aiMove = MOVE_FIRE_FANG; };
    PARAMETRIZE {move = MOVE_CONFIDE; move2 = MOVE_EERIE_IMPULSE; aiSpecies = SPECIES_KUNEMON; aiMove = MOVE_STORED_POWER; };

    GIVEN {
        ASSUME(gMovesInfo[MOVE_CHARM].effect == EFFECT_ATTACK_DOWN_2);
        ASSUME(gMovesInfo[MOVE_EERIE_IMPULSE].effect == EFFECT_SPECIAL_ATTACK_DOWN_2);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_BLKGATOMON) { Moves(move, move2, MOVE_TACKLE); }
        OPPONENT(aiSpecies) { Moves(aiMove); }
        OPPONENT(SPECIES_DOKUGUMON) { Moves(MOVE_SURF); }
    } WHEN {
        TURN { MOVE(player, move); EXPECT_MOVE(opponent, aiMove); }
        TURN { MOVE(player, move2); EXPECT_MOVE(opponent, aiMove); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI will switch into mon with good type matchup and SE move if current mon has no SE move and no stats raised")
{
    u32 odds = 0, species = SPECIES_NONE, move = MOVE_NONE;
    PARAMETRIZE { odds = 33; species = SPECIES_MONODRAMON; move = MOVE_X_SCISSOR; }
    PARAMETRIZE { odds = 50; species = SPECIES_EBIDRAMON; move = MOVE_SHADOW_BALL; }
    PASSES_RANDOMLY(odds, 100, RNG_AI_SWITCH_SE_DEFENSIVE);
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MUNNA) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_MUNNA) { Moves(MOVE_TACKLE); }
        OPPONENT(species) { Moves(move); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_MON_CHOICES: AI correctly handles abilities when scoring moves")
{
    GIVEN {
        ASSUME(B_PRANKSTER_DARK_TYPES >= GEN_7);
        ASSUME(gSpeciesInfo[SPECIES_GRENINJA].types[1] == TYPE_DARK);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_GRENINJA) { Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_WHIMSICOTT) { Ability(ABILITY_PRANKSTER); Moves(MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_ABSORB); }
        OPPONENT(SPECIES_WHIMSICOTT) { Ability(ABILITY_INFILTRATOR); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); EXPECT_MOVE(opponent, MOVE_ABSORB); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI won't switch out if Yawn'd with only Ace mon remaining")
{
    u32 aceFlag;
    PARAMETRIZE{ aceFlag = 0; }
    PARAMETRIZE{ aceFlag = AI_FLAG_ACE_POKEMON; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_YAWN].effect == EFFECT_YAWN);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | aceFlag | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_LIOLLMON) { Moves(MOVE_YAWN, MOVE_CONFUSION, MOVE_POWER_GEM, MOVE_WATER_PULSE); Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_SCOLIPEDE) { Moves(MOVE_POISON_TAIL); }
        OPPONENT(SPECIES_EXERMON) { Moves(MOVE_KNOCK_OFF, MOVE_CRUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_YAWN); EXPECT_MOVE(opponent, MOVE_POISON_TAIL); }
        if (aceFlag)
            TURN { MOVE(player, MOVE_POWER_GEM); EXPECT_MOVE(opponent, MOVE_POISON_TAIL); }
        else
            TURN { MOVE(player, MOVE_POWER_GEM); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SMART_SWITCHING: AI won't switch in ace mon after U-Turn if other options available")
{
    u32 aceFlag;
    PARAMETRIZE{ aceFlag = 0; }
    PARAMETRIZE{ aceFlag = AI_FLAG_ACE_POKEMON; }
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | aceFlag | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_SWITCHING);
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_SURF); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_CHRYSALMON) { Level(5); Moves(MOVE_SPLASH); }
        OPPONENT(SPECIES_MONODRAMON) { Moves(MOVE_BUG_BITE); }
    } WHEN {
        if (aceFlag)
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 1); MOVE(player, MOVE_SURF); }
        else
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 2); MOVE(player, MOVE_SURF); }
    }
}

AI_SINGLE_BATTLE_TEST("Switch AI: AI won't switch in ace mon after U-Turn if other options available")
{
    u32 aceFlag;
    PARAMETRIZE{ aceFlag = 0; }
    PARAMETRIZE{ aceFlag = AI_FLAG_ACE_POKEMON; }
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | aceFlag | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_SURF); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_CHRYSALMON) { Level(5); Moves(MOVE_SPLASH); }
        OPPONENT(SPECIES_MONODRAMON) { Moves(MOVE_BUG_BITE); }
    } WHEN {
        if (aceFlag)
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 1); MOVE(player, MOVE_SURF); }
        else
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 2); MOVE(player, MOVE_SURF); }
    }
}
