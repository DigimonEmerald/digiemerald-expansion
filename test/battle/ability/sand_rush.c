#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sand Rush prevents damage from sandstorm")
{
    u32 type1 = gSpeciesInfo[SPECIES_DRAGOMON].types[0];
    u32 type2 = gSpeciesInfo[SPECIES_DRAGOMON].types[1];
    GIVEN {
        ASSUME(type1 != TYPE_ROCK && type2 != TYPE_ROCK);
        ASSUME(type1 != TYPE_GROUND && type2 != TYPE_GROUND);
        ASSUME(type1 != TYPE_STEEL && type2 != TYPE_STEEL);
        PLAYER(SPECIES_DRAGOMON) { Ability(ABILITY_SAND_RUSH); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Sand Rush doubles speed from sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_POYOMON) { Ability(ABILITY_SAND_RUSH); Speed(100); }
        OPPONENT(SPECIES_LOPMON_X) { Speed(199); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SANDSTORM); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SANDSTORM, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Sand Rush doesn't double speed if Cloud Nine/Air Lock is on the field")
{
    GIVEN {
        PLAYER(SPECIES_POYOMON) { Ability(ABILITY_SAND_RUSH); Speed(100); }
        OPPONENT(SPECIES_DEMMERAMON) { Speed(199); Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SANDSTORM); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SANDSTORM, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    }
}
