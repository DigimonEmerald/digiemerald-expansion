#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Battle Message: Send-in message depends on foe HP")
{
    u32 hp;

    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 69; }
    PARAMETRIZE { hp = 39; }
    PARAMETRIZE { hp = 9; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { HP(hp); MaxHP(100); }
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (hp > 69)
            MESSAGE("Go! Exveemon!");
        else if (hp > 39)
            MESSAGE("You're in charge, Exveemon!");
        else if (hp > 9)
            MESSAGE("Go for it, Exveemon!");
        else
            MESSAGE("Your opponent's weak! Get 'em, Exveemon!");
    }
}

TO_DO_BATTLE_TEST("Battle Message: Switch-out message changes based on conditions")
/*{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (???)
            MESSAGE("Exveemon, that's enough! Come back!");
        else if (???)
            MESSAGE("Exveemon, come back!");
        else if (???)
            MESSAGE("Exveemon, OK! Come back!");
        else
            MESSAGE("Exveemon, good! Come back!");
    }
}*/
