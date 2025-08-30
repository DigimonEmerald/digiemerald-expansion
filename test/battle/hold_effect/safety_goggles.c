#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_SAFETY_GOGGLES].holdEffect == HOLD_EFFECT_SAFETY_GOGGLES);
};

SINGLE_BATTLE_TEST("Safety Goggles block powder and spore moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STUN_SPORE].powderMove);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_HOPMON) { Item(ITEM_SAFETY_GOGGLES); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
<<<<<<< HEAD
        MESSAGE("Foe Hopmon is not affected thanks to its SafetyGoggles!");
=======
        MESSAGE("The opposing Hopmon is not affected thanks to its Safety Goggles!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Safety Goggles blocks damage from Hail")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(player, MOVE_HAIL); }
    } SCENE {
<<<<<<< HEAD
        NOT MESSAGE("Foe Lopmonx is pelted by HAIL!");
=======
        NOT MESSAGE("The opposing Lopmonx is buffeted by the hail!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Safety Goggles blocks damage from Sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
<<<<<<< HEAD
        NOT MESSAGE("Foe Lopmonx is buffeted by the sandstorm!");
=======
        NOT MESSAGE("The opposing Lopmonx is buffeted by the sandstorm!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Safety Goggles blocks Effect Spore's effect")
{
    PASSES_RANDOMLY(100, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_SAFETY_GOGGLES); }
        OPPONENT(SPECIES_ATAMADEMON) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);

            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, player);
            MESSAGE("Lopmonx was poisoned by the opposing Breloom's Effect Spore!");
            STATUS_ICON(player, poison: TRUE);

            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
            MESSAGE("The opposing Breloom's Effect Spore paralyzed Lopmonx, so it may be unable to move!");
            STATUS_ICON(player, paralysis: TRUE);

            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            MESSAGE("The opposing Breloom's Effect Spore made Lopmonx sleep!");
            STATUS_ICON(player, sleep: TRUE);
        }
    }
}
