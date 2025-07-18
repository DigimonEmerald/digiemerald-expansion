#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dry Skin causes 1/8th Max HP damage in Sun")
{
    GIVEN {
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRY_SKIN);
        HP_BAR(player, damage: 200 / 8);
        MESSAGE("Babydmon's Dry Skin takes its toll!");
    }
}

TO_DO_BATTLE_TEST("Dry Skin doesn't get damaged in Sun if Cloud Nine/Air Lock is on the field");

SINGLE_BATTLE_TEST("Dry Skin heals 1/8th Max HP in Rain")
{
    GIVEN {
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRY_SKIN);
        MESSAGE("Babydmon's Dry Skin restored its HP a little!");
        HP_BAR(player, damage: -(200 / 8));
    }
}

TO_DO_BATTLE_TEST("Dry Skin doesn't heal in Rain if Cloud Nine/Air Lock is on the field");

SINGLE_BATTLE_TEST("Dry Skin increases damage taken from Fire-type moves by 25%", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_EFFECT_SPORE; }
    PARAMETRIZE { ability = ABILITY_DRY_SKIN; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_EMBER) == TYPE_FIRE);
        ASSUME(GetMovePower(MOVE_EMBER) == 40);
        ASSUME(gSpeciesInfo[SPECIES_BABYDMON].types[0] == TYPE_BUG);
        ASSUME(gSpeciesInfo[SPECIES_BABYDMON].types[1] == TYPE_GRASS);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[1] == TYPE_PSYCHIC);
        PLAYER(SPECIES_LOPMONX) { SpAttack(71); }
        OPPONENT(SPECIES_BABYDMON) { Ability(ability); SpDefense(165); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Lopmonx used Ember!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // Due to numerics related to rounding on each applied multiplier,
        // the ability effect doesn't manifest as a 25% damage increase, but as a ~31% damage increase in this case.
        // Values obtained from https://calc.pokemonshowdown.com (Neutral nature and 0 IVs on both sides)
        EXPECT_EQ(results[0].damage, 52);
        EXPECT_EQ(results[1].damage, 68);
    }
}

SINGLE_BATTLE_TEST("Dry Skin heals 25% when hit by water type moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_BUBBLE) == TYPE_WATER);
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRY_SKIN);
        HP_BAR(player, damage: -50);
        MESSAGE("Babydmon restored HP using its Dry Skin!");
    }
}

SINGLE_BATTLE_TEST("Dry Skin does not activate if protected")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_BUBBLE) == TYPE_WATER);
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        NONE_OF { ABILITY_POPUP(player, ABILITY_DRY_SKIN); HP_BAR(player); MESSAGE("Babydmon restored HP using its Dry Skin!"); }
    }
}

SINGLE_BATTLE_TEST("Dry Skin is only triggered once on multi strike moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_WATER_SHURIKEN) == TYPE_WATER);
        ASSUME(GetMoveEffect(MOVE_WATER_SHURIKEN) == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_SHURIKEN); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRY_SKIN);
        HP_BAR(player, damage: -50);
        MESSAGE("Babydmon restored HP using its Dry Skin!");
    }
}

SINGLE_BATTLE_TEST("Dry Skin prevents Absorb Bulb and Luminous Moss from activating")
{
    u32 item;
    PARAMETRIZE { item = ITEM_ABSORB_BULB; }
    PARAMETRIZE { item = ITEM_LUMINOUS_MOSS; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_BUBBLE) == TYPE_WATER);
        PLAYER(SPECIES_BABYDMON) { Ability(ABILITY_DRY_SKIN); HP(100); MaxHP(200); Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRY_SKIN);
        HP_BAR(player, damage: -50);
        MESSAGE("Babydmon restored HP using its Dry Skin!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }
    }
}
