#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_ENIGMA_BERRY].holdEffect == HOLD_EFFECT_ENIGMA_BERRY);
}

SINGLE_BATTLE_TEST("Enigma Berry recovers 25% of HP if hit by super effective move")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Exveemon's Enigma Berry restored health!");
=======
        MESSAGE("Exveemon restored its health using its Enigma Berry!");
>>>>>>> upstream/master
        HP_BAR(player, damage: -maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("Enigma Berry does nothing if not hit by super effective move")
{
    GIVEN {
        PLAYER(SPECIES_TINPET) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
            MESSAGE("Tinpet's Enigma Berry restored health!");
=======
            MESSAGE("Tinpet restored its health using its Enigma Berry!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Enigma Berry does nothing if Heal Block applies")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); }
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BLOCK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
            MESSAGE("Exveemon's Enigma Berry restored health!");
=======
            MESSAGE("Exveemon restored its health using its Enigma Berry!");
>>>>>>> upstream/master
        }
    }
}

DOUBLE_BATTLE_TEST("Enigma Berry doesn't trigger if partner was hit")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_ENIGMA_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
    } THEN {
        EXPECT(opponentRight->item == ITEM_ENIGMA_BERRY);
    }
}
