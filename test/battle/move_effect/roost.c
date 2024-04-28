#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ROOST].effect == EFFECT_ROOST);
    ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] != TYPE_FLYING);
    ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[1] != TYPE_FLYING);
    // One attack of each type to verify typelessness
    ASSUME(gMovesInfo[MOVE_POUND].type == TYPE_NORMAL);
    ASSUME(gMovesInfo[MOVE_KARATE_CHOP].type == TYPE_FIGHTING);
    ASSUME(gMovesInfo[MOVE_GUST].type == TYPE_FLYING);
    ASSUME(gMovesInfo[MOVE_POISON_STING].type == TYPE_POISON);
    ASSUME(gMovesInfo[MOVE_EARTHQUAKE].type == TYPE_GROUND);
    ASSUME(gMovesInfo[MOVE_ROCK_THROW].type == TYPE_ROCK);
    ASSUME(gMovesInfo[MOVE_LEECH_LIFE].type == TYPE_BUG);
    ASSUME(gMovesInfo[MOVE_LICK].type == TYPE_GHOST);
    ASSUME(gMovesInfo[MOVE_STEEL_WING].type == TYPE_STEEL);
    ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
    ASSUME(gMovesInfo[MOVE_VINE_WHIP].type == TYPE_GRASS);
    ASSUME(gMovesInfo[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
    ASSUME(gMovesInfo[MOVE_CONFUSION].type == TYPE_PSYCHIC);
    ASSUME(gMovesInfo[MOVE_ICE_BEAM].type == TYPE_ICE);
    ASSUME(gMovesInfo[MOVE_DRAGON_BREATH].type == TYPE_DRAGON);
    ASSUME(gMovesInfo[MOVE_BITE].type == TYPE_DARK);
    ASSUME(gMovesInfo[MOVE_DISARMING_VOICE].type == TYPE_FAIRY);
}

SINGLE_BATTLE_TEST("Roost fails when user is at full HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        MESSAGE("Lopmonx's HP is full!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Roost fails if the user is under the effects of Heal Block")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BLOCK, opponent);
        MESSAGE("Lopmonx was prevented from healing!"); // Message when Heal Block is applied
        MESSAGE("Lopmonx was prevented from healing!"); // Message when trying to heal under Heal Block
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Roost recovers 50% of the user's Max HP")
{
    u16 hp;

    KNOWN_FAILING; // All healing is currently rounded down
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); MaxHP(99); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        HP_BAR(player, captureHP: &hp);
    } THEN {
        //if (B_UPDATED_MOVE_DATA >= GEN_5)
            EXPECT(hp == 51); // Rounds up
        //else
        //    EXPECT(hp == 50); // Rounds down
    }
}

