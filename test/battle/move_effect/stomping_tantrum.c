#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_STOMPING_TANTRUM) == EFFECT_STOMPING_TANTRUM);
}

SINGLE_BATTLE_TEST("Stomping Tantrum will deal double damage if user flinched on the previous turn")
{
    s16 damage[3];
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_FAKE_OUT); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[2]);
    } THEN {
        EXPECT_MUL_EQ(damage[0], Q_4_12(2.0), damage[1]);
        EXPECT_EQ(damage[0], damage[2]);
    }
}

SINGLE_BATTLE_TEST("Stomping Tantrum will deal double damage if user failed to attack due to paralysis")
{
    s16 damage[3];
    PASSES_RANDOMLY(25, 100, RNG_PARALYSIS);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(100); Item(ITEM_POTION); };
        OPPONENT(SPECIES_LOPMONX) { Speed(10); Item(ITEM_LUM_BERRY); };
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); MOVE(opponent, MOVE_THUNDER_WAVE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_TRICK);  }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_WAVE, opponent);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRICK, opponent);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[2]);
    } THEN {
        EXPECT_MUL_EQ(damage[0], Q_4_12(2.0), damage[1]);
        EXPECT_EQ(damage[0], damage[2]);
    }
}

SINGLE_BATTLE_TEST("Stomping Tantrum will not deal double damage if target protects")
{
    s16 damage[2];
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_STOMPING_TANTRUM); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        MESSAGE("The opposing Lopmonx protected itself!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}

SINGLE_BATTLE_TEST("Stomping Tantrum will not deal double if it missed")
{
    s16 damage[2];
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_BRIGHTPOWDER); };
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM, hit: FALSE); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        MESSAGE("Lopmonx's attack missed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_MUL_EQ(damage[0], Q_4_12(2.0), damage[1]);
    }
}

SINGLE_BATTLE_TEST("Stomping Tantrum will deal double damage if user was immune to previous move")
{
    s16 damage[2];
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_KETOMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); SWITCH(opponent, 0); }
        TURN { MOVE(player, MOVE_STOMPING_TANTRUM); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        MESSAGE("It doesn't affect the opposing Ketomon…");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STOMPING_TANTRUM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_MUL_EQ(damage[0], Q_4_12(2.0), damage[1]);
    }
}
