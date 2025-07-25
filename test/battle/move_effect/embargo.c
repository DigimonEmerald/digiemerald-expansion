#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_EMBARGO) == EFFECT_EMBARGO);
}

SINGLE_BATTLE_TEST("Embargo blocks the effect of an affected Pokémon's held item")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_FOCUS_SASH].holdEffect == HOLD_EFFECT_FOCUS_SASH);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_FOCUS_SASH); };
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { MOVE(player, MOVE_FISSURE); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
>>>>>>> upstream/master
        // Turn 2
        MESSAGE("Lopmonx used Fissure!");
        HP_BAR(opponent, hp: 0);
    }
}

SINGLE_BATTLE_TEST("Embargo blocks an affected Pokémon's trainer from using items")
{
    // As of writing, the battle tests system doesn't perform all the operations involved
    // in the action of an NPC using an item in battle.
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gItemsInfo[ITEM_POTION].battleUsage == EFFECT_ITEM_RESTORE_HP);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { USE_ITEM(opponent, ITEM_POTION, partyIndex: 0); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(opponent->hp, 1);
    }
}

WILD_BATTLE_TEST("Embargo doesn't block held item effects that affect experience gain", s32 exp)
{
    u32 item;

    PARAMETRIZE { item = ITEM_LUCKY_EGG; }
    PARAMETRIZE { item = ITEM_NONE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Level(20); Item(item); }
        OPPONENT(SPECIES_DATIRIMON) { Level(10); HP(1); }
        ASSUME(gItemsInfo[ITEM_LUCKY_EGG].holdEffect == HOLD_EFFECT_LUCKY_EGG);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Wild Datirimon used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("Wild Datirimon fainted!");
=======
        MESSAGE("The wild Datirimon used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("The wild Datirimon fainted!");
>>>>>>> upstream/master
        EXPERIENCE_BAR(player, captureGainedExp: &results[i].exp);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].exp, Q_4_12(1.5), results[0].exp);
    }
}

WILD_BATTLE_TEST("Embargo doesn't block held item effects that affect effort values")
{
    u32 finalHPEVAmount;

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_POWER_WEIGHT); }
        OPPONENT(SPECIES_DATIRIMON) { HP(1); }
        ASSUME(gItemsInfo[ITEM_POWER_WEIGHT].holdEffect == HOLD_EFFECT_POWER_ITEM);
        ASSUME(gItemsInfo[ITEM_POWER_WEIGHT].holdEffectParam == 8);
        ASSUME(gItemsInfo[ITEM_POWER_WEIGHT].secondaryId == STAT_HP);
        ASSUME(gSpeciesInfo[SPECIES_DATIRIMON].evYield_HP == 1);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Wild Datirimon used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("Wild Datirimon fainted!");
=======
        MESSAGE("The wild Datirimon used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Lopmonx used Scratch!");
        MESSAGE("The wild Datirimon fainted!");
>>>>>>> upstream/master
    } THEN {
        finalHPEVAmount = (GetMonData(&PLAYER_PARTY[0], MON_DATA_HP_EV) + gItemsInfo[ITEM_POWER_WEIGHT].holdEffectParam + gSpeciesInfo[SPECIES_DATIRIMON].evYield_HP);
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), finalHPEVAmount);
    }
}

SINGLE_BATTLE_TEST("Embargo negates a held item's Speed reduction")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(19); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_MACHO_BRACE); Speed(20); }
        ASSUME(gItemsInfo[ITEM_MACHO_BRACE].holdEffect == HOLD_EFFECT_MACHO_BRACE);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Foe Lopmonx used Scratch!");
        MESSAGE("Lopmonx used Scratch!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("The opposing Lopmonx used Scratch!");
        MESSAGE("Lopmonx used Scratch!");
>>>>>>> upstream/master
    }
}

