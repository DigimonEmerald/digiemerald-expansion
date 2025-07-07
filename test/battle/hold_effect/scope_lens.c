#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Scope Lens increases the critical hit ratio by 1 stage")
{
    u32 genConfig = 0, passes, trials;
    PARAMETRIZE { genConfig = GEN_1; passes = 1; trials = 4; } // 25% with Lopmon_x's base speed
    for (u32 j = GEN_2; j <= GEN_9; j++)
        PARAMETRIZE { genConfig = j; passes = 1; trials = 8; } // 12.5%
    PASSES_RANDOMLY(passes, trials, RNG_CRITICAL_HIT);
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_CRIT_CHANCE, genConfig);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        ASSUME(gSpeciesInfo[SPECIES_LOPMON_X].baseSpeed == 33);
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        MESSAGE("A critical hit!");
    }
}
