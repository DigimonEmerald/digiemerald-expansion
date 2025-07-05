#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Guard Spec. sets Mist effect on the battlers side")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_GUARD_SPEC].battleUsage == EFFECT_ITEM_SET_MIST);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_GUARD_SPEC, partyIndex: 0); }
        TURN { MOVE(opponent, MOVE_GROWL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIST, player);
<<<<<<< HEAD
        MESSAGE("Ally became shrouded in MIST!");
        MESSAGE("Foe Lopmonx used Growl!");
        MESSAGE("Lopmonx is protected by MIST!");
=======
        MESSAGE("Your team became shrouded in mist!");
        MESSAGE("The opposing Lopmonx used Growl!");
        MESSAGE("Lopmonx is protected by the mist!");
>>>>>>> upstream/master
    }
}
