#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Aftermath damages the attacker by 1/4th of its max HP if fainted by a contact move")
{
    s16 aftermathDamage;

    GIVEN {
        PLAYER(SPECIES_XIAOMON) { HP(1); Ability(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {MOVE(opponent, MOVE_SCRATCH);}
    } SCENE {
        MESSAGE("The opposing Lopmonx used Scratch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        MESSAGE("Xiaomon fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
        HP_BAR(opponent, captureDamage: &aftermathDamage);
    } THEN {
        EXPECT_EQ(aftermathDamage, opponent->maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("Aftermath ability pop-up will be displayed correctly: player point of view")
{
    GIVEN {
        PLAYER(SPECIES_ARESDRAMON) { Ability(ABILITY_POISON_HEAL); };
        OPPONENT(SPECIES_XIAOMON) { HP(1); Ability(ABILITY_AFTERMATH); };
    } WHEN {
        TURN {MOVE(player, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        MESSAGE("The opposing Xiaomon fainted!");
        ABILITY_POPUP(opponent, ABILITY_AFTERMATH);
    }
}

SINGLE_BATTLE_TEST("Aftermath ability pop-up will be displayed correctly: opponent point of view")
{
    GIVEN {
        PLAYER(SPECIES_XIAOMON) { HP(1); Ability(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_ARESDRAMON) { Ability(ABILITY_POISON_HEAL); };
    } WHEN {
        TURN {MOVE(opponent, MOVE_HEADBUTT);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, opponent);
        MESSAGE("Xiaomon fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
    }
}
