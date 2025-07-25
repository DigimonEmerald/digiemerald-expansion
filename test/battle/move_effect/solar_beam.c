#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SOLAR_BEAM) == EFFECT_SOLAR_BEAM);
    ASSUME(GetMoveTwoTurnAttackWeather(MOVE_SOLAR_BLADE) == B_WEATHER_SUN);
}

SINGLE_BATTLE_TEST("Solar Beam does not need a charging turn if Sun is up")
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_DROUGHT; }
    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        PLAYER(SPECIES_CLOCKMON) { Ability(ability); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SOLAR_BEAM); }
        if (ability == ABILITY_WHITE_SMOKE) {
            TURN { SKIP_TURN(player); }
        }
    } SCENE {
        if (ability == ABILITY_WHITE_SMOKE) {
            MESSAGE("Clockmon used Solar Beam!");
            MESSAGE("Clockmon absorbed light!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        }
        MESSAGE("Clockmon used Solar Beam!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SOLAR_BEAM, player);
    }
}
