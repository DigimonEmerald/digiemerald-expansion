#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after switch out", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
<<<<<<< HEAD
            MESSAGE("Foe Paomon's Intimidate cuts Lopmonx's attack!");
=======
            MESSAGE("The opposing Paomon's Intimidate cuts Lopmonx's Attack!");
>>>>>>> upstream/master
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after KO", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(1); }
        OPPONENT(SPECIES_PAOMON) { Ability(ability); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent);
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
<<<<<<< HEAD
            MESSAGE("Foe Paomon's Intimidate cuts Lopmonx's attack!");
=======
            MESSAGE("The opposing Paomon's Intimidate cuts Lopmonx's Attack!");
>>>>>>> upstream/master
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Intimidate doesn't activate on an empty field in a double battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_HOPMON);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(playerRight, 3); SEND_OUT(opponentRight, 3); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        // Everyone faints.

<<<<<<< HEAD
        MESSAGE("Go! Pafumon!");
=======
        SEND_IN_MESSAGE("Pafumon");
>>>>>>> upstream/master
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
        MESSAGE("2 sent out Paomon!");
        NONE_OF {
            ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        }
<<<<<<< HEAD
        MESSAGE("Go! Hopmon!");
        MESSAGE("2 sent out Exveemon!");
        // Intimidate activates after all battlers have been brought out
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Pafumon's Intimidate cuts Foe Paomon's attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Pafumon's Intimidate cuts Foe Exveemon's attack!");

        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Foe Paomon's Intimidate cuts Pafumon's attack!");
=======
        SEND_IN_MESSAGE("Hopmon");
        MESSAGE("2 sent out Wynaut!");
        // Intimidate activates after all battlers have been brought out
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Pafumon's Intimidate cuts the opposing Paomon's Attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Pafumon's Intimidate cuts the opposing Wynaut's Attack!");

        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("The opposing Paomon's Intimidate cuts Pafumon's Attack!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("The opposing Paomon's Intimidate cuts Hopmon's Attack!");
    }
}

SINGLE_BATTLE_TEST("Intimidate and Eject Button force the opponent to Attack")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_SALAMON_X) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN {
           MOVE(player, MOVE_QUICK_ATTACK);
           MOVE(opponent, MOVE_TACKLE);
           SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx is switched out with the Eject Button!");
        MESSAGE("2 sent out Salamon_x!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Foe Salamon_x's Intimidate cuts Lopmonx's attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("Foe Salamon_x used Tackle!");
=======
        MESSAGE("The opposing Lopmonx is switched out with the Eject Button!");
        MESSAGE("2 sent out Salamon_x!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("The opposing Salamon_x's Intimidate cuts Lopmonx's Attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("The opposing Salamon_x used Tackle!");
>>>>>>> upstream/master
        }
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates on an empty slot")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_CROAGUNK);
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_SALAMON_X) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_APEMON);
        OPPONENT(SPECIES_BIOSTEGMON);
    } WHEN {
        TURN {
            SWITCH(playerLeft, 2);
            MOVE(playerRight, MOVE_GUNK_SHOT, target: opponentLeft);
            MOVE(opponentRight, MOVE_SPLASH);
        }
        TURN {
            SWITCH(playerLeft, 3);
            MOVE(playerRight, MOVE_SPLASH);
            }


    } SCENE {
<<<<<<< HEAD
        MESSAGE("Lopmonx, that's enough! Come back!");
        MESSAGE("Go! Exveemon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUNK_SHOT, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponentRight);
        MESSAGE("Exveemon, that's enough! Come back!");
        MESSAGE("Go! Salamon_x!");
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        NONE_OF {
            MESSAGE("Salamon_x's Intimidate cuts Foe Apemon's attack!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Salamon_x's Intimidate cuts Foe Biostegmon's attack!");
=======
        SWITCH_OUT_MESSAGE("Lopmonx");
        SEND_IN_MESSAGE("Wynaut");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUNK_SHOT, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponentRight);
        SWITCH_OUT_MESSAGE("Wynaut");
        SEND_IN_MESSAGE("Salamon_x");
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        NONE_OF {
            MESSAGE("Salamon_x's Intimidate cuts the opposing Ralts's Attack!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Salamon_x's Intimidate cuts the opposing Azurill's Attack!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates immediately after the mon was switched in as long as one opposing mon is alive")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_KOKO) { Ability(ABILITY_ELECTRIC_SURGE); };
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); Item(ITEM_ELECTRIC_SEED); }
        OPPONENT(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_U_TURN, target: opponentLeft); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_ELECTRIC_SURGE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerLeft);
        HP_BAR(opponentLeft);
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Intimidate can not further lower opponents Atk stat if it is at minimum stages")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
<<<<<<< HEAD
            MESSAGE("Foe Paomon's Intimidate cuts Lopmonx's attack!");
        }
        MESSAGE("Lopmonx's Attack won't go lower!");
