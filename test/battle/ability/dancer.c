#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dancer can copy a dance move immediately after it was used and allow the user of Dancer to still use its move")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_QUIVER_DANCE));
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUIVER_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUIVER_DANCE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ABILITY_POPUP(opponent, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUIVER_DANCE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent); // Same turn
    }
}

SINGLE_BATTLE_TEST("Dancer can copy Teeter Dance")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_TEETER_DANCE));
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Item(ITEM_LUM_BERRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_TEETER_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, player);
        ABILITY_POPUP(opponent, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, opponent);
    }
}

DOUBLE_BATTLE_TEST("Dancer can copy Teeter Dance and confuse both opposing targets")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_TEETER_DANCE));
        ASSUME(gItemsInfo[ITEM_LUM_BERRY].holdEffect == HOLD_EFFECT_CURE_STATUS);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_LUM_BERRY); }
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Item(ITEM_LUM_BERRY); }
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TEETER_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TEETER_DANCE, opponentLeft);
        MESSAGE("Lopmonx became confused!");
        MESSAGE("Exveemon became confusef!");
    }
}

DOUBLE_BATTLE_TEST("Dancer triggers from slowest to fastest")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        PLAYER(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Speed(10); }
        PLAYER(SPECIES_EXVEEMON) { Speed(50); }
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Speed(20); }
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Speed(3); }
    } WHEN {
        TURN { MOVE(playerRight, MOVE_DRAGON_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ABILITY_POPUP(opponentRight, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        ABILITY_POPUP(playerLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
    }
}

SINGLE_BATTLE_TEST("Dancer doesn't trigger if the original user flinches")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_FAKE_OUT, MOVE_EFFECT_FLINCH, 100));
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        PLAYER(SPECIES_LOPMONX)
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FAKE_OUT); MOVE(player, MOVE_DRAGON_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, opponent);
<<<<<<< HEAD
        MESSAGE("Lopmonx flinched!");
=======
        MESSAGE("Lopmonx flinched and couldn't move!");
>>>>>>> upstream/master
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_DANCER);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Dancer still triggers if another dancer flinches")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffectWithChance(MOVE_FAKE_OUT, MOVE_EFFECT_FLINCH, 100));
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        PLAYER(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Speed(10); }
        PLAYER(SPECIES_EXVEEMON) { Speed(5); }
        OPPONENT(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); Speed(20); }
        OPPONENT(SPECIES_LOPMONX) { Speed(3); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_FAKE_OUT, target: playerLeft); MOVE(playerRight, MOVE_DRAGON_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ABILITY_POPUP(playerLeft, ABILITY_DANCER);
        MESSAGE("Oricorio flinched and couldn't move!");
        NONE_OF {
            MESSAGE("Oricorio used Dragon Dance!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerLeft);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        }
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        MESSAGE("The opposing Oricorio used Dragon Dance!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
    }
}

SINGLE_BATTLE_TEST("Dancer-called attacks have their type updated")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_REVELATION_DANCE));
        ASSUME(GetMoveEffect(MOVE_REVELATION_DANCE) == EFFECT_REVELATION_DANCE);
        PLAYER(SPECIES_TANGROWTH);
        OPPONENT(SPECIES_ORICORIO_BAILE);
    } WHEN {
        TURN { MOVE(player, MOVE_REVELATION_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, player);
        MESSAGE("It's not very effective…");
        ABILITY_POPUP(opponent, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, opponent);
        NOT MESSAGE("It's not very effective…");
        MESSAGE("It's super effective!");
    }
}

DOUBLE_BATTLE_TEST("Dancer doesn't trigger on a snatched move")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        ASSUME(GetMoveEffect(MOVE_SNATCH) == EFFECT_SNATCH);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_ORICORIO);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_SNATCH); MOVE(playerRight, MOVE_DRAGON_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNATCH, opponentRight);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        NONE_OF {
            ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
    }
}

