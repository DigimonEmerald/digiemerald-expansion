#include "global.h"
#include "test/battle.h"

// ============= DYNAMAX AND MAX MOVE INTERACTIONS ===================
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamax increases HP and max HP by 1.5x", u16 hp)
{
<<<<<<< HEAD:test/dynamax.c
    bool32 dynamax;
    PARAMETRIZE { dynamax = FALSE; }
    PARAMETRIZE { dynamax = TRUE; }
    GIVEN { // TODO: Dynamax level
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
=======
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: dynamax); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (dynamax) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
            MESSAGE("Lopmonx used Max Strike!");
        }
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } THEN {
        results[i].hp = player->hp;
    } FINALLY {
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.5), results[1].hp);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamax Level increases HP and max HP multipliers by 0.05 for each level", u16 hp)
{
    u32 dynamax, level;
    PARAMETRIZE { dynamax = GIMMICK_NONE; level = 0; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 0; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 1; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 2; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 3; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 4; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 5; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 6; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 7; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 8; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 9; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; level = 10; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { DynamaxLevel(level); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: dynamax); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (dynamax) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
            MESSAGE("Lopmonx used Max Strike!");
        }
        MESSAGE("The opposing Lopmonx used Celebrate!");
    } THEN {
        results[i].hp = player->hp;
    } FINALLY {
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.5), results[1].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.55), results[2].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.6), results[3].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.65), results[4].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.7), results[5].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.75), results[6].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.8), results[7].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.85), results[8].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.9), results[9].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(1.95), results[10].hp);
        EXPECT_MUL_EQ(results[0].hp, Q_4_12(2.0), results[11].hp);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamax expires after three turns", u16 hp)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: dynamax); }   // 1st max move
        TURN { MOVE(player, MOVE_TACKLE); }                     // 2nd max move
        TURN { MOVE(player, MOVE_TACKLE); }                     // 3rd max move
    } SCENE {
        int j;
        for (j = 0; j < DYNAMAX_TURNS_COUNT; ++j) {
            if (dynamax)
                MESSAGE("Lopmonx used Max Strike!");
            else
<<<<<<< HEAD:test/dynamax.c
                MESSAGE("Lopmonx used Tackle!");
            MESSAGE("Foe Lopmonx used Celebrate!");
=======
                MESSAGE("Lopmonx used Tackle!");
            MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
        if (dynamax) // Expect to have visual reversion at the end.
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
    } THEN {
        results[i].hp = player->hp;
    } FINALLY {
        EXPECT_EQ(results[0].hp, results[1].hp);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamax expires after three turns and correctly converts HP according to Dynamax Level")
{
    u32 dynamaxLevel, dynamax;
    u16 capturedHP, finalHP;
    s16 capturedDamage;
    PARAMETRIZE { dynamaxLevel = 0; dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamaxLevel = 0; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 1; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 2; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 3; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 4; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 5; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 6; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 7; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 8; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 9; dynamax = GIMMICK_DYNAMAX; }
    PARAMETRIZE { dynamaxLevel = 10; dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { DynamaxLevel(dynamaxLevel); HP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: dynamax); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
        TURN { }
    } SCENE {
        if (dynamax)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        if (dynamax)
            HP_BAR(player, captureHP: &capturedHP);
        else
            HP_BAR(player, captureDamage: &capturedDamage);
        if (dynamax)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
    } THEN {
        finalHP = player->hp;
        if (dynamax)
            EXPECT_MUL_EQ(finalHP, GetDynamaxLevelHPMultiplier(dynamaxLevel, FALSE), capturedHP);
        EXPECT_LE(finalHP, 200);
        EXPECT_GE(finalHP, 200 - capturedDamage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon cannot be flinched")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FAKE_OUT].effect == EFFECT_FIRST_TURN_ONLY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_FAKE_OUT); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Fake Out!");
        NONE_OF { MESSAGE("Lopmonx flinched!"); }
        MESSAGE("Lopmonx used Max Strike!");
=======
        MESSAGE("The opposing Lopmonx used Fake Out!");
        NONE_OF { MESSAGE("Lopmonx flinched and couldn't move!"); }
        MESSAGE("Lopmonx used Max Strike!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon cannot be hit by weight-based moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HEAVY_SLAM].effect == EFFECT_HEAT_CRASH);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_HEAVY_SLAM); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Heavy Slam!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Heavy Slam!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("The move was blocked by the power of Dynamax!");
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon cannot be hit by OHKO moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FISSURE].effect == EFFECT_OHKO);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_KOZENIMON) { Ability(ABILITY_NO_GUARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_FISSURE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Kozenimon used Fissure!");
        MESSAGE("Lopmonx is unaffected!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Kozenimon used Fissure!");
        MESSAGE("Lopmonx is unaffected!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        NONE_OF { HP_BAR(player); }
    }
}

<<<<<<< HEAD:test/dynamax.c
// can't be used at all in Raid, see "Documenting Dynamax"
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by Destiny Bond")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(50); };
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_DESTINY_BOND); MOVE(player, MOVE_TACKLE, dynamax: TRUE); }
    } SCENE {
        MESSAGE("Foe Lopmonx used Destiny Bond!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx fainted!");
        NONE_OF { HP_BAR(player); }
    }
}

=======
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are affected by Grudge")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(50); };
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_GRUDGE); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Grudge!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Lopmonx's Tackle lost all its PP due to the GRUDGE!");
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Lopmonx used Grudge!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Lopmonx's Tackle lost all its PP due to the grudge!");
        MESSAGE("The opposing Lopmonx fainted!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by phazing moves, but still take damage")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
        ASSUME(gMovesInfo[MOVE_WHIRLWIND].effect == EFFECT_ROAR);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(opponent, MOVE_WHIRLWIND); MOVE(player, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Dragon Tail!");
        HP_BAR(player);
        MESSAGE("The move was blocked by the power of Dynamax!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Whirlwind!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Dragon Tail!");
        HP_BAR(player);
        MESSAGE("The move was blocked by the power of Dynamax!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Whirlwind!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("The move was blocked by the power of Dynamax!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by phazing moves but no block message is printed if they faint")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
        PLAYER(SPECIES_LOPMONX) { HP(1); };
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); SEND_OUT(player, 1); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Dragon Tail!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Dragon Tail!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player);
        MESSAGE("Lopmonx fainted!");
        NOT MESSAGE("The move was blocked by the power of Dynamax!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by Red Card")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx held up its Red Card against Lopmonx!");
