#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
}

SINGLE_BATTLE_TEST("Eject Button is not triggered when there is nothing to switch in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX) { HP(0); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_QUICK_ATTACK);
            MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
=======
            MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
>>>>>>> upstream/master
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Button is not activated by a Sheer Force boosted move")
{
    GIVEN {
        PLAYER(SPECIES_PUWAMON) { Ability(ABILITY_SHEER_FORCE); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_FLAMETHROWER);
            MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLAMETHROWER, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
=======
            MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
>>>>>>> upstream/master
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Button will not activate under Substitute")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PICHIMON) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
               MOVE(opponent, MOVE_SUBSTITUTE);
               MOVE(player, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Pichimon made a SUBSTITUTE!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("The SUBSTITUTE took damage for Foe Pichimon!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Pichimon is switched out with the Eject Button!");
=======
        MESSAGE("The opposing Pichimon put in a substitute!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("The substitute took damage for the opposing Pichimon!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("The opposing Pichimon is switched out with the Eject Button!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Eject Button is not blocked by trapping abilities or moves")
{
    GIVEN {
        PLAYER(SPECIES_BUKAMON) { Ability(ABILITY_ARENA_TRAP); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_TACKLE);
            SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
        MESSAGE("2 sent out Lopmonx!");
=======
        MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
        MESSAGE("2 sent out Lopmonx!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Eject Button is not triggered after the mon loses Eject Button")
{
    GIVEN {
        PLAYER(SPECIES_PICHIMON);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_KNOCK_OFF);
            MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
=======
            MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
>>>>>>> upstream/master
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Button is not triggered after given to player by Picketpocket")
{
    GIVEN {
        PLAYER(SPECIES_REGIELEKI) { Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_MUSHROOMON) { Ability(ABILITY_PICKPOCKET); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_TACKLE);
            MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ABILITY_POPUP(opponent, ABILITY_PICKPOCKET);
<<<<<<< HEAD
        MESSAGE("Foe Mushroomon stole Regieleki's Eject Button!");
=======
        MESSAGE("The opposing Mushroomon stole Regieleki's Eject Button!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Button has no chance to activate after Dragon Tail")
{
    GIVEN {
        PLAYER(SPECIES_KOMMO_O);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_BEARMON);
    } WHEN {
        TURN {
            MOVE(player, MOVE_DRAGON_TAIL);
            MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, player);
<<<<<<< HEAD
        MESSAGE("Foe Bearmon was dragged out!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Bearmon is switched out with the Eject Button!");
=======
        MESSAGE("The opposing Bearmon was dragged out!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("The opposing Bearmon is switched out with the Eject Button!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Eject Button prevents Volt Switch / U-Turn from activating")
{
    GIVEN {
        PLAYER(SPECIES_BOMNANIMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN {
            MOVE(player, MOVE_VOLT_SWITCH);
            SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_VOLT_SWITCH, player);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
=======
        MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Eject Button is activated before Emergency Exit")
{
    GIVEN {
        PLAYER(SPECIES_GARURUMON_X);
        OPPONENT(SPECIES_GOLISOPOD) { Ability(ABILITY_EMERGENCY_EXIT); Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_THUNDERBOLT);
            SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDERBOLT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("The opposing Golisopod is switched out with the Eject Button!");
    }
}

SINGLE_BATTLE_TEST("Eject Button is not triggered after High Jump Kick crash damage")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(player, MOVE_PROTECT);
            MOVE(opponent, MOVE_HIGH_JUMP_KICK);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, player);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx kept going and crashed!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
=======
        MESSAGE("The opposing Lopmonx kept going and crashed!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
        }
    }
}

DOUBLE_BATTLE_TEST("Eject Button activation will not trigger an attack from the incoming mon")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Speed(10); Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_LOPMONX) { Speed(100); Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_DONDOZO) { Speed(20); }
        OPPONENT(SPECIES_LOPMONX) { Speed(50); Item(ITEM_EJECT_PACK); }
        OPPONENT(SPECIES_LOPMONX) { Speed(10); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_MAKE_IT_RAIN); SEND_OUT(playerRight, 2); SEND_OUT(opponentRight, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAKE_IT_RAIN, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
        MESSAGE("Lopmonx is switched out with the Eject Button!");
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
            MESSAGE("Lopmonx is switched out with the Eject Pack!");
>>>>>>> upstream/master
        }
    }
}
