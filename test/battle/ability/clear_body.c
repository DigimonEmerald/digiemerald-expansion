#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke prevent intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;
    u32 species, ability;

    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }
    GIVEN {
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_SHED_SKIN); };
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); };
        OPPONENT(SPECIES_FUGAMON) { Ability(ABILITY_CLEAR_BODY); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SCRATCH); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
<<<<<<< HEAD
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
        MESSAGE("Foe Fugamon's Clear Body prevents stat loss!");
=======
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        }
        ABILITY_POPUP(opponent, ability);
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon's White Smoke prevents stat loss!");
        else
            MESSAGE("The opposing Ganemon's Clear Body prevents stat loss!");
>>>>>>> upstream/master
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke prevent stat stage reduction from moves")
{
    u16 move = MOVE_NONE;
    u32 j, species = SPECIES_NONE, ability = ABILITY_NONE;
    static const u16 statReductionMoves[] = {
        MOVE_GROWL,
        MOVE_LEER,
        MOVE_CONFIDE,
        MOVE_FAKE_TEARS,
        MOVE_SCARY_FACE,
        MOVE_SWEET_SCENT,
        MOVE_SAND_ATTACK,
    };
    for (j = 0; j < ARRAY_COUNT(statReductionMoves); j++)
        {
            PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; move = statReductionMoves[j]; }
            PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; move = statReductionMoves[j]; }
            PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; move = statReductionMoves[j]; }
        }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_GROWL) == EFFECT_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_LEER) == EFFECT_DEFENSE_DOWN);
        ASSUME(GetMoveEffect(MOVE_CONFIDE) == EFFECT_SPECIAL_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_FAKE_TEARS) == EFFECT_SPECIAL_DEFENSE_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_SCARY_FACE) == EFFECT_SPEED_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_SWEET_SCENT) == (B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_EVASION_DOWN_2 : EFFECT_EVASION_DOWN));
        ASSUME(GetMoveEffect(MOVE_SAND_ATTACK) == EFFECT_ACCURACY_DOWN);
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        }
        ABILITY_POPUP(opponent, ability);
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon's White Smoke prevents stat loss!");
        else
            MESSAGE("The opposing Ganemon's Clear Body prevents stat loss!");
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke prevent Sticky Web effect on switchin")
{
    u32 species, ability;
    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_STICKY_WEB) == EFFECT_STICKY_WEB);
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(SPECIES_LOPMONX)
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        }
        ABILITY_POPUP(opponent, ability);
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon's White Smoke prevents stat loss!");
        else
            MESSAGE("The opposing Ganemon's Clear Body prevents stat loss!");
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent stat stage reduction from moves used by the user")
{
    u32 species, ability;
    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }
    GIVEN {
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_SUPERPOWER, MOVE_EFFECT_ATK_DEF_DOWN) == TRUE);
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUPERPOWER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUPERPOWER, opponent);
        NONE_OF {
            ABILITY_POPUP(opponent, ability);
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
            MESSAGE("The opposing Clockmon's White Smoke prevents stat loss!");
            MESSAGE("The opposing Ganemon's Clear Body prevents stat loss!");
        }
    }
}

