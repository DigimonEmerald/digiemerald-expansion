#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Effect Spore only inflicts status on contact")
{
    u32 move;

    PARAMETRIZE { move = MOVE_SCRATCH; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(!MoveMakesContact(MOVE_SWIFT));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, move, WITH_RNG(RNG_EFFECT_SPORE, 1)); }
        TURN {}
    } SCENE {
        if (MoveMakesContact(move)) {
            ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
            MESSAGE("Lopmonx was poisoned by the opposing Atamademon's Effect Spore!");
            STATUS_ICON(player, poison: TRUE);
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
                MESSAGE("Lopmonx was poisoned by the opposing Atamademon's Effect Spore!");
                STATUS_ICON(player, poison: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Effect Spore causes poison 9% of the time")
{
    PASSES_RANDOMLY(9, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
        MESSAGE("Lopmonx was poisoned by the opposing Atamademon's Effect Spore!");
        STATUS_ICON(player, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Effect Spore causes paralysis 10% of the time")
{
    PASSES_RANDOMLY(10, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
        MESSAGE("The opposing Atamademon's Effect Spore paralyzed Lopmonx, so it may be unable to move!");
        STATUS_ICON(player, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Effect Spore causes sleep 11% of the time")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("The opposing Atamademon's Effect Spore made Lopmonx sleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}
