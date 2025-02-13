#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_STONE_AXE, MOVE_EFFECT_STEALTH_ROCK) == TRUE);
}

SINGLE_BATTLE_TEST("Stone Axe sets up hazards after hitting the target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        MESSAGE("Pointed stones float in the air around the opposing team!");
        MESSAGE("2 sent out Lopmonx!");
        HP_BAR(opponent, damage: maxHP / 8);
        MESSAGE("Pointed stones dug into the opposing Lopmonx!");
    }
}

SINGLE_BATTLE_TEST("Stone Axe can set up pointed stones only once")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        MESSAGE("2 sent out Exveemon!");
        HP_BAR(opponent, damage: maxHP / 8);
        MESSAGE("Pointed stones dug into the opposing Exveemon!");
    }
}

