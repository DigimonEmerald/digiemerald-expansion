#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Aegislash reverts to Shield Form upon switching out")
{
    GIVEN {
        PLAYER(SPECIES_AEGISLASH_SHIELD);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        MESSAGE("Aegislash used Tackle!");
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_AEGISLASH_SHIELD);
    }
}