WILD_BATTLE_TEST("Embargo doesn't block held item effects that affect friendship")
{
    u32 initialFriendship;
    u32 finalFriendship;

    KNOWN_FAILING; // Pokémon are currently not obtaining Friendship for using items in battle.
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_ACCURACY].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_SOOTHE_BELL); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_X_ACCURACY); }
        TURN { MOVE(player, MOVE_SING); }
    } SCENE {
        MESSAGE("Lopmonx used Sing!");
        MESSAGE("Wild Lopmonx fell asleep!");
    } THEN {
        initialFriendship = GetMonData(&PLAYER_PARTY[0], MON_DATA_FRIENDSHIP);
        finalFriendship = GetMonData(&gPlayerParty[0], MON_DATA_FRIENDSHIP);
        EXPECT_EQ(finalFriendship, initialFriendship + 2);
    }
}

SINGLE_BATTLE_TEST("Embargo doesn't block a held item's form-changing effect, but it does block its other effects", s16 damage)
{
    u32 heldItem;

    PARAMETRIZE { heldItem = ITEM_NONE; }
    PARAMETRIZE { heldItem = ITEM_MEADOW_PLATE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARCEUS_GRASS) { Item(heldItem); };
        ASSUME(gItemsInfo[ITEM_MEADOW_PLATE].holdEffect == HOLD_EFFECT_PLATE);
        ASSUME(gItemsInfo[ITEM_MEADOW_PLATE].holdEffectParam == 20);
        ASSUME(gItemsInfo[ITEM_MEADOW_PLATE].secondaryId == TYPE_GRASS);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); MOVE(opponent, MOVE_RAZOR_LEAF); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Embargo makes Fling and Natural Gift fail")
{
    u32 heldItem, moveId;

    PARAMETRIZE { heldItem = ITEM_LIGHT_BALL; moveId = MOVE_FLING; }
    PARAMETRIZE { heldItem = ITEM_CHERI_BERRY; moveId = MOVE_NATURAL_GIFT; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(heldItem); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); }
        TURN { MOVE(player, moveId); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
=======
        MESSAGE("The opposing Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
>>>>>>> upstream/master
        // Turn 2
        if (moveId == MOVE_FLING)
            MESSAGE("Lopmonx used Fling!");
        else
            MESSAGE("Lopmonx used Natural Gift!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Embargo doesn't stop an item flung at an affected target from activating")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_LIGHT_BALL); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
>>>>>>> upstream/master
        // Turn 2
        MESSAGE("Lopmonx used Fling!");
        MESSAGE("Lopmonx flung its Light Ball!");
        HP_BAR(opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
=======
        MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Baton Pass passes Embargo's effect")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_LIGHT_BALL); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); }
        TURN { MOVE(player, MOVE_BATON_PASS); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
=======
        MESSAGE("The opposing Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
>>>>>>> upstream/master
        // Turn 2
        MESSAGE("Lopmonx used Baton Pass!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, player);
<<<<<<< HEAD
        MESSAGE("Go! Exveemon!");
=======
        SEND_IN_MESSAGE("Exveemon");
>>>>>>> upstream/master
        // Turn 3
        MESSAGE("Exveemon used Fling!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Embargo doesn't block the effects of berries obtained through Bug Bite or Pluck")
{
    u32 hp = 10;

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); };
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_ORAN_BERRY); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); }
        TURN { MOVE(player, MOVE_PLUCK); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
=======
        MESSAGE("The opposing Lopmonx used Embargo!");
        MESSAGE("Lopmonx can't use items anymore!");
>>>>>>> upstream/master
        // Turn 2
        MESSAGE("Lopmonx used Pluck!");
        HP_BAR(opponent);
<<<<<<< HEAD
        MESSAGE("Lopmonx stole and ate Foe Lopmonx's Oran Berry!");
=======
        MESSAGE("Lopmonx stole and ate its target's Oran Berry!");
>>>>>>> upstream/master
        HP_BAR(player, damage: -hp);
    }
}