=======
            MESSAGE("The opposing Paomon's Intimidate cuts Lopmonx's Attack!");
        }
        MESSAGE("Lopmonx's Attack won't go any lower!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], MIN_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Intimidate is not going to trigger if a mon switches out through u-turn and the opposing field is empty")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_SUNARZAMON);
        OPPONENT(SPECIES_SYAKOMON_X);
    } WHEN {
        TURN {
            MOVE(opponentRight, MOVE_HEALING_WISH);
            MOVE(playerLeft, MOVE_U_TURN, target: opponentLeft);
            SEND_OUT(playerLeft, 2);
            SEND_OUT(opponentLeft, 2);
            SEND_OUT(opponentRight, 3);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerLeft);
        HP_BAR(opponentLeft);
        MESSAGE("2 sent out Sunarzamon!");
        MESSAGE("2 sent out Syakomon_x!");
        NOT ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer effected by Neutralizing Gas - switching out")
{
    GIVEN {
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        SWITCH_OUT_MESSAGE("Armadilmon");
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        SEND_IN_MESSAGE("Lopmonx");
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - switching moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_U_TURN; }
    PARAMETRIZE { move = MOVE_HEALING_WISH; }
    PARAMETRIZE { move = MOVE_BATON_PASS; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_HEALING_WISH].effect == EFFECT_HEALING_WISH);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(player, move); SEND_OUT(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        SEND_IN_MESSAGE("Lopmonx");
    } THEN {
        if (move == MOVE_HEALING_WISH)
            EXPECT_EQ(player->hp, player->maxHP);
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - opponent caused switches")
{
    u32 move, item;
    PARAMETRIZE { move = MOVE_TACKLE; item = ITEM_EJECT_BUTTON; }
    PARAMETRIZE { move = MOVE_GROWL; item = ITEM_EJECT_PACK; }
    PARAMETRIZE { move = MOVE_ROAR; item = ITEM_NONE; }
    PARAMETRIZE { move = MOVE_DRAGON_TAIL; item = ITEM_NONE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        ASSUME(gMovesInfo[MOVE_ROAR].effect == EFFECT_ROAR);
        ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); Item(item); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        if (item != ITEM_NONE) {
            TURN { MOVE(opponent, move); SEND_OUT(player, 1); }
        } else {
            TURN { MOVE(opponent, move); }
        }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (item != ITEM_NONE)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        if (item != ITEM_NONE) {
            SEND_IN_MESSAGE("Lopmonx");
        } else {
            MESSAGE("Lopmonx was dragged out!");
        }
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - fainted")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FELL_STINGER].effect == EFFECT_FELL_STINGER);
        PLAYER(SPECIES_ARMADILMON) { Ability(ABILITY_NEUTRALIZING_GAS); HP(1); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAOMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FELL_STINGER); SEND_OUT(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FELL_STINGER, opponent);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Armadilmon fainted!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        SEND_IN_MESSAGE("Lopmonx");
    }
}

DOUBLE_BATTLE_TEST("Intimidate will correctly decrease the attack of the second mon after Protosynthesis activated")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WALKING_WAKE) { Ability(ABILITY_PROTOSYNTHESIS); Item(ITEM_BOOSTER_ENERGY); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(opponentLeft, 2); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        ABILITY_POPUP(playerLeft, ABILITY_PROTOSYNTHESIS);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
    }
}
