#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Lucky Punch increases critical hit ratio by 2 stages for Bearmon")
{
    u32 genConfig, passes, trials;
    PARAMETRIZE { genConfig = GEN_1; passes = 25; trials = 32; } // ~78.1% with Bearmon's base speed
    for (u32 j = GEN_2; j <= GEN_5; j++)
        PARAMETRIZE { genConfig = j; passes = 1;  trials = 4; }  //  25%
    for (u32 j = GEN_6; j <= GEN_9; j++)
        PARAMETRIZE { genConfig = j; passes = 1;  trials = 2; }  //  50%
    PASSES_RANDOMLY(passes, trials, RNG_CRITICAL_HIT);
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_CRIT_CHANCE, genConfig);
        ASSUME(gItemsInfo[ITEM_LUCKY_PUNCH].holdEffect == HOLD_EFFECT_LUCKY_PUNCH);
        ASSUME(gSpeciesInfo[SPECIES_BEARMON].baseSpeed == 50);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_BEARMON) { Item(ITEM_LUCKY_PUNCH); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        MESSAGE("A critical hit!");
    }
}