=======
        MESSAGE("The opposing Lopmonx held up its Red Card against Lopmonx!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("The move was blocked by the power of Dynamax!");
    } THEN {
        EXPECT_EQ(opponent->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon can be switched out by Eject Button")
{
    GIVEN {
<<<<<<< HEAD:test/dynamax.c
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
=======
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Tackle!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Tackle!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx is switched out with the Eject Button!");
    } THEN {
        EXPECT_EQ(opponent->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon cannot have their ability swapped to another Pokemon's")
{
    GIVEN {
        PLAYER(SPECIES_SHAMANMON) { Ability(ABILITY_SCRAPPY); }
        OPPONENT(SPECIES_RUNERIGUS) { Ability(ABILITY_WANDERING_SPIRIT); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_SKILL_SWAP); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Shamanmon used Max Strike!");
        MESSAGE("Foe Runerigus used Skill Swap!");
=======
        MESSAGE("Shamanmon used Max Strike!");
        MESSAGE("The opposing Runerigus used Skill Swap!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->ability, ABILITY_SCRAPPY);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon can have their ability changed or suppressed")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Ability(ABILITY_SHADOW_TAG); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_SIMPLE_BEAM); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Simple Beam!");
        MESSAGE("Lopmonx acquired Simple!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Simple Beam!");
        MESSAGE("Lopmonx acquired Simple!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } THEN {
        EXPECT_EQ(player->ability, ABILITY_SIMPLE);
    }
}

<<<<<<< HEAD:test/dynamax.c
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are immune to Encore")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, dynamax: TRUE); MOVE(opponent, MOVE_ENCORE); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Encore!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Max Flare!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon can be encored immediately after reverting")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(50); }; // yes, this speed is necessary
        OPPONENT(SPECIES_LOPMONX) { Speed(100); };
    } WHEN {
        TURN { MOVE(player, MOVE_ARM_THRUST, dynamax: TRUE); }
        TURN { MOVE(player, MOVE_ARM_THRUST); }
        TURN { MOVE(player, MOVE_ARM_THRUST); }
        TURN { MOVE(opponent, MOVE_ENCORE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("Foe Lopmonx used Encore!");
        MESSAGE("Lopmonx used Arm Thrust!");
    }
}

=======
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
// Max Moves don't make contact, so Cursed Body doesn't need to be tested, but it is coded for.
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon's Max Moves cannot be disabled")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_DISABLE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Disable!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Disable!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon can have base moves disabled on their first turn")
{
    GIVEN {
        ASSUME(B_DISABLE_TURNS >= GEN_5);
        PLAYER(SPECIES_LOPMONX) { Speed(50); };
        OPPONENT(SPECIES_LOPMONX) { Speed(100); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_DISABLE); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_TACKLE, allowed: FALSE); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Celebrate!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("Foe Lopmonx used Disable!");
        MESSAGE("Lopmonx's Tackle was disabled!");
        MESSAGE("Lopmonx used Max Strike!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("The opposing Lopmonx used Disable!");
        MESSAGE("Lopmonx's Tackle was disabled!");
        MESSAGE("Lopmonx used Max Strike!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are immune to Torment")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_TORMENT); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Torment!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Torment!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("But it failed!");
    }
}

// This is true for all item-removing moves.
SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not immune to Knock Off")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_POTION); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_KNOCK_OFF); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Knock Off!");
        MESSAGE("Foe Lopmonx knocked off Lopmonx's Potion!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Knock Off!");
        MESSAGE("The opposing Lopmonx knocked off Lopmonx's Potion!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon lose their substitutes")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Substitute!");
        MESSAGE("Lopmonx made a SUBSTITUTE!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx used Tackle!");
=======
        MESSAGE("Lopmonx used Substitute!");
        MESSAGE("Lopmonx put in a substitute!");
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Tackle!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon that changes forms does not gain HP")
{
    u16 capturedHP, finalHP;
    GIVEN {
<<<<<<< HEAD:test/dynamax.c
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
=======
        PLAYER(SPECIES_BIOSUPINOMON_BATTLE_BOND) { Ability(ABILITY_BATTLE_BOND); HP(100); Speed(100); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); Speed(1000); }
        OPPONENT(SPECIES_LOPMONX) { Speed(10); }
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); SEND_OUT(opponent, 1); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Guard!");
        MESSAGE("Exveemon used Trick Room!");
=======
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureHP: &capturedHP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_STRIKE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
    } THEN {
        finalHP = player->hp;
        EXPECT_EQ(capturedHP, finalHP);
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon that changes forms does not gain HP unless the new form gains Max HP")
{
    u32 hp = 1, maxHP = 200;
    u32 species;
    PARAMETRIZE { species = SPECIES_ZYGARDE_10_POWER_CONSTRUCT; }
    PARAMETRIZE { species = SPECIES_ZYGARDE_50_POWER_CONSTRUCT; }
    GIVEN {
<<<<<<< HEAD:test/dynamax.c
        ASSUME(gMovesInfo[MOVE_DYNAMAX_CANNON].effect == EFFECT_DYNAMAX_DOUBLE_DMG);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(species) { Ability(ABILITY_POWER_CONSTRUCT); HP(hp); MaxHP(maxHP); DynamaxLevel(0); }
        OPPONENT(SPECIES_LOPMONX);
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_STRIKE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
    } THEN {
        EXPECT_MUL_EQ(maxHP - hp, GetDynamaxLevelHPMultiplier(0, FALSE), player->maxHP - player->hp);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Moves deal 1/4 damage through protect", s16 damage)
{
    bool32 protected;
    PARAMETRIZE { protected = TRUE; }
    PARAMETRIZE { protected = FALSE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (protected)
            TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_PROTECT); }
        else
            TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(4), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Moves don't bypass Max Guard")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        NONE_OF { HP_BAR(opponent); }
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) Feint bypasses Max Guard but doesn't break it")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX);
               MOVE(opponentLeft, MOVE_FEINT, target: playerLeft);
               MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Guard!");
        MESSAGE("Foe Lopmonx used Feint!");
        HP_BAR(playerLeft);
        MESSAGE("Foe Exveemon used Tackle!");
=======
        MESSAGE("Lopmonx used Max Guard!");
        MESSAGE("The opposing Lopmonx used Feint!");
        HP_BAR(playerLeft);
        MESSAGE("The opposing Exveemon used Tackle!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        NONE_OF { HP_BAR(playerLeft); }
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are immune to Instruct")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX, target: opponentLeft);
               MOVE(playerRight, MOVE_INSTRUCT, target: playerLeft);
        }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Exveemon used Instruct!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Pokemon with Gigantamax forms change upon Dynamaxing")
{
    u32 species;
    bool32 gigantamaxFactor;
<<<<<<< HEAD:test/dynamax.c
    PARAMETRIZE { gigantamaxFactor = FALSE; species = SPECIES_BOMMON; }
    PARAMETRIZE { gigantamaxFactor = TRUE; species = SPECIES_BOMMON_GIGANTAMAX; }
=======
    PARAMETRIZE { gigantamaxFactor = FALSE; species = SPECIES_BOMMON; }
    PARAMETRIZE { gigantamaxFactor = TRUE; species = SPECIES_BOMMON_GMAX; }
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    GIVEN {
        PLAYER(SPECIES_BOMMON) { GigantamaxFactor(gigantamaxFactor); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } THEN {
        EXPECT_EQ(player->species, species);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Pokemon with Gigantamax forms revert upon switching")
{
    GIVEN {
        PLAYER(SPECIES_BOMMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } THEN {
        EXPECT_EQ(player->species, SPECIES_BOMMON);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by Choice items", s16 damage)
{
    u16 item;
    PARAMETRIZE { item = ITEM_CHOICE_BAND; }
    PARAMETRIZE { item = ITEM_NONE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_CHOICE_BAND].holdEffect == HOLD_EFFECT_CHOICE_BAND);
        PLAYER(SPECIES_LOPMONX) { Item(item); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(player, MOVE_ARM_THRUST); }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
        MESSAGE("Lopmonx used Max Knuckle!");
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon cannot use Max Guard while holding Assault Vest")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ASSAULT_VEST].holdEffect == HOLD_EFFECT_ASSAULT_VEST);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_ASSAULT_VEST); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(player, MOVE_PROTECT, allowed: FALSE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Lopmonx used Max Strike!");
    }
}

// Almost anything that calculates gBattleMoveDamage based on HP has been changed to non-Dynamax HP.
// This includes Leftovers, Life Orb, Heal Pulse, Rocky Helmet, Sandstorm, etc. etc.
// There are some redundant cases (i.e Substitute) that can never be used by a Dynamaxed pokemon.
// Anything that is conditional based off max HP still uses gBattleMons[battler].maxHP.
// Below are some tests, but very far from all encompassing:

SINGLE_BATTLE_TEST("(DYNAMAX) Endeavor uses a Pokemon's non-Dynamax HP", s16 damage)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ENDEAVOR].effect == EFFECT_ENDEAVOR);
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_ENDEAVOR); MOVE(player, MOVE_TACKLE, gimmick: dynamax); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Endeavor!");
=======
        MESSAGE("The opposing Lopmonx used Endeavor!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Super Fang uses a Pokemon's non-Dynamax HP", s16 damage)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUPER_FANG].effect == EFFECT_SUPER_FANG);
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUPER_FANG); MOVE(player, MOVE_TACKLE, gimmick: dynamax); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Super Fang!");
=======
        MESSAGE("The opposing Lopmonx used Super Fang!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Pain Split uses a Pokemon's non-Dynamax HP", s16 damage)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PAIN_SPLIT].effect == EFFECT_PAIN_SPLIT);
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_PAIN_SPLIT); MOVE(player, MOVE_TACKLE, gimmick: dynamax); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Pain Split!");
=======
        MESSAGE("The opposing Lopmonx used Pain Split!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Sitrus Berries heal based on a Pokemon's non-Dynamax HP", s16 damage)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        ASSUME(I_SITRUS_BERRY_HEAL >= GEN_4);
        ASSUME(gItemsInfo[ITEM_SITRUS_BERRY].holdEffect == HOLD_EFFECT_RESTORE_PCT_HP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_SITRUS_BERRY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FLING); MOVE(player, MOVE_TACKLE, gimmick: dynamax); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx's Sitrus Berry restored health!");
