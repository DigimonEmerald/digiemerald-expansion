#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
}

SINGLE_BATTLE_TEST("Eject Pack does not cause the new Pokémon to lose HP due to it's held Life Orb")
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
<<<<<<< HEAD
        MESSAGE("Lopmonx is switched out with the Eject Pack!");
        MESSAGE("Go! Exveemon!");
        NOT MESSAGE("Exveemon was hurt by its Life Orb!");
=======
        MESSAGE("Lopmonx is switched out with the Eject Pack!");
        SEND_IN_MESSAGE("Wynaut");
        NOT MESSAGE("Wynaut was hurt by its Life Orb!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Pack does not activate if there are no Pokémon left to battle")
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

SINGLE_BATTLE_TEST("Eject Pack is triggered by self-inflicting stat decreases")
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
<<<<<<< HEAD
        MESSAGE("Lopmon_x is switched out with the Eject Pack!");
        MESSAGE("Go! Exveemon!");
=======
        MESSAGE("Lopmonx is switched out with the Eject Pack!");
        SEND_IN_MESSAGE("Wynaut");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Pack will miss timing to switch out user if Emergency Exit was activated on target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_GOLISOPOD) { Ability(ABILITY_EMERGENCY_EXIT); MaxHP(263); HP(133); };
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx is switched out with the Eject Pack!");
        }
        ABILITY_POPUP(opponent, ABILITY_EMERGENCY_EXIT);
    } THEN {
        EXPECT(player->species == SPECIES_LOPMONX);
        EXPECT(opponent->species == SPECIES_WYNAUT);
    }
}

SINGLE_BATTLE_TEST("Eject Pack activates once intimidate mon switches in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(opponent, 1); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx is switched out with the Eject Pack!");
    }
}

SINGLE_BATTLE_TEST("Eject Pack will not activate if Parting Shot user can switch out")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PARTING_SHOT); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PARTING_SHOT, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx is switched out with the Eject Pack!");
        }
    }
}

DOUBLE_BATTLE_TEST("Eject Pack will not trigger if the conditions are not met")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_BELDUM) { Ability(ABILITY_CLEAR_BODY); };
        PLAYER(SPECIES_RALTS) { Ability(ABILITY_TRACE); Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(opponentLeft, 2); SEND_OUT(playerLeft, 2); }
    } SCENE {

    }
}
