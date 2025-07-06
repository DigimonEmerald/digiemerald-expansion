#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_REVIVAL_BLESSING].effect == EFFECT_REVIVAL_BLESSING);
}

SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(0); }
        PLAYER(SPECIES_EXVEEMON) { HP(0); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING, partyIndex:2); }
    } SCENE {
        MESSAGE("Lopmonx used Revival Blessing!");
        MESSAGE("Exveemon was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing revives a fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PICHIMON);
        OPPONENT(SPECIES_GUILMON_X) { HP(0); }
        OPPONENT(SPECIES_PETITMON) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING, partyIndex:1); }
    } SCENE {
        MESSAGE("The opposing Pichimon used Revival Blessing!");
        MESSAGE("Guilmon_x was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Lopmonx used Revival Blessing!");
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing cannot revive a partner's party member")
{
    KNOWN_FAILING;
    struct BattlePokemon *user = NULL;
    gBattleTypeFlags |= BATTLE_TYPE_TWO_OPPONENTS;
    PARAMETRIZE { user = opponentLeft; }
    PARAMETRIZE { user = opponentRight; }
    GIVEN {
        ASSUME((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) != FALSE);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EXVEEMON) { HP(0); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(user, MOVE_REVIVAL_BLESSING, partyIndex:4); }
    } SCENE {
        if (user == opponentLeft) {
            MESSAGE("The opposing Lopmonx used Revival Blessing!");
            MESSAGE("But it failed!");
        } else {
            MESSAGE("The opposing Exveemon used Revival Blessing!");
            MESSAGE("Exveemon was revived and is ready to fight again!");
        }
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing doesn't prevent revived battlers from losing their turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { HP(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight);
               MOVE(opponentLeft, MOVE_REVIVAL_BLESSING, partyIndex: 1); }
    } SCENE {
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("The opposing Exveemon fainted!");
        MESSAGE("The opposing Lopmonx used Revival Blessing!");
        MESSAGE("Exveemon was revived and is ready to fight again!");
        NOT { MESSAGE("Exveemon used Celebrate!"); }
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing correctly updates battler absent flags")
{
    GIVEN {
        PLAYER(SPECIES_FROGMON) { Level(40); }
        PLAYER(SPECIES_LEAFMON) { Level(40); }
        OPPONENT(SPECIES_MONIMON) { Level(5); Ability(ABILITY_ROCK_HEAD); }
        OPPONENT(SPECIES_STARLY) { Level(5); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE);
               MOVE(opponentRight, MOVE_REVIVAL_BLESSING, partyIndex: 0); }
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1
        MESSAGE("Frogmon used Earthquake!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Monimon fainted!");
        MESSAGE("It doesn't affect Leafmon…");
        MESSAGE("It doesn't affect the opposing Starly…");
        MESSAGE("The opposing Starly used Revival Blessing!");
        MESSAGE("Monimon was revived and is ready to fight again!"); // Should have prefix but it doesn't currently.
        // Turn 2
        MESSAGE("Frogmon used Earthquake!");
        HP_BAR(opponentLeft);
        MESSAGE("The opposing Monimon fainted!");
        MESSAGE("It doesn't affect Leafmon…");
        MESSAGE("It doesn't affect the opposing Starly…");
    }
}
