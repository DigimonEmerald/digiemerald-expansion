#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(!IsBattleMoveStatus(MOVE_WATER_GUN));
}

// Battle Bond transforms the pokemon when fainting any battler(opposing or partner), unless it's the last pokemon and the battle ends.
SINGLE_BATTLE_TEST("Battle Bond transforms player's Biosupinomon - Singles")
{
    u32 monsCountPlayer, monsCountOpponent;

    PARAMETRIZE {monsCountPlayer = 1; monsCountOpponent = 1; }
    PARAMETRIZE {monsCountPlayer = 1; monsCountOpponent = 2; }
    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 1; }
    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 2; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BATTLE_BOND, GEN_8);
        PLAYER(SPECIES_BIOSUPINOMON_BATTLE_BOND);
        if (monsCountPlayer == 2) {
            PLAYER(SPECIES_LOPMONX);
        }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        if (monsCountOpponent == 2) {
            OPPONENT(SPECIES_LOPMONX);
        }
    } WHEN {
        if (monsCountOpponent == 2) {
            TURN { MOVE(player, MOVE_WATER_GUN); SEND_OUT(opponent, 1); }
        } else {
            TURN { MOVE(player, MOVE_WATER_GUN); }
        }

    } SCENE {
        HP_BAR(opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Lopmonx fainted!");
>>>>>>> upstream/master
        if (monsCountOpponent != 1) {
            ABILITY_POPUP(player, ABILITY_BATTLE_BOND);
            MESSAGE("Biosupinomon became fully charged due to its bond with its trainer!");
            MESSAGE("Biosupinomon became Ash-Biosupinomon!");
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_BATTLE_BOND);
                MESSAGE("Biosupinomon became fully charged due to its bond with its trainer!");
            }
        }
    } FINALLY {
        if (monsCountOpponent != 1) {
            EXPECT(player->species == SPECIES_BIOSUPINOMON_ASH);
        } else {
            EXPECT(player->species == SPECIES_BIOSUPINOMON_BATTLE_BOND);
        }
    }
}

SINGLE_BATTLE_TEST("Battle Bond transforms opponent's Biosupinomon - Singles")
{
    u32 monsCountPlayer, monsCountOpponent;

    PARAMETRIZE {monsCountPlayer = 1; monsCountOpponent = 1; }
    PARAMETRIZE {monsCountPlayer = 1; monsCountOpponent = 2; }
    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 1; }
    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 2; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BATTLE_BOND, GEN_8);
        OPPONENT(SPECIES_BIOSUPINOMON_BATTLE_BOND);
        if (monsCountOpponent == 2) {
            OPPONENT(SPECIES_LOPMONX);
        }
        PLAYER(SPECIES_LOPMONX) {HP(1); }
        if (monsCountPlayer == 2) {
            PLAYER(SPECIES_LOPMONX);
        }
    } WHEN {
        if (monsCountPlayer == 2) {
            TURN { MOVE(opponent, MOVE_WATER_GUN); SEND_OUT(player, 1); }
        } else {
            TURN { MOVE(opponent, MOVE_WATER_GUN); }
        }

    } SCENE {
        HP_BAR(player);
        MESSAGE("Lopmonx fainted!");
        if (monsCountPlayer != 1) {
            ABILITY_POPUP(opponent, ABILITY_BATTLE_BOND);
            MESSAGE("The opposing Biosupinomon became fully charged due to its bond with its trainer!");
            MESSAGE("The opposing Biosupinomon became Ash-Biosupinomon!");
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_BATTLE_BOND);
                MESSAGE("The opposing Biosupinomon became fully charged due to its bond with its trainer!");
            }
        }
    } FINALLY {
        if (monsCountPlayer != 1) {
            EXPECT(opponent->species == SPECIES_BIOSUPINOMON_ASH);
        } else {
            EXPECT(opponent->species == SPECIES_BIOSUPINOMON_BATTLE_BOND);
        }
    }
}

DOUBLE_BATTLE_TEST("Battle Bond transforms player's Biosupinomon when fainting its Ally")
{
    u32 monsCountPlayer, monsCountOpponent;

    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 2; }
    PARAMETRIZE {monsCountPlayer = 2; monsCountOpponent = 3; }
    PARAMETRIZE {monsCountPlayer = 3; monsCountOpponent = 2; }
    PARAMETRIZE {monsCountPlayer = 3; monsCountOpponent = 3; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BATTLE_BOND, GEN_8);
        PLAYER(SPECIES_BIOSUPINOMON_BATTLE_BOND);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        if (monsCountPlayer == 3) {
            PLAYER(SPECIES_LOPMONX);
        }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
        if (monsCountOpponent == 3) {
            OPPONENT(SPECIES_LOPMONX);
        }
    } WHEN {
        if (monsCountPlayer == 3) {
            TURN { MOVE(playerLeft, MOVE_WATER_GUN, target:playerRight); SEND_OUT(playerRight, 2); }
        } else {
            TURN { MOVE(playerLeft, MOVE_WATER_GUN, target:playerRight); }
        }

    } SCENE {
        HP_BAR(playerRight);
        MESSAGE("Lopmonx fainted!");
        ABILITY_POPUP(playerLeft, ABILITY_BATTLE_BOND);
        MESSAGE("Biosupinomon became fully charged due to its bond with its trainer!");
        MESSAGE("Biosupinomon became Ash-Biosupinomon!");
    } FINALLY {
        EXPECT(playerLeft->species == SPECIES_BIOSUPINOMON_ASH);
    }
}

SINGLE_BATTLE_TEST("Battle Bond increases Atk, SpAtk and Speed by 1 stage (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BATTLE_BOND, GEN_9);
        PLAYER(SPECIES_BIOSUPINOMON_BATTLE_BOND) { Ability(ABILITY_BATTLE_BOND); }
        OPPONENT(SPECIES_LOPMON_X) { HP(1); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); SEND_OUT(opponent, 1); }
    } SCENE {
        HP_BAR(opponent);
        MESSAGE("The opposing Lopmon_x fainted!");
        ABILITY_POPUP(player, ABILITY_BATTLE_BOND);
    } THEN {
        EXPECT(player->species != SPECIES_BIOSUPINOMON_ASH);
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Battle Bond increases a Stat even if only one can be increased (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BATTLE_BOND, GEN_9);
        PLAYER(SPECIES_BIOSUPINOMON_BATTLE_BOND) { Ability(ABILITY_BATTLE_BOND); }
        OPPONENT(SPECIES_LOPMON_X) { HP(1); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_WATER_GUN); SEND_OUT(opponent, 1); }
    } SCENE {
        HP_BAR(opponent);
        MESSAGE("The opposing Lopmon_x fainted!");
        ABILITY_POPUP(player, ABILITY_BATTLE_BOND);
    } THEN {
        EXPECT(player->species != SPECIES_BIOSUPINOMON_ASH);
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 6);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 6);
    }
}
