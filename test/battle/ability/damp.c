#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Damp prevents Explosion-like moves from enemies")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_ARGOMON_IT) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); HP_BAR(opponent); }
    }
}

DOUBLE_BATTLE_TEST("Damp prevents Explosion-like moves from enemies in a double battle")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_ARGOMON_IT) { Ability(ABILITY_DAMP); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, move); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_DAMP);
        NONE_OF { HP_BAR(playerLeft); HP_BAR(opponentLeft); HP_BAR(playerRight); HP_BAR(opponentRight); }
    }
}

SINGLE_BATTLE_TEST("Damp prevents Explosion-like moves from self")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_ARGOMON_IT) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); HP_BAR(opponent); }
    }
}

SINGLE_BATTLE_TEST("Damp prevents damage from Aftermath")
{
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_ARGOMON_IT) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_XIAOMON) { Ability(ABILITY_AFTERMATH); HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); SEND_OUT(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_AFTERMATH);
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); }
    }
}
