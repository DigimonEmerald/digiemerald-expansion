#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Aftermath damages the attacker by 1/4th of its max HP if fainted by a contact move")
{
    s16 aftermathDamage;

    GIVEN {
        PLAYER(SPECIES_XIAOMON) { HP(1); Ability(ABILITY_AFTERMATH); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {MOVE(opponent, MOVE_TACKLE);}
    } SCENE {
        MESSAGE("The opposing Lopmonx used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("Xiaomon fainted!");
        ABILITY_POPUP(player, ABILITY_AFTERMATH);
        HP_BAR(opponent, captureDamage: &aftermathDamage);
    } THEN {
        EXPECT_EQ(aftermathDamage, opponent->maxHP / 4);
    }
}
