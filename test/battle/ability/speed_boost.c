#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Speed Boost gradually boosts Speed")
{
    GIVEN {
        PLAYER(SPECIES_SYAKOMON_X) { Ability(ABILITY_SPEED_BOOST); Speed(99); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Celebrate!");
        MESSAGE("Syakomon_x used Celebrate!");
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        MESSAGE("Syakomon_x's Speed Boost raised its SPEED!");
        MESSAGE("Syakomon_x used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Lopmonx used Celebrate!");
        MESSAGE("Syakomon_x used Celebrate!");
        ABILITY_POPUP(player, ABILITY_SPEED_BOOST);
        MESSAGE("Syakomon_x's Speed Boost raised its Speed!");
        MESSAGE("Syakomon_x used Celebrate!");
        MESSAGE("The opposing Lopmonx used Celebrate!");
>>>>>>> upstream/master
    }
}
