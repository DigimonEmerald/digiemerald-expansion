#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Spread Moves: Ability and Item effects activate correctly after a multi target move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_LUM_BERRY); }
        PLAYER(SPECIES_LOPMON_X) { Item(ITEM_COVERT_CLOAK); }
        OPPONENT(SPECIES_GOLISOPOD) { Ability(ABILITY_EMERGENCY_EXIT); MaxHP(260); HP(131); };
        OPPONENT(SPECIES_LOPMON_X) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_PETITMON);
    } WHEN {
        TURN {
            MOVE(opponentRight, MOVE_HEAT_WAVE);
            MOVE(playerLeft, MOVE_HYPER_VOICE);
            SEND_OUT(opponentRight, 3);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
        MESSAGE("The opposing Lopmon_x is switched out with the Eject Button!");
        MESSAGE("2 sent out Petitmon!");
        NONE_OF {
            ABILITY_POPUP(opponentLeft, ABILITY_EMERGENCY_EXIT);
            MESSAGE("2 sent out Exveemon!");
        }
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: No damage will be dealt to a mon in an invulnerable position")
{
    u32 attackingMove = 0, invulMove = 0;
    PARAMETRIZE { attackingMove = MOVE_HYPER_VOICE; invulMove = MOVE_FLY; }
    PARAMETRIZE { attackingMove = MOVE_LAVA_PLUME;  invulMove = MOVE_FLY; }
    PARAMETRIZE { attackingMove = MOVE_HYPER_VOICE; invulMove = MOVE_DIVE; }
    PARAMETRIZE { attackingMove = MOVE_LAVA_PLUME;  invulMove = MOVE_DIVE; }
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_HYPER_VOICE) == MOVE_TARGET_BOTH);
        ASSUME(GetMoveTarget(MOVE_LAVA_PLUME) == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_EBIBURGMON);
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { MOVE(opponentLeft, invulMove, target: playerLeft); MOVE(playerLeft, attackingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, attackingMove, playerLeft);
        NOT HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: A spread move attack will activate both resist berries")
{
    s16 opponentLeftDmg[2];
    s16 opponentRightDmg[2];

    GIVEN {
        PLAYER(SPECIES_ARCADIAMON_CHAMPION);
        PLAYER(SPECIES_APEMON);
        OPPONENT(SPECIES_PICHIMON) { Item(ITEM_CHILAN_BERRY); }
        OPPONENT(SPECIES_POYOMON) { Item(ITEM_CHILAN_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HYPER_VOICE); }
        TURN { MOVE(playerLeft, MOVE_HYPER_VOICE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
        MESSAGE("The Chilan Berry weakened the damage to the opposing Pichimon!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
        MESSAGE("The Chilan Berry weakened the damage to the opposing Poyomon!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[0]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[1]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[1]);
    } THEN {
        EXPECT_MUL_EQ(opponentLeftDmg[1], Q_4_12(0.5), opponentLeftDmg[0]);
        EXPECT_MUL_EQ(opponentRightDmg[1], Q_4_12(0.5), opponentRightDmg[0]);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: If a spread move attack will activate a resist berries on one Pokémon, only the damage for that mon will be reduced")
{
    s16 opponentLeftDmg[2];
    s16 opponentRightDmg[2];

    GIVEN {
        PLAYER(SPECIES_ARCADIAMON_CHAMPION);
        PLAYER(SPECIES_APEMON);
        OPPONENT(SPECIES_PICHIMON)
        OPPONENT(SPECIES_POYOMON) { Item(ITEM_CHILAN_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HYPER_VOICE); }
        TURN { MOVE(playerLeft, MOVE_HYPER_VOICE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
        MESSAGE("The Chilan Berry weakened the damage to the opposing Poyomon!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[0]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[1]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[1]);
    } THEN {
        EXPECT_EQ(opponentLeftDmg[1], opponentLeftDmg[0]);
        EXPECT_MUL_EQ(opponentRightDmg[1], Q_4_12(0.5), opponentRightDmg[0]);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: A spread move attack will be weakened by strong winds on both targets")
{
    s16 opponentLeftDmg[2];
    s16 opponentRightDmg[2];

    GIVEN {
        PLAYER(SPECIES_ARCADIAMON_CHAMPION);
        PLAYER(SPECIES_GEOGREYMON) { Ability(ABILITY_AIR_LOCK); }
        PLAYER(SPECIES_APEMON);
        OPPONENT(SPECIES_EBIBURGMON)
        OPPONENT(SPECIES_GEOGREYMON) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(playerLeft, MOVE_ROCK_SLIDE); }
        TURN { SWITCH(playerRight, 2); MOVE(opponentRight, MOVE_CELEBRATE); MOVE(playerLeft, MOVE_ROCK_SLIDE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[0]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[1]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[1]);
    } THEN {
        EXPECT_MUL_EQ(opponentLeftDmg[0], Q_4_12(0.5), opponentLeftDmg[1]);
        EXPECT_MUL_EQ(opponentRightDmg[0], Q_4_12(0.5), opponentRightDmg[1]);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: A spread move attack will be weakened by strong winds on one of the targets")
{
    s16 opponentLeftDmg[2];
    s16 opponentRightDmg[2];

    GIVEN {
        PLAYER(SPECIES_ARCADIAMON_CHAMPION);
        PLAYER(SPECIES_GEOGREYMON) { Ability(ABILITY_AIR_LOCK); }
        PLAYER(SPECIES_APEMON);
        OPPONENT(SPECIES_RENAMON)
        OPPONENT(SPECIES_GEOGREYMON) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(playerLeft, MOVE_ROCK_SLIDE); }
        TURN { SWITCH(playerRight, 2); MOVE(opponentRight, MOVE_CELEBRATE); MOVE(playerLeft, MOVE_ROCK_SLIDE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[0]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[0]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &opponentLeftDmg[1]);
        HP_BAR(opponentRight, captureDamage: &opponentRightDmg[1]);
    } THEN {
        EXPECT_EQ(opponentLeftDmg[1], opponentLeftDmg[0]);
        EXPECT_MUL_EQ(opponentRightDmg[0], Q_4_12(0.5), opponentRightDmg[1]);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: AOE move vs Disguise, Volt Absorb (right) and Lightning Rod (left)")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_DISCHARGE) == MOVE_TARGET_FOES_AND_ALLY);
        ASSUME(GetMoveType(MOVE_DISCHARGE) == TYPE_ELECTRIC);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_MIMIKYU);
        OPPONENT(SPECIES_PICHIMON) { Ability(ABILITY_LIGHTNING_ROD); }
        OPPONENT(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); HP(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DISCHARGE); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_LIGHTNING_ROD);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DISCHARGE, playerLeft);
        ABILITY_POPUP(playerRight, ABILITY_DISGUISE);
        ABILITY_POPUP(opponentRight, ABILITY_VOLT_ABSORB);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: AOE move vs Disguise, Volt Absorb (left) and Lightning Rod (right)")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_DISCHARGE) == MOVE_TARGET_FOES_AND_ALLY);
        ASSUME(GetMoveType(MOVE_DISCHARGE) == TYPE_ELECTRIC);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_MIMIKYU);
        OPPONENT(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); HP(1); }
        OPPONENT(SPECIES_PICHIMON) { Ability(ABILITY_LIGHTNING_ROD); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DISCHARGE); }
    } SCENE {
        ABILITY_POPUP(opponentRight, ABILITY_LIGHTNING_ROD);
        ABILITY_POPUP(opponentLeft, ABILITY_VOLT_ABSORB);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DISCHARGE, playerLeft);
        ABILITY_POPUP(playerRight, ABILITY_DISGUISE);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: AOE move vs Eiscue and Mimikyu (Based on vanilla games)")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_EARTHQUAKE) == MOVE_TARGET_FOES_AND_ALLY);
        ASSUME(GetMoveCategory(MOVE_EARTHQUAKE) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EISCUE);
        OPPONENT(SPECIES_MIMIKYU);
        OPPONENT(SPECIES_EISCUE);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_DISGUISE);
        ABILITY_POPUP(playerRight, ABILITY_ICE_FACE);
        ABILITY_POPUP(opponentRight, ABILITY_ICE_FACE);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Spread move, Gem Boosted, vs Resist Berries")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_HYPER_VOICE) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X) { Speed(40); Item(ITEM_NORMAL_GEM); }
        PLAYER(SPECIES_EXVEEMON) { Speed(30); }
        OPPONENT(SPECIES_LOPMON_X) { Speed(20); Item(ITEM_CHILAN_BERRY); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(10); Item(ITEM_CHILAN_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HYPER_VOICE); }
    } SCENE {
        MESSAGE("The Normal Gem strengthened Lopmon_x's power!");
        MESSAGE("The Chilan Berry weakened the damage to the opposing Lopmon_x!");
        MESSAGE("The Chilan Berry weakened the damage to the opposing Exveemon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Explosion, Gem Boosted, vs Resist Berries")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_EXPLOSION) == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_LOPMON_X) { Speed(40); Item(ITEM_NORMAL_GEM); }
        PLAYER(SPECIES_LOOGAMON) { Speed(30); }
        OPPONENT(SPECIES_LOPMON_X) { Speed(20); Item(ITEM_CHILAN_BERRY); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(10); Item(ITEM_CHILAN_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        MESSAGE("The Normal Gem strengthened Lopmon_x's power!");
        MESSAGE("The Chilan Berry weakened the damage to the opposing Lopmon_x!");
        MESSAGE("The Chilan Berry weakened the damage to the opposing Exveemon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("It doesn't affect Loogamon…");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Spread move vs Eiscue and Mimikyu with 1 Eject Button")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_RAZOR_LEAF) == MOVE_TARGET_BOTH);
        ASSUME(GetMoveCategory(MOVE_RAZOR_LEAF) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMON_X) { Speed(40); }
        PLAYER(SPECIES_EXVEEMON) { Speed(30); }
        OPPONENT(SPECIES_MIMIKYU) { Speed(20); Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_EISCUE) { Speed(10); }
        OPPONENT(SPECIES_LOPMON_X) { Speed(100); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_RAZOR_LEAF); SEND_OUT(opponentLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_LEAF, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_DISGUISE);
        ABILITY_POPUP(opponentRight, ABILITY_ICE_FACE);
        MESSAGE("The opposing Mimikyu is switched out with the Eject Button!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Spread move vs Wide Guard")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_HYPER_VOICE) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X) { Speed(40); }
        PLAYER(SPECIES_EXVEEMON) { Speed(20); }
        OPPONENT(SPECIES_LOPMON_X) { Speed(30); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(10); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WIDE_GUARD); MOVE(opponentLeft, MOVE_HYPER_VOICE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WIDE_GUARD, playerLeft);
        MESSAGE("Wide Guard protected your team!");
        MESSAGE("The opposing Lopmon_x used Hyper Voice!");
        MESSAGE("Lopmon_x protected itself!");
        MESSAGE("Exveemon protected itself!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerLeft);
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Spread move vs one protecting mon")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_HYPER_VOICE) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_PROTECT); MOVE(playerLeft, MOVE_HYPER_VOICE); }
    } SCENE {
        MESSAGE("The opposing Lopmon_x used Protect!");
        MESSAGE("Lopmon_x used Hyper Voice!");
        MESSAGE("The opposing Lopmon_x protected itself!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Super Effective Message on both opposing mons")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_PRECIPICE_BLADES) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_MOTIMON);
        OPPONENT(SPECIES_TSUNOMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PRECIPICE_BLADES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PRECIPICE_BLADES, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("It's super effective on the opposing Motimon and Tsunomon!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Super Effective Message on both player mons")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_PRECIPICE_BLADES) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_MOTIMON);
        PLAYER(SPECIES_TSUNOMON);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_PRECIPICE_BLADES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PRECIPICE_BLADES, opponentLeft);
        HP_BAR(playerLeft);
        HP_BAR(playerRight);
        MESSAGE("It's super effective on Motimon and Tsunomon!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Not very effective Message on both opposing mons")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_PRECIPICE_BLADES) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_FALCOMON_06);
        OPPONENT(SPECIES_SUNARZAMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PRECIPICE_BLADES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PRECIPICE_BLADES, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("It's not very effective on the opposing Falcomon_06 and Sunarzamon!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Not very effective message on both player mons")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_PRECIPICE_BLADES) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_FALCOMON_06);
        PLAYER(SPECIES_SUNARZAMON);
        OPPONENT(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_PRECIPICE_BLADES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PRECIPICE_BLADES, opponentLeft);
        HP_BAR(playerLeft);
        HP_BAR(playerRight);
        MESSAGE("It's not very effective on Falcomon_06 and Sunarzamon!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Doesn't affect message on both opposing mons")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_PRECIPICE_BLADES) == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMON_X);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_KETOMON);
        OPPONENT(SPECIES_GHOSTMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PRECIPICE_BLADES); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_PRECIPICE_BLADES, playerLeft);
        MESSAGE("It doesn't affect the opposing Ketomon and Ghostmon…");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Unless move hits every target user will not include partner in the target count")
{
    GIVEN {
        PLAYER(SPECIES_POYOMON);
        PLAYER(SPECIES_EXVEEMON) { HP(1); }
        PLAYER(SPECIES_APEMON);
        OPPONENT(SPECIES_CLOCKMON);
        OPPONENT(SPECIES_CLOCKMON);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_ICY_WIND); MOVE(playerLeft, MOVE_ROCK_SLIDE); SEND_OUT(playerRight, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ICY_WIND, opponentRight);
        HP_BAR(playerLeft);
        HP_BAR(playerRight);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("It's super effective on the opposing Clockmon and Clockmon!");
    }
}

DOUBLE_BATTLE_TEST("Spread Moves: Focus Sash activates correctly")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT) { HP(2); MaxHP(2); Item(ITEM_FOCUS_SASH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(2); MaxHP(2); Item(ITEM_FOCUS_SASH); }
        OPPONENT(SPECIES_WYNAUT) { HP(2); MaxHP(2); Item(ITEM_FOCUS_SASH); }
    } WHEN {
        TURN { MOVE(playerRight, MOVE_HYPER_VOICE); MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPER_VOICE, playerRight);
        MESSAGE("The opposing Wynaut hung on using its Focus Sash!");
        MESSAGE("The opposing Wobbuffet hung on using its Focus Sash!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("Wynaut hung on using its Focus Sash!");
        MESSAGE("The opposing Wynaut fainted!");
    }
}
