#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_KNOCK_OFF].effect == EFFECT_KNOCK_OFF);
}

SINGLE_BATTLE_TEST("Knock Off knocks a healing berry before it has the chance to activate")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_SITRUS_BERRY); MaxHP(500); HP(255); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Lopmonx's Sitrus Berry restored health!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Lopmonx knocked off Foe Lopmonx's Sitrus Berry!");
    }
}

SINGLE_BATTLE_TEST("Knock Off activates after Rocky Helmet and Weakness Policy")
{
    u16 item = 0;

    PARAMETRIZE { item = ITEM_WEAKNESS_POLICY; }
    PARAMETRIZE { item = ITEM_ROCKY_HELMET; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        if (item == ITEM_WEAKNESS_POLICY) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE);
            MESSAGE("Using WeaknssPolicy, the Attack of Foe Lopmonx sharply rose!");
            MESSAGE("Using WeaknssPolicy, the Sp. Atk of Foe Lopmonx sharply rose!");
        } else if (item == ITEM_ROCKY_HELMET) {
            HP_BAR(player);
            MESSAGE("Lopmonx was hurt by Foe Lopmonx's Rocky Helmet!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
            MESSAGE("Lopmonx knocked off Foe Lopmonx's Rocky Helmet!");
        }
    }
}

SINGLE_BATTLE_TEST("Knock Off doesn't knock off items from Pokemon behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_POKE_BALL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        NOT MESSAGE("Wobbuffet knocked off Foe Wobbuffet's Poké Ball");
    }
}
