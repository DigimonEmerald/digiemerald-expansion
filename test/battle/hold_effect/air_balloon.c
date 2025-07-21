#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_AIR_BALLOON].holdEffect == HOLD_EFFECT_AIR_BALLOON);
    ASSUME(gMovesInfo[MOVE_EARTHQUAKE].type == TYPE_GROUND);
    ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_GROUND);
    ASSUME(gMovesInfo[MOVE_RECYCLE].effect == EFFECT_RECYCLE);
}

SINGLE_BATTLE_TEST("Air Balloon prevents the holder from taking damage from ground type moves")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Foe Lopmonx used Earthquake!");
=======
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("The opposing Lopmonx used Earthquake!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It doesn't affect Lopmonx…");
    }
}

SINGLE_BATTLE_TEST("Air Balloon pops when the holder is hit by a move that is not ground type")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
=======
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Air Balloon no longer prevents the holder from taking damage from ground type moves once it has been popped")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        MESSAGE("Foe Lopmonx used Earthquake!");
=======
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        MESSAGE("The opposing Lopmonx used Earthquake!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        NOT MESSAGE("It doesn't affect Lopmonx…");
    }
}

SINGLE_BATTLE_TEST("Air Balloon can not be restored with Recycle after it has been popped")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {
            MOVE(opponent, MOVE_TACKLE);
            MOVE(player, MOVE_RECYCLE);
        }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Foe Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        MESSAGE("Lopmonx used Recycle!");
=======
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        MESSAGE("Lopmonx used Recycle!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Air Balloon prevents the user from being healed by Grassy Terrain")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); MaxHP(100); HP(1); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
    } SCENE {
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        NOT MESSAGE("Lopmonx is healed by the Grassy Terrain!");
    }
}

SINGLE_BATTLE_TEST("Air Balloon pops before it can be stolen with Magician")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_OMNIMON) { Ability(ABILITY_MAGICIAN); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        NOT ABILITY_POPUP(opponent, ABILITY_MAGICIAN);
    }
}

SINGLE_BATTLE_TEST("Air Balloon pops before it can be stolen by Thief")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_THIEF) == EFFECT_STEAL_ITEM);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THIEF); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        NOT MESSAGE("Foe Lopmonx stole Lopmonx's Air Balloon!");
=======
        MESSAGE("Lopmonx floats in the air with its Air Balloon!");
        MESSAGE("Lopmonx's Air Balloon popped!");
        NOT MESSAGE("The opposing Lopmonx stole Lopmonx's Air Balloon!");
>>>>>>> upstream/master
    }
}
