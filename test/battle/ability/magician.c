#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Magician does not get self-damage recoil after stealing Life Orb")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        ASSUME(!IS_MOVE_STATUS(MOVE_TACKLE));
        PLAYER(SPECIES_DELPHOX) { Ability(ABILITY_MAGICIAN); Item(ITEM_NONE); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_LIFE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        // 1st turn
        MESSAGE("Delphox used Tackle!");
        ABILITY_POPUP(player, ABILITY_MAGICIAN);
<<<<<<< HEAD
        MESSAGE("Delphox stole Foe Lopmonx's Life Orb!");
=======
        MESSAGE("Delphox stole the opposing Lopmonx's Life Orb!");
>>>>>>> upstream/master
        NONE_OF {
            HP_BAR(player);
            MESSAGE("Delphox was hurt by the Life Orb!");
        }
        // 2nd turn - Life Orb recoil happens now
        MESSAGE("Delphox used Tackle!");
        HP_BAR(player);
        MESSAGE("Delphox was hurt by the Life Orb!");
    }
}

