#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FLING].effect == EFFECT_FLING);
}

SINGLE_BATTLE_TEST("Fling fails if Pokémon holds no item")
{
    u16 item;

    PARAMETRIZE {item = ITEM_NONE; }
    PARAMETRIZE {item = ITEM_RAZOR_CLAW; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING);}
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        if (item != ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling fails if Pokémon is under the effects of Embargo or Magic Room")
{
    u16 move;

    PARAMETRIZE {move = MOVE_CELEBRATE; }
    PARAMETRIZE {move = MOVE_EMBARGO; }
    PARAMETRIZE {move = MOVE_MAGIC_ROOM; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_EMBARGO].effect == EFFECT_EMBARGO);
        ASSUME(gMovesInfo[MOVE_MAGIC_ROOM].effect == EFFECT_MAGIC_ROOM);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        if (move == MOVE_CELEBRATE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling fails for Pokémon with Klutz ability")
{
    u16 ability;

    PARAMETRIZE {ability = ABILITY_KLUTZ; }
    PARAMETRIZE {ability = ABILITY_RUN_AWAY; }

    GIVEN {
        ASSUME(B_KLUTZ_FLING_INTERACTION >= GEN_5);
        PLAYER(SPECIES_BUNEARY) { Item(ITEM_RAZOR_CLAW); Ability(ability); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Buneary used Fling!");
        if (ability != ABILITY_KLUTZ) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling fails if the item changes the Pokémon's form")
{
    GIVEN {
        PLAYER(SPECIES_GIRATINA_ORIGIN) { Item(ITEM_GRISEOUS_CORE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(player->item == ITEM_GRISEOUS_CORE);
    }
}

SINGLE_BATTLE_TEST("Fling works if the item changes a Pokémon's form but not the one holding it")
{
    GIVEN {
        PLAYER(SPECIES_VENUSAUR) { Item(ITEM_BLASTOISINITE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        NOT MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling's thrown item can be regained with Recycle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_RECYCLE].effect == EFFECT_RECYCLE);
        PLAYER(SPECIES_LOPMONX) {Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING);}
        TURN { MOVE(player, MOVE_RECYCLE);}
        TURN { MOVE(player, MOVE_FLING);}
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        MESSAGE("Lopmonx used Recycle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RECYCLE, player);
        MESSAGE("Lopmonx found one Razor Claw!");
        MESSAGE("Lopmonx used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Fling - Item is lost even when there is no target")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SELF_DESTRUCT].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX) {Item(ITEM_RAZOR_CLAW); Speed(2); }
        OPPONENT(SPECIES_LOPMONX) {Speed(5); }
        OPPONENT(SPECIES_LOPMONX) {Speed(5); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SELF_DESTRUCT); MOVE(player, MOVE_FLING); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used SelfDestruct!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SELF_DESTRUCT, opponent);
        HP_BAR(player);
        MESSAGE("Foe Lopmonx fainted!");
        MESSAGE("Lopmonx used Fling!");
=======
        MESSAGE("The opposing Lopmonx used Self-Destruct!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SELF_DESTRUCT, opponent);
        HP_BAR(player);
        MESSAGE("The opposing Lopmonx fainted!");
        MESSAGE("Lopmonx used Fling!");
>>>>>>> upstream/master
        MESSAGE("But it failed!");

        MESSAGE("Lopmonx used Fling!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling - Item is lost when target protects itself")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PROTECT].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_LOPMONX) {Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_FLING);}
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx used Protect!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        MESSAGE("Lopmonx used Fling!");
        MESSAGE("Foe Lopmonx protected itself!");
=======
        MESSAGE("The opposing Lopmonx used Protect!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        MESSAGE("Lopmonx used Fling!");
        MESSAGE("The opposing Lopmonx protected itself!");
>>>>>>> upstream/master

        MESSAGE("Lopmonx used Fling!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling doesn't consume the item if Pokémon is asleep/frozen/paralyzed")
{
    u32 status;
    u16 item;

    PARAMETRIZE {status = STATUS1_SLEEP_TURN(2); item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_PARALYSIS; item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_FREEZE; item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_SLEEP_TURN(2); item = ITEM_NONE; }
    PARAMETRIZE {status = STATUS1_PARALYSIS; item = ITEM_NONE; }
    PARAMETRIZE {status = STATUS1_FREEZE; item = ITEM_NONE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) {Item(item); Status1(status); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (status == STATUS1_FREEZE) {
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_FROZEN, FALSE)); }
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_FROZEN, TRUE)); }
        } else if (status == STATUS1_PARALYSIS) {
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_PARALYSIS, FALSE)); }
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_PARALYSIS, TRUE)); }
        } else {
            TURN { MOVE(player, MOVE_FLING); }
            TURN { MOVE(player, MOVE_FLING); }
        }
    } SCENE {
        if (status == STATUS1_FREEZE) {
<<<<<<< HEAD
            MESSAGE("Lopmonx is frozen solid!");
            MESSAGE("Lopmonx was defrosted!");
        }
        else if (status == STATUS1_PARALYSIS) {
            MESSAGE("Lopmonx is paralyzed! It can't move!");
=======
            MESSAGE("Lopmonx is frozen solid!");
            MESSAGE("Lopmonx thawed out!");
        }
        else if (status == STATUS1_PARALYSIS) {
            MESSAGE("Lopmonx couldn't move because it's paralyzed!");
>>>>>>> upstream/master
        }
        else {
            MESSAGE("Lopmonx is fast asleep.");
            MESSAGE("Lopmonx woke up!");
        }
        MESSAGE("Lopmonx used Fling!");
        if (item != ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }

    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling applies special effects when throwing specific Items")
{
    u16 item;

    PARAMETRIZE {item = ITEM_FLAME_ORB; }
    PARAMETRIZE {item = ITEM_LIGHT_BALL; }
    PARAMETRIZE {item = ITEM_POISON_BARB; }
    PARAMETRIZE {item = ITEM_TOXIC_ORB; }
    PARAMETRIZE {item = ITEM_RAZOR_FANG; }
    PARAMETRIZE {item = ITEM_KINGS_ROCK; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        switch (item)
        {
        case ITEM_FLAME_ORB:
            {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx was burned!");
=======
                MESSAGE("The opposing Lopmonx was burned!");
>>>>>>> upstream/master
                STATUS_ICON(opponent, STATUS1_BURN);
            }
            break;
        case ITEM_LIGHT_BALL:
            {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
=======
                MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master
                STATUS_ICON(opponent, STATUS1_PARALYSIS);
            }
            break;
        case ITEM_POISON_BARB:
            {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx was poisoned!");
=======
                MESSAGE("The opposing Lopmonx was poisoned!");
>>>>>>> upstream/master
                STATUS_ICON(opponent, STATUS1_POISON);
            }
            break;
        case ITEM_TOXIC_ORB:
            {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx is badly poisoned!");
=======
                MESSAGE("The opposing Lopmonx was badly poisoned!");
>>>>>>> upstream/master
                STATUS_ICON(opponent, STATUS1_TOXIC_POISON);
            }
            break;
        case ITEM_RAZOR_FANG:
        case ITEM_KINGS_ROCK:
            {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx flinched!");
=======
                MESSAGE("The opposing Lopmonx flinched and couldn't move!");
>>>>>>> upstream/master
            }
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Fling's secondary effects are blocked by Shield Dust")
{
    u16 item;

    PARAMETRIZE {item = ITEM_FLAME_ORB; }
    PARAMETRIZE {item = ITEM_LIGHT_BALL; }
    PARAMETRIZE {item = ITEM_POISON_BARB; }
    PARAMETRIZE {item = ITEM_TOXIC_ORB; }
    PARAMETRIZE {item = ITEM_RAZOR_FANG; }
    PARAMETRIZE {item = ITEM_KINGS_ROCK; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_LOPMONX) { Ability(ABILITY_SHIELD_DUST); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        switch (item)
        {
        case ITEM_FLAME_ORB:
            {
                NONE_OF {
<<<<<<< HEAD
                    MESSAGE("Foe Lopmonx was burned!");
=======
                    MESSAGE("The opposing Lopmonx was burned!");
>>>>>>> upstream/master
                    STATUS_ICON(opponent, STATUS1_BURN);
                }
                MESSAGE("The Flame Orb was used up…");
            }
            break;
        case ITEM_LIGHT_BALL:
            {
                NONE_OF {
<<<<<<< HEAD
                    MESSAGE("Foe Lopmonx is paralyzed! It may be unable to move!");
=======
                    MESSAGE("The opposing Lopmonx is paralyzed, so it may be unable to move!");
>>>>>>> upstream/master
                    STATUS_ICON(opponent, STATUS1_PARALYSIS);
                }
                MESSAGE("The Light Ball was used up…");
            }
            break;
        case ITEM_POISON_BARB:
            {
                NONE_OF {
<<<<<<< HEAD
                    MESSAGE("Foe Lopmonx was poisoned!");
=======
                    MESSAGE("The opposing Lopmonx was poisoned!");
>>>>>>> upstream/master
                    STATUS_ICON(opponent, STATUS1_POISON);
                }
                MESSAGE("The Poison Barb was used up…");
            }
            break;
        case ITEM_TOXIC_ORB:
            {
                NONE_OF {
<<<<<<< HEAD
                    MESSAGE("Foe Lopmonx is badly poisoned!");
=======
                    MESSAGE("The opposing Lopmonx was badly poisoned!");
>>>>>>> upstream/master
                    STATUS_ICON(opponent, STATUS1_TOXIC_POISON);
                }
                MESSAGE("The Toxic Orb was used up…");
            }
            break;
        case ITEM_RAZOR_FANG:
        case ITEM_KINGS_ROCK:
            {
                NONE_OF {
<<<<<<< HEAD
                    MESSAGE("Foe Lopmonx flinched!");
=======
                    MESSAGE("The opposing Lopmonx flinched and couldn't move!");
>>>>>>> upstream/master
                }
                switch (item)
                {
                    case ITEM_RAZOR_FANG:
                        MESSAGE("The Razor Fang was used up…");
                        break;
                    case ITEM_KINGS_ROCK:
                        MESSAGE("The King's Rock was used up…");
                        break;
                }
            }
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Fling - thrown berry's effect activates for the target even if the trigger conditions are not met")
{
    u16 item, effect;
    u8 statId = 0;
    u32 status1 = STATUS1_NONE;

    PARAMETRIZE { item = ITEM_ORAN_BERRY; effect = HOLD_EFFECT_RESTORE_HP; }
    PARAMETRIZE { item = ITEM_SITRUS_BERRY; effect = HOLD_EFFECT_RESTORE_HP; }
    PARAMETRIZE { item = ITEM_ENIGMA_BERRY; effect = HOLD_EFFECT_ENIGMA_BERRY; }
    PARAMETRIZE { item = ITEM_LEPPA_BERRY; effect = HOLD_EFFECT_RESTORE_PP; }
    PARAMETRIZE { item = ITEM_CHESTO_BERRY; effect = HOLD_EFFECT_CURE_SLP; status1 = STATUS1_SLEEP; }
    PARAMETRIZE { item = ITEM_CHERI_BERRY; effect = HOLD_EFFECT_CURE_PAR; status1 = STATUS1_PARALYSIS; }
    PARAMETRIZE { item = ITEM_PECHA_BERRY; effect = HOLD_EFFECT_CURE_PSN; status1 = STATUS1_POISON; }
    PARAMETRIZE { item = ITEM_PECHA_BERRY; effect = HOLD_EFFECT_CURE_PSN; status1 = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { item = ITEM_RAWST_BERRY; effect = HOLD_EFFECT_CURE_BRN; status1 = STATUS1_BURN; }
    PARAMETRIZE { item = ITEM_ASPEAR_BERRY; effect = HOLD_EFFECT_CURE_FRZ; status1 = STATUS1_FREEZE; }
    PARAMETRIZE { item = ITEM_ASPEAR_BERRY; effect = HOLD_EFFECT_CURE_FRZ; status1 = STATUS1_FROSTBITE; }
    PARAMETRIZE { item = ITEM_APICOT_BERRY; effect = HOLD_EFFECT_SP_DEFENSE_UP; statId = STAT_SPDEF; }
    PARAMETRIZE { item = ITEM_MARANGA_BERRY; effect = HOLD_EFFECT_MARANGA_BERRY; statId = STAT_SPDEF; }
    PARAMETRIZE { item = ITEM_GANLON_BERRY; effect = HOLD_EFFECT_DEFENSE_UP; statId = STAT_DEF; }
    PARAMETRIZE { item = ITEM_KEE_BERRY; effect = HOLD_EFFECT_KEE_BERRY; statId = STAT_DEF; }
    PARAMETRIZE { item = ITEM_LIECHI_BERRY; effect = HOLD_EFFECT_ATTACK_UP; statId = STAT_ATK; }
    PARAMETRIZE { item = ITEM_PETAYA_BERRY; effect = HOLD_EFFECT_SP_ATTACK_UP; statId = STAT_SPATK; }
    PARAMETRIZE { item = ITEM_SALAC_BERRY; effect = HOLD_EFFECT_SPEED_UP; statId = STAT_SPEED; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLING].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX) { Item(item); Attack(1); }
        OPPONENT(SPECIES_LOPMONX) { Status1(status1); HP(399); MaxHP(400); MovesWithPP({MOVE_CELEBRATE, 35}); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Lopmonx used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        if (effect == HOLD_EFFECT_RESTORE_HP) {
            if (item == ITEM_ORAN_BERRY) {
<<<<<<< HEAD
                MESSAGE("Foe Lopmonx's Oran Berry restored health!");
            } else if (item == ITEM_SITRUS_BERRY) {
                MESSAGE("Foe Lopmonx's Sitrus Berry restored health!");
            } else {
                MESSAGE("Lopmonx's Enigma Berry restored health!");
=======
                MESSAGE("The opposing Lopmonx restored its health using its Oran Berry!");
            } else if (item == ITEM_SITRUS_BERRY) {
                MESSAGE("The opposing Lopmonx restored its health using its Sitrus Berry!");
            } else {
                MESSAGE("Lopmonx restored its health using its Enigma Berry!");
>>>>>>> upstream/master
            }
            HP_BAR(opponent);
        }
        else if (effect == HOLD_EFFECT_RESTORE_PP) {
<<<<<<< HEAD
            MESSAGE("Foe Lopmonx's Leppa Berry restored Celebrate's PP!");
        }
        else if (status1 != STATUS1_NONE) {
            if (status1 == STATUS1_BURN) {
                MESSAGE("Foe Lopmonx's Rawst Berry healed its burn!");
            } else if (status1 == STATUS1_SLEEP) {
                MESSAGE("Foe Lopmonx's Chesto Berry woke it from its sleep!");
            } else if (status1 == STATUS1_FREEZE) {
                MESSAGE("Foe Lopmonx's Aspear Berry defrosted it!");
            } else if (status1 == STATUS1_FROSTBITE) {
                MESSAGE("Foe Lopmonx's Aspear Berry healed its frostbite!");
            } else if (status1 == STATUS1_PARALYSIS) {
                MESSAGE("Foe Lopmonx's Cheri Berry cured paralysis!");
            } else if (status1 == STATUS1_TOXIC_POISON || status1 == STATUS1_POISON) {
                MESSAGE("Foe Lopmonx's Pecha Berry cured poison!");
=======
            MESSAGE("The opposing Lopmonx restored PP to its move Celebrate using its Leppa Berry!");
        }
        else if (status1 != STATUS1_NONE) {
            if (status1 == STATUS1_BURN) {
                MESSAGE("The opposing Lopmonx's Rawst Berry cured its burn!");
            } else if (status1 == STATUS1_SLEEP) {
                MESSAGE("The opposing Lopmonx's Chesto Berry woke it up!");
            } else if (status1 == STATUS1_FREEZE) {
                MESSAGE("The opposing Lopmonx's Aspear Berry defrosted it!");
            } else if (status1 == STATUS1_FROSTBITE) {
                MESSAGE("The opposing Lopmonx's Aspear Berry cured its frostbite!");
            } else if (status1 == STATUS1_PARALYSIS) {
                MESSAGE("The opposing Lopmonx's Cheri Berry cured its paralysis!");
            } else if (status1 == STATUS1_TOXIC_POISON || status1 == STATUS1_POISON) {
                MESSAGE("The opposing Lopmonx's Pecha Berry cured its poison!");
>>>>>>> upstream/master
            }
            NOT STATUS_ICON(opponent, status1);
        }
        else if (statId != 0) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            if (statId == STAT_ATK) {
<<<<<<< HEAD
                MESSAGE("Using Liechi Berry, the Attack of Foe Lopmonx rose!");
            } else if (statId == STAT_DEF) {
                if (item == ITEM_GANLON_BERRY) {
                    MESSAGE("Using Ganlon Berry, the Defense of Foe Lopmonx rose!");
                } else {
                    MESSAGE("Using Kee Berry, the Defense of Foe Lopmonx rose!");
                }
            } else if (statId == STAT_SPDEF) {
                if (item == ITEM_APICOT_BERRY) {
                    MESSAGE("Using Apicot Berry, the Sp. Def of Foe Lopmonx rose!");
                } else {
                    MESSAGE("Using Maranga Berry, the Sp. Def of Foe Lopmonx rose!");
                }
            } else if (statId == STAT_SPEED) {
                MESSAGE("Using Salac Berry, the Speed of Foe Lopmonx rose!");
            } else if (statId == STAT_SPATK) {
                MESSAGE("Using Petaya Berry, the Sp. Atk of Foe Lopmonx rose!");
=======
                MESSAGE("Using Liechi Berry, the Attack of the opposing Lopmonx rose!");
            } else if (statId == STAT_DEF) {
                if (item == ITEM_GANLON_BERRY) {
                    MESSAGE("Using Ganlon Berry, the Defense of the opposing Lopmonx rose!");
                } else {
                    MESSAGE("Using Kee Berry, the Defense of the opposing Lopmonx rose!");
                }
            } else if (statId == STAT_SPDEF) {
                if (item == ITEM_APICOT_BERRY) {
                    MESSAGE("Using Apicot Berry, the Sp. Def of the opposing Lopmonx rose!");
                } else {
                    MESSAGE("Using Maranga Berry, the Sp. Def of the opposing Lopmonx rose!");
                }
            } else if (statId == STAT_SPEED) {
                MESSAGE("Using Salac Berry, the Speed of the opposing Lopmonx rose!");
            } else if (statId == STAT_SPATK) {
                MESSAGE("Using Petaya Berry, the Sp. Atk of the opposing Lopmonx rose!");
>>>>>>> upstream/master
            }
        }
    } THEN {
        if (effect == HOLD_EFFECT_RESTORE_HP) {
            EXPECT_EQ(opponent->hp, opponent->maxHP);
        } else if (effect == HOLD_EFFECT_RESTORE_PP) {
            EXPECT_EQ(opponent->pp[0], 39); // Not 40, because Celebrate was used.
        }  else if (status1 != STATUS1_NONE) {
            EXPECT_EQ(opponent->status1, STATUS1_NONE);
        }
        else if (statId != 0) {
            EXPECT_EQ(opponent->statStages[statId], DEFAULT_STAT_STAGE + 1);
        }
    }
}

SINGLE_BATTLE_TEST("Fling deals damage based on items fling power")
{
    s16 damage[2];

    GIVEN {
        ASSUME(gMovesInfo[MOVE_CRUNCH].power == 80);
        ASSUME(gItemsInfo[ITEM_BOMMONITE].flingPower == 80);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_BOMMONITE); }
        OPPONENT(SPECIES_GARGOMON);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
        TURN { MOVE(player, MOVE_CRUNCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}

SINGLE_BATTLE_TEST("Fling deals damage based on a TM's move power")
{
    s16 damage[2];

    GIVEN {
        ASSUME(GetMovePower(MOVE_EARTHQUAKE) == GetMovePower(MOVE_EGG_BOMB));
        ASSUME(!IsSpeciesOfType(SPECIES_WOBBUFFET, TYPE_DARK));
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_TM_EARTHQUAKE); }
        OPPONENT(SPECIES_HIPPOWDON);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
        TURN { MOVE(player, MOVE_EGG_BOMB); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EGG_BOMB, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}