DOUBLE_BATTLE_TEST("Dancer triggers on Instructed dance moves")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        ASSUME(!IsMoveInstructBanned(MOVE_DRAGON_DANCE));
        ASSUME(GetMoveEffect(MOVE_INSTRUCT) == EFFECT_INSTRUCT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_ORICORIO);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_DRAGON_DANCE); MOVE(playerLeft, MOVE_INSTRUCT, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INSTRUCT, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Dancer-called move doesn't update move to be Instructed")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_DRAGON_DANCE));
        ASSUME(!IsMoveInstructBanned(MOVE_SCRATCH));
        ASSUME(GetMoveEffect(MOVE_INSTRUCT) == EFFECT_INSTRUCT);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_ORICORIO);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft); MOVE(playerRight, MOVE_DRAGON_DANCE); MOVE(opponentRight, MOVE_INSTRUCT, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INSTRUCT, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_DANCE, opponentLeft);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Dancer doesn't call a move that didn't execute due to Powder")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_FIERY_DANCE));
        ASSUME(GetMoveType(MOVE_FIERY_DANCE) == TYPE_FIRE);
        PLAYER(SPECIES_VOLCARONA);
        PLAYER(SPECIES_ORICORIO);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_VIVILLON);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_POWDER, target: playerLeft); MOVE(playerLeft, MOVE_FIERY_DANCE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerLeft);
            HP_BAR(opponentLeft);
            ABILITY_POPUP(playerRight, ABILITY_DANCER);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerRight);
        }
    }
}


DOUBLE_BATTLE_TEST("Dancer still activates after Red Card")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X) ;
        PLAYER(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); }
        PLAYER(SPECIES_BEARMON);
        OPPONENT(SPECIES_LOPMON_X) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ARGOMON);
        OPPONENT(SPECIES_MORPHOMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FIERY_DANCE, target: opponentLeft); }
    } SCENE {
        MESSAGE("Lopmon_x used Fiery Dance!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerLeft);
        HP_BAR(opponentLeft);
        // Red card trigger
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
        MESSAGE("The opposing Lopmon_x held up its Red Card against Lopmon_x!");
        MESSAGE("Bearmon was dragged out!");
        // Dancer
        ABILITY_POPUP(playerRight, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerRight);
        HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Dancer still activate after Red Card even if blocked by Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X) { Ability(ABILITY_SUCTION_CUPS); }
        PLAYER(SPECIES_ORICORIO) { Ability(ABILITY_DANCER); }
        PLAYER(SPECIES_BEARMON);
        OPPONENT(SPECIES_LOPMON_X) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ARGOMON);
        OPPONENT(SPECIES_MORPHOMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FIERY_DANCE, target: opponentLeft); }
    } SCENE {
        MESSAGE("Lopmon_x used Fiery Dance!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerLeft);
        HP_BAR(opponentLeft);
        // red card trigger
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
        MESSAGE("The opposing Lopmon_x held up its Red Card against Lopmon_x!");
        MESSAGE("Lopmon_x anchors itself with Suction Cups!");
        NOT MESSAGE("Bearmon was dragged out!");
        // Dancer
        ABILITY_POPUP(playerRight, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerRight);
        HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Dancer correctly restores move targets")
{
    GIVEN {
        ASSUME(IsDanceMove(MOVE_REVELATION_DANCE));
        PLAYER(SPECIES_ORICORIO) { Speed(10); }
        PLAYER(SPECIES_ORICORIO) { Speed(3); }
        OPPONENT(SPECIES_ORICORIO) { Speed(1); }
        OPPONENT(SPECIES_ORICORIO) { Speed(5); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_REVELATION_DANCE, target: opponentLeft);
               MOVE(opponentRight, MOVE_SCRATCH, target: playerRight);
               MOVE(playerRight, MOVE_SCRATCH, target: opponentRight);
               MOVE(opponentLeft, MOVE_SCRATCH, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, playerLeft);
        HP_BAR(opponentLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, opponentLeft);
        HP_BAR(playerLeft);
        ABILITY_POPUP(playerRight, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, playerRight);
        HP_BAR(opponentLeft);
        ABILITY_POPUP(opponentRight, ABILITY_DANCER);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVELATION_DANCE, opponentRight);
        HP_BAR(playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponentRight);
        HP_BAR(playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerRight);
        HP_BAR(opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponentLeft);
        HP_BAR(playerRight);
    }
}