SINGLE_BATTLE_TEST("Mold Breaker, Teravolt, and Turboblaze ignore Clear Body and White Smoke, but not Full Metal Body")
{
    u32 j, k, species = SPECIES_NONE, ability = ABILITY_NONE;
    u16 breakerAbility = ABILITY_NONE;
    u16 move = ABILITY_NONE;
    static const u16 breakerAbilities[] = {
        ABILITY_MOLD_BREAKER,
        ABILITY_TERAVOLT,
        ABILITY_TURBOBLAZE,
    };
    static const u16 statReductionMoves[] = {
        MOVE_GROWL,
        MOVE_LEER,
        MOVE_CONFIDE,
        MOVE_FAKE_TEARS,
        MOVE_SCARY_FACE,
        MOVE_SWEET_SCENT,
        MOVE_SAND_ATTACK,
    };

    for (j = 0; j < ARRAY_COUNT(statReductionMoves); j++)
    {
        for (k = 0; k < ARRAY_COUNT(breakerAbilities); k++)
        {
            PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; move = statReductionMoves[j]; breakerAbility = breakerAbilities[k]; }
            PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; move = statReductionMoves[j]; breakerAbility = breakerAbilities[k]; }
            PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; move = statReductionMoves[j]; breakerAbility = breakerAbilities[k]; }
        }
    }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_GROWL) == EFFECT_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_LEER) == EFFECT_DEFENSE_DOWN);
        ASSUME(GetMoveEffect(MOVE_CONFIDE) == EFFECT_SPECIAL_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_FAKE_TEARS) == EFFECT_SPECIAL_DEFENSE_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_SCARY_FACE) == EFFECT_SPEED_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_SWEET_SCENT) == (B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_EVASION_DOWN_2 : EFFECT_EVASION_DOWN));
        ASSUME(GetMoveEffect(MOVE_SAND_ATTACK) == EFFECT_ACCURACY_DOWN);
        PLAYER(SPECIES_LOPMONX) { Ability(breakerAbility); }
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (ability == ABILITY_FULL_METAL_BODY){ // Full Metal Body can't be ignored by breaker abilities
            NOT ANIMATION(ANIM_TYPE_MOVE, move, player);
            ABILITY_POPUP(opponent, ability);
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
        }
        else{
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            NONE_OF {
                ABILITY_POPUP(opponent, ability);
                MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
                MESSAGE("The opposing Clockmon's White Smoke prevents stat loss!");
                MESSAGE("The opposing Ganemon's Clear Body prevents stat loss!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent Speed reduction from Iron Ball")
{
    u32 j, species = SPECIES_NONE, ability = ABILITY_NONE;
    u16 heldItem = ITEM_NONE;
    static const u16 heldItems[] = {
        ITEM_NONE,
        ITEM_IRON_BALL,
    };
    for (j = 0; j < ARRAY_COUNT(heldItems); j++)
    {
        PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; heldItem = heldItems[j]; }
        PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; heldItem = heldItems[j]; }
        PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; heldItem = heldItems[j]; }
    }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_IRON_BALL].holdEffect == HOLD_EFFECT_IRON_BALL);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(species) { Speed(6); Ability(ability); Item(heldItem); }
    } WHEN {
        TURN { }
    } SCENE {
        NOT ABILITY_POPUP(opponent, ability);
        if (heldItem == ITEM_IRON_BALL) {
            MESSAGE("Lopmonx used Celebrate!");
            if (ability == ABILITY_FULL_METAL_BODY)
                MESSAGE("The opposing Solgaleo used Celebrate!");
            else if (ability == ABILITY_WHITE_SMOKE)
                MESSAGE("The opposing Clockmon used Celebrate!");
            else
                MESSAGE("The opposing Ganemon used Celebrate!");
        } else {
            if (ability == ABILITY_FULL_METAL_BODY)
                MESSAGE("The opposing Solgaleo used Celebrate!");
            else if (ability == ABILITY_WHITE_SMOKE)
                MESSAGE("The opposing Clockmon used Celebrate!");
            else
<<<<<<< HEAD
                MESSAGE("Foe Ganemon used Celebrate!");
            MESSAGE("Lopmonx used Celebrate!");
=======
                MESSAGE("The opposing Ganemon used Celebrate!");
            MESSAGE("Lopmonx used Celebrate!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent Speed reduction from paralysis")
{
    u32 species, ability;

    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(species) { Speed(6); Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo used Celebrate!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon used Celebrate!");
        else
<<<<<<< HEAD
            MESSAGE("Foe Ganemon used Celebrate!");
        MESSAGE("Lopmonx used Thunder Wave!");
=======
            MESSAGE("The opposing Ganemon used Celebrate!");
        MESSAGE("Lopmonx used Thunder Wave!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_WAVE, player);
        NOT ABILITY_POPUP(opponent, ability);
        MESSAGE("Lopmonx used Thunder Wave!");
        ONE_OF {
            MESSAGE("The opposing Ganemon used Celebrate!");
            MESSAGE("The opposing Ganemon couldn't move because it's paralyzed!");
            MESSAGE("The opposing Solgaleo used Celebrate!");
            MESSAGE("The opposing Solgaleo couldn't move because it's paralyzed!");
            MESSAGE("The opposing Clockmon used Celebrate!");
            MESSAGE("The opposing Clockmon couldn't move because it's paralyzed!");
        }
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent Attack reduction from burn", s16 damage)
{
    bool32 burned = FALSE;
    u32 species, ability;
    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; burned = FALSE; }
    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; burned = TRUE; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; burned = FALSE; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; burned = TRUE; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; burned = FALSE; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; burned = TRUE; }
    GIVEN {
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(species) { Ability(ability); if (burned) Status1(STATUS1_BURN); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        NOT ABILITY_POPUP(opponent, ability);
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent receiving negative stat changes from Baton Pass")
{
    u32 species, ability;

    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SCARY_FACE) == EFFECT_SPEED_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(species) { Speed(6); Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCARY_FACE); MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_SCARY_FACE); }
    } SCENE {
        MESSAGE("Lopmonx used Scary Face!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCARY_FACE, player);
        ABILITY_POPUP(opponent, ability);
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo used Celebrate!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon used Celebrate!");
        else
            MESSAGE("The opposing Ganemon used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent Topsy-Turvy")
{
    u32 species, ability;

    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TOPSY_TURVY) == EFFECT_TOPSY_TURVY);
        ASSUME(GetMoveEffect(MOVE_SCARY_FACE) == EFFECT_SPEED_DOWN_2);
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(SPECIES_LOPMONX) { Speed(3); }
        OPPONENT(species) { Speed(6); Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCARY_FACE); MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TOPSY_TURVY); }
        TURN { MOVE(player, MOVE_SCARY_FACE); }
    } SCENE {
        MESSAGE("Lopmonx used Topsy-Turvy!");
        NOT ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
        if (ability == ABILITY_FULL_METAL_BODY) {
            MESSAGE("The opposing Solgaleo used Celebrate!");
            MESSAGE("The opposing Solgaleo used Celebrate!");
        }
        else if (ability == ABILITY_WHITE_SMOKE) {
            MESSAGE("The opposing Clockmon used Celebrate!");
            MESSAGE("The opposing Clockmon used Celebrate!");
        }
        else {
            MESSAGE("The opposing Ganemon used Celebrate!");
            MESSAGE("The opposing Ganemon used Celebrate!");
        }
        MESSAGE("Lopmonx used Scary Face!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SCARY_FACE, player);
        ABILITY_POPUP(opponent, ability);
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke don't prevent Spectral Thief from resetting positive stat changes")
{
    u32 species, ability;

    PARAMETRIZE{ species = SPECIES_GANEMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE{ species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
    PARAMETRIZE{ species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SPECTRAL_THIEF) == EFFECT_SPECTRAL_THIEF);
        ASSUME(GetMoveEffect(MOVE_AGILITY) == EFFECT_SPEED_UP_2);
        PLAYER(SPECIES_LOPMONX) { Speed(4); }
        OPPONENT(species) { Speed(5); Ability(ability); }
    } WHEN {
        TURN{ MOVE(opponent, MOVE_AGILITY); }
        TURN{ MOVE(player, MOVE_SPECTRAL_THIEF); }
        TURN{ }
    } SCENE {
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo used Agility!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon used Agility!");
        else
            MESSAGE("The opposing Ganemon used Agility!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AGILITY, opponent);
        MESSAGE("Lopmonx used Celebrate!");
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo used Celebrate!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon used Celebrate!");
        else
<<<<<<< HEAD
            MESSAGE("Foe Ganemon used Celebrate!");
        MESSAGE("Lopmonx used SpectrlThief!");
=======
            MESSAGE("The opposing Ganemon used Celebrate!");
        MESSAGE("Lopmonx used Spectral Thief!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
        NOT ABILITY_POPUP(opponent, ability);
        MESSAGE("Lopmonx used Celebrate!");
        if (ability == ABILITY_FULL_METAL_BODY)
            MESSAGE("The opposing Solgaleo used Celebrate!");
        else if (ability == ABILITY_WHITE_SMOKE)
            MESSAGE("The opposing Clockmon used Celebrate!");
        else
            MESSAGE("The opposing Ganemon used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke protect from Protect's secondary effects")
{
    u32 move = MOVE_NONE;
    u32 species = SPECIES_NONE;
    u32 ability = ABILITY_NONE;

    static const u32 moves[] = {
        MOVE_SPIKY_SHIELD,
        MOVE_KINGS_SHIELD,
        MOVE_SILK_TRAP,
        MOVE_OBSTRUCT,
    };

    for (u32 j = 0; j < ARRAY_COUNT(moves); j++)
    {
        PARAMETRIZE{ move = moves[j]; species = SPECIES_GANEMON;   ability = ABILITY_CLEAR_BODY; }
        PARAMETRIZE{ move = moves[j]; species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
        PARAMETRIZE{ move = moves[j]; species = SPECIES_CLOCKMON;  ability = ABILITY_WHITE_SMOKE; }
    }

    GIVEN {
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
            if (move == MOVE_KINGS_SHIELD) {
                MESSAGE("Lopmon_x's Attack fell!");
            } else if (move == MOVE_SILK_TRAP) {
                MESSAGE("Lopmon_x's Speed fell!");
            } else if (move == MOVE_OBSTRUCT) {
                MESSAGE("Lopmon_x's Defense harshly fell!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Clear Body, Full Metal Body, and White Smoke protect from Protect's secondary effects")
{
    u32 move = MOVE_NONE;
    u32 species = SPECIES_NONE;
    u32 ability = ABILITY_NONE;

    static const u32 moves[] = {
        MOVE_SPIKY_SHIELD,
        MOVE_KINGS_SHIELD,
        MOVE_SILK_TRAP,
        MOVE_OBSTRUCT,
    };

    for (u32 j = 0; j < ARRAY_COUNT(moves); j++)
    {
        PARAMETRIZE{ move = moves[j]; species = SPECIES_GANEMON;   ability = ABILITY_CLEAR_BODY; }
        PARAMETRIZE{ move = moves[j]; species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }
        PARAMETRIZE{ move = moves[j]; species = SPECIES_CLOCKMON;  ability = ABILITY_WHITE_SMOKE; }
    }

    GIVEN {
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
            if (move == MOVE_KINGS_SHIELD) {
                MESSAGE("Lopmon_x's Attack fell!");
            } else if (move == MOVE_SILK_TRAP) {
                MESSAGE("Lopmon_x's Speed fell!");
            } else if (move == MOVE_OBSTRUCT) {
                MESSAGE("Lopmon_x's Defense harshly fell!");
            }
        }
    }
}
