#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cursed Body triggers 30% of the time")
{
    PASSES_RANDOMLY(3, 10, RNG_CURSED_BODY);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_FRILLISH) { Ability(ABILITY_CURSED_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_AQUA_JET); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AQUA_JET, player);
        ABILITY_POPUP(opponent, ABILITY_CURSED_BODY);
<<<<<<< HEAD
        MESSAGE("Lopmonx's Aqua Jet was disabled by Foe Frillish's Cursed Body!");
=======
        MESSAGE("Lopmonx's Aqua Jet was disabled by the opposing Frillish's Cursed Body!");
>>>>>>> upstream/master
    }
}
