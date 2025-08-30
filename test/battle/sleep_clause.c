#include "global.h"
#include "test/battle.h"

AI_SINGLE_BATTLE_TEST("Sleep Clause: AI will not use sleep moves while sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
    }
}

AI_DOUBLE_BATTLE_TEST("Sleep Clause: AI will not use sleep moves while sleep clause is active (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_MOVE(opponentLeft, MOVE_SPORE); EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH); }
        TURN { SWITCH(playerLeft, 2); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_MOVE(opponentLeft, MOVE_MACH_PUNCH); EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_MOVE(opponentLeft, MOVE_MACH_PUNCH); EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH); }
    }
}

AI_DOUBLE_BATTLE_TEST("Sleep Clause: AI will not use sleep move if partner is already using a sleep move")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_MOVE(opponentLeft, MOVE_SPORE); EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH); }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep moves fail when sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept the opposing Lopmon_x awake!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep moves fail when sleep clause is active (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X) { HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentRight); MOVE(playerRight, MOVE_SPORE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponentRight, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerRight);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponentLeft, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept the opposing Lopmon_x awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Rest does not activate sleep clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_REST); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Rest does not activate sleep clause (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X) { HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_REST); MOVE(playerLeft, MOVE_SPORE, target: opponentRight); }
    } SCENE {
        STATUS_ICON(opponentLeft, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponentRight, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Rest can still be used when sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SCRATCH); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_REST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, opponent);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Rest can still be used when sleep clause is active (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X) { HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentRight); MOVE(opponentLeft, MOVE_REST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponentRight, sleep: TRUE);
        STATUS_ICON(opponentLeft, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, opponentLeft);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Psycho Shift'ing sleep will fail if sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_SLEEP_TALK) == EFFECT_SLEEP_TALK);
        ASSUME(GetMoveEffect(MOVE_PSYCHO_SHIFT) == EFFECT_PSYCHO_SHIFT);
        PLAYER(SPECIES_LOPMON_X)
        PLAYER(SPECIES_LOPMON_X) { Moves(MOVE_SLEEP_TALK, MOVE_PSYCHO_SHIFT); }
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_SPORE); MOVE(player, MOVE_SLEEP_TALK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHO_SHIFT, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept the opposing Lopmon_x awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Psycho Shift'ing sleep will activate sleep clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_SLEEP_TALK) == EFFECT_SLEEP_TALK);
        ASSUME(GetMoveEffect(MOVE_PSYCHO_SHIFT) == EFFECT_PSYCHO_SHIFT);
        PLAYER(SPECIES_TOYAGUMON)
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SLEEP_TALK, MOVE_PSYCHO_SHIFT); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SLEEP_TALK); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHO_SHIFT, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

AI_SINGLE_BATTLE_TEST("Sleep Clause: AI will not use Yawn while sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_YAWN, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_YAWN); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Yawn will fail when sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponent, MOVE_YAWN); }
        TURN { }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_YAWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Lopmon_x fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, opponent);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            STATUS_ICON(player, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Lopmon_x awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Effect Spore causes sleep 11% of the time with sleep clause active")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); }
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Atamademon's Effect Spore made Lopmon_x sleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Effect Spore causes sleep 11% of the time with sleep clause active (Doubles)")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SPORE, target:playerRight); MOVE(playerLeft, MOVE_SCRATCH, target:opponentLeft);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Lopmon_x fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ABILITY_POPUP(opponentLeft, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
        MESSAGE("The opposing Atamademon's Effect Spore made Lopmon_x sleep!");
        STATUS_ICON(playerLeft, sleep: TRUE);
    }
}


