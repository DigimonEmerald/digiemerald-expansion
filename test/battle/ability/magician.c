#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Magician gets self-damage recoil after stealing Life Orb")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        ASSUME(!IsBattleMoveStatus(MOVE_SCRATCH));
        PLAYER(SPECIES_OMNIMON) { Ability(ABILITY_MAGICIAN); Item(ITEM_NONE); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_LIFE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        // 1st turn
        MESSAGE("Omnimon used Scratch!");
        ABILITY_POPUP(player, ABILITY_MAGICIAN);
<<<<<<< HEAD
        MESSAGE("Omnimon stole Foe Lopmonx's Life Orb!");
=======
        MESSAGE("Omnimon stole the opposing Lopmonx's Life Orb!");
>>>>>>> upstream/master
        HP_BAR(player);
        MESSAGE("Omnimon was hurt by the Life Orb!");
        // 2nd turn - Life Orb recoil happens now
        MESSAGE("Omnimon used Scratch!");
        HP_BAR(player);
        MESSAGE("Omnimon was hurt by the Life Orb!");
    }
}

