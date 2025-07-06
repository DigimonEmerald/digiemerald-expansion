#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_CURSE].effect == EFFECT_CURSE);
}

SINGLE_BATTLE_TEST("Curse lowers Speed, raises Attack, and raises Defense when used by non-Ghost-types")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        MESSAGE("Lopmonx's Speed fell!");
        MESSAGE("Lopmonx's Attack rose!");
        MESSAGE("Lopmonx's Defense rose!");
    }
}

SINGLE_BATTLE_TEST("Curse cuts the user's HP in half when used by Ghost-types")
{
    GIVEN {
        PLAYER(SPECIES_LOOGAMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        HP_BAR(player, hp: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Curse applies to the user if used with Protean")
{
    GIVEN {
        PLAYER(SPECIES_DONSHOUMON) { Ability(ABILITY_PROTEAN); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE, target: player); }
    } SCENE {
        s32 playerMaxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ABILITY_POPUP(player, ABILITY_PROTEAN);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        HP_BAR(player, damage: playerMaxHP / 2);
        HP_BAR(player, damage: playerMaxHP / 4);
    }
}

SINGLE_BATTLE_TEST("Curse applies to the opponent if user is afflicted by Trick-or-Treat in the same turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TRICK_OR_TREAT); MOVE(player, MOVE_CURSE, target: player); }
    } SCENE {
        s32 playerMaxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        s32 opponentMaxHP = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRICK_OR_TREAT, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        HP_BAR(player, damage: playerMaxHP / 2);
        HP_BAR(opponent, damage: opponentMaxHP / 4);
    }
}

TO_DO_BATTLE_TEST("Baton Pass passes Cursed status");
