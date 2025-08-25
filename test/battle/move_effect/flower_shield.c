#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_FLOWER_SHIELD) == EFFECT_FLOWER_SHIELD);
}

DOUBLE_BATTLE_TEST("Flower Shield raises the defense of all Grass-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_BETAMON].types[0] == TYPE_GRASS);
        ASSUME(gSpeciesInfo[SPECIES_TANGROWTH].types[0] == TYPE_GRASS);
        ASSUME(gSpeciesInfo[SPECIES_KOKUWAMON].types[0] == TYPE_GRASS);
        ASSUME(gSpeciesInfo[SPECIES_KOKUWAMON_X].types[0] == TYPE_GRASS);
        PLAYER(SPECIES_BETAMON);
        PLAYER(SPECIES_TANGROWTH);
        OPPONENT(SPECIES_KOKUWAMON);
        OPPONENT(SPECIES_KOKUWAMON_X);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FLOWER_SHIELD); MOVE(playerRight, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Betamon used Flower Shield!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Betamon's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("The opposing Kokuwamon's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Tangrowth's Defense rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLOWER_SHIELD, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Kokuwamon_x's Defense rose!");
    }
}

TO_DO_BATTLE_TEST("Flower Shield fails if there's no Grass-type Pokémon on the field")
