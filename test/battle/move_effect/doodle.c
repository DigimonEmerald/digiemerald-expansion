#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DOODLE].effect == EFFECT_DOODLE);
}

DOUBLE_BATTLE_TEST("Doodle gives the target's ability to user and ally")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DOODLE, target: opponentLeft);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOODLE, playerLeft);
        MESSAGE("Exveemon copied Foe Syakomon_x's Blaze!");
        MESSAGE("Exveemon copied Foe Syakomon_x's Blaze!");
    } THEN {
        EXPECT(playerLeft->ability == ABILITY_BLAZE);
        EXPECT(playerRight->ability == ABILITY_BLAZE);
    }
}

DOUBLE_BATTLE_TEST("Doodle can't copy a banned ability")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_GREAT_TUSK) { Ability(ABILITY_PROTOSYNTHESIS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DOODLE, target: opponentLeft);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOODLE, playerLeft);
        NONE_OF {
            MESSAGE("Exveemon copied Foe Great Tusk's Protosynthesis!");
            MESSAGE("Exveemon copied Foe Great Tusk's Protosynthesis!");
        }
    } THEN {
        EXPECT(playerLeft->ability != ABILITY_PROTOSYNTHESIS);
        EXPECT(playerRight->ability != ABILITY_PROTOSYNTHESIS);
    }
}

DOUBLE_BATTLE_TEST("Doodle fails if user has a banned Ability")
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        PLAYER(SPECIES_EXVEEMON) { Ability(ABILITY_SHADOW_TAG); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DOODLE, target: opponentLeft);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOODLE, playerLeft);
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(playerLeft->ability == ABILITY_GULP_MISSILE);
        EXPECT(playerRight->ability == ABILITY_SHADOW_TAG);
    }
}

DOUBLE_BATTLE_TEST("Doodle fails if partner has a banned Ability")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON) { Ability(ABILITY_SHADOW_TAG); }
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DOODLE, target: opponentLeft);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOODLE, playerLeft);
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(playerLeft->ability == ABILITY_SHADOW_TAG);
        EXPECT(playerRight->ability == ABILITY_GULP_MISSILE);
    }
}
