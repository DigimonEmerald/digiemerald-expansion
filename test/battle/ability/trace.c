#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Trace copies opponents ability")
{
    GIVEN {
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TRACE);
<<<<<<< HEAD
        MESSAGE("Apemon TRACED Foe Syakomon_x's Blaze!");
=======
        MESSAGE("It traced the opposing Syakomon_x's Blaze!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX)
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TRACE);
<<<<<<< HEAD
        MESSAGE("Apemon TRACED Foe Syakomon_x's Blaze!");
=======
        MESSAGE("It traced the opposing Syakomon_x's Blaze!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Trace copies opponents ability on switch-in even if opponent switched in at the same time")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX)
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_SUNARZAMON) { HP(1); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_MISTY_EXPLOSION); SEND_OUT(opponent, 1); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MISTY_EXPLOSION);
        ABILITY_POPUP(player, ABILITY_TRACE);
<<<<<<< HEAD
        MESSAGE("Apemon TRACED Foe Syakomon_x's Blaze!");
=======
        MESSAGE("It traced the opposing Syakomon_x's Blaze!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Trace copies opponents ability randomly")
{
    u16 ability1, ability2;

    PARAMETRIZE { ability1 = ABILITY_SPEED_BOOST; ability2 = ABILITY_BLAZE;}
    PARAMETRIZE { ability1 = ABILITY_BLAZE; ability2 = ABILITY_SPEED_BOOST; }

    PASSES_RANDOMLY(1, 2, RNG_TRACE);
    GIVEN {
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ability1); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ability2); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_TRACE);
<<<<<<< HEAD
        MESSAGE("Apemon TRACED Foe Syakomon_x's Blaze!");
=======
        MESSAGE("It traced the opposing Syakomon_x's Blaze!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Trace will copy an opponent's ability whenever it has the chance but only once")
{
    GIVEN {
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_CHERRIM) { Ability(ABILITY_FLOWER_GIFT); }
        OPPONENT(SPECIES_SYAKOMON_X) { Ability(ABILITY_BLAZE); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        // TURN 2
        ABILITY_POPUP(player, ABILITY_TRACE);
<<<<<<< HEAD
        MESSAGE("Apemon TRACED Foe Syakomon_x's Blaze!");
=======
        MESSAGE("It traced the opposing Syakomon_x's Blaze!");
    }
}


SINGLE_BATTLE_TEST("Trace copies opponent's Intimidate and triggers it immediately")
{
    GIVEN {
        PLAYER(SPECIES_APEMON) { Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_ARGOMON_CHAMPION) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_TRACE);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Trace respects the turn order")
{
    GIVEN {
        PLAYER(SPECIES_GESOMON_SPEED) { Speed(40); Ability(ABILITY_PRESSURE); }
        PLAYER(SPECIES_ARCADIAMON_CHAMPION) { Speed(20); Ability(ABILITY_TRACE); }
        OPPONENT(SPECIES_HIPPOWDON) { Speed(10); Ability(ABILITY_SAND_STREAM); }
        OPPONENT(SPECIES_GESOMON_SPEED) { Speed(30); Ability(ABILITY_PRESSURE); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_PRESSURE);
        ABILITY_POPUP(opponentRight, ABILITY_PRESSURE);
        ABILITY_POPUP(playerRight, ABILITY_TRACE);
        ABILITY_POPUP(opponentLeft, ABILITY_SAND_STREAM);
    }
}
