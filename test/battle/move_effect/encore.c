#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ENCORE) == EFFECT_ENCORE);
}

SINGLE_BATTLE_TEST("Encore forces consecutive move uses for 3 turns: Encore used before move")
{
    struct BattlePokemon *encoreUser = NULL;
    struct BattlePokemon *encoreTarget = NULL;
    u32 speedPlayer, speedOpponent;
    PARAMETRIZE { encoreUser = opponent; encoreTarget = player; speedPlayer = 10; speedOpponent = 20; }
    PARAMETRIZE { encoreUser = player; encoreTarget = opponent; speedPlayer = 20; speedOpponent = 10; }
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX) { Speed(10); }
        OPPONENT(SPECIES_LOPMONX) { Speed(20); }
=======
        PLAYER(SPECIES_LOPMONX) { Speed(speedPlayer); }
        OPPONENT(SPECIES_LOPMONX) { Speed(speedOpponent); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(encoreUser, MOVE_CELEBRATE); MOVE(encoreTarget, MOVE_CELEBRATE); }
        TURN { MOVE(encoreUser, MOVE_ENCORE); MOVE(encoreTarget, MOVE_CELEBRATE); }
        TURN { FORCED_MOVE(encoreTarget); }
        TURN { FORCED_MOVE(encoreTarget); }
        TURN { MOVE(encoreTarget, MOVE_SPLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreUser);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, encoreUser);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, encoreTarget);
    }
}

SINGLE_BATTLE_TEST("Encore forces consecutive move uses for 3 turns for player: Encore used after move")
{
    struct BattlePokemon *encoreUser = NULL;
    struct BattlePokemon *encoreTarget = NULL;
    u32 speedPlayer, speedOpponent;
    PARAMETRIZE { encoreUser = opponent; encoreTarget = player; speedPlayer = 20; speedOpponent = 10; }
    PARAMETRIZE { encoreUser = player; encoreTarget = opponent; speedPlayer = 10; speedOpponent = 20; }
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
=======
        PLAYER(SPECIES_LOPMONX) { Speed(speedPlayer); }
        OPPONENT(SPECIES_LOPMONX) { Speed(speedOpponent); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(encoreTarget, MOVE_CELEBRATE); MOVE(encoreUser, MOVE_ENCORE); }
        TURN { FORCED_MOVE(encoreTarget); }
        TURN { FORCED_MOVE(encoreTarget); }
        TURN { FORCED_MOVE(encoreTarget); }
        TURN { MOVE(encoreTarget, MOVE_SPLASH); }
    } SCENE {
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, player);
    }
}

SINGLE_BATTLE_TEST("Encore forces consecutive move uses for 3 turns for opponent: Encore used before move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(20); }
        OPPONENT(SPECIES_LOPMONX) { Speed(10); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_ENCORE); MOVE(opponent, MOVE_CELEBRATE); }
        // TURN { FORCED_MOVE(opponent); }
        TURN { FORCED_MOVE(opponent); }
        TURN { FORCED_MOVE(opponent); }
        TURN { MOVE(opponent, MOVE_SPLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
    }
}

SINGLE_BATTLE_TEST("Encore forces consecutive move uses for 3 turns for opponent: Encore used after move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_ENCORE); }
        TURN { FORCED_MOVE(opponent); }
        TURN { FORCED_MOVE(opponent); }
        TURN { FORCED_MOVE(opponent); }
        TURN { MOVE(opponent, MOVE_SPLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponent);
=======
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, encoreUser);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, encoreTarget);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, encoreTarget);
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Encore has no effect if no previous move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ENCORE); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Encore!");
=======
        MESSAGE("The opposing Lopmonx used Encore!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Encore overrides the chosen move if it occurs first")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_ENCORE); MOVE(player, MOVE_SPLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENCORE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are immune to Encore")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, gimmick: GIMMICK_DYNAMAX); MOVE(opponent, MOVE_ENCORE); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Lopmonx used Max Strike!");
        MESSAGE("The opposing Lopmonx used Encore!");
        MESSAGE("But it failed!");
        MESSAGE("Lopmonx used Max Flare!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon can be encored immediately after reverting")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(50); }; // yes, this speed is necessary
        OPPONENT(SPECIES_LOPMONX) { Speed(100); };
    } WHEN {
        TURN { MOVE(player, MOVE_ARM_THRUST, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(player, MOVE_ARM_THRUST); }
        TURN { MOVE(player, MOVE_ARM_THRUST); }
        TURN { MOVE(opponent, MOVE_ENCORE); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("Lopmonx used Max Knuckle!");
        MESSAGE("The opposing Lopmonx used Encore!");
        MESSAGE("Lopmonx used Arm Thrust!");
    }
}

TO_DO_BATTLE_TEST("Encore's effect ends if the encored move runs out of PP");
TO_DO_BATTLE_TEST("Encore lasts for 2-6 turns (Gen 2-3)");
TO_DO_BATTLE_TEST("Encore lasts for 4-8 turns (Gen 4)");
TO_DO_BATTLE_TEST("Encore lasts for 3 turns (Gen 5+)");
TO_DO_BATTLE_TEST("Encore randomly chooses an opponent target");
