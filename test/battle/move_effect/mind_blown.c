#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_MIND_BLOWN].effect == EFFECT_MIND_BLOWN);
}

SINGLE_BATTLE_TEST("Mind Blown makes the user lose 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(player, damage: 200);
        NOT MESSAGE("Lopmonx fainted!"); // Wobb had more than 1/2 of its HP, so it can't faint.
    }
}

DOUBLE_BATTLE_TEST("Mind Blown makes the user lose 1/2 of its Max HP in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, playerLeft);
        HP_BAR(playerLeft, damage: 200);
        NOT MESSAGE("Lopmonx fainted!"); // Wobb had more than 1/2 of its HP, so it can't faint.
    }
}

SINGLE_BATTLE_TEST("Mind Blown causes the user to faint when below 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200); MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

DOUBLE_BATTLE_TEST("Mind Blown causes the user to faint when below 1/2 of its Max HP in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200); MaxHP(400); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, playerLeft);
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Mind Blown causes the user & the target to faint when below 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200) ; MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(opponent, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Wobbuffet fainted!");
>>>>>>> upstream/master
        HP_BAR(player, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

DOUBLE_BATTLE_TEST("Mind Blown causes everyone to faint in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200); MaxHP(400); }
        PLAYER(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_KAKKINMON) { HP(1); }
        OPPONENT(SPECIES_KAKKINMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, playerLeft);
        HP_BAR(opponentLeft, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Hopmon fainted!");
=======
        MESSAGE("The opposing Abra fainted!");
>>>>>>> upstream/master
        HP_BAR(playerRight, hp: 0);
        MESSAGE("Exveemon fainted!");
        HP_BAR(opponentRight, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Kakkinmon fainted!");
=======
        MESSAGE("The opposing Kadabra fainted!");
>>>>>>> upstream/master
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Mind Blown hp loss is prevented by Magic Guard")
{
    GIVEN {
        PLAYER(SPECIES_PUYOMON) { Ability(ABILITY_MAGIC_GUARD); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(opponent);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Mind Blown is blocked by Damp")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_DAMP); }
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
            HP_BAR(player, damage: 200);
        }
        ABILITY_POPUP(opponent, ABILITY_DAMP);
<<<<<<< HEAD
        MESSAGE("Foe Golduck's Damp prevents Lopmonx from using Mind Blown!");
=======
        MESSAGE("The opposing Golduck's Damp prevents Wobbuffet from using Mind Blown!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Mind Blown makes the user lose HP even if the opposing mon protected")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Mind Blown makes the user lose HP even if it is absorbed by Flash Fire")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MIND_BLOWN].type == TYPE_FIRE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CYNDAQUIL) { Ability(ABILITY_FLASH_FIRE); }
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_FLASH_FIRE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Mind Blown does not cause the user to lose HP if there is no target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MEMENTO); MOVE(player, MOVE_MIND_BLOWN); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
            HP_BAR(player);
        }
        MESSAGE("Lopmonx used Mind Blown!");
        MESSAGE("But it failed!");
        MESSAGE("2 sent out Lopmonx!");
    }
}
