#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Water Absorb heals 25% when hit by water type moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUBBLE].type == TYPE_WATER);
        PLAYER(SPECIES_GUMMYMON) { Ability(ABILITY_WATER_ABSORB); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_ABSORB);
        HP_BAR(player, damage: -25);
        MESSAGE("Gummymon restored HP using its Water Absorb!");
    }
}

SINGLE_BATTLE_TEST("Water Absorb does not activate if protected")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUBBLE].type == TYPE_WATER);
        PLAYER(SPECIES_GUMMYMON) { Ability(ABILITY_WATER_ABSORB); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        NONE_OF { ABILITY_POPUP(player, ABILITY_WATER_ABSORB); HP_BAR(player); MESSAGE("Gummymon restored HP using its Water Absorb!"); }
    }
}

SINGLE_BATTLE_TEST("Water Absorb activates on status moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SOAK].type == TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_SOAK].category == DAMAGE_CATEGORY_STATUS);
        PLAYER(SPECIES_GUMMYMON) { Ability(ABILITY_WATER_ABSORB); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SOAK); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_ABSORB);
        HP_BAR(player, damage: -25);
        MESSAGE("Gummymon restored HP using its Water Absorb!");
    }
}

SINGLE_BATTLE_TEST("Water Absorb is only triggered once on multi strike moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_SHURIKEN].type == TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_WATER_SHURIKEN].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_GUMMYMON) { Ability(ABILITY_WATER_ABSORB); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_SHURIKEN); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_ABSORB);
        HP_BAR(player, damage: -25);
        MESSAGE("Gummymon restored HP using its Water Absorb!");
    }
}

SINGLE_BATTLE_TEST("Water Absorb prevents Absorb Bulb and Luminous Moss from activating")
{
    u32 item;
    PARAMETRIZE { item = ITEM_ABSORB_BULB; }
    PARAMETRIZE { item = ITEM_LUMINOUS_MOSS; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUBBLE].type == TYPE_WATER);
        PLAYER(SPECIES_GUMMYMON) { Ability(ABILITY_WATER_ABSORB); HP(1); MaxHP(100); Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_ABSORB);
        HP_BAR(player, damage: -25);
        MESSAGE("Gummymon restored HP using its Water Absorb!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }

    }
}
