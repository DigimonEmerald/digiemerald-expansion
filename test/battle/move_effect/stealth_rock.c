#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_STEALTH_ROCK].effect == EFFECT_STEALTH_ROCK);
}

SINGLE_BATTLE_TEST("Stealth Rock damage on switch in based on typing")
{
    u32 species, divisor;

    PARAMETRIZE { species = SPECIES_CHIBOMON; divisor = 2; } // Fire / Flying
    PARAMETRIZE { species = SPECIES_LEAFMON; divisor = 4; } // Flying
    PARAMETRIZE { species = SPECIES_MOKUMON; divisor = 8; } // Normal dmg
    PARAMETRIZE { species = SPECIES_MOTIMON; divisor = 16; } // Ground not very effective
    PARAMETRIZE { species = SPECIES_STEELIX; divisor = 32; } // Ground/Steel not very effective

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_STEALTH_ROCK); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, player);
        // MESSAGE("2 sent out species!");
        HP_BAR(opponent, damage: maxHP / divisor);
    }
}