SINGLE_BATTLE_TEST("Embargo disables the effect of the Plate items on the move Judgment", s16 damage)
{
    u32 heldItem;

    PARAMETRIZE { heldItem = ITEM_NONE; }
    PARAMETRIZE { heldItem = ITEM_PIXIE_PLATE; }
    GIVEN {
        PLAYER(SPECIES_ARCEUS) { Item(heldItem); };
        OPPONENT(SPECIES_ESPIMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); MOVE(player, MOVE_JUDGMENT); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Espimon used Embargo!");
=======
        MESSAGE("The opposing Espimon used Embargo!");
>>>>>>> upstream/master
        MESSAGE("Arceus can't use items anymore!");
        MESSAGE("Arceus used Judgment!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Embargo disables the effect of the Drive items on the move Techno Blast", s16 damage)
{
    u32 heldItem;

    PARAMETRIZE { heldItem = ITEM_NONE; }
    PARAMETRIZE { heldItem = ITEM_SHOCK_DRIVE; }
    GIVEN {
        PLAYER(SPECIES_GENESECT) { Item(heldItem); };
        OPPONENT(SPECIES_COMMDRAMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); MOVE(player, MOVE_TECHNO_BLAST); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Commdramon used Embargo!");
=======
        MESSAGE("The opposing Commdramon used Embargo!");
>>>>>>> upstream/master
        MESSAGE("Genesect can't use items anymore!");
        MESSAGE("Genesect used Techno Blast!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Embargo disables the effect of the Memory items on the move Multi Attack", s16 damage)
{
    u32 heldItem;

    PARAMETRIZE { heldItem = ITEM_NONE; }
    PARAMETRIZE { heldItem = ITEM_FIRE_MEMORY; }
    GIVEN {
        PLAYER(SPECIES_SILVALLY) { Item(heldItem); };
        OPPONENT(SPECIES_BOMMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBARGO); MOVE(player, MOVE_MULTI_ATTACK); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Bommon used Embargo!");
=======
        MESSAGE("The opposing Bommon used Embargo!");
>>>>>>> upstream/master
        MESSAGE("Silvally can't use items anymore!");
        MESSAGE("Silvally used Multi-Attack!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Embargo can be reflected by Magic Coat")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_LIGHT_BALL); };
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_EMBARGO); }
        TURN { MOVE(opponent, MOVE_FLING); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Magic Coat!");
        MESSAGE("Lopmonx shrouded itself in Magic Coat!");
        MESSAGE("Foe Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx's Embargo was bounced back by MAGIC COAT!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Foe Lopmonx used Fling!");
=======
        MESSAGE("Lopmonx used Magic Coat!");
        MESSAGE("Lopmonx shrouded itself with Magic Coat!");
        MESSAGE("The opposing Lopmonx used Embargo!");
        MESSAGE("Lopmonx bounced the Embargo back!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("The opposing Lopmonx used Fling!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Embargo doesn't prevent Mega Evolution")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHIBOMON) { Item(ITEM_CHIBOMONITE_Y); };
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { MOVE(opponent, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Foe Lopmonx used Baton Pass!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("The opposing Lopmonx used Baton Pass!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        MESSAGE("2 sent out Chibomon!");
        // Turn 3
<<<<<<< HEAD
        MESSAGE("Foe Chibomon's ChibomoniteY is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("Foe Chibomon has Mega Evolved into Mega Chibomon!");
=======
        MESSAGE("The opposing Chibomon's Chibomonite Y is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("The opposing Chibomon has Mega Evolved into Mega Chibomon!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Embargo doesn't prevent Primal Reversion")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GEKOMON) { Item(ITEM_RED_ORB); };
    } WHEN {
        TURN { MOVE(player, MOVE_EMBARGO); }
        TURN { MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { MOVE(opponent, MOVE_FLING); }
    } SCENE {
        // Turn 1
<<<<<<< HEAD
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("Foe Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("Foe Lopmonx used Baton Pass!");
=======
        MESSAGE("Lopmonx used Embargo!");
        MESSAGE("The opposing Lopmonx can't use items anymore!");
        // Turn 2
        MESSAGE("The opposing Lopmonx used Baton Pass!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        MESSAGE("2 sent out Gekomon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Gekomon's Primal Reversion! It reverted to its primal form!");
        ABILITY_POPUP(opponent);
        // Turn 3
        MESSAGE("Foe Gekomon used Fling!");
=======
        MESSAGE("The opposing Gekomon's Primal Reversion! It reverted to its primal state!");
        ABILITY_POPUP(opponent);
        // Turn 3
        MESSAGE("The opposing Gekomon used Fling!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");
    }
}

TO_DO_BATTLE_TEST("Embargo doesn't prevent the usage of Z-Moves")
TO_DO_BATTLE_TEST("Embargo doesn't block held item effects that affect prize money")