SINGLE_BATTLE_TEST("Roost suppresses the user's Flying-typing this turn, then restores it at the end of the turn")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_PHASCOMON].types[0] == TYPE_STEEL);
        ASSUME(gSpeciesInfo[SPECIES_PHASCOMON].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_PHASCOMON) { HP(50); MaxHP(100); Ability(ABILITY_STURDY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1: EQ hits when Roosted
        MESSAGE("Phascomon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Phascomon regained health!");
        MESSAGE("Foe Lopmonx used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It's super effective!");
        // Turn 2: EQ has no effect because Roost expired
        MESSAGE("Foe Lopmonx used Earthquake!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It doesn't affect Phascomon…");
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Flying/Flying type, treats the user as a Normal-type (or Typeless in Gen. 4) until the end of the turn")
{
    u32 damagingMove;
    PARAMETRIZE{ damagingMove = MOVE_POUND; }
    PARAMETRIZE{ damagingMove = MOVE_KARATE_CHOP; }
    PARAMETRIZE{ damagingMove = MOVE_GUST; }
    PARAMETRIZE{ damagingMove = MOVE_POISON_STING; }
    PARAMETRIZE{ damagingMove = MOVE_EARTHQUAKE; }
    PARAMETRIZE{ damagingMove = MOVE_ROCK_THROW; }
    PARAMETRIZE{ damagingMove = MOVE_LEECH_LIFE; }
    PARAMETRIZE{ damagingMove = MOVE_LICK; }
    PARAMETRIZE{ damagingMove = MOVE_STEEL_WING; }
    PARAMETRIZE{ damagingMove = MOVE_EMBER; }
    PARAMETRIZE{ damagingMove = MOVE_WATER_GUN; }
    PARAMETRIZE{ damagingMove = MOVE_VINE_WHIP; }
    PARAMETRIZE{ damagingMove = MOVE_THUNDER_SHOCK; }
    PARAMETRIZE{ damagingMove = MOVE_CONFUSION; }
    PARAMETRIZE{ damagingMove = MOVE_ICE_BEAM; }
    PARAMETRIZE{ damagingMove = MOVE_DRAGON_BREATH; }
    PARAMETRIZE{ damagingMove = MOVE_BITE; }
    PARAMETRIZE{ damagingMove = MOVE_DISARMING_VOICE; }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[0] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_TORNADUS) { HP(50); MaxHP(100); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        MESSAGE("Tornadus used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Tornadus regained health!");

        if (B_ROOST_PURE_FLYING >= GEN_5) // >= Gen. 5, Pokemon becomes pure Normal-type
        {
            if (damagingMove == MOVE_KARATE_CHOP)
            {
                ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
                MESSAGE("It's super effective!");
            }
            else if (damagingMove == MOVE_LICK)
            {
                NOT ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
                MESSAGE("It doesn't affect Tornadus…");
            }
            else
            {
                ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
                NONE_OF {
                    MESSAGE("It's super effective!");
                    MESSAGE("It's not very effective…");
                    MESSAGE("It doesn't affect Tornadus…");
                }
            }
        }
        else // <= Gen. 4, Pokemon becomes Typeless
        {
            // Should not see any effectiveness messages
            NONE_OF {
                MESSAGE("It's super effective!");
                MESSAGE("It's not very effective…");
                MESSAGE("It doesn't affect Tornadus…");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Mystery/Flying type, treats the user as a Mystery/Mystery type until the end of the turn")
{
    u32 damagingMove;
    PARAMETRIZE{ damagingMove = MOVE_POUND; }
    PARAMETRIZE{ damagingMove = MOVE_KARATE_CHOP; }
    PARAMETRIZE{ damagingMove = MOVE_GUST; }
    PARAMETRIZE{ damagingMove = MOVE_POISON_STING; }
    PARAMETRIZE{ damagingMove = MOVE_EARTHQUAKE; }
    PARAMETRIZE{ damagingMove = MOVE_ROCK_THROW; }
    PARAMETRIZE{ damagingMove = MOVE_LEECH_LIFE; }
    PARAMETRIZE{ damagingMove = MOVE_LICK; }
    PARAMETRIZE{ damagingMove = MOVE_STEEL_WING; }
    PARAMETRIZE{ damagingMove = MOVE_EMBER; }
    PARAMETRIZE{ damagingMove = MOVE_WATER_GUN; }
    PARAMETRIZE{ damagingMove = MOVE_VINE_WHIP; }
    PARAMETRIZE{ damagingMove = MOVE_THUNDER_SHOCK; }
    PARAMETRIZE{ damagingMove = MOVE_CONFUSION; }
    PARAMETRIZE{ damagingMove = MOVE_ICE_BEAM; }
    PARAMETRIZE{ damagingMove = MOVE_DRAGON_BREATH; }
    PARAMETRIZE{ damagingMove = MOVE_BITE; }
    PARAMETRIZE{ damagingMove = MOVE_DISARMING_VOICE; }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_EKAKIMON].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_EKAKIMON].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_EKAKIMON) { HP(300); MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        // Turn 1: Use Burn Up to change from Fire/Flying to Mystery/Flying
        MESSAGE("Ekakimon used Burn Up!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        MESSAGE("Ekakimon burned itself out!");
        // Turn 2: Use Roost to now be treated as a Mystery/Mystery type
        MESSAGE("Ekakimon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Ekakimon regained health!");
        ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
        NONE_OF {
            MESSAGE("It's super effective!");
            MESSAGE("It's not very effective…");
            MESSAGE("It doesn't affect Ekakimon…");
        }
    }
}

// Tested in ORAS
DOUBLE_BATTLE_TEST("Roost suppresses the user's not-yet-aquired Flying-type this turn")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_KECLEON].types[0] != TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_KECLEON].types[1] != TYPE_FLYING);
        PLAYER(SPECIES_KECLEON) { Speed(40); HP(150); Ability(ABILITY_COLOR_CHANGE); }
        PLAYER(SPECIES_LOPMONX) { Speed(10); }
        OPPONENT(SPECIES_KETOMON) { Speed(30); }
        OPPONENT(SPECIES_POPOMON) { Speed(20); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROOST);
               MOVE(opponentLeft, MOVE_GUST, target: playerLeft);
               MOVE(opponentRight, MOVE_EARTHQUAKE, target: playerLeft); }
    } SCENE {
        MESSAGE("Kecleon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, playerLeft);
        MESSAGE("Kecleon regained health!");
        MESSAGE("Foe Ketomon used Gust!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, opponentLeft);
        MESSAGE("Kecleon's Color Change made it the Flying type!");
        MESSAGE("Foe Popomon used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponentRight);
        MESSAGE("Kecleon's Color Change made it the Ground type!");
    }
}

// Tested in ORAS
SINGLE_BATTLE_TEST("Roost prevents a Flying-type user from being protected by Delta Stream")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_RAYQUAZA].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_RAYQUAZA) { HP(1); Ability(ABILITY_DELTA_STREAM); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_ICE_BEAM); }
    } SCENE {
        MESSAGE("Rayquaza used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Rayquaza regained health!");
        MESSAGE("Foe Lopmonx used Ice Beam!");
        NOT MESSAGE("The mysterious strong winds weakened the attack!");
    }
}

