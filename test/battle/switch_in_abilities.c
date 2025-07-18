#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Switch-in abilities trigger in Speed Order at the battle's start - Single Battle")
{
    u32 spdPlayer, spdOpponent;

    PARAMETRIZE { spdPlayer = 5; spdOpponent = 1; }
    PARAMETRIZE { spdOpponent = 5; spdPlayer = 1; }

    GIVEN {
        PLAYER(SPECIES_PAFUMON) { Speed(spdPlayer); Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_SAKUMON) { Speed(spdOpponent); Ability(ABILITY_DROUGHT); }
    } WHEN {
        TURN { ; }
    } SCENE {
        if (spdPlayer > spdOpponent) {
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponent, ABILITY_DROUGHT);
        } else {
            ABILITY_POPUP(opponent, ABILITY_DROUGHT);
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        }
    }
}

DOUBLE_BATTLE_TEST("Switch-in abilities trigger in Speed Order at the battle's start - Double Battle")
{
    u32 spdPlayer1, spdPlayer2, spdOpponent1, spdOpponent2;

    PARAMETRIZE { spdPlayer1 = 5; spdPlayer2 = 4; spdOpponent1 = 3; spdOpponent2 = 2; }
    PARAMETRIZE { spdPlayer1 = 2; spdPlayer2 = 3; spdOpponent1 = 4; spdOpponent2 = 5; }
    PARAMETRIZE { spdPlayer1 = 4; spdPlayer2 = 3; spdOpponent1 = 5; spdOpponent2 = 2; }

    GIVEN {
        PLAYER(SPECIES_GATOMON_X) { Speed(spdPlayer1); Ability(ABILITY_DRIZZLE); }
        PLAYER(SPECIES_COMMDRAMON) { Speed(spdPlayer2); Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_RENAMON_X) { Speed(spdOpponent1); Ability(ABILITY_DOWNLOAD); }
        OPPONENT(SPECIES_TYUTYUMON) { Speed(spdOpponent2); Ability(ABILITY_MOLD_BREAKER); }
    } WHEN {
        TURN { ; }
    } SCENE {
        if (spdPlayer1 == 5) {
            ABILITY_POPUP(playerLeft, ABILITY_DRIZZLE);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponentLeft, ABILITY_DOWNLOAD);
            ABILITY_POPUP(opponentRight, ABILITY_MOLD_BREAKER);
        } else if (spdOpponent2 == 5) {
            ABILITY_POPUP(opponentRight, ABILITY_MOLD_BREAKER);
            ABILITY_POPUP(opponentLeft, ABILITY_DOWNLOAD);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(playerLeft, ABILITY_DRIZZLE);
        } else {
            ABILITY_POPUP(opponentLeft, ABILITY_DOWNLOAD);
            ABILITY_POPUP(playerLeft, ABILITY_DRIZZLE);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponentRight, ABILITY_MOLD_BREAKER);
        }
    }
}

SINGLE_BATTLE_TEST("Switch-in abilities trigger in Speed Order after post-KO switch - Single Battle")
{
    u32 spdPlayer, spdOpponent;

    PARAMETRIZE { spdPlayer = 5; spdOpponent = 1; }
    PARAMETRIZE { spdOpponent = 5; spdPlayer = 1; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(1); }
        PLAYER(SPECIES_PAFUMON) { Speed(spdPlayer); Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_RENAMON_X) { Speed(spdOpponent); Ability(ABILITY_DOWNLOAD); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
        TURN { ; }
    } SCENE {
        MESSAGE("Lopmonx used Explosion!");
        if (spdPlayer > spdOpponent) {
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponent, ABILITY_DOWNLOAD);
        } else {
            ABILITY_POPUP(opponent, ABILITY_DOWNLOAD);
            ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        }
    }
}

DOUBLE_BATTLE_TEST("Switch-in abilities trigger in Speed Order after post-KO switch - Double Battle")
{
    u32 spdPlayer1, spdPlayer2, spdOpponent1, spdOpponent2;

    PARAMETRIZE { spdPlayer1 = 5; spdPlayer2 = 4; spdOpponent1 = 3; spdOpponent2 = 2; }
    PARAMETRIZE { spdPlayer1 = 2; spdPlayer2 = 3; spdOpponent1 = 4; spdOpponent2 = 5; }
    PARAMETRIZE { spdPlayer1 = 4; spdPlayer2 = 3; spdOpponent1 = 5; spdOpponent2 = 2; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(1); }
        PLAYER(SPECIES_LOPMONX) { HP(1); Speed(1); }
        PLAYER(SPECIES_SPADAMON) { Speed(spdPlayer1); Ability(ABILITY_SAND_STREAM); }
        PLAYER(SPECIES_COMMDRAMON) { Speed(spdPlayer2); Ability(ABILITY_INTIMIDATE); }
<<<<<<< HEAD
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_ARMADILMON_GALARIAN) { Speed(spdOpponent1); Ability(ABILITY_MISTY_SURGE); }
        OPPONENT(SPECIES_RELEMON_ALOLA) { Speed(spdOpponent2); Ability(ABILITY_SNOW_WARNING); }
=======
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_ARMADILMON_GALAR) { Speed(spdOpponent1); Ability(ABILITY_MISTY_SURGE); }
        OPPONENT(SPECIES_RELEMON_ALOLA) { Speed(spdOpponent2); Ability(ABILITY_SNOW_WARNING); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(playerRight, 3); SEND_OUT(opponentRight, 3); }
        TURN { ; }
    } SCENE {
        MESSAGE("Lopmonx used Explosion!");
        if (spdPlayer1 == 5) {
            ABILITY_POPUP(playerLeft, ABILITY_SAND_STREAM);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponentLeft, ABILITY_MISTY_SURGE);
            ABILITY_POPUP(opponentRight, ABILITY_SNOW_WARNING);
        } else if (spdOpponent2 == 5) {
            ABILITY_POPUP(opponentRight, ABILITY_SNOW_WARNING);
            ABILITY_POPUP(opponentLeft, ABILITY_MISTY_SURGE);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(playerLeft, ABILITY_SAND_STREAM);
        } else {
            ABILITY_POPUP(opponentLeft, ABILITY_MISTY_SURGE);
            ABILITY_POPUP(playerLeft, ABILITY_SAND_STREAM);
            ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
            ABILITY_POPUP(opponentRight, ABILITY_SNOW_WARNING);
        }
    }
}
