#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_LEFTOVERS].holdEffect == HOLD_EFFECT_LEFTOVERS);
}

SINGLE_BATTLE_TEST("Leftovers recovers 1/16th HP at end of turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { MaxHP(100); HP(1); Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx's Leftovers restored its HP a little!");
=======
        MESSAGE("Lopmonx restored a little HP using its Leftovers!");
>>>>>>> upstream/master
        HP_BAR(player, damage: -maxHP / 16);
    }
}

SINGLE_BATTLE_TEST("Leftovers does nothing if max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {}
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
            MESSAGE("Lopmonx's Leftovers restored its HP a little!");
=======
            MESSAGE("Lopmonx restored a little HP using its Leftovers!");
>>>>>>> upstream/master
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Leftovers does nothing if Heal Block applies")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { MaxHP(100); HP(1); Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
            MESSAGE("Lopmonx's Leftovers restored its HP a little!");
=======
            MESSAGE("Lopmonx restored a little HP using its Leftovers!");
>>>>>>> upstream/master
            HP_BAR(player);
        }
    }
}
