#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_COVERT_CLOAK].holdEffect == HOLD_EFFECT_COVERT_CLOAK);
}

SINGLE_BATTLE_TEST("Covert Cloak blocks secondary effects")
{
    u16 move;
    PARAMETRIZE { move = MOVE_NUZZLE; }
    PARAMETRIZE { move = MOVE_INFERNO; }
    PARAMETRIZE { move = MOVE_MORTAL_SPIN; }
    PARAMETRIZE { move = MOVE_FAKE_OUT; }
    PARAMETRIZE { move = MOVE_ROCK_TOMB; }
    PARAMETRIZE { move = MOVE_SPIRIT_SHACKLE; }
    PARAMETRIZE { move = MOVE_PSYCHIC_NOISE; }

    GIVEN {
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_NUZZLE, MOVE_EFFECT_PARALYSIS, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_INFERNO, MOVE_EFFECT_BURN, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_MORTAL_SPIN, MOVE_EFFECT_POISON, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_FAKE_OUT, MOVE_EFFECT_FLINCH, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_ROCK_TOMB, MOVE_EFFECT_SPD_MINUS_1, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_SPIRIT_SHACKLE, MOVE_EFFECT_PREVENT_ESCAPE, 100) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_PSYCHIC_NOISE, MOVE_EFFECT_PSYCHIC_NOISE, 100) == TRUE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_COVERT_CLOAK); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        NONE_OF {
<<<<<<< HEAD:test/battle/item_effect/covert_cloak.c
            MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
            MESSAGE("Foe Lopmonx was burned!");
            MESSAGE("Foe Lopmonx was poisoned!");
            MESSAGE("Foe Lopmonx flinched!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe Lopmonx was prevented from healing!");
=======
            MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
            MESSAGE("The opposing Lopmonx was burned!");
            MESSAGE("The opposing Lopmonx was poisoned!");
            MESSAGE("The opposing Lopmonx flinched and couldn't move!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Lopmonx was prevented from healing!");
>>>>>>> upstream/master:test/battle/hold_effect/covert_cloak.c
        }
    } THEN { // Can't find good way to test trapping
        EXPECT(!(opponent->status2 & STATUS2_ESCAPE_PREVENTION));
    }
}

SINGLE_BATTLE_TEST("Covert Cloak does not block primary effects")
{
    u16 move;
    PARAMETRIZE { move = MOVE_INFESTATION; }
    PARAMETRIZE { move = MOVE_THOUSAND_ARROWS; }
    PARAMETRIZE { move = MOVE_JAW_LOCK; }
    PARAMETRIZE { move = MOVE_PAY_DAY; }

    GIVEN {
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_INFESTATION, MOVE_EFFECT_WRAP, 0) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_THOUSAND_ARROWS, MOVE_EFFECT_SMACK_DOWN, 0) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_JAW_LOCK, MOVE_EFFECT_TRAP_BOTH, 0) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_PAY_DAY, MOVE_EFFECT_PAYDAY, 0) == TRUE);
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_SMACK_DOWN, MOVE_EFFECT_SMACK_DOWN, 0) == TRUE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PHASCOMON) { Item(ITEM_COVERT_CLOAK); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        switch (move) {
            case MOVE_INFESTATION:
<<<<<<< HEAD:test/battle/item_effect/covert_cloak.c
                MESSAGE("Foe Phascomon has been afflicted with an infestation by Lopmonx!");
=======
                MESSAGE("The opposing Phascomon has been afflicted with an infestation by Lopmonx!");
>>>>>>> upstream/master:test/battle/hold_effect/covert_cloak.c
                break;
            case MOVE_THOUSAND_ARROWS:
                MESSAGE("The opposing Phascomon fell straight down!");
                break;
            case MOVE_JAW_LOCK:
                MESSAGE("Neither Pokémon can run away!");
                break;
            case MOVE_PAY_DAY:
                MESSAGE("Coins were scattered everywhere!");
                break;
        }
    } THEN { // Can't find good way to test trapping
        if (move == MOVE_JAW_LOCK) {
            EXPECT(opponent->status2 & STATUS2_ESCAPE_PREVENTION);
            EXPECT(player->status2 & STATUS2_ESCAPE_PREVENTION);
        }
    }
}

SINGLE_BATTLE_TEST("Covert Cloak does not block self-targeting effects, primary or secondary")
{
    u16 move;
    PARAMETRIZE { move = MOVE_POWER_UP_PUNCH; }
    PARAMETRIZE { move = MOVE_RAPID_SPIN; }
    PARAMETRIZE { move = MOVE_LEAF_STORM; }
    PARAMETRIZE { move = MOVE_METEOR_ASSAULT; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_RAPID_SPIN].effect == EFFECT_RAPID_SPIN);
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_POWER_UP_PUNCH, MOVE_EFFECT_ATK_PLUS_1) == TRUE);
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_LEAF_STORM, MOVE_EFFECT_SP_ATK_MINUS_2) == TRUE);
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_METEOR_ASSAULT, MOVE_EFFECT_RECHARGE) == TRUE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_COVERT_CLOAK); }
    } WHEN {
        TURN { MOVE(player, move); }
        if (move == MOVE_METEOR_ASSAULT) {
            TURN { SKIP_TURN(player); }
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        switch (move) {
            case MOVE_POWER_UP_PUNCH:
            case MOVE_RAPID_SPIN:
            case MOVE_LEAF_STORM:
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
                break;
            case MOVE_METEOR_ASSAULT: // second turn
                MESSAGE("Lopmonx must recharge!");
                break;
        }
    }
}

DOUBLE_BATTLE_TEST("Covert Cloak does or does not block Sparkling Aria depending on number of targets hit")
{
    u32 moveToUse;
    KNOWN_FAILING;
    PARAMETRIZE { moveToUse = MOVE_FINAL_GAMBIT; }
    PARAMETRIZE { moveToUse = MOVE_TACKLE; }
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_COVERT_CLOAK); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, moveToUse, target: opponentRight); MOVE(playerLeft, MOVE_SPARKLING_ARIA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPARKLING_ARIA, playerLeft);
        if (moveToUse == MOVE_TACKLE) {
<<<<<<< HEAD:test/battle/item_effect/covert_cloak.c
            MESSAGE("Foe Lopmonx's burn was healed.");
            STATUS_ICON(opponentLeft, none: TRUE);
        } else {
            NONE_OF {
                MESSAGE("Foe Lopmonx's burn was healed.");
=======
            MESSAGE("The opposing Lopmonx's burn was cured!");
            STATUS_ICON(opponentLeft, none: TRUE);
        } else {
            NONE_OF {
                MESSAGE("The opposing Lopmonx's burn was cured!");
>>>>>>> upstream/master:test/battle/hold_effect/covert_cloak.c
                STATUS_ICON(opponentLeft, none: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Covert Cloak blocks Sparkling Aria in singles")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_COVERT_CLOAK); Status1(STATUS1_BURN); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPARKLING_ARIA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPARKLING_ARIA, player);
        NONE_OF {
<<<<<<< HEAD:test/battle/item_effect/covert_cloak.c
            MESSAGE("Foe Lopmonx's burn was healed.");
=======
            MESSAGE("The opposing Lopmonx's burn was cured!");
>>>>>>> upstream/master:test/battle/hold_effect/covert_cloak.c
            STATUS_ICON(opponent, none: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Covert Cloak does not prevent ability stat changes")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_COVERT_CLOAK); }
        OPPONENT(SPECIES_ELDEGOSS) { Ability(ABILITY_COTTON_DOWN); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx's Speed fell!");
    }
}
