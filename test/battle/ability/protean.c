#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(B_PROTEAN_LIBERO == GEN_9);
}

SINGLE_BATTLE_TEST("Protean changes the type of the user only once per switch in")
{
    GIVEN {
        PLAYER(SPECIES_GARGOMON);
        OPPONENT(SPECIES_DONSHOUMON) { Ability(ABILITY_PROTEAN); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_PROTEAN);
<<<<<<< HEAD
        MESSAGE("Foe Donshoumon transformed into the Water type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PROTEAN);
            MESSAGE("Foe Donshoumon transformed into the Normal type!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        ABILITY_POPUP(opponent, ABILITY_PROTEAN);
        MESSAGE("Foe Donshoumon transformed into the Water type!");
=======
        MESSAGE("The opposing Donshoumon transformed into the Water type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PROTEAN);
            MESSAGE("The opposing Donshoumon transformed into the Normal type!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ABILITY_POPUP(opponent, ABILITY_PROTEAN);
        MESSAGE("The opposing Donshoumon transformed into the Water type!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
    }
}
