#include "global.h"
#include "test/battle.h"

AI_SINGLE_BATTLE_TEST("AI_FLAG_RISKY: AI will blindly Mirror Coat against special attackers")
{
    u32 aiRiskyFlag = 0;

    PARAMETRIZE { aiRiskyFlag = 0; }
    PARAMETRIZE { aiRiskyFlag = AI_FLAG_RISKY; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_MIRROR_COAT].effect == EFFECT_MIRROR_COAT);
        ASSUME(gSpeciesInfo[SPECIES_SWIMMON].baseSpAttack == 85);
        ASSUME(gSpeciesInfo[SPECIES_SWIMMON].baseAttack == 65);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiRiskyFlag);
        PLAYER(SPECIES_SWIMMON) { Level(20); Moves(MOVE_ENERGY_BALL); }
        OPPONENT(SPECIES_DOLPHMON) { Level(20); Moves(MOVE_TACKLE, MOVE_MIRROR_COAT); }
    } WHEN {
            TURN { MOVE(player, MOVE_ENERGY_BALL) ; EXPECT_MOVE(opponent, aiRiskyFlag ? MOVE_MIRROR_COAT : MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_RISKY: AI will blindly Counter against physical attackers")
{
    u32 aiRiskyFlag = 0;

    PARAMETRIZE { aiRiskyFlag = 0; }
    PARAMETRIZE { aiRiskyFlag = AI_FLAG_RISKY; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_COUNTER].effect == EFFECT_COUNTER);
        ASSUME(gSpeciesInfo[SPECIES_TERRIERMON_ASSISTANT].baseAttack == 85);
        ASSUME(gSpeciesInfo[SPECIES_TERRIERMON_ASSISTANT].baseSpAttack == 60);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiRiskyFlag);
        PLAYER(SPECIES_TERRIERMON_ASSISTANT) { Level(20); Moves(MOVE_WATERFALL); }
        OPPONENT(SPECIES_DOLPHMON) { Level(20); Moves(MOVE_TACKLE, MOVE_COUNTER); }
    } WHEN {
            TURN { MOVE(player, MOVE_WATERFALL) ; EXPECT_MOVE(opponent, aiRiskyFlag ? MOVE_COUNTER : MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_RISKY: AI will prioritize Revenge if slower")
{
    u32 aiRiskyFlag = 0;

    PARAMETRIZE { aiRiskyFlag = 0; }
    PARAMETRIZE { aiRiskyFlag = AI_FLAG_RISKY; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_REVENGE].effect == EFFECT_REVENGE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiRiskyFlag);
        PLAYER(SPECIES_SWIMMON) { Level(20); Speed(4); Moves(MOVE_ENERGY_BALL); }
        OPPONENT(SPECIES_DOLPHMON) { Level(19); Speed(3); Moves(MOVE_TACKLE, MOVE_REVENGE); }
    } WHEN {
            TURN { MOVE(player, MOVE_ENERGY_BALL) ; EXPECT_MOVE(opponent, aiRiskyFlag ? MOVE_REVENGE : MOVE_TACKLE); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_RISKY: Mid-battle switches prioritize offensive options")
{
    u32 aiRiskyFlag = 0;

    PARAMETRIZE { aiRiskyFlag = 0; }
    PARAMETRIZE { aiRiskyFlag = AI_FLAG_RISKY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | aiRiskyFlag);
        PLAYER(SPECIES_ANGELAMON) { Level(30); Moves(MOVE_WING_ATTACK, MOVE_BOOMBURST); Speed(5); }
        OPPONENT(SPECIES_NEGAMON) { Level(1); Moves(MOVE_NONE); Speed(4); } // Forces switchout
        OPPONENT(SPECIES_BLKGATOMON) { Level(30); Moves(MOVE_HEADBUTT); Speed(4); SpDefense(41); } // Mid battle, AI sends out Blkgatomon
        OPPONENT(SPECIES_YAAMON) { Level(30); Moves(MOVE_CHARGE_BEAM); Speed(6); Ability(ABILITY_STATIC); }
    } WHEN {
            TURN { MOVE(player, MOVE_WING_ATTACK); EXPECT_SWITCH(opponent, aiRiskyFlag? 2 : 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_RISKY: AI prefers high damage moves at the expense of accuracy regardless of KO thresholds")
{
    u32 aiRiskyFlag = 0;

    PARAMETRIZE { aiRiskyFlag = 0; }
    PARAMETRIZE { aiRiskyFlag = AI_FLAG_RISKY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiRiskyFlag);
        PLAYER(SPECIES_CHICCHIMON) { Level(5); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_DOLPHMON) { Level(20); Moves(MOVE_THUNDER, MOVE_THUNDERBOLT); }
    } WHEN {
            TURN { MOVE(player, MOVE_TACKLE); EXPECT_MOVE(opponent, aiRiskyFlag ? MOVE_THUNDER : MOVE_THUNDERBOLT); }
    }
}