=======
        MESSAGE("Lopmonx restored its health using its Sitrus Berry!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Heal Pulse heals based on a Pokemon's non-Dynamax HP", s16 damage)
{
    u32 dynamax;
    PARAMETRIZE { dynamax = GIMMICK_NONE; }
    PARAMETRIZE { dynamax = GIMMICK_DYNAMAX; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HEAL_PULSE].effect == EFFECT_HEAL_PULSE);
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { MaxHP(100); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_PULSE); MOVE(player, MOVE_TACKLE, gimmick: dynamax); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Heal Pulse!");
=======
        MESSAGE("The opposing Lopmonx used Heal Pulse!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

// ============= MAX MOVE EFFECTS ==========================================
SINGLE_BATTLE_TEST("(DYNAMAX) Max Strike lowers single opponent's speed")
{
    GIVEN {
        // Fails?: ASSUME(GetMaxMove(B_POSITION_PLAYER_LEFT, MOVE_TACKLE) == MOVE_MAX_STRIKE);
        ASSUME(gMovesInfo[MOVE_MAX_STRIKE].argument == MAX_EFFECT_LOWER_SPEED);
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
        PLAYER(SPECIES_LOPMONX) { Speed(80); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        // turn 1
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
=======
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Lopmonx's Speed fell!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        // turn 2
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx's Speed fell!");
=======
        MESSAGE("The opposing Lopmonx's Speed fell!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

// This test should apply to all stat-lowering Max Moves, including G-Max Foam Burst and G-Max Tartness.
DOUBLE_BATTLE_TEST("(DYNAMAX) Max Strike lowers both opponents' speed")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_STRIKE].argument == MAX_EFFECT_LOWER_SPEED);
        PLAYER(SPECIES_LOPMONX) { Speed(80); }
        PLAYER(SPECIES_LOPMONX) { Speed(79); }
        OPPONENT(SPECIES_LOPMONX) {Speed(100); }
        OPPONENT(SPECIES_LOPMONX) { Speed(99); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); \
               MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); \
               MOVE(opponentRight, MOVE_TACKLE, target: playerLeft); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); \
               MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); \
               MOVE(opponentRight, MOVE_TACKLE, target: playerLeft); }
    } SCENE {
        // turn 1
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Foe Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Foe Lopmonx's Speed fell!");
=======
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("The opposing Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Lopmonx's Speed fell!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        // turn 2
        MESSAGE("Lopmonx used Max Strike!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Foe Lopmonx's Speed fell!");
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Foe Lopmonx used Tackle!");
=======
        MESSAGE("The opposing Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Lopmonx's Speed fell!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("The opposing Lopmonx used Tackle!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

// This test should apply to all stat-boosting Max Moves, too.
DOUBLE_BATTLE_TEST("(DYNAMAX) Max Knuckle raises both allies' attack")
{
    s16 damage[4];
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_KNUCKLE].argument == MAX_EFFECT_RAISE_TEAM_ATTACK);
        ASSUME(gMovesInfo[MOVE_CLOSE_COMBAT].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CLOSE_COMBAT, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); \
               MOVE(playerRight, MOVE_TACKLE, target: opponentRight); }
        TURN { MOVE(playerLeft, MOVE_CLOSE_COMBAT, target: opponentLeft); \
               MOVE(playerRight, MOVE_TACKLE, target: opponentRight); }
    } SCENE {
        // turn 1
        MESSAGE("Lopmonx used Max Knuckle!");
        HP_BAR(opponentLeft, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Lopmonx's Attack rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Exveemon's Attack rose!");
        MESSAGE("Exveemon used Tackle!");
        HP_BAR(opponentRight, captureDamage: &damage[1]);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Celebrate!");
        MESSAGE("Foe Exveemon used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("The opposing Exveemon used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        // turn 2
        MESSAGE("Lopmonx used Max Knuckle!");
        HP_BAR(opponentLeft, captureDamage: &damage[2]);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Lopmonx's Attack rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Exveemon's Attack rose!");
        MESSAGE("Exveemon used Tackle!");
        HP_BAR(opponentRight, captureDamage: &damage[3]);
    } THEN {
        EXPECT_GT(damage[2], damage[0]);
        EXPECT_GT(damage[3], damage[1]);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Flare sets up sunlight")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_FLARE].argument == MAX_EFFECT_SUN);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Flare!");
        MESSAGE("The sunlight got bright!");
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("Lopmonx used Max Flare!");
        MESSAGE("The sunlight turned harsh!");
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Geyser sets up heavy rain")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_GEYSER].argument == MAX_EFFECT_RAIN);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Geyser!");
        MESSAGE("It started to rain!");
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RAIN_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Hailstorm sets up hail")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_HAILSTORM].argument == MAX_EFFECT_HAIL);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Hailstorm!");
        MESSAGE("It started to hail!");
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Rockfall sets up a sandstorm")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_ROCKFALL].argument == MAX_EFFECT_SANDSTORM);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROCK_THROW, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Rockfall!");
        MESSAGE("A sandstorm brewed!");
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("Lopmonx used Max Rockfall!");
        MESSAGE("A sandstorm kicked up!");
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SANDSTORM_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Overgrowth sets up Grassy Terrain")
{
    s32 maxHP = 490; // Because of recalculated stats upon Dynamaxing
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_OVERGROWTH].argument == MAX_EFFECT_GRASSY_TERRAIN);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].baseHP == 190);
        OPPONENT(SPECIES_LOPMONX) { MaxHP(maxHP); HP(maxHP / 2); };
        PLAYER(SPECIES_LOPMONX) { MaxHP(maxHP); HP(maxHP / 2); };
    } WHEN {
        TURN { MOVE(player, MOVE_VINE_WHIP, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_VINE_WHIP); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Lopmonx used Max Overgrowth!");
        MESSAGE("Grass grew to cover the battlefield!");
        MESSAGE("Lopmonx is healed by the grassy terrain!");
        HP_BAR(player, damage: -maxHP/16);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx is healed by the grassy terrain!");
=======
        MESSAGE("The opposing Lopmonx is healed by the grassy terrain!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(opponent, damage: -maxHP/16);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Mindstorm sets up Psychic Terrain")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_MINDSTORM].argument == MAX_EFFECT_PSYCHIC_TERRAIN);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXTREME_SPEED); MOVE(player, MOVE_PSYCHIC, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(opponent, MOVE_EXTREME_SPEED); MOVE(player, MOVE_PSYCHIC); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx used ExtremeSpeed!");
        MESSAGE("Lopmonx used Max Mindstorm!");
        MESSAGE("Foe Lopmonx cannot use ExtremeSpeed!");
        MESSAGE("Lopmonx used Max Mindstorm!");
=======
        MESSAGE("The opposing Lopmonx used Extreme Speed!");
        MESSAGE("Lopmonx used Max Mindstorm!");
        MESSAGE("The opposing Lopmonx cannot use Extreme Speed!");
        MESSAGE("Lopmonx used Max Mindstorm!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Lightning sets up Electric Terrain")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_LIGHTNING].argument == MAX_EFFECT_ELECTRIC_TERRAIN);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDERBOLT, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Lightning!");
        MESSAGE("Foe Lopmonx used Spore!");
        MESSAGE("Lopmonx surrounds itself with electrified terrain!");