SINGLE_BATTLE_TEST("Sleep Clause: Sleep from Effect Spore will not activate sleep clause")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Atamademon's Effect Spore made Lopmon_x sleep!");
        STATUS_ICON(player, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Lopmon_x fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep from Effect Spore will not activate sleep clause (Doubles)")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target:opponentLeft); MOVE(opponentLeft, MOVE_SPORE, target:playerRight); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
        MESSAGE("The opposing Atamademon's Effect Spore made Lopmon_x sleep!");
        STATUS_ICON(playerLeft, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Lopmon_x fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Moves with sleep effect chance will activate sleep clause")
{
    PASSES_RANDOMLY(10, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(MoveHasAdditionalEffect(MOVE_RELIC_SONG, MOVE_EFFECT_SLEEP));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_RELIC_SONG); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RELIC_SONG, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        MESSAGE("Lopmon_x used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Moves with sleep effect chance will still do damage when sleep clause active, but won't sleep")
{
    PASSES_RANDOMLY(100, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(MoveHasAdditionalEffect(MOVE_RELIC_SONG, MOVE_EFFECT_SLEEP));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_RELIC_SONG); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RELIC_SONG, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Dire Claw cannot sleep a mon when sleep clause is active")
{
    PASSES_RANDOMLY(100, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(MoveHasAdditionalEffect(MOVE_DIRE_CLAW, MOVE_EFFECT_DIRE_CLAW));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_DIRE_CLAW); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIRE_CLAW, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Lopmon_x fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Dark Void can only sleep one opposing mon if sleep clause is active")
{
    // Source: https://bulbapedia.bulbagarden.net/wiki/Dark_Void_(move)
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_DARK_VOID) == EFFECT_DARK_VOID);
        PLAYER(SPECIES_DARKRAI);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DARK_VOID); }
        TURN { MOVE(playerLeft, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Lopmon_x fell asleep!");
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: G-Max Befuddle can only sleep one opposing mon if sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(MoveHasAdditionalEffect(MOVE_G_MAX_BEFUDDLE, MOVE_EFFECT_EFFECT_SPORE_SIDE));
        PLAYER(SPECIES_DOKIMON) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_DATIRIMON);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_BUG_BITE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX,
               WITH_RNG(RNG_G_MAX_BEFUDDLE, STATUS1_SLEEP)); }
    } SCENE {
        MESSAGE("Dokimon used G-Max Befuddle!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Lopmon_x fell asleep!");
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon wakes up")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(B_SLEEP_TURNS >= GEN_5);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN {}
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Lopmon_x woke up!");
        MESSAGE("Lopmon_x used Spore!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Lopmon_x fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up with Aromatherapy / Heal Bell / Sparkly Swirl")
{
    u32 move = MOVE_NONE, switchIndex = 0;
    struct BattlePokemon *healingSlot = opponentRight;
    struct BattlePokemon *sporedSlot = opponentLeft;
    PARAMETRIZE { move = MOVE_AROMATHERAPY;     healingSlot = opponentRight;    sporedSlot = opponentLeft;      switchIndex = 0; }
    PARAMETRIZE { move = MOVE_HEAL_BELL;        healingSlot = opponentRight;    sporedSlot = opponentLeft;      switchIndex = 0; }
    PARAMETRIZE { move = MOVE_SPARKLY_SWIRL;    healingSlot = opponentRight;    sporedSlot = opponentLeft;      switchIndex = 0; }
    PARAMETRIZE { move = MOVE_AROMATHERAPY;     healingSlot = opponentLeft;     sporedSlot = opponentRight;     switchIndex = 1; }
    PARAMETRIZE { move = MOVE_HEAL_BELL;        healingSlot = opponentLeft;     sporedSlot = opponentRight;     switchIndex = 1; }
    PARAMETRIZE { move = MOVE_SPARKLY_SWIRL;    healingSlot = opponentLeft;     sporedSlot = opponentRight;     switchIndex = 1; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_AROMATHERAPY) == EFFECT_HEAL_BELL);
        ASSUME(GetMoveEffect(MOVE_HEAL_BELL) == EFFECT_HEAL_BELL);
        ASSUME(MoveHasAdditionalEffect(MOVE_SPARKLY_SWIRL, MOVE_EFFECT_AROMATHERAPY));
        ASSUME(B_SLEEP_TURNS >= GEN_5);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:sporedSlot); }
        TURN { SWITCH(sporedSlot, 2); MOVE(playerLeft, MOVE_SPORE, target:healingSlot); }
        if (move == MOVE_SPARKLY_SWIRL)
            TURN { SWITCH(sporedSlot, switchIndex); MOVE(healingSlot, move, target: playerRight); MOVE(playerLeft, MOVE_SPORE, target:sporedSlot); }
        else
            TURN { SWITCH(sporedSlot, switchIndex); MOVE(healingSlot, move); MOVE(playerLeft, MOVE_SPORE, target:sporedSlot); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, sporedSlot);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(sporedSlot, sleep: TRUE);
        MESSAGE("Toyagumon used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, healingSlot);
            STATUS_ICON(healingSlot, sleep: TRUE);
            MESSAGE("The opposing Toyagumon fell asleep!");
        }
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
        if (move == MOVE_AROMATHERAPY)
        {
            MESSAGE("The opposing Toyagumon used Aromatherapy!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AROMATHERAPY, healingSlot);
        }
        else if (move == MOVE_HEAL_BELL)
        {
            MESSAGE("The opposing Toyagumon used Heal Bell!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BELL, healingSlot);
        }
        else
        {
            MESSAGE("The opposing Toyagumon used Sparkly Swirl!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPARKLY_SWIRL, healingSlot);
        }
        STATUS_ICON(sporedSlot, sleep: FALSE);
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, sporedSlot);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up forcefully by a move from an opponent")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(MoveHasAdditionalEffect(MOVE_WAKE_UP_SLAP, MOVE_EFFECT_REMOVE_STATUS));
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
        TURN { SWITCH(opponentLeft, 2); MOVE(playerLeft, MOVE_SPORE, target:opponentRight); }
        TURN { SWITCH(opponentLeft, 0); MOVE(playerLeft, MOVE_WAKE_UP_SLAP, target:opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        MESSAGE("Toyagumon used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Toyagumon fell asleep!");
        }
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
        MESSAGE("Toyagumon used Wake-Up Slap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WAKE_UP_SLAP, playerLeft);
        MESSAGE("The opposing Toyagumon woke up!");
        STATUS_ICON(opponentLeft, sleep: FALSE);
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up forcefully by Uproar")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_UPROAR) == EFFECT_UPROAR);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); MOVE(playerRight, MOVE_UPROAR); MOVE(opponentRight, MOVE_ROAR, target:playerRight); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        MESSAGE("Toyagumon used Uproar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, playerRight);
        MESSAGE("Toyagumon caused an uproar!");
        MESSAGE("The uproar woke the opposing Toyagumon!");
        STATUS_ICON(opponentLeft, sleep: FALSE);
        MESSAGE("The opposing Toyagumon used Roar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, opponentRight);
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by using Sleep Talk into a status curing move")
{
    u32 move;
    PARAMETRIZE { move = MOVE_PSYCHO_SHIFT; }
    PARAMETRIZE { move = MOVE_JUNGLE_HEALING; }
    PARAMETRIZE { move = MOVE_LUNAR_BLESSING; }
    PARAMETRIZE { move = MOVE_TAKE_HEART; }
    PARAMETRIZE { move = MOVE_AROMATHERAPY; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_SLEEP_TALK) == EFFECT_SLEEP_TALK);
        ASSUME(GetMoveEffect(MOVE_PSYCHO_SHIFT) == EFFECT_PSYCHO_SHIFT);
        ASSUME(GetMoveEffect(MOVE_JUNGLE_HEALING) == EFFECT_JUNGLE_HEALING);
        ASSUME(GetMoveEffect(MOVE_LUNAR_BLESSING) == EFFECT_JUNGLE_HEALING);
        ASSUME(GetMoveEffect(MOVE_PURIFY) == EFFECT_PURIFY);
        ASSUME(GetMoveEffect(MOVE_TAKE_HEART) == EFFECT_TAKE_HEART);
        ASSUME(GetMoveEffect(MOVE_AROMATHERAPY) == EFFECT_HEAL_BELL);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        PLAYER(SPECIES_TOYAGUMON) { Item(ITEM_CHESTO_BERRY); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SLEEP_TALK, move); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SLEEP_TALK); }
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, move); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("The opposing Toyagumon used Sleep Talk!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, opponent);
        if (move == MOVE_PSYCHO_SHIFT)
        {
            MESSAGE("The opposing Toyagumon used Psycho Shift!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHO_SHIFT, opponent);
        }
        else if (move == MOVE_JUNGLE_HEALING)
        {
            MESSAGE("The opposing Toyagumon used Jungle Healing!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_JUNGLE_HEALING, opponent);
        }
        else if (move == MOVE_LUNAR_BLESSING)
        {
            MESSAGE("The opposing Toyagumon used Lunar Blessing!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_LUNAR_BLESSING, opponent);
        }
        else if (move == MOVE_TAKE_HEART)
        {
            MESSAGE("The opposing Toyagumon used Take Heart!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_HEART, opponent);
        }
        else if (move == MOVE_AROMATHERAPY)
        {
            MESSAGE("The opposing Toyagumon used Aromatherapy!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AROMATHERAPY, opponent);
        }
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Hydration in the rain")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_ANKYLOMON) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_FLYBEEMON) { Ability(ABILITY_HYDRATION); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Ankylomon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Flybeemon fell asleep!");
        MESSAGE("The opposing Flybeemon's Hydration cured its sleep problem!");
        STATUS_ICON(opponent, sleep: FALSE);
        MESSAGE("Ankylomon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Flybeemon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Natural Cure")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_DARLIZAMON) { Ability(ABILITY_NATURAL_CURE); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Darlizamon fell asleep!");
        MESSAGE("2 withdrew Darlizamon!");
        MESSAGE("2 sent out Darlizamon!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Darlizamon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Shed Skin")
{
    if (B_ABILITY_TRIGGER_CHANCE == GEN_4)
        PASSES_RANDOMLY(30, 100, RNG_SHED_SKIN);
    else
        PASSES_RANDOMLY(33, 100, RNG_SHED_SKIN);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_ELECMON) { Ability(ABILITY_SHED_SKIN); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Elecmon fell asleep!");
        MESSAGE("The opposing Elecmon's Shed Skin cured its sleep problem!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Elecmon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Healer")
{
    PASSES_RANDOMLY(30, 100, RNG_HEALER);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_BEARMON) { Ability(ABILITY_HEALER); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("The opposing Bearmon's Healer cured the opposing Toyagumon's problem!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by using a held item")
{
    u32 heldItem = ITEM_NONE;
    PARAMETRIZE { heldItem = ITEM_CHESTO_BERRY; }
    PARAMETRIZE { heldItem = ITEM_LUM_BERRY; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON) { Item(heldItem); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        if (heldItem == ITEM_CHESTO_BERRY)
            MESSAGE("The opposing Toyagumon's Chesto Berry woke it up!");
        else
            MESSAGE("The opposing Toyagumon's Lum Berry cured its sleep problem!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Flinging a held item")
{
    u32 heldItem = ITEM_NONE;
    PARAMETRIZE { heldItem = ITEM_CHESTO_BERRY; }
    PARAMETRIZE { heldItem = ITEM_LUM_BERRY; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_FLING) == EFFECT_FLING);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON) { Item(heldItem); }
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentLeft); MOVE(playerRight, MOVE_FLING, target: opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentLeft); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("Toyagumon used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, playerRight);
        if (heldItem == ITEM_CHESTO_BERRY)
            MESSAGE("The opposing Toyagumon's Chesto Berry woke it up!");
        else
            MESSAGE("The opposing Toyagumon's Lum Berry cured its sleep problem!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by using an item")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(gItemsInfo[ITEM_AWAKENING].battleUsage == EFFECT_ITEM_CURE_STATUS);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { USE_ITEM(opponent, ITEM_AWAKENING, partyIndex: 0); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("Toyagumon had its status healed!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon faints")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON) { Level(5); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SCRATCH); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("The opposing Toyagumon fainted!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon faints (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON) { Level(5); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentLeft); MOVE(playerRight, MOVE_SCRATCH, target: opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentRight);}
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("The opposing Toyagumon fainted!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by gaining the ability Insomnia / Vital Spirit")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { ability = ABILITY_INSOMNIA; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_PENGUINMON) { Ability(ability); }
        OPPONENT(SPECIES_TOYAGUMON) { Moves(MOVE_SLEEP_TALK, MOVE_SKILL_SWAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SLEEP_TALK); }
        TURN { MOVE(opponent, MOVE_SKILL_SWAP); }
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SKILL_SWAP); }
    } SCENE {
        MESSAGE("Penguinmon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        MESSAGE("The opposing Toyagumon used Sleep Talk!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, opponent);
        MESSAGE("The opposing Toyagumon used Skill Swap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, opponent);
        if (ability == ABILITY_VITAL_SPIRIT)
            MESSAGE("The opposing Toyagumon's Vital Spirit cured its sleep problem!");
        if (ability == ABILITY_INSOMNIA)
            MESSAGE("The opposing Toyagumon's Insomnia cured its sleep problem!");
        MESSAGE("The opposing Toyagumon used Skill Swap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, opponent);
        MESSAGE("Penguinmon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is sent out, has Trace, and Traces Insomnia / Vital spirit")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { ability = ABILITY_INSOMNIA; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON)
        PLAYER(SPECIES_PENGUINMON) { Ability(ability); }
        OPPONENT(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Apemon fell asleep!");
        MESSAGE("2 sent out Toyagumon!");
        MESSAGE("2 sent out Apemon!");
        if (ability == ABILITY_VITAL_SPIRIT)
            MESSAGE("The opposing Apemon's Vital Spirit cured its sleep problem!");
        if (ability == ABILITY_INSOMNIA)
            MESSAGE("The opposing Apemon's Insomnia cured its sleep problem!");
        MESSAGE("2 sent out Toyagumon!");
        MESSAGE("Penguinmon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is sent out and transforms into a mon with Insomnia / Vital spirit")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { ability = ABILITY_INSOMNIA; }
    KNOWN_FAILING; // Sleep Clause parts work, but Imposter seems broken with battle messages / targeting. Issue #5565 https://github.com/rh-hideout/pokeemerald-expansion/issues/5565
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(gItemsInfo[ITEM_LAGGING_TAIL].holdEffect == HOLD_EFFECT_LAGGING_TAIL);
        PLAYER(SPECIES_TOYAGUMON)
        PLAYER(SPECIES_PENGUINMON) { Ability(ability); }
        OPPONENT(SPECIES_CRABMON) { Ability(ABILITY_IMPOSTER); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Crabmon transformed into Toyagumon using Imposter!");
        MESSAGE("Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Crabmon fell asleep!");
        MESSAGE("2 sent out Toyagumon!");
        MESSAGE("2 sent out Crabmon!");
        if (ability == ABILITY_VITAL_SPIRIT)
            MESSAGE("The opposing Crabmon's Vital Spirit cured its sleep problem!");
        else
            MESSAGE("The opposing Crabmon's Insomnia cured its sleep problem!");
        MESSAGE("2 sent out Toyagumon!");
        MESSAGE("Penguinmon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
    }
}

AI_SINGLE_BATTLE_TEST("Sleep Clause: AI will use sleep moves again when sleep clause has been deactivated")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_CHESTO_BERRY); }
        OPPONENT(SPECIES_ATAMADEMON) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SPORE); }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up with G-Max Sweetness")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(MoveHasAdditionalEffect(MOVE_G_MAX_SWEETNESS, MOVE_EFFECT_AROMATHERAPY));
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_APPLETUN) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_SPORE, target: playerRight); }
        TURN { MOVE(playerLeft, MOVE_VINE_WHIP, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(opponentRight, MOVE_SPORE, target: playerRight); }
    } SCENE {
        MESSAGE("The opposing Lopmon_x used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Lopmon_x fell asleep!");
        MESSAGE("Appletun used G-Max Sweetness!");
        MESSAGE("The opposing Lopmon_x used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Lopmon_x fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Pre-existing sleep condition doesn't activate sleep clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON) { Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep caused by Effect Spore does not prevent sleep clause from ever activating") // checks that sleepClauseEffectExempt works properly
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_AROMATHERAPY) == EFFECT_HEAL_BELL);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 2); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Atamademon's Effect Spore made Toyagumon sleep!");
        STATUS_ICON(player, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(player, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Waking up after Effect Spore doesn't deactivate sleep clause")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
        TURN {}
        TURN {}
        TURN { MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Atamademon's Effect Spore made Toyagumon sleep!");
        STATUS_ICON(player, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(player, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Waking up after Effect Spore doesn't deactivate sleep clause (Doubles)")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_AROMATHERAPY) == EFFECT_HEAL_BELL);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); MOVE(opponentRight, MOVE_SPORE, target:playerRight); }
        TURN { SWITCH(playerLeft, 2); }
        TURN { MOVE(playerLeft, MOVE_AROMATHERAPY); MOVE(opponentRight, MOVE_SPORE, target:playerRight); MOVE(opponentLeft, MOVE_SPORE, target:playerLeft); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
        MESSAGE("The opposing Atamademon's Effect Spore made Toyagumon sleep!");
        STATUS_ICON(playerLeft, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AROMATHERAPY, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(playerLeft, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Waking up after Rest doesn't deactivate sleep clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_TOYAGUMON) { HP(1); MaxHP(100); }
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_REST); }
        TURN {}
        TURN {}
        TURN {}
        TURN { MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Toyagumon went to sleep!");
        STATUS_ICON(player, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Toyagumon woke up!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(player, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Waking up after Rest doesn't deactivate sleep clause (Doubles)")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        PLAYER(SPECIES_TOYAGUMON) { HP(1); MaxHP(100); }
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_REST); MOVE(opponentRight, MOVE_SPORE, target:playerRight); }
        TURN { SWITCH(playerRight, 2); }
        TURN {}
        TURN {}
        TURN { MOVE(opponentRight, MOVE_SPORE, target:playerRight); }
    } SCENE {
        MESSAGE("Toyagumon went to sleep!");
        STATUS_ICON(playerLeft, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, playerLeft);
        MESSAGE("The opposing Toyagumon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        MESSAGE("Toyagumon woke up!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(playerRight, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Suppressing and then sleeping Vital Spirit / Insomnia and switching back in deactivates sleep clause")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { ability = ABILITY_INSOMNIA; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_PENGUINMON) { Ability(ability); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_GASTRO_ACID); }
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 0); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Penguinmon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Mold Breaker Pokémon sleeping Vital Spirit / Insomnia activates sleep clause")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { ability = ABILITY_INSOMNIA; }
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_PANCHAM) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_PENGUINMON) { Ability(ability); }
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 0); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Penguinmon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Yawn'd Pokémon slept due to Effect Spore before Yawn triggers does not activate sleep clause")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_YAWN); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Toyagumon grew drowsy!");
        ABILITY_POPUP(player, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Atamademon's Effect Spore made the opposing Toyagumon sleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Yawn'd Pokémon who's partner is slept before Yawn triggers will not fall asleep due to sleep clause being activated")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_YAWN, target: opponentLeft); MOVE(playerRight, MOVE_YAWN, target: opponentRight); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentLeft); }
    } SCENE {
        MESSAGE("The opposing Toyagumon grew drowsy!");
        MESSAGE("The opposing Toyagumon grew drowsy!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            MESSAGE( "The opposing Toyagumon fell asleep!");
            STATUS_ICON(opponentRight, sleep: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: If both Pokémon on one side are Yawn'd at the same time, one will fall asleep and the other will not")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_TOYAGUMON) { Speed(5); }
        PLAYER(SPECIES_TOYAGUMON) { Speed(4); }
        OPPONENT(SPECIES_TOYAGUMON) { Speed(3); }
        OPPONENT(SPECIES_TOYAGUMON) { Speed(2); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_YAWN, target: opponentLeft); MOVE(playerRight, MOVE_YAWN, target: opponentRight); }
        TURN { }
    } SCENE {
        MESSAGE("The opposing Toyagumon grew drowsy!");
        MESSAGE("The opposing Toyagumon grew drowsy!");
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            MESSAGE( "The opposing Toyagumon fell asleep!");
            STATUS_ICON(opponentRight, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Reflection moves (ie. Magic Coat) fail if sleep clause is active and they reflect a sleep move")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_MAGIC_COAT) == EFFECT_MAGIC_COAT);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
        MESSAGE("Toyagumon bounced the Spore back!");
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Reflection moves (ie. Magic Coat) that reflect a sleep move activate sleep clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_MAGIC_COAT) == EFFECT_MAGIC_COAT);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
        MESSAGE("Toyagumon bounced the Spore back!");
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Toyagumon fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Reflection moves (ie. Magic Coat) that reflect Dark Void only sleep one opposing Pokémon")
{
    // Source: https://bulbapedia.bulbagarden.net/wiki/Dark_Void_(move)
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_MAGIC_COAT) == EFFECT_MAGIC_COAT);
        ASSUME(GetMoveEffect(MOVE_DARK_VOID) == EFFECT_DARK_VOID);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_DARKRAI);
        OPPONENT(SPECIES_DARKRAI);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MAGIC_COAT); MOVE(opponentLeft, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Darkrai fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Darkrai fell asleep!");
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Magic Bounce'ing a sleep move activates sleep clause, and fails if sleep clause is active")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Toyagumon's Spore was bounced back by Kunemon's Magic Bounce!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        MESSAGE("The opposing Toyagumon's Spore was bounced back by Kunemon's Magic Bounce!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("The opposing Toyagumon fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept the opposing Toyagumon awake!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Magic Bounce reflecting Dark Void only sleeps one opposing Pokémon")
{
    // Source: https://bulbapedia.bulbagarden.net/wiki/Dark_Void_(move)
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_DARK_VOID) == EFFECT_DARK_VOID);
        PLAYER(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_DARKRAI);
        OPPONENT(SPECIES_DARKRAI);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_DARK_VOID); }
    } SCENE {
        MESSAGE("The opposing Darkrai's Dark Void was bounced back by Kunemon's Magic Bounce!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Darkrai fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("The opposing Darkrai fell asleep!");
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep Clause does not prevent sleeping your partner Pokémon with sleep effects")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
        TURN { SWITCH(playerRight, 2); MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
        TURN { SWITCH(playerRight, 3); MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
        TURN { SWITCH(playerRight, 4); MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
        TURN { SWITCH(playerRight, 5); MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep Clause does not prevent sleeping your partner Pokémon with Yawn")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN {}
        TURN { SWITCH(playerRight, 2); MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN {}
        TURN { SWITCH(playerRight, 3); MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN {}
        TURN { SWITCH(playerRight, 4); MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN {}
        TURN { SWITCH(playerRight, 5); MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        STATUS_ICON(playerRight, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        STATUS_ICON(playerRight, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep moves used after being Encore'd are prevented when sleep clause is active")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ENCORE_TARGET, GEN_3);
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SPORE, target: playerLeft); MOVE(playerRight, MOVE_ENCORE, target: opponentLeft); }
        TURN { SWITCH(playerLeft, 2); FORCED_MOVE(opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerLeft, sleep: TRUE);
        MESSAGE("Toyagumon used Encore!");
        MESSAGE("Go! Toyagumon!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(playerLeft, sleep: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Spore'ing opponent after Yawn'ing partner does not prevent Yawn's effect from sleeping partner")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target: playerRight); }
        TURN { SWITCH(playerRight, 2); MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target: opponentLeft); MOVE(playerRight, MOVE_SPORE, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        MESSAGE("Go! Toyagumon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("The opposing Toyagumon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerRight);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            MESSAGE("The opposing Toyagumon fell asleep!");
            STATUS_ICON(opponentRight, sleep: TRUE);
        }
        MESSAGE("Toyagumon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Opponent Spore'ing player's partner after partner was Yawn'd by player does not prevent Spore's effect from sleeping partner and activating clause")
{
    GIVEN {
        FLAG_SET(B_FLAG_SLEEP_CLAUSE);
        ASSUME(GetMoveEffect(MOVE_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_SPORE) == MOVE_EFFECT_SLEEP);
        ASSUME(GetMoveEffect(MOVE_YAWN) == EFFECT_YAWN);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        PLAYER(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
        OPPONENT(SPECIES_TOYAGUMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_YAWN, target: playerRight); }
        TURN { MOVE(opponentLeft, MOVE_SPORE, target: playerRight); MOVE(opponentRight, MOVE_SPORE, target:playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, playerLeft);
        MESSAGE("Toyagumon grew drowsy!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerRight);
        MESSAGE("Toyagumon fell asleep!");
        STATUS_ICON(playerRight, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponentRight);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, playerLeft);
            MESSAGE("Toyagumon fell asleep!");
            STATUS_ICON(playerLeft, sleep: TRUE);
        }
        MESSAGE("Sleep Clause kept Toyagumon awake!");
    }
}