SINGLE_BATTLE_TEST("Roost does not undo other type-changing effects at the end of the turn")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[0] == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_ANGELAMON) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_SOAK); }
        TURN { MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        MESSAGE("Angelamon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Angelamon regained health!");
        MESSAGE("Foe Lopmonx used Soak!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SOAK, opponent);
        MESSAGE("Angelamon transformed into the Water type!");
        MESSAGE("Foe Lopmonx used Vine Whip!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_VINE_WHIP, opponent);
        MESSAGE("It's super effective!");
    }
}

// https://www.smogon.com/forums/threads/sword-shield-battle-mechanics-research.3655528/page-64#post-9244179
SINGLE_BATTLE_TEST("Roost's effect is lifted after Grassy Terrain's healing")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[0] == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_ANGELAMON) { HP(1); Ability(ABILITY_GRASSY_SURGE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        MESSAGE("Angelamon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Angelamon regained health!");
        MESSAGE("Angelamon is healed by the grassy terrain!");
        HP_BAR(player);
    }
}

// Tested in USUM
SINGLE_BATTLE_TEST("Roost's suppression prevents Reflect Type from copying any Flying typing")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[0] == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_ANGELAMON].types[1] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_LOPMONX].types[1] == TYPE_PSYCHIC);
        PLAYER(SPECIES_ANGELAMON) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_REFLECT_TYPE); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); MOVE(opponent, MOVE_REFLECT_TYPE); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1: Reflect Type on Roosted Normal/Flying
        MESSAGE("Angelamon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Angelamon regained health!");
        MESSAGE("Foe Lopmonx used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, opponent);
        MESSAGE("Foe Lopmonx's type changed to match the Angelamon's!");
        // Turn 2: EQ hits, Reflect Type on non-Roosted Normal/Flying
        MESSAGE("Angelamon used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, opponent);
        MESSAGE("Foe Lopmonx's type changed to match the Angelamon's!");
        // Turn 3: EQ has no effect
        MESSAGE("Angelamon used Earthquake!");
        MESSAGE("It doesn't affect Foe Lopmonx…");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Roost does not suppress the ungrounded effect of Levitate")
{
    GIVEN {
        PLAYER(SPECIES_FLYGON) { HP(1); Ability(ABILITY_LEVITATE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Flygon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Flygon regained health!");
        MESSAGE("Foe Lopmonx used Earthquake!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Roost does not suppress the ungrounded effect of Air Balloon")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); Item(ITEM_AIR_BALLOON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Lopmonx used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Lopmonx regained health!");
        MESSAGE("Foe Lopmonx used Earthquake!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Roost does not suppress the ungrounded effect of Magnet Rise")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_MAGNET_RISE); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1: Magnet Rise
        MESSAGE("Lopmonx used Magnet Rise!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGNET_RISE, player);
        MESSAGE("Lopmonx levitated on electromagnetism!");
        // Turn 2
        MESSAGE("Lopmonx used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Lopmonx regained health!");
        MESSAGE("Foe Lopmonx used Earthquake!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Roost does not suppress the ungrounded effect of Telekinesis")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TELEKINESIS); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1: Telekinesis
        MESSAGE("Foe Lopmonx used Telekinesis!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TELEKINESIS, opponent);
        MESSAGE("Lopmonx was hurled into the air!");
        // Turn 2
        MESSAGE("Lopmonx used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Lopmonx regained health!");
        MESSAGE("Foe Lopmonx used Earthquake!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
            HP_BAR(player);
        }
    }
}

// Tested in ORAS
// Transform does not copy the Roost "status" either.
// Probably better as a Transform test.
TO_DO_BATTLE_TEST("Roost's suppression does not prevent others who are Transforming into the user from copying its Flying-type");
