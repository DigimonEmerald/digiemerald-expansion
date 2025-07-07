#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HEALING_WISH) == EFFECT_HEALING_WISH);
    ASSUME(GetMoveEffect(MOVE_LUNAR_DANCE) == EFFECT_HEALING_WISH);
}

SINGLE_BATTLE_TEST("Healing Wish causes the user to faint and fully heals the replacement")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_ARCADIAMON_CHAMPION);
        PLAYER(SPECIES_EXVEEMON) { HP(1); MaxHP(100); Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_HEALING_WISH); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Arcadiamon_champion fainted!");
        MESSAGE("The healing wish came true for Exveemon!");
        HP_BAR(player, hp: 100);
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Exveemon regained health!");
    }
}

DOUBLE_BATTLE_TEST("Lunar Dance causes the user to faint and fully heals the replacement in a double battle")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_ARCADIAMON_CHAMPION) { Speed(300); }
        PLAYER(SPECIES_LOPMONX) { Speed(50); }
        PLAYER(SPECIES_EXVEEMON) { HP(99); MaxHP(100); Status1(STATUS1_BURN); Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(50); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_LUNAR_DANCE); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LUNAR_DANCE, playerLeft);
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Arcadiamon_champion fainted!");
        MESSAGE("Exveemon became cloaked in mystical moonlight!");
        HP_BAR(playerLeft, hp: 100);
        STATUS_ICON(playerLeft, none: TRUE);
        MESSAGE("Exveemon regained health!");
    }
}

SINGLE_BATTLE_TEST("Healing Wish effect activates only if the switched pokemon can be healed")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_8);
        PLAYER(SPECIES_ARCADIAMON_CHAMPION) { Speed(300); }
        PLAYER(SPECIES_BALISTAMON) { Speed(400); }
        PLAYER(SPECIES_EXVEEMON) { HP(50); MaxHP(100); Status1(STATUS1_PARALYSIS); Speed(50); }
        OPPONENT(SPECIES_LOPMONX) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_HEALING_WISH); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Arcadiamon_champion fainted!");
        NONE_OF {
<<<<<<< HEAD
            MESSAGE("The healing wish came true for Exveemon!");
            MESSAGE("Exveemon regained health!");
=======
            MESSAGE("The healing wish came true for Exveemon!");
            MESSAGE("Exveemon's HP was restored.");
>>>>>>> upstream/master
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        MESSAGE("The healing wish came true for Exveemon!");
        HP_BAR(player, hp: 100);
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Exveemon regained health!");
    }
}
