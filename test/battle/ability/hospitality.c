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
            MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
            HP_BAR(playerRight, damage: -25);
        } else {
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
                MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
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
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Ptchageist!");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
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
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Ptchageist!");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Lopmonx drank down all the matcha that Ptchageist made!");
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
        MESSAGE("Lopmonx fainted!");
        HP_BAR(playerRight);
        MESSAGE("Lopmonx fainted!");
        MESSAGE("Go! Ptchageist!");
        NOT ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
    }
}