=======
        MESSAGE("Lopmonx used Max Lightning!");
        MESSAGE("The opposing Lopmonx used Spore!");
        MESSAGE("Lopmonx surrounds itself with electrified terrain!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Starfall sets up Misty Terrain")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MAX_STARFALL].argument == MAX_EFFECT_MISTY_TERRAIN);
        OPPONENT(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MOONBLAST, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_TOXIC); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Starfall!");
        MESSAGE("Foe Lopmonx used Toxic!");
        MESSAGE("Lopmonx surrounds itself with a protective mist!");
=======
        MESSAGE("Lopmonx used Max Starfall!");
        MESSAGE("The opposing Lopmonx used Toxic!");
        MESSAGE("Lopmonx surrounds itself with a protective mist!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) G-Max Stonesurge sets up Stealth Rocks")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_STONESURGE].argument == MAX_EFFECT_STEALTH_ROCK);
        PLAYER(SPECIES_DREDNAW) { GigantamaxFactor(TRUE); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_LIQUIDATION, gimmick: GIMMICK_DYNAMAX); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        // turn 1
        MESSAGE("Drednaw used G-Max Stonesurge!");
        MESSAGE("Pointed stones float in the air around the opposing team!");
        // turn 2
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Pointed stones dug into Foe Lopmonx!");
=======
        MESSAGE("Pointed stones dug into the opposing Lopmonx!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

// The test below also tests that sharp steel does type-based damage and can be Defogged away.
SINGLE_BATTLE_TEST("(DYNAMAX) G-Max Steelsurge sets up sharp steel")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_STEELSURGE].argument == MAX_EFFECT_STEELSURGE);
        PLAYER(SPECIES_COPPERAJAH) { GigantamaxFactor(TRUE); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_HATTERENE);
    } WHEN {
        TURN { MOVE(player, MOVE_IRON_HEAD, gimmick: GIMMICK_DYNAMAX); }
        TURN { SWITCH(opponent, 1); }
        TURN { } // wait out Dynamax
        TURN { MOVE(opponent, MOVE_DEFOG); }
    } SCENE {
        // turn 1
        MESSAGE("Copperajah used G-Max Steelsurge!");
        MESSAGE("Sharp-pointed pieces of steel started floating around the opposing Pokémon!");
        // turn 2
        MESSAGE("2 sent out Hatterene!");
        MESSAGE("The sharp steel bit into the opposing Hatterene!");
        // turn 4
        MESSAGE("The opposing Hatterene used Defog!");
        MESSAGE("The pieces of steel surrounding the opposing Pokémon disappeared!");
    } THEN {
        EXPECT_MUL_EQ(opponent->maxHP, Q_4_12(0.75), opponent->hp);
    }
}

