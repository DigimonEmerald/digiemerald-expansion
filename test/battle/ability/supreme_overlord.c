#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Supreme Overlord boosts Attack by an additive 10% per fainted mon on its side upon switch in", s16 damage)
{
    bool32 switchMon = 0;
    PARAMETRIZE { switchMon = FALSE; }
    PARAMETRIZE { switchMon = TRUE; }
    GIVEN {
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (switchMon)
            TURN { SWITCH(playerLeft, 3); }
        TURN { MOVE(playerRight, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerRight, 2); }
        if (switchMon)
            TURN { SWITCH(playerLeft, 0); }
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        if (switchMon) {
            ABILITY_POPUP(playerLeft, ABILITY_SUPREME_OVERLORD);
            MESSAGE("Kingambit gained strength from the fallen!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.1), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Supreme Overlord's boost caps at a 1.5x multipler", s16 damage)
{
    u32 faintCount = 0;
    PARAMETRIZE { faintCount = 5; }
    PARAMETRIZE { faintCount = 6; }
    GIVEN {
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 2); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 2); }
        if (faintCount == 6)
            TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { SWITCH(playerRight, 3); }
        TURN { MOVE(playerRight, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_SUPREME_OVERLORD);
        MESSAGE("Kingambit gained strength from the fallen!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerRight);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Supreme Overlord does not boost attack if party members are already fainted at the start of the battle", s16 damage)
{
    u32 fainted = 0;

    PARAMETRIZE { fainted = FALSE; }
    PARAMETRIZE { fainted = TRUE; }
    GIVEN {
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        PLAYER(SPECIES_PAWNIARD) { HP(fainted ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(fainted ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(fainted ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(fainted ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(fainted ? 0 : 1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, target: opponent); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_SUPREME_OVERLORD);
            MESSAGE("Kingambit gained strength from the fallen!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Supreme Overlord's message displays correctly after all battlers fainted - Player")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX) { HP(1);}
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, opponent);
        // Everyone faints.
<<<<<<< HEAD
        MESSAGE("Go! Kingambit!");
        MESSAGE("2 sent out Lopmonx!");
=======
        SEND_IN_MESSAGE("Kingambit");
        MESSAGE("2 sent out Lopmonx!");
>>>>>>> upstream/master
        ABILITY_POPUP(player, ABILITY_SUPREME_OVERLORD);
        MESSAGE("Kingambit gained strength from the fallen!");
    }
}

SINGLE_BATTLE_TEST("Supreme Overlord's message displays correctly after all battlers fainted - Opponent")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { HP(1);}
        OPPONENT(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        // Everyone faints.
<<<<<<< HEAD
        MESSAGE("Go! Lopmonx!");
=======
        SEND_IN_MESSAGE("Lopmonx");
>>>>>>> upstream/master
        MESSAGE("2 sent out Kingambit!");
        ABILITY_POPUP(opponent, ABILITY_SUPREME_OVERLORD);
        MESSAGE("The opposing Kingambit gained strength from the fallen!");
    }
}
