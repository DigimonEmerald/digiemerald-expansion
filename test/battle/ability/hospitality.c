#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Hospitality user restores 25% of ally's health")
{
    s16 health;

    PARAMETRIZE { health = 75; }
    PARAMETRIZE { health = 100; }

    GIVEN {
        PLAYER(SPECIES_POLTCHAGEIST) { Ability(ABILITY_HOSPITALITY); }
        PLAYER(SPECIES_LOPMONX) { HP(health); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { }
    } SCENE {
        if (health == 75) {
            ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
<<<<<<< HEAD
            MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
=======
            MESSAGE("Lopmonx drank down all the matcha that Poltchageist made!");
>>>>>>> upstream/master
            HP_BAR(playerRight, damage: -25);
        } else {
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
<<<<<<< HEAD
                MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
=======
                MESSAGE("Lopmonx drank down all the matcha that Poltchageist made!");
>>>>>>> upstream/master
                HP_BAR(playerRight, damage: -25);
            }
        }
    }
}

DOUBLE_BATTLE_TEST("Hospitality user restores 25% of ally's health on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX)
        PLAYER(SPECIES_LOPMONX) { HP(75); MaxHP(100); }
        PLAYER(SPECIES_POLTCHAGEIST) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Ptchageist!");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
=======
        SWITCH_OUT_MESSAGE("Lopmonx");
        SEND_IN_MESSAGE("Poltchageist");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Poltchageist made!");
>>>>>>> upstream/master
        HP_BAR(playerRight, damage: -25);
    }
}

DOUBLE_BATTLE_TEST("Hospitality ignores Substitute")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_POLTCHAGEIST) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_SUBSTITUTE); }
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, playerRight);
<<<<<<< HEAD
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Ptchageist!");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
=======
        SWITCH_OUT_MESSAGE("Lopmonx");
        SEND_IN_MESSAGE("Poltchageist");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Poltchageist made!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Hospitality does not trigger if there is no ally on the field")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1);  }
        PLAYER(SPECIES_LOPMONX) { HP(1);  }
        PLAYER(SPECIES_POLTCHAGEIST) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_BLIZZARD); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BLIZZARD, opponentLeft);
        HP_BAR(playerLeft);
        HP_BAR(playerRight);
        MESSAGE("Wobbuffet fainted!");
<<<<<<< HEAD
        MESSAGE("Lopmonx fainted!");
        MESSAGE("Go! Ptchageist!");
=======
        MESSAGE("Lopmonx fainted!");
        SEND_IN_MESSAGE("Poltchageist");
>>>>>>> upstream/master
        NOT ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
    }
}

DOUBLE_BATTLE_TEST("Hospitality is blocked by Heal Block")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HEAL_BLOCK) == EFFECT_HEAL_BLOCK);
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_WOBBUFFET) { HP(75); MaxHP(100); }
        PLAYER(SPECIES_POLTCHAGEIST) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_HEAL_BLOCK, target: playerRight); }
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BLOCK, opponentLeft);
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
            MESSAGE("Wobbuffet drank down all the matcha that Poltchageist made!");
            HP_BAR(playerRight, damage: -25);
        }
    }
}