// The test below should apply to G-Max Fireball and G-Max Drum Solo, too.
SINGLE_BATTLE_TEST("(DYNAMAX) G-Max Hydrosnipe has fixed power and ignores abilities", s16 damage)
{
    u16 move;
    PARAMETRIZE { move = MOVE_WATER_GUN; }
    PARAMETRIZE { move = MOVE_HYDRO_CANNON; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_HYDROSNIPE].argument == MAX_EFFECT_FIXED_POWER);
        PLAYER(SPECIES_INTELEON) { GigantamaxFactor(TRUE); }
        OPPONENT(SPECIES_ARCTOVISH) { Ability(ABILITY_WATER_ABSORB); }
    } WHEN {
        TURN { MOVE(player, move, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Inteleon used G-Max Hydrosnipe!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Volt Crash paralyzes both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_VOLT_CRASH].argument == MAX_EFFECT_PARALYZE_FOES);
        PLAYER(SPECIES_PETITMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_GUILMON_X);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_THUNDERBOLT, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Petitmon used G-Max Volt Crash!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponentLeft);
        STATUS_ICON(opponentLeft, paralysis: TRUE);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponentRight);
        STATUS_ICON(opponentRight, paralysis: TRUE);
        MESSAGE("Foe Exveemon is paralyzed! It may be unable to move!");
=======
        MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponentRight);
        STATUS_ICON(opponentRight, paralysis: TRUE);
        MESSAGE("The opposing Exveemon is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

// G-Max Stun Shock can apply different statuses to each opponent, but this isn't
// compatible with the test RNG set-up.
DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Stun Shock paralyzes or poisons both opponents")
{
    u8 statusAnim;
    u32 rng;
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = STATUS1_PARALYSIS; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PSN; rng = STATUS1_POISON; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_STUN_SHOCK].argument == MAX_EFFECT_POISON_PARALYZE_FOES);
        PLAYER(SPECIES_TOXTRICITY) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_TOXEL);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_THUNDERBOLT, target: opponentLeft, gimmick: GIMMICK_DYNAMAX, \
               WITH_RNG(RNG_G_MAX_STUN_SHOCK, rng)); }
    } SCENE {
        MESSAGE("Toxtricity used G-Max Stun Shock!");
        // opponent left
        ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponentLeft);
        if (statusAnim == B_ANIM_STATUS_PSN) {
            STATUS_ICON(opponentLeft, poison: TRUE);
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Lopmonx was poisoned!");
        }
        else {
            STATUS_ICON(opponentLeft, paralysis: TRUE);
            MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
=======
            MESSAGE("The opposing Lopmonx was poisoned!");
        }
        else {
            STATUS_ICON(opponentLeft, paralysis: TRUE);
            MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
        // opponent right
        ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponentRight);
        if (statusAnim == B_ANIM_STATUS_PSN) {
            STATUS_ICON(opponentRight, poison: TRUE);
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Exveemon was poisoned!");
        }
        else {
            STATUS_ICON(opponentRight, paralysis: TRUE);
            MESSAGE("Foe Exveemon is paralyzed! It may be unable to move!");
=======
            MESSAGE("The opposing Exveemon was poisoned!");
        }
        else {
            STATUS_ICON(opponentRight, paralysis: TRUE);
            MESSAGE("The opposing Exveemon is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
    }
}

// This test extends to G-Max Befuddle, too.
DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Stun Shock chooses statuses before considering immunities")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_STUN_SHOCK].argument == MAX_EFFECT_POISON_PARALYZE_FOES);
        PLAYER(SPECIES_TOXTRICITY) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_TOXEL);
        OPPONENT(SPECIES_GARBODOR);
        OPPONENT(SPECIES_TRUBBISH);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_NUZZLE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX, \
               WITH_RNG(RNG_G_MAX_STUN_SHOCK, STATUS1_POISON)); }
    } SCENE {
        MESSAGE("Toxtricity used G-Max Stun Shock!");
        NONE_OF {
            // opponent left
            STATUS_ICON(opponentLeft, poison: TRUE);
            MESSAGE("The opposing Garbodor was poisoned!");
            STATUS_ICON(opponentLeft, paralysis: TRUE);
            MESSAGE("The opposing Garbodor is paralyzed, so it may be unable to move!");
            // opponent right
            STATUS_ICON(opponentRight, poison: TRUE);
            MESSAGE("The opposing Trubbish was poisoned!");
            STATUS_ICON(opponentRight, paralysis: TRUE);
            MESSAGE("The opposing Trubbish is paralyzed, so it may be unable to move!");
        }
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Befuddle paralyzes, poisons, or sleeps both opponents")
{
    u8 statusAnim;
    u32 rng;
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = STATUS1_PARALYSIS; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PSN; rng = STATUS1_POISON; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_SLP; rng = STATUS1_SLEEP; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_BEFUDDLE].argument == MAX_EFFECT_EFFECT_SPORE_FOES);
        PLAYER(SPECIES_DOKIMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_DATIRIMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_BUG_BITE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX,
               WITH_RNG(RNG_G_MAX_BEFUDDLE, rng)); }
    } SCENE {
        MESSAGE("Dokimon used G-Max Befuddle!");
        // opponent left
        ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponentLeft);
        if (statusAnim == B_ANIM_STATUS_PSN) {
            STATUS_ICON(opponentLeft, poison: TRUE);
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Lopmonx was poisoned!");
        }
        else if (statusAnim == B_ANIM_STATUS_PRZ) {
            STATUS_ICON(opponentLeft, paralysis: TRUE);
            MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
        }
        else {
            STATUS_ICON(opponentLeft, sleep: TRUE);
            MESSAGE("Foe Lopmonx fell asleep!");
=======
            MESSAGE("The opposing Lopmonx was poisoned!");
        }
        else if (statusAnim == B_ANIM_STATUS_PRZ) {
            STATUS_ICON(opponentLeft, paralysis: TRUE);
            MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
        }
        else {
            STATUS_ICON(opponentLeft, sleep: TRUE);
            MESSAGE("The opposing Lopmonx fell asleep!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
        // opponent right
        ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponentRight);
        if (statusAnim == B_ANIM_STATUS_PSN) {
            STATUS_ICON(opponentRight, poison: TRUE);
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Lopmonx was poisoned!");
        }
        else if (statusAnim == B_ANIM_STATUS_PRZ) {
            STATUS_ICON(opponentRight, paralysis: TRUE);
            MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
        }
        else {
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("Foe Lopmonx fell asleep!");
=======
            MESSAGE("The opposing Lopmonx was poisoned!");
        }
        else if (statusAnim == B_ANIM_STATUS_PRZ) {
            STATUS_ICON(opponentRight, paralysis: TRUE);
            MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
        }
        else {
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Lopmonx fell asleep!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Gold Rush confuses both opponents and generates money")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_GOLD_RUSH].argument == MAX_EFFECT_CONFUSE_FOES_PAY_DAY);
        PLAYER(SPECIES_CALUMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_CHAPMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Calumon used G-Max Gold Rush!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentLeft);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentRight);
        MESSAGE("Foe Lopmonx became confused!");
        MESSAGE("Coins scattered everywhere!");
=======
        MESSAGE("The opposing Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentRight);
        MESSAGE("The opposing Lopmonx became confused!");
        MESSAGE("Coins were scattered everywhere!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Smite confuses both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_SMITE].argument == MAX_EFFECT_CONFUSE_FOES);
        PLAYER(SPECIES_HATTERENE) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_HATENNA);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MOONBLAST, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Hatterene used G-Max Smite!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentLeft);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentRight);
        MESSAGE("Foe Lopmonx became confused!");
