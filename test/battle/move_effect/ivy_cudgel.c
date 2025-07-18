#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_IVY_CUDGEL) == EFFECT_IVY_CUDGEL);
}

SINGLE_BATTLE_TEST("Ivy Cudgel changes the move type depending on the form of Ogerpon")
{
    u16 species;
    u16 ogerpon;
    u16 item;

<<<<<<< HEAD
    PARAMETRIZE { species = SPECIES_CURIMON; ogerpon = SPECIES_OGERPON_TEAL_MASK; item = ITEM_NONE; }
    PARAMETRIZE { species = SPECIES_CHIBOMON; ogerpon = SPECIES_OGERPON_CORNERSTONE_MASK; item = ITEM_CORNERSTONE_MASK; }
    PARAMETRIZE { species = SPECIES_CHIBOMON; ogerpon = SPECIES_OGERPON_WELLSPRING_MASK; item = ITEM_WELLSPRING_MASK; }
    PARAMETRIZE { species = SPECIES_BOMMON; ogerpon = SPECIES_OGERPON_HEARTHFLAME_MASK;  item = ITEM_HEARTHFLAME_MASK; }
=======
    PARAMETRIZE { species = SPECIES_CURIMON; ogerpon = SPECIES_OGERPON_TEAL; item = ITEM_NONE; }
    PARAMETRIZE { species = SPECIES_CHIBOMON; ogerpon = SPECIES_OGERPON_CORNERSTONE; item = ITEM_CORNERSTONE_MASK; }
    PARAMETRIZE { species = SPECIES_CHIBOMON; ogerpon = SPECIES_OGERPON_WELLSPRING; item = ITEM_WELLSPRING_MASK; }
    PARAMETRIZE { species = SPECIES_BOMMON; ogerpon = SPECIES_OGERPON_HEARTHFLAME;  item = ITEM_HEARTHFLAME_MASK; }
>>>>>>> upstream/master

    GIVEN {
        PLAYER(ogerpon) { Item(item); }
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_IVY_CUDGEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_IVY_CUDGEL, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Ivy Cudgel does not change the move type if used by Pokémon other than Ogerpon")
{
    u16 item;

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_CORNERSTONE_MASK; }
    PARAMETRIZE { item = ITEM_WELLSPRING_MASK; }
    PARAMETRIZE { item = ITEM_HEARTHFLAME_MASK; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_CURIMON);
    } WHEN {
        TURN { MOVE(player, MOVE_IVY_CUDGEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_IVY_CUDGEL, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!"); // Should be super effective everytime if type isnt being changed
    }
}
