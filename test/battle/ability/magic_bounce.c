#include "global.h"
#include "test/battle.h"


SINGLE_BATTLE_TEST("Magic Bounce bounces back status moves")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TOXIC) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_TOXIC) == MOVE_EFFECT_TOXIC);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
<<<<<<< HEAD
        MESSAGE("Exveemon's Toxic was bounced back by Foe Kunemon's Magic Bounce!");
=======
        MESSAGE("Exveemon's Toxic was bounced back by the opposing Kunemon's Magic Bounce!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, opponent);
        STATUS_ICON(player, badPoison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Magic Bounce bounces back powder moves")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_STUN_SPORE));
        ASSUME(GetMoveEffect(MOVE_STUN_SPORE) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_STUN_SPORE) == MOVE_EFFECT_PARALYSIS);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
<<<<<<< HEAD
        MESSAGE("Exveemon's Stun Spore was bounced back by Foe Kunemon's Magic Bounce!");
=======
        MESSAGE("Exveemon's Stun Spore was bounced back by the opposing Kunemon's Magic Bounce!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, opponent);
        STATUS_ICON(player, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Magic Bounce cannot bounce back powder moves against Grass Types")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_STUN_SPORE));
        ASSUME(gSpeciesInfo[SPECIES_ZERIMON].types[0] == TYPE_GRASS);
        PLAYER(SPECIES_ZERIMON);
        OPPONENT(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
<<<<<<< HEAD
        MESSAGE("Zerimon's Stun Spore was bounced back by Foe Kunemon's Magic Bounce!");
=======
        MESSAGE("Zerimon's Stun Spore was bounced back by the opposing Kunemon's Magic Bounce!");
>>>>>>> upstream/master
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, opponent);
        MESSAGE("It doesn't affect Zerimon…");
        NOT STATUS_ICON(player, paralysis: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Magic Bounce bounces back moves hitting both foes at two foes")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_LEER) == EFFECT_DEFENSE_DOWN);
        ASSUME(GetMoveTarget(MOVE_LEER) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_HOPMON);
        PLAYER(SPECIES_KAKKINMON);
        OPPONENT(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_LEER); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_LEER, playerLeft);
<<<<<<< HEAD
        MESSAGE("Hopmon's Leer was bounced back by Foe Kunemon's Magic Bounce!");
=======
        MESSAGE("Hopmon's Leer was bounced back by the opposing Kunemon's Magic Bounce!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LEER, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Hopmon's Defense fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Kakkinmon's Defense fell!");
        // Also check if second original target gets hit by Leer as this was once bugged
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
<<<<<<< HEAD
        MESSAGE("Foe Exveemon's Defense fell!");
=======
        MESSAGE("The opposing Exveemon's Defense fell!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Magic Bounce bounces back moves hitting foes field")
{
    u32 battlerOne, battlerTwo, abilityBattlerOne, abilityBattlerTwo;

    PARAMETRIZE { battlerOne = SPECIES_HAWKMON; abilityBattlerOne = ABILITY_MAGIC_BOUNCE;
                  battlerTwo = SPECIES_KUNEMON; abilityBattlerTwo = ABILITY_SYNCHRONIZE; }
    PARAMETRIZE { battlerOne = SPECIES_HAWKMON; abilityBattlerOne = ABILITY_KEEN_EYE;
                  battlerTwo = SPECIES_KUNEMON; abilityBattlerTwo = ABILITY_MAGIC_BOUNCE; }

    GIVEN {
        ASSUME(GetMoveTarget(MOVE_STEALTH_ROCK) == MOVE_TARGET_OPPONENTS_FIELD);
        PLAYER(SPECIES_HOPMON);
        PLAYER(SPECIES_KAKKINMON);
        OPPONENT(battlerOne) { Ability(abilityBattlerOne); }
        OPPONENT(battlerTwo) { Ability(abilityBattlerTwo); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STEALTH_ROCK); }
    } SCENE {
        if (abilityBattlerOne == ABILITY_MAGIC_BOUNCE)
            ABILITY_POPUP(opponentLeft, ABILITY_MAGIC_BOUNCE);
        else
            ABILITY_POPUP(opponentRight, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, playerLeft);
        if (abilityBattlerOne == ABILITY_MAGIC_BOUNCE) {
            MESSAGE("Hopmon's Stealth Rock was bounced back by the opposing Hawkmon's Magic Bounce!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponentLeft);
        } else {
            MESSAGE("Hopmon's Stealth Rock was bounced back by the opposing Kunemon's Magic Bounce!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponentRight);
        }
    }
}

SINGLE_BATTLE_TEST("Magic Bounce bounced back status moves can not be bounced back by Magic Bounce")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TOXIC) == EFFECT_NON_VOLATILE_STATUS);
        ASSUME(GetMoveNonVolatileStatus(MOVE_TOXIC) == MOVE_EFFECT_TOXIC);
        PLAYER(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
        OPPONENT(SPECIES_KUNEMON) { Ability(ABILITY_MAGIC_BOUNCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MAGIC_BOUNCE);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, player);
        MESSAGE("Kunemon's Toxic was bounced back by the opposing Kunemon's Magic Bounce!");
        NOT ABILITY_POPUP(player, ABILITY_MAGIC_BOUNCE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, opponent);
        STATUS_ICON(player, badPoison: TRUE);
    }
}
