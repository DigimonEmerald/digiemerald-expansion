#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
}

SINGLE_BATTLE_TEST("Eject Pack does not cause the new pokemon to lose hp due to it's held Life Orb")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_LIFE_ORB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx is switched out with the Eject Pack!");
        MESSAGE("Go! Exveemon!");
        NOT MESSAGE("Exveemon was hurt by its Life Orb!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Pack does not activate if there are no pokemon left to battle")
{
{
    GIVEN {
    GIVEN {
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_LOPMON_X) { HP(0); }
        PLAYER(SPECIES_LOPMON_X) { HP(0); }
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
    } WHEN {
        TURN { }
        TURN { }
    } SCENE {
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NONE_OF {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmon_x is switched out with the Eject Pack!");
            MESSAGE("Lopmon_x is switched out with the Eject Pack!");
        }
        }
    }
    }
}
}

SINGLE_BATTLE_TEST("Eject Pack triggers on the correct pokemon")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMON_X)  { Item(ITEM_EJECT_PACK); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmon_x is switched out with the Eject Pack!");
        MESSAGE("Go! Exveemon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}
