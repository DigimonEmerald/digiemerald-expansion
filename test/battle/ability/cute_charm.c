#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cute Charm inflicts infatuation on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SCRATCH; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(!MoveMakesContact(MOVE_SWIFT));
        PLAYER(SPECIES_LOPMONX) { Gender(MON_MALE); }
        OPPONENT(SPECIES_PUYOMON) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, move); }
    } SCENE {
        if (MoveMakesContact(move)) {
            ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
<<<<<<< HEAD
            MESSAGE("Foe Puyomon's Cute Charm infatuated Lopmonx!");
            MESSAGE("Lopmonx is in love with Foe Puyomon!");
=======
            MESSAGE("The opposing Puyomon's Cute Charm infatuated Lopmonx!");
            MESSAGE("Lopmonx is in love with the opposing Puyomon!");
>>>>>>> upstream/master
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
<<<<<<< HEAD
                MESSAGE("Foe Puyomon's Cute Charm infatuated Lopmonx!");
                MESSAGE("Lopmonx is in love with Foe Puyomon!");
=======
                MESSAGE("The opposing Puyomon's Cute Charm infatuated Lopmonx!");
                MESSAGE("Lopmonx is in love with the opposing Puyomon!");
>>>>>>> upstream/master
            }
        }
    }
}

SINGLE_BATTLE_TEST("Cute Charm cannot infatuate same gender")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Gender(MON_MALE); }
        OPPONENT(SPECIES_PUYOMON) { Gender(MON_MALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        NOT ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
    }
}

SINGLE_BATTLE_TEST("Cute Charm triggers 30% of the time")
{
    PASSES_RANDOMLY(3, 10, RNG_CUTE_CHARM);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_4);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_LOPMONX) { Gender(MON_MALE); }
        OPPONENT(SPECIES_PUYOMON) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
        MESSAGE("The opposing Puyomon's Cute Charm infatuated Lopmonx!");
        MESSAGE("Lopmonx is in love with the opposing Puyomon!");
    }
}
