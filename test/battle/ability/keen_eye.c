#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveAccuracy(MOVE_SCRATCH) == 100);
    ASSUME(GetMoveEffect(MOVE_SAND_ATTACK) == EFFECT_ACCURACY_DOWN);
    ASSUME(B_ILLUMINATE_EFFECT >= GEN_9);
}

SINGLE_BATTLE_TEST("Keen Eye, Gen9+ Illuminate & Minds Eye prevent accuracy stage reduction from moves")
{
    u16 ability;
    u32 species;

    PARAMETRIZE { species = SPECIES_ANGORAMON; ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { species = SPECIES_BLKGUILMON; ability = ABILITY_ILLUMINATE; }
    PARAMETRIZE { species = SPECIES_URSALUNA_BLOODMOON; ability = ABILITY_MINDS_EYE; }

    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
<<<<<<< HEAD
        if (species == SPECIES_ANGORAMON)
            MESSAGE("Foe Angoramon's Keen Eye prevents accuracy loss!");
        else if (species == SPECIES_BLKGUILMON)
            MESSAGE("Foe Blkguilmon's Illuminate prevents accuracy loss!");
=======
        if (species == SPECIES_ANGORAMON)
            MESSAGE("The opposing Angoramon's Keen Eye prevents accuracy loss!");
        else if (species == SPECIES_BLKGUILMON)
            MESSAGE("The opposing Blkguilmon's Illuminate prevents accuracy loss!");
>>>>>>> upstream/master
        else
            MESSAGE("The opposing Ursaluna's Mind's Eye prevents accuracy loss!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Keen Eye, Gen9+ Illuminate & Minds Eye ignore target's evasion stat")
{
    u16 ability;
    u32 species;

    PARAMETRIZE { species = SPECIES_ANGORAMON; ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { species = SPECIES_BLKGUILMON; ability = ABILITY_ILLUMINATE; }
    PARAMETRIZE { species = SPECIES_URSALUNA_BLOODMOON; ability = ABILITY_MINDS_EYE; }

    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DOUBLE_TEAM) == EFFECT_EVASION_UP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_TEAM); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_TEAM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Keen Eye, Gen9+ Illuminate & Minds Eye are ignored by Mold Breaker abilities")
{
    u16 abilityPlayer = ABILITY_NONE, abilityOpponent = ABILITY_NONE;
    u16 speciesPlayer = SPECIES_NONE, speciesOpponent = SPECIES_NONE;

    u32 j;
    static const u16 moldBreakerAbilities[][2] = {
        {SPECIES_TYUTYUMON,   ABILITY_MOLD_BREAKER},
        {SPECIES_RESHIRAM, ABILITY_TURBOBLAZE},
        {SPECIES_ZEKROM,   ABILITY_TERAVOLT},
    };

    for (j = 0; j < ARRAY_COUNT(moldBreakerAbilities); j++) {
        speciesPlayer = moldBreakerAbilities[j][0]; abilityPlayer = moldBreakerAbilities[j][1];
        PARAMETRIZE { speciesOpponent = SPECIES_ANGORAMON; abilityOpponent = ABILITY_KEEN_EYE; }
        PARAMETRIZE { speciesOpponent = SPECIES_BLKGUILMON; abilityOpponent = ABILITY_ILLUMINATE; }
        PARAMETRIZE { speciesOpponent = SPECIES_URSALUNA_BLOODMOON; abilityOpponent = ABILITY_MINDS_EYE; }
    }

    PASSES_RANDOMLY(GetMoveAccuracy(MOVE_SCRATCH) * 3 / 4, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(speciesPlayer) { Ability(abilityPlayer); }
        OPPONENT(speciesOpponent) { Ability(abilityOpponent); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(player, abilityPlayer);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Keen Eye, Gen9+ Illuminate & Minds Eye don't prevent Topsy-Turvy")
{
    u16 ability;
    u32 species;

    PARAMETRIZE { species = SPECIES_ANGORAMON; ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { species = SPECIES_BLKGUILMON; ability = ABILITY_ILLUMINATE; }
    PARAMETRIZE { species = SPECIES_URSALUNA_BLOODMOON; ability = ABILITY_MINDS_EYE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HONE_CLAWS) == EFFECT_ATTACK_ACCURACY_UP);
        ASSUME(GetMoveEffect(MOVE_TOPSY_TURVY) == EFFECT_TOPSY_TURVY);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_HONE_CLAWS); MOVE(player, MOVE_TOPSY_TURVY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, opponent);
<<<<<<< HEAD
        if (species == SPECIES_ANGORAMON) {
            MESSAGE("Foe Angoramon's Attack rose!");
            MESSAGE("Foe Angoramon's accuracy rose!");
        } else if (species == SPECIES_BLKGUILMON) {
            MESSAGE("Foe Blkguilmon's Attack rose!");
            MESSAGE("Foe Blkguilmon's accuracy rose!");
=======
        if (species == SPECIES_ANGORAMON) {
            MESSAGE("The opposing Angoramon's Attack rose!");
            MESSAGE("The opposing Angoramon's accuracy rose!");
        } else if (species == SPECIES_BLKGUILMON) {
            MESSAGE("The opposing Blkguilmon's Attack rose!");
            MESSAGE("The opposing Blkguilmon's accuracy rose!");
>>>>>>> upstream/master
        } else {
            MESSAGE("The opposing Ursaluna's Attack rose!");
            MESSAGE("The opposing Ursaluna's accuracy rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
<<<<<<< HEAD
        if (species == SPECIES_ANGORAMON)
            MESSAGE("Foe Angoramon's stat changes were all reversed!");
        else if (species == SPECIES_BLKGUILMON)
            MESSAGE("Foe Blkguilmon's stat changes were all reversed!");
=======
        if (species == SPECIES_ANGORAMON)
            MESSAGE("All stat changes on the opposing Angoramon were inverted!");
        else if (species == SPECIES_BLKGUILMON)
            MESSAGE("All stat changes on the opposing Blkguilmon were inverted!");
>>>>>>> upstream/master
        else
            MESSAGE("All stat changes on the opposing Ursaluna were inverted!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Keen Eye, Gen9+ Illuminate & Minds Eye don't prevent receiving negative Attack stage changes from Baton Pass")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_ANGORAMON; ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { species = SPECIES_BLKGUILMON; ability = ABILITY_ILLUMINATE; }
    PARAMETRIZE { species = SPECIES_URSALUNA_BLOODMOON; ability = ABILITY_MINDS_EYE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK);
               MOVE(opponent, MOVE_BATON_PASS);
               SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        if (species == SPECIES_ANGORAMON)
            MESSAGE("2 sent out Angoramon!");
        else if (species == SPECIES_BLKGUILMON)
            MESSAGE("2 sent out Blkguilmon!");
        else
            MESSAGE("2 sent out Ursaluna!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate don't prevent Spectral Thief from resetting positive accuracy stage changes")
{
    u16 ability;
    u32 species;

    PARAMETRIZE { species = SPECIES_ANGORAMON; ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { species = SPECIES_BLKGUILMON; ability = ABILITY_ILLUMINATE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HONE_CLAWS) == EFFECT_ATTACK_ACCURACY_UP);
<<<<<<< HEAD
        ASSUME(MoveHasAdditionalEffect(MOVE_SPECTRAL_THIEF, MOVE_EFFECT_SPECTRAL_THIEF) == TRUE);
        PLAYER(SPECIES_LOPMONX);
=======
        ASSUME(GetMoveEffect(MOVE_SPECTRAL_THIEF) == EFFECT_SPECTRAL_THIEF);
        PLAYER(SPECIES_LOPMONX);
>>>>>>> upstream/master
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_HONE_CLAWS); MOVE(player, MOVE_SPECTRAL_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, opponent);
        if (species == SPECIES_ANGORAMON)
        {
<<<<<<< HEAD
            MESSAGE("Foe Angoramon's Attack rose!");
            MESSAGE("Foe Angoramon's accuracy rose!");
        }
        else
        {
            MESSAGE("Foe Blkguilmon's Attack rose!");
            MESSAGE("Foe Blkguilmon's accuracy rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
        MESSAGE("Lopmonx stole the target's boosted stats!");
=======
            MESSAGE("The opposing Angoramon's Attack rose!");
            MESSAGE("The opposing Angoramon's accuracy rose!");
        }
        else
        {
            MESSAGE("The opposing Blkguilmon's Attack rose!");
            MESSAGE("The opposing Blkguilmon's accuracy rose!");
        }
        MESSAGE("Lopmonx stole the target's boosted stats!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE);
    }
}
