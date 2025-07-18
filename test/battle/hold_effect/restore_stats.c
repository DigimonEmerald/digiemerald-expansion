#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_WHITE_HERB].holdEffect == HOLD_EFFECT_RESTORE_STATS);
}

SINGLE_BATTLE_TEST("White Herb restores stats when they're lowered")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LEER].effect == EFFECT_DEFENSE_DOWN);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx's White Herb restored its status!");
=======
        MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
    } THEN {
        EXPECT(player->item == ITEM_NONE);
        EXPECT(player->statStages[STAT_DEF] = DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("White Herb restores stats after Attack was lowered by Intimidate in singles")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { ; }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx's White Herb restored its status!");
=======
        MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
    } THEN {
        EXPECT(player->item == ITEM_NONE);
        EXPECT(player->statStages[STAT_DEF] = DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("White Herb restores stats after Attack was lowered by Intimidate in doubles")
{
    GIVEN {
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_WHITE_HERB); }
        PLAYER(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_LOPMONX);
    } WHEN {
        TURN { ; }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx's White Herb restored its status!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
        MESSAGE("Foe Exveemon's White Herb restored its status!");
=======
        MESSAGE("The opposing Lopmonx returned its stats to normal using its White Herb!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
        MESSAGE("The opposing Exveemon returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
    } THEN {
        EXPECT(opponentLeft->item == ITEM_NONE);
        EXPECT(opponentLeft->statStages[STAT_DEF] = DEFAULT_STAT_STAGE);
        EXPECT(opponentRight->item == ITEM_NONE);
        EXPECT(opponentRight->statStages[STAT_DEF] = DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("White Herb restores stats after Attack was lowered by Intimidate while switching in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_CLOSE_COMBAT); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx's White Herb restored its status!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CLOSE_COMBAT, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx's White Herb restored its status!");
=======
        MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CLOSE_COMBAT, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
        EXPECT(player->statStages[STAT_DEF] = DEFAULT_STAT_STAGE - 1);
        EXPECT(player->statStages[STAT_SPDEF] = DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("White Herb restores stats after all hits of a multi hit move happened")
{
    u16 species;
    u16 ability;

<<<<<<< HEAD
    PARAMETRIZE { species = SPECIES_SLIGGOO_HISUIAN; ability = ABILITY_GOOEY; }
    PARAMETRIZE { species = SPECIES_BUKAMON_ALOLA; ability = ABILITY_TANGLING_HAIR; }
=======
    PARAMETRIZE { species = SPECIES_SLIGGOO_HISUI; ability = ABILITY_GOOEY; }
    PARAMETRIZE { species = SPECIES_BUKAMON_ALOLA; ability = ABILITY_TANGLING_HAIR; }
>>>>>>> upstream/master

    GIVEN {
        ASSUME(gMovesInfo[MOVE_DUAL_WINGBEAT].strikeCount == 2);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_WHITE_HERB); }
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_DUAL_WINGBEAT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DUAL_WINGBEAT, player);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Speed fell!");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
        MESSAGE("Lopmonx's White Herb restored its status!");
=======
        MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
    } THEN {
        EXPECT(player->item == ITEM_NONE);
        EXPECT(player->statStages[STAT_SPEED] = DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("White Herb wont have time to activate if it is knocked off or stolen by Thief")
{
    u16 move;

    PARAMETRIZE { move = MOVE_THIEF; }
    PARAMETRIZE { move = MOVE_KNOCK_OFF; }

    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_THIEF, MOVE_EFFECT_STEAL_ITEM) == TRUE);
        ASSUME(gMovesInfo[MOVE_KNOCK_OFF].effect == EFFECT_KNOCK_OFF);
        PLAYER(SPECIES_OTAMAMON_RED) {  Ability(ABILITY_WEAK_ARMOR); Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move == MOVE_THIEF) {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx stole Otamamon_red's White Herb!");
=======
            MESSAGE("The opposing Lopmonx stole Otamamon_red's White Herb!");
>>>>>>> upstream/master
        }
        ABILITY_POPUP(player, ABILITY_WEAK_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Otamamon_red's Weak Armor lowered its Defense!");
        MESSAGE("Otamamon_red's Weak Armor raised its Speed!");
        if (move == MOVE_KNOCK_OFF) {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx knocked off Otamamon_red's White Herb!");
        }
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx's White Herb restored its status!");
=======
            MESSAGE("The opposing Lopmonx knocked off Otamamon_red's White Herb!");
        }
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
        }
    } THEN {
        EXPECT(player->statStages[STAT_DEF] = DEFAULT_STAT_STAGE - 1);
        EXPECT(player->statStages[STAT_SPEED] = DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("White Herb wont have time to activate if Magician steals it")
{
    GIVEN {
        PLAYER(SPECIES_OTAMAMON_RED) {  Ability(ABILITY_WEAK_ARMOR); Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_FENNEKIN) { Ability(ABILITY_MAGICIAN); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ABILITY_POPUP(player, ABILITY_WEAK_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Otamamon_red's Weak Armor lowered its Defense!");
        MESSAGE("Otamamon_red's Weak Armor raised its Speed!");
        ABILITY_POPUP(opponent, ABILITY_MAGICIAN);
<<<<<<< HEAD
        MESSAGE("Foe Fennekin stole Otamamon_red's White Herb!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx's White Herb restored its status!");
=======
        MESSAGE("The opposing Fennekin stole Otamamon_red's White Herb!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
        }
    } THEN {
        EXPECT(player->statStages[STAT_DEF] = DEFAULT_STAT_STAGE - 1);
        EXPECT(player->statStages[STAT_SPEED] = DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("White Herb has correct interactions with Intimidate triggered Defiant and Competitive")
{
    u16 species;
    u16 ability;

    PARAMETRIZE { species = SPECIES_HACKMON; ability = ABILITY_COMPETITIVE; }
    PARAMETRIZE { species = SPECIES_DEMIVEEMON; ability = ABILITY_DEFIANT; }

    GIVEN {
        PLAYER(species) { Ability(ability); Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { ; }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ABILITY_POPUP(player, ability);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        // Defiant activates first, so White Herb doesn't have a chance to trigger.
        if (ability == ABILITY_COMPETITIVE) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
<<<<<<< HEAD
            MESSAGE("Hackmon's White Herb restored its status!");
=======
            MESSAGE("Hackmon returned its stats to normal using its White Herb!");
>>>>>>> upstream/master
        }
    } THEN {
        if (ability == ABILITY_COMPETITIVE) {
            EXPECT(player->item == ITEM_NONE);
            EXPECT(player->statStages[STAT_ATK] = DEFAULT_STAT_STAGE);
            EXPECT(player->statStages[STAT_SPATK] = DEFAULT_STAT_STAGE + 2);
        } else {
            EXPECT(player->statStages[STAT_ATK] = DEFAULT_STAT_STAGE + 1);
        }
    }
}