=======
        MESSAGE("The opposing Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponentRight);
        MESSAGE("The opposing Lopmonx became confused!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Cuddle infatuates both opponents, if possible")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_CUDDLE].argument == MAX_EFFECT_INFATUATE_FOES);
        PLAYER(SPECIES_CRABMON_X) { Gender(MON_MALE); GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_CRABMON_X);
        OPPONENT(SPECIES_LOPMONX) { Gender(MON_FEMALE); }
        OPPONENT(SPECIES_LOPMONX) { Gender(MON_MALE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Crabmon_x used G-Max Cuddle!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, opponentLeft);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx fell in love!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, opponentRight);
            MESSAGE("Foe Lopmonx fell in love!");
=======
        MESSAGE("The opposing Lopmonx fell in love!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, opponentRight);
            MESSAGE("The opposing Lopmonx fell in love!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Terror traps both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_TERROR].argument == MAX_EFFECT_MEAN_LOOK);
        PLAYER(SPECIES_TSUMEMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_TOKOMON_X);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_LICK, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Tsumemon used G-Max Terror!");
        MESSAGE("Foe Lopmonx can't escape now!");
        MESSAGE("Foe Lopmonx can't escape now!");
=======
        MESSAGE("Tsumemon used G-Max Terror!");
        MESSAGE("The opposing Lopmonx can no longer escape!");
        MESSAGE("The opposing Lopmonx can no longer escape!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } THEN { // Can't find good way to test trapping
        EXPECT(opponentLeft->status2 & STATUS2_ESCAPE_PREVENTION);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Baton Pass passes G-Max Terror's escape prevention effect")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_TERROR].argument == MAX_EFFECT_MEAN_LOOK);
        PLAYER(SPECIES_TSUMEMON) { GigantamaxFactor(TRUE); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_LICK, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_G_MAX_TERROR, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
    } THEN {
        EXPECT(opponent->status2 & STATUS2_ESCAPE_PREVENTION);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Meltdown torments both opponents for 3 turns")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_MELTDOWN].argument == MAX_EFFECT_TORMENT_FOES);
        PLAYER(SPECIES_MELMETAL) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_MELTAN);
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_SPLASH, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_EXVEEMON) { Moves(MOVE_SPLASH, MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_IRON_HEAD, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); \
               MOVE(opponentLeft, MOVE_SPLASH); MOVE(opponentRight, MOVE_SPLASH); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE, target: opponentLeft); \
               MOVE(opponentLeft, MOVE_SPLASH, allowed: FALSE); \
               MOVE(opponentLeft, MOVE_CELEBRATE); \
               MOVE(opponentRight, MOVE_SPLASH, allowed: FALSE); \
               MOVE(opponentRight, MOVE_CELEBRATE); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE, target: opponentLeft); \
               MOVE(opponentLeft, MOVE_SPLASH); \
               MOVE(opponentRight, MOVE_SPLASH); }
    } SCENE {
        // turn 1
        MESSAGE("Melmetal used G-Max Meltdown!");
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx was subjected to torment!");
        MESSAGE("Foe Exveemon was subjected to torment!");
        MESSAGE("Foe Lopmonx used Splash!");
        MESSAGE("Foe Exveemon used Splash!");
        // turn 2
        MESSAGE("Foe Lopmonx used Celebrate!");
        MESSAGE("Foe Exveemon used Celebrate!");
        // end of turn 3
        MESSAGE("Foe Lopmonx is tormented no more!");
        MESSAGE("Foe Exveemon is tormented no more!");
=======
        MESSAGE("The opposing Lopmonx was subjected to torment!");
        MESSAGE("The opposing Exveemon was subjected to torment!");
        MESSAGE("The opposing Lopmonx used Splash!");
        MESSAGE("The opposing Exveemon used Splash!");
        // turn 2
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("The opposing Exveemon used Celebrate!");
        // end of turn 3
        MESSAGE("The opposing Lopmonx is no longer tormented!");
        MESSAGE("The opposing Exveemon is no longer tormented!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

// This test applies to G-Max Cannonade, G-Max Vine Lash, and G-Max Volcalith, too.
DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Wildfire sets a field effect that damages non-Fire types")
{
    s16 damage;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_WILDFIRE].argument == MAX_EFFECT_WILDFIRE);
        PLAYER(SPECIES_CHIBOMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_BOTAMON);
        OPPONENT(SPECIES_LOPMONX) { HP(600); MaxHP(600); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_GIGIMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EMBER, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
        TURN { }
        TURN { SWITCH(opponentLeft, 2); }
        TURN { }
        TURN { }
    } SCENE {
        // turn 1
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Chibomon used G-Max Wildfire!");
        MESSAGE("The opposing team was surrounded by flames!");
        MESSAGE("Foe Lopmonx is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentLeft, captureDamage: &damage);
        MESSAGE("Foe Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 2
        MESSAGE("Foe Lopmonx is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentLeft);
        MESSAGE("Foe Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 3
        NONE_OF { MESSAGE("Foe Gigimon is burning up within G-Max Wildfire's flames!"); }
        MESSAGE("Foe Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 4
        MESSAGE("Foe Exveemon is burning up within G-Max Wildfire's flames!");
=======
        MESSAGE("Chibomon used G-Max Wildfire!");
        MESSAGE("The opposing Pokémon were surrounded by fire!");
        MESSAGE("The opposing Lopmonx is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentLeft, captureDamage: &damage);
        MESSAGE("The opposing Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 2
        MESSAGE("The opposing Lopmonx is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 3
        NONE_OF { MESSAGE("The opposing Gigimon is burning up within G-Max Wildfire's flames!"); }
        MESSAGE("The opposing Exveemon is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
        // turn 4
        MESSAGE("The opposing Exveemon is burning up within G-Max Wildfire's flames!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(opponentRight);
        // turn 5
        NONE_OF {
            HP_BAR(opponentRight);
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Exveemon is burning up within G-Max Wildfire's flames!");
=======
            MESSAGE("The opposing Exveemon is burning up within G-Max Wildfire's flames!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        }
    } THEN {
        EXPECT_EQ(damage, 100);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Replenish recycles allies' berries 50\% of the time")
{
    PASSES_RANDOMLY(1, 2, RNG_G_MAX_REPLENISH);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_REPLENISH].argument == MAX_EFFECT_RECYCLE_BERRIES);
<<<<<<< HEAD:test/dynamax.c
        PLAYER(SPECIES_DRACOMON) { Item(ITEM_APICOT_BERRY); GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_MUNCHLAX) { Item(ITEM_APICOT_BERRY); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_APICOT_BERRY); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_APICOT_BERRY); }
=======
        PLAYER(SPECIES_DRACOMON) { Item(ITEM_APICOT_BERRY); GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_MUNCHLAX) { Item(ITEM_APICOT_BERRY); Ability(ABILITY_THICK_FAT); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_APICOT_BERRY); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_APICOT_BERRY); }
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STUFF_CHEEKS); \
               MOVE(playerRight, MOVE_STUFF_CHEEKS); \
               MOVE(opponentLeft, MOVE_STUFF_CHEEKS); \
               MOVE(opponentRight, MOVE_STUFF_CHEEKS); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        // turn 1
        MESSAGE("Using Apicot Berry, the Sp. Def of Dracomon rose!");
        MESSAGE("Using Apicot Berry, the Sp. Def of Munchlax rose!");
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Using Apicot Berry, the Sp. Def of Foe Lopmonx rose!");
        MESSAGE("Using Apicot Berry, the Sp. Def of Foe Lopmonx rose!");
=======
        MESSAGE("Using Apicot Berry, the Sp. Def of the opposing Lopmonx rose!");
        MESSAGE("Using Apicot Berry, the Sp. Def of the opposing Lopmonx rose!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        // turn 2
        MESSAGE("Dracomon used G-Max Replenish!");
        MESSAGE("Dracomon found one Apicot Berry!");
        MESSAGE("Munchlax found one Apicot Berry!");
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Snooze makes only the target drowsy")
{
    PASSES_RANDOMLY(1, 2, RNG_G_MAX_SNOOZE);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_SNOOZE].argument == MAX_EFFECT_YAWN_FOE);
        ASSUME(gMovesInfo[MOVE_DARK_PULSE].category == DAMAGE_CATEGORY_SPECIAL); // Otherwise, Shoutmon faints.
        PLAYER(SPECIES_GRIMMSNARL) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_IMPIDIMP);
        OPPONENT(SPECIES_SHOUTMON);
        OPPONENT(SPECIES_BEARMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DARK_PULSE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
        TURN { }
    } SCENE {
        // turn 1
        MESSAGE("Grimmsnarl used G-Max Snooze!");
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Grimmsnarl made Foe Shoutmon drowsy!");
        // turn 2
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Shoutmon fell asleep!");
=======
        MESSAGE("The opposing Shoutmon grew drowsy!");
        // turn 2
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Shoutmon fell asleep!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Finale heals allies by 1/6 of their health")
{
    s16 damage1, damage2;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_FINALE].argument == MAX_EFFECT_HEAL_TEAM);
        PLAYER(SPECIES_ALCREMIE) { HP(1); GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_MILCERY) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MOONBLAST, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Alcremie used G-Max Finale!");
        HP_BAR(playerLeft, captureDamage: &damage1);
        HP_BAR(playerRight, captureDamage: &damage2);
    } THEN {
        EXPECT_MUL_EQ(-damage1, Q_4_12(6), playerLeft->maxHP); // heals based on Dynamax HP
        EXPECT_MUL_EQ(-damage2, Q_4_12(6), playerRight->maxHP);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Sweetness cures allies' status conditions")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_SWEETNESS].argument == MAX_EFFECT_AROMATHERAPY);
        PLAYER(SPECIES_APPLETUN) { Status1(STATUS1_POISON); GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_APPLIN)  { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_VINE_WHIP, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Appletun used G-Max Sweetness!");
        STATUS_ICON(playerLeft, none: TRUE);
        MESSAGE("Appletun's status returned to normal!");
        STATUS_ICON(playerRight, none: TRUE);
        MESSAGE("Applin's status returned to normal!");
    }
}

// This test applies to G-Max Sandblast, too.
DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Centiferno traps both opponents in Fire Spin")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_CENTIFERNO].argument == MAX_EFFECT_FIRE_SPIN_FOES);
        PLAYER(SPECIES_CENTISKORCH) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_SIZZLIPEDE);
        PLAYER(SPECIES_SIZZLIPEDE);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FLAME_CHARGE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        // turn 1
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Centiskorc used G-Max Centiferno!");
        MESSAGE("Foe Lopmonx is hurt by Fire Spin!");
        HP_BAR(opponentLeft);
        MESSAGE("Foe Exveemon is hurt by Fire Spin!");
        HP_BAR(opponentRight);
        // turn 2 - Fire Spin continues even after Centiskorch switches out
        MESSAGE("Foe Lopmonx is hurt by Fire Spin!");
        HP_BAR(opponentLeft);
        MESSAGE("Foe Exveemon is hurt by Fire Spin!");
=======
        MESSAGE("Centiskorch used G-Max Centiferno!");
        MESSAGE("The opposing Lopmonx is hurt by Fire Spin!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Exveemon is hurt by Fire Spin!");
        HP_BAR(opponentRight);
        // turn 2 - Fire Spin continues even after Centiskorch switches out
        MESSAGE("The opposing Lopmonx is hurt by Fire Spin!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Exveemon is hurt by Fire Spin!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Chi Strike boosts allies' crit chance")
{
    u32 j;
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_6);
        ASSUME(gMovesInfo[MOVE_G_MAX_CHI_STRIKE].argument == MAX_EFFECT_CRIT_PLUS);
        PLAYER(SPECIES_KOZENIMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_KOKOMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FORCE_PALM, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(playerLeft, MOVE_FORCE_PALM, target: opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_FORCE_PALM, target: opponentLeft); \
               MOVE(playerRight, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        // turn 1 - 3
        for (j = 0; j < 3; ++j) {
            MESSAGE("Kozenimon used G-Max Chi Strike!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Kozenimon is getting pumped!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
            MESSAGE("Kokomon is getting pumped!");
        }
        // turn 4
        MESSAGE("Kokomon used Tackle!"); // Kokomon is at +5 crit stages
        MESSAGE("A critical hit!");
    }
}

TO_DO_BATTLE_TEST("(DYNAMAX) Baton Pass doesn't pass G-Max Chi Strike's effect");

DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max Depletion takes away 2 PP from the target's last move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_CLAW].category == DAMAGE_CATEGORY_PHYSICAL); // Otherwise Blgargomon faints.
        ASSUME(gMovesInfo[MOVE_G_MAX_DEPLETION].argument == MAX_EFFECT_SPITE);
        PLAYER(SPECIES_DURALUDON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_EXVEEMON);
        // Dynamax behaves weird with test turn order because stats are recalculated.
        OPPONENT(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CLAW, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Blgargomon used Celebrate!");
        MESSAGE("Duraludon used G-Max Depletion!");
        MESSAGE("Reduced Foe Blgargomon's Celebrate by 2!");
=======
        MESSAGE("The opposing Blgargomon used Celebrate!");
        MESSAGE("Duraludon used G-Max Depletion!");
        MESSAGE("The opposing Blgargomon's PP was reduced!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

// This test applies to G-Max Rapid Flow, too.
DOUBLE_BATTLE_TEST("(DYNAMAX) G-Max One Blow bypasses Max Guard for full damage", s16 damage)
{
    bool32 protect;
    PARAMETRIZE { protect = TRUE; }
    PARAMETRIZE { protect = FALSE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_ONE_BLOW].argument == MAX_EFFECT_BYPASS_PROTECT);
        PLAYER(SPECIES_URSHIFU) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_KUBFU);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        if (protect)
            TURN { MOVE(playerLeft, MOVE_WICKED_BLOW, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); \
                   MOVE(opponentLeft, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX); }
        else
            TURN { MOVE(playerLeft, MOVE_WICKED_BLOW, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); \
                   MOVE(opponentLeft, MOVE_PSYCHIC, target: playerLeft, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        if (protect)
<<<<<<< HEAD:test/dynamax.c
            MESSAGE("Foe Lopmonx used Max Guard!");
=======
            MESSAGE("The opposing Lopmonx used Max Guard!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        MESSAGE("Urshifu used G-Max One Blow!");
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

// Bug Testing
DOUBLE_BATTLE_TEST("(DYNAMAX) Max Flare doesn't softlock the game when fainting player partner")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(1); };
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX);
               MOVE(opponentLeft, MOVE_V_CREATE, target: playerRight, gimmick: GIMMICK_DYNAMAX);
               SEND_OUT(playerRight, 2); }
        TURN { }
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Moves don't execute effects on fainted battlers")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { HP(1); };
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_DYNAMAX_GROWTH, player);
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("Foe Lopmonx fainted!");
        NOT MESSAGE("Foe Lopmonx's Speed fell!");
=======
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx fainted!");
        NOT MESSAGE("The opposing Lopmonx's Speed fell!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Moxie clones can be triggered by Max Moves fainting opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATERFALL].power > 0);
        PLAYER(SPECIES_COMMDRAMON) { Ability(ABILITY_MOXIE); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_WATERFALL, gimmick: GIMMICK_DYNAMAX); SEND_OUT(opponent, 1); }
    } SCENE {
<<<<<<< HEAD:test/dynamax.c
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Lopmonx fainted!");
>>>>>>> upstream/master:test/battle/gimmick/dynamax.c
        ABILITY_POPUP(player, ABILITY_MOXIE);
        MESSAGE("Commdramon's Moxie raised its Attack!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Attacks prints a message when hitting into Max Guard")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Lopmonx used Max Guard!");
        MESSAGE("The opposing Lopmonx used Max Strike!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Max Moves don't bypass absorbing abilities")
{
    u32 move, ability, species;
    PARAMETRIZE { move = MOVE_SPARK; ability = ABILITY_VOLT_ABSORB; species = SPECIES_GUILMON; }
    PARAMETRIZE { move = MOVE_WATER_GUN; ability = ABILITY_WATER_ABSORB; species = SPECIES_GUILMON; }
    PARAMETRIZE { move = MOVE_EMBER; ability = ABILITY_FLASH_FIRE; species = SPECIES_HEATRAN; }
    PARAMETRIZE { move = MOVE_SPARK; ability = ABILITY_LIGHTNING_ROD; species = SPECIES_PETITMON; }
    PARAMETRIZE { move = MOVE_WATER_GUN; ability = ABILITY_STORM_DRAIN; species = SPECIES_GASTRODON; }
    PARAMETRIZE { move = MOVE_EMBER; ability = ABILITY_WELL_BAKED_BODY; species = SPECIES_DACHSBUN; }
    PARAMETRIZE { move = MOVE_SPARK; ability = ABILITY_MOTOR_DRIVE; species = SPECIES_ELECTIVIRE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; ability = ABILITY_DRY_SKIN; species = SPECIES_BABYDMON; }
    PARAMETRIZE { move = MOVE_MUD_BOMB; ability = ABILITY_EARTH_EATER; species = SPECIES_ORTHWORM; }
    PARAMETRIZE { move = MOVE_VINE_WHIP; ability = ABILITY_SAP_SIPPER; species = SPECIES_SHAMANMON; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_SPARK].type == TYPE_ELECTRIC);
        ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
        ASSUME(gMovesInfo[MOVE_MUD_BOMB].type == TYPE_GROUND);
        ASSUME(gMovesInfo[MOVE_VINE_WHIP].type == TYPE_GRASS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, move, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_LIGHTNING, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_FLARE, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_GEYSER, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_QUAKE, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_OVERGROWTH, player);
            HP_BAR(opponent);
        }
        ABILITY_POPUP(opponent, ability);
    }
}
