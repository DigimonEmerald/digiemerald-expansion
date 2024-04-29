#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Psychic Terrain protects grounded battlers from priority moves")
{
    GIVEN {
        PLAYER(SPECIES_DIATRYMON) { Ability(ABILITY_LEVITATE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_QUICK_ATTACK); MOVE(opponent, MOVE_QUICK_ATTACK); }
    } SCENE {
        MESSAGE("Diatrymon used PsychcTrrain!");
        MESSAGE("Diatrymon cannot use Quick Attack!");
        NOT { HP_BAR(opponent); }
        MESSAGE("Foe Lopmonx used Quick Attack!");
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain activates Psychic Seed and Mimicry")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_PSYCHIC_SEED].holdEffect == HOLD_EFFECT_SEEDS);
        ASSUME(gItemsInfo[ITEM_PSYCHIC_SEED].holdEffectParam == HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_PSYCHIC_SEED); }
        OPPONENT(SPECIES_STUNFISK_GALARIAN) { Ability(ABILITY_MIMICRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Using Psychic Seed, the Sp. Def of Lopmonx rose!");
        ABILITY_POPUP(opponent);
        MESSAGE("Foe Stunfisk's type changed to Psychc!");
    } THEN {
        EXPECT_EQ(gBattleMons[B_POSITION_OPPONENT_LEFT].type1, TYPE_PSYCHIC);
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain increases power of Psychic-type moves by 30/50 percent", s16 damage)
{
    bool32 terrain;
    PARAMETRIZE { terrain = FALSE; }
    PARAMETRIZE { terrain = TRUE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (terrain)
            TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_CONFUSION); }
    } SCENE {
        MESSAGE("Lopmonx used Confusion!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_TERRAIN_TYPE_BOOST >= GEN_8)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain doesn't block priority moves that target the user")
{
    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_RECOVER); }
    } SCENE {
        MESSAGE("Blgargomon used PsychcTrrain!");
        MESSAGE("Blgargomon used Recover!");
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain doesn't block priority moves that target all battlers")
{
    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_HAZE); }
    } SCENE {
        MESSAGE("Blgargomon used PsychcTrrain!");
        MESSAGE("Blgargomon used Haze!");
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain doesn't block priority moves that target all opponents")
{
    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_SPIKES); }
    } SCENE {
        MESSAGE("Blgargomon used PsychcTrrain!");
        MESSAGE("Blgargomon used Spikes!");
    }
}

DOUBLE_BATTLE_TEST("Psychic Terrain doesn't block priority moves that target allies")
{
    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(playerLeft, MOVE_HEAL_PULSE, target: playerRight); }
    } SCENE {
        MESSAGE("Blgargomon used PsychcTrrain!");
        MESSAGE("Blgargomon used Heal Pulse!");
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain doesn't block priority field moves")
{
    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
    } SCENE {
        MESSAGE("Blgargomon used PsychcTrrain!");
        MESSAGE("Blgargomon used Sunny Day!");
    }
}

SINGLE_BATTLE_TEST("Psychic Terrain lasts for 5 turns")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_PSYCHIC_TERRAIN); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Foe Lopmonx used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC_TERRAIN, player);
        MESSAGE("The battlefield got weird!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");

        MESSAGE("The weirdness disappeared from the battlefield.");
    }
}
