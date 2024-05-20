#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_TRI_ATTACK, MOVE_EFFECT_TRI_ATTACK) == TRUE);
}

SINGLE_BATTLE_TEST("Tri Attack can inflict paralysis, burn or freeze")
{
    u8 statusAnim;
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_FRZ; }
    PASSES_RANDOMLY(1, 3, RNG_TRI_ATTACK);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TRI_ATTACK); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRI_ATTACK, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponent);
        if (statusAnim == B_ANIM_STATUS_BRN) {
            STATUS_ICON(opponent, burn: TRUE);
        } else if (statusAnim == B_ANIM_STATUS_FRZ) {
            STATUS_ICON(opponent, freeze: TRUE);
        } else if (statusAnim == B_ANIM_STATUS_PRZ) {
            STATUS_ICON(opponent, paralysis: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Tri Attack cannot paralyze/burn/freeze electric/fire/ice types respectively")
{
    u8 statusAnim;
    u16 species;
    u32 rng;
    #if B_PARALYZE_ELECTRIC >= GEN_6
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = MOVE_EFFECT_PARALYSIS; species = SPECIES_PICHIMON; }
    #endif // B_PARALYZE_ELECTRIC
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; rng = MOVE_EFFECT_BURN; species = SPECIES_GIGIMON; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_FRZ; rng = MOVE_EFFECT_FREEZE; species = SPECIES_EYESMON; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_TRI_ATTACK, WITH_RNG(RNG_TRI_ATTACK, rng)); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRI_ATTACK, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponent);
            if (statusAnim == B_ANIM_STATUS_BRN) {
                STATUS_ICON(opponent, burn: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_FRZ) {
                STATUS_ICON(opponent, freeze: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_PRZ) {
                STATUS_ICON(opponent, paralysis: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Tri Attack cannot paralyze/burn/freeze pokemon with abilities preventing respective statuses")
{
    u8 statusAnim;
    u16 species, ability;
    u32 rng;
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = MOVE_EFFECT_PARALYSIS; species = SPECIES_CHAPMON; ability = ABILITY_LIMBER; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = MOVE_EFFECT_PARALYSIS; species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; rng = MOVE_EFFECT_BURN; species = SPECIES_DEWPIDER; ability = ABILITY_WATER_BUBBLE; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; rng = MOVE_EFFECT_BURN; species = SPECIES_BLKGABUMON; ability = ABILITY_WATER_VEIL; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; rng = MOVE_EFFECT_BURN; species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_FRZ; rng = MOVE_EFFECT_FREEZE; species = SPECIES_CITRAMON; ability = ABILITY_MAGMA_ARMOR; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_FRZ; rng = MOVE_EFFECT_FREEZE; species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_TRI_ATTACK, WITH_RNG(RNG_TRI_ATTACK, rng)); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRI_ATTACK, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponent);
            if (statusAnim == B_ANIM_STATUS_BRN) {
                STATUS_ICON(opponent, burn: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_FRZ) {
                STATUS_ICON(opponent, freeze: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_PRZ) {
                STATUS_ICON(opponent, paralysis: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Tri Attack cannot paralyze/burn/freeze a mon which is already statused")
{
    u8 statusAnim;
    u32 rng;
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_PRZ; rng = MOVE_EFFECT_PARALYSIS; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_BRN; rng = MOVE_EFFECT_BURN; }
    PARAMETRIZE { statusAnim = B_ANIM_STATUS_FRZ; rng = MOVE_EFFECT_FREEZE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { MOVE(player, MOVE_TRI_ATTACK, WITH_RNG(RNG_TRI_ATTACK, rng)); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRI_ATTACK, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, statusAnim, opponent);
            if (statusAnim == B_ANIM_STATUS_BRN) {
                STATUS_ICON(opponent, burn: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_FRZ) {
                STATUS_ICON(opponent, freeze: TRUE);
            } else if (statusAnim == B_ANIM_STATUS_PRZ) {
                STATUS_ICON(opponent, paralysis: TRUE);
            }
        }
    }
}