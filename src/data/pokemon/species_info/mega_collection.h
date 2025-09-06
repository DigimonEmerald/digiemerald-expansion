#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen6[] =
{
#endif

#if P_FAMILY_HERCULESKABUTERIMON
    [SPECIES_HERCULESKABUTERIMON] =
    {
        .baseHP        = 145,
        .baseAttack    = 135,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 3,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_HYPER_CUTTER, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("HercuKabumon"),
        .cryId = CRY_HERCULESKABUTERIMON,
        .natDexNum = NATIONAL_DEX_HERCULESKABUTERIMON,
        .categoryName = _("Beetle"),
        .height = 40,
        .weight = 991,
        .description = COMPOUND_STRING(
            "HerculesKabuterimon is the combined form\n"
            "of the data that makes up the Kabuterimon\n"
            "and Kuwagamon species. It has regained the\n"
            "flying ability that MegaKabuterimon lacked"),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Herculeskabuterimon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Herculeskabuterimon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Herculeskabuterimon,
        .shinyPalette = gMonShinyPalette_Herculeskabuterimon,
        .iconSprite = gMonIcon_Herculeskabuterimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Herculeskabuterimon)
        OVERWORLD(
            sPicTable_Herculeskabuterimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Herculeskabuterimon,
            gShinyOverworldPalette_Herculeskabuterimon
        )
        .levelUpLearnset = sHerculeskabuterimonLevelUpLearnset,
        .teachableLearnset = sHerculeskabuterimonTeachableLearnset,
        .eggMoveLearnset = sHerculeskabuterimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MAGNADRAMON}),
    },

    [SPECIES_MAGNADRAMON] =
    {
        .baseHP        = 135,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 115,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 3,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNAWARE, ABILITY_NONE, ABILITY_NONE }, // Great Purge
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Magnadramon"),
        .cryId = CRY_MAGNADRAMON,
        .natDexNum = NATIONAL_DEX_MAGNADRAMON,
        .categoryName = _("God Beast"),
        .height = 64,
        .weight = 1723,
        .description = COMPOUND_STRING(
            "Very few reports of Magnadramon as\n"
            "it only appears when a great evil threatens\n"
            "the Digital World. It lays waste to all\n"
            "evil when it is called upon."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnadramon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Magnadramon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Magnadramon,
        .shinyPalette = gMonShinyPalette_Magnadramon,
        .iconSprite = gMonIcon_Magnadramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Magnadramon)
        OVERWORLD(
            sPicTable_Magnadramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Magnadramon,
            gShinyOverworldPalette_Magnadramon
        )
        .levelUpLearnset = sMagnadramonLevelUpLearnset,
        .teachableLearnset = sMagnadramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MAGNAMON}),
    },

    [SPECIES_MAGNAMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 110,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Defense = 3,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE }, // Royal Knight
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Magnamon"),
        .cryId = CRY_MAGNAMON,
        .natDexNum = NATIONAL_DEX_MAGNAMON,
        .categoryName = _("Royal Knight"),
        .height = 23,
        .weight = 1742,
        .description = COMPOUND_STRING(
            "The armour that Magnamon wears is made\n"
            "of Chrome Digizoid, one of the strongest\n"
            "metals in the Digital World. It is a\n"
            "member of the Royal Knights."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Magnamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Magnamon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Magnamon,
        .shinyPalette = gMonShinyPalette_Magnamon,
        .iconSprite = gMonIcon_Magnamon,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magnamon)
        OVERWORLD(
            sPicTable_Magnamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Magnamon,
            gShinyOverworldPalette_Magnamon
        )
        .levelUpLearnset = sMagnamonLevelUpLearnset,
        .teachableLearnset = sMagnamonTeachableLearnset,
    },
#endif //P_FAMILY_HERCULESKABUTERIMON

#if P_FAMILY_WARGREYMON
    [SPECIES_WARGREYMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 105,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Attack = 3,
        .evYield_Speed = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE }, // Brave-Heart
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("WarGreymon"),
        .cryId = CRY_WARGREYMON,
        .natDexNum = NATIONAL_DEX_WARGREYMON,
        .categoryName = _("Warrior"),
        .height = 31,
        .weight = 1834,
        .description = COMPOUND_STRING(
            "Considered the ultimate form of the\n"
            "Greymon-spcies, WarGreymon gives up its\n"
            "gigantic size in return for incredible\n"
            "speed and compressed power."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wargreymon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wargreymon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Wargreymon,
        .shinyPalette = gMonShinyPalette_Wargreymon,
        .iconSprite = gMonIcon_Wargreymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 14, SHADOW_SIZE_L)
        FOOTPRINT(Wargreymon)
        OVERWORLD(
            sPicTable_Wargreymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wargreymon,
            gShinyOverworldPalette_Wargreymon
        )
        .levelUpLearnset = sWargreymonLevelUpLearnset,
        .teachableLearnset = sWargreymonTeachableLearnset,
        .eggMoveLearnset = sWargreymonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_METALGARURUMON}),
    },

    [SPECIES_METALGARURUMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 130,
        .baseSpAttack  = 100,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Defense = 1,
        .evYield_Speed = 4,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE }, // Friendly Soul
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("MtlGarurumon"),
        .cryId = CRY_METALGARURUMON,
        .natDexNum = NATIONAL_DEX_METALGARURUMON,
        .categoryName = _("Cyborg Wolf"),
        .height = 20,
        .weight = 1201,
        .description = COMPOUND_STRING(
            "After undergoing metallization, it has\n"
            "retained its natural abilities. It has\n"
            "numerous weapons such as lasers and\n"
            "blades concealed on its body."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metalgarurumon,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Metalgarurumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Metalgarurumon,
        .shinyPalette = gMonShinyPalette_Metalgarurumon,
        .iconSprite = gMonIcon_Metalgarurumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Metalgarurumon)
        OVERWORLD(
            sPicTable_Metalgarurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Metalgarurumon,
            gShinyOverworldPalette_Metalgarurumon
        )
        .levelUpLearnset = sMetalgarurumonLevelUpLearnset,
        .teachableLearnset = sMetalgarurumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_OMNIMON}),
    },

    [SPECIES_OMNIMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ICE),
        .attribute = TYPE_VACCINE, 
        .catchRate = 55,
        .expYield = 250,
        .evYield_Attack = 3,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN }, // Royal Knight, Holy Royal Knight
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Omnimon"),
        .cryId = CRY_OMNIMON,
        .natDexNum = NATIONAL_DEX_OMNIMON,
        .categoryName = _("Royal Knight"),
        .height = 69,
        .weight = 3953,
        .description = COMPOUND_STRING(
            "Omnimon is a member of the royal knights\n"
            "whos duty is protect Yggdrasills justice.\n"
            "Its use the powers of both WarGreymon\n"
            "and MetalGarurumon to fulfil this duty."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Omnimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Omnimon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Omnimon,
        .shinyPalette = gMonShinyPalette_Omnimon,
        .iconSprite = gMonIcon_Omnimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Omnimon)
        OVERWORLD(
            sPicTable_Omnimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Omnimon,
            gShinyOverworldPalette_Omnimon
        )
        .levelUpLearnset = sOmnimonLevelUpLearnset,
        .teachableLearnset = sOmnimonTeachableLearnset,
    },
#endif //P_FAMILY_WARGREYMON

#if P_FAMILY_CRESGARURUMON
    [SPECIES_CRESGARURUMON] =
    {
        .baseHP        = 105,
        .baseAttack    = 145,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Attack = 4,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SNIPER, ABILITY_SHARPNESS, ABILITY_REFRIGERATE}, // Moonmadness
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("CresGarurmon"),
        .cryId = CRY_CRESGARURUMON,
        .natDexNum = NATIONAL_DEX_CRESGARURUMON,
        .categoryName = _("Moon Wolf"),
        .height = 34,
        .weight = 2174,
        .description = COMPOUND_STRING(
            "Unlike MetalGarurumon, CresGarurumon retains\n"
            "its bipedal stature letting it stay nimble.\n"
            "Its armour is made up  of Gold Digizoid\n"
            "letting it deflect many attacks."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cresgarurumon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Cresgarurumon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Cresgarurumon,
        .shinyPalette = gMonShinyPalette_Cresgarurumon,
        .iconSprite = gMonIcon_Cresgarurumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 7, SHADOW_SIZE_M)
        FOOTPRINT(Cresgarurumon)
        OVERWORLD(
            sPicTable_Cresgarurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cresgarurumon,
            gShinyOverworldPalette_Cresgarurumon
        )
        .levelUpLearnset = sCresgarurumonLevelUpLearnset,
        .teachableLearnset = sCresgarurumonTeachableLearnset,
        .eggMoveLearnset = sCresgarurumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BLITZGREYMON}),
    },

    [SPECIES_BLITZGREYMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_TRANSISTOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("BlitzGreymon"),
        .cryId = CRY_BLITZGREYMON,
        .natDexNum = NATIONAL_DEX_BLITZGREYMON,
        .categoryName = _("Red Thunder"),
        .height = 30,
        .weight = 1809,
        .description = COMPOUND_STRING(
            "Unlike other Mega-level Greymons, BlitzGreymon\n"
            "lessens its reliance on pure strength and\n"
            "arms itself with electric weapons letting\n"
            "it overwhelm opponents with barrages."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blitzgreymon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Blitzgreymon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Blitzgreymon,
        .shinyPalette = gMonShinyPalette_Blitzgreymon,
        .iconSprite = gMonIcon_Blitzgreymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blitzgreymon)
        OVERWORLD(
            sPicTable_Blitzgreymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blitzgreymon,
            gShinyOverworldPalette_Blitzgreymon
        )
        .levelUpLearnset = sBlitzgreymonLevelUpLearnset,
        .teachableLearnset = sBlitzgreymonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BIOSUPINOMON}),
    },

    [SPECIES_BIOSUPINOMON] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 165,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_POISON, TYPE_STEEL),
        .attribute = TYPE_VIRUS, 
        .catchRate = 55,
        .expYield = 250,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE }, // Bio-Hybrid DNA
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("BioSupinomon"),
        .cryId = CRY_BIOSUPINOMON,
        .natDexNum = NATIONAL_DEX_BIOSUPINOMON,
        .categoryName = _("Bio-Hybrid"),
        .height = 180,
        .weight = 8644,
        .description = COMPOUND_STRING(
            "A fiercely loyal Digimon, BioSupinomon\n"
            "have a tendency to become infatuated with\n"
            "someone or something. It is likely the\n"
            "fusion of Human and Supinomon data."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biosupinomon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Biosupinomon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Biosupinomon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Biosupinomon,
        .shinyPalette = gMonShinyPalette_Biosupinomon,
        .iconSprite = gMonIcon_Biosupinomon,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Biosupinomon)
        OVERWORLD(
            sPicTable_Biosupinomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Biosupinomon,
            gShinyOverworldPalette_Biosupinomon
        )
        .levelUpLearnset = sBiosupinomonLevelUpLearnset,
        .teachableLearnset = sBiosupinomonTeachableLearnset,
        .formSpeciesIdTable = sBiosupinomonFormSpeciesIdTable,
    },

    [SPECIES_BIOSUPINOMON_BATTLE_BOND] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_BOND, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Biosupinomon"),
        .cryId = CRY_BIOSUPINOMON,
        .natDexNum = NATIONAL_DEX_BIOSUPINOMON,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gBiosupinomonPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biosupinomon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames =sAnims_Biosupinomon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Biosupinomon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Biosupinomon,
        .shinyPalette = gMonShinyPalette_Biosupinomon,
        .iconSprite = gMonIcon_Biosupinomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Biosupinomon)
        OVERWORLD(
            sPicTable_Biosupinomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Biosupinomon,
            gShinyOverworldPalette_Biosupinomon
        )
        .levelUpLearnset = sBiosupinomonLevelUpLearnset,
        .teachableLearnset = sBiosupinomonTeachableLearnset,
        .formSpeciesIdTable = sBiosupinomonFormSpeciesIdTable,
        .formChangeTable = sBiosupinomonBattleBondFormChangeTable,
    },

    [SPECIES_ROSEMON_BURSTMODE] =
    {
        .baseHP        = 135,
        .baseAttack    = 140,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 2,
        .evYield_Attack = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_FAIRY_AURA, ABILITY_SEED_SOWER },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Rosemon"),
        .cryId = CRY_BIOSUPINOMON,
        .natDexNum = NATIONAL_DEX_BIOSUPINOMON,
        .categoryName = _("Thorny"),
        .height = 21,
        .weight = 765,
        .description = COMPOUND_STRING(
            "Rosemon Burst Mode is wrapped in an aura\n"
            "of love and beauty due to the process of\n"
            "Burst Evolution. It takes down its foes\n"
            "by lightly wrapping them with its whip "),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rosemon_burstmode,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rosemon_burstmode,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Rosemon_burstmode,
        .shinyPalette = gMonShinyPalette_Rosemon_burstmode,
        .iconSprite = gMonIcon_Rosemon_burstmode,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Biosupinomon)
        .levelUpLearnset = sRosemon_burstmodeLevelUpLearnset,
        .teachableLearnset = sBiosupinomonTeachableLearnset,
        .formSpeciesIdTable = sBiosupinomonFormSpeciesIdTable,
        .formChangeTable = sBiosupinomonBattleBondFormChangeTable,
    },
#endif //P_FAMILY_CRESGARURUMON

#if P_FAMILY_ROSEMON
    [SPECIES_ROSEMON] =
    {
        .baseHP        = 125,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_DATA,
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 2,
        .evYield_Attack = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_TANGLING_HAIR, ABILITY_SEED_SOWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rosemon"),
        .cryId = CRY_ROSEMON,
        .natDexNum = NATIONAL_DEX_ROSEMON,
        .categoryName = _("Flower Queen"),
        .height = 21,
        .weight = 699,
        .description = COMPOUND_STRING(
            "Having the appearance of a beautiful\n"
            "woman, Rosemon desires to retain that\n"
            "beauty at all costs. Any who make the\n"
            "mistake of underestimating it will pay."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rosemon,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Rosemon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Rosemon,
        .shinyPalette = gMonShinyPalette_Rosemon,
        .iconSprite = gMonIcon_Rosemon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(6, 2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rosemon)
        OVERWORLD(
            sPicTable_Rosemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rosemon,
            gShinyOverworldPalette_Rosemon
        )
        .levelUpLearnset = sRosemonLevelUpLearnset,
        .teachableLearnset = sRosemonTeachableLearnset,
        .eggMoveLearnset = sRosemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_DINOREXMON}),
    },

    [SPECIES_DINOREXMON] =
    {
        .baseHP        = 150,
        .baseAttack    = 150,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 3,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUSTLE, ABILITY_SHEER_FORCE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dinorexmon"),
        .cryId = CRY_DINOREXMON,
        .natDexNum = NATIONAL_DEX_DINOREXMON,
        .categoryName = _("Terror King"),
        .height = 150,
        .weight = 6474,
        .description = COMPOUND_STRING(
            "Dinorexmon has earned the title of 'King\n"
            "of Terror' due to its unparalleled\n"
            "ferocious nature. It kills in an\n"
            "exceedingly brutal manner."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dinorexmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Dinorexmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Dinorexmon,
        .shinyPalette = gMonShinyPalette_Dinorexmon,
        .iconSprite = gMonIcon_Dinorexmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dinorexmon)
        OVERWORLD(
            sPicTable_Dinorexmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dinorexmon,
            gShinyOverworldPalette_Dinorexmon
        )
        .levelUpLearnset = sDinorexmonLevelUpLearnset,
        .teachableLearnset = sDinorexmonTeachableLearnset,
    },
#endif //P_FAMILY_ROSEMON

#if P_FAMILY_DINOMON
    [SPECIES_DINOMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_SpAttack = 4,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_WELL_BAKED_BODY, ABILITY_DESOLATE_LAND },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dinomon"),
        .cryId = CRY_DINOMON,
        .natDexNum = NATIONAL_DEX_DINOMON,
        .categoryName = _("Dinosaur"),
        .height = 352,
        .weight = 8554,
        .description = COMPOUND_STRING(
            "Considered the pinnacle of Dinosaur\n"
            "Digimon, Dinomon boasts astounding\n"
            "stamina and power. It burns so hot\n"
            "that it uses the ocean to cool itself."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dinomon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Dinomon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dinomon,
        .shinyPalette = gMonShinyPalette_Dinomon,
        .iconSprite = gMonIcon_Dinomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dinomon)
        OVERWORLD(
            sPicTable_Dinomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dinomon,
            gShinyOverworldPalette_Dinomon
        )
        .levelUpLearnset = sDinomonLevelUpLearnset,
        .teachableLearnset = sDinomonTeachableLearnset,
        .eggMoveLearnset = sDinomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_MARINEANGEMON}),
    },

    [SPECIES_MARINEANGEMON] =
    {
        .baseHP        = 160,
        .baseAttack    = 70,
        .baseDefense   = 75,
        .baseSpeed     = 120,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_HYDRATION, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("MarinAngemon"),
        .cryId = CRY_MARINEANGEMON,
        .natDexNum = NATIONAL_DEX_MARINEANGEMON,
        .categoryName = _("Aqua Fairy"),
        .height = 5,
        .weight = 112,
        .description = COMPOUND_STRING(
            "It is believed MarineAgngemon has some kind\n"
            "of connection to Gatomon as they both have\n"
            "a Holy Ring accesory. It has no relation\n"
            "to the Angemon-species."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Marineangemon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Marineangemon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Marineangemon,
        .shinyPalette = gMonShinyPalette_Marineangemon,
        .iconSprite = gMonIcon_Marineangemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Marineangemon)
        OVERWORLD(
            sPicTable_Marineangemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Marineangemon,
            gShinyOverworldPalette_Marineangemon
        )
        .levelUpLearnset = sMarineangemonLevelUpLearnset,
        .teachableLearnset = sMarineangemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_METALETEMON}),
    },

    [SPECIES_METALETEMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 55,
        .expYield = 250,
        .evYield_Attack = 3,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_STURDY, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("MetalEtemon"),
        .cryId = CRY_METALETEMON,
        .natDexNum = NATIONAL_DEX_METALETEMON,
        .categoryName = _("King"),
        .height = 20,
        .weight = 1385,
        .description = COMPOUND_STRING(
            "In its pursuit of the strong, it suffered\n"
            "under many harsh battles. These battles\n"
            "forced it to study its weaknesses. That\n"
            "is why MetalEtemon metallized itself."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metaletemon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Metaletemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Metaletemon,
        .shinyPalette = gMonShinyPalette_Metaletemon,
        .iconSprite = gMonIcon_Metaletemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Metaletemon)
        OVERWORLD(
            sPicTable_Metaletemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Metaletemon,
            gShinyOverworldPalette_Metaletemon
        )
        .levelUpLearnset = sMetaletemonLevelUpLearnset,
        .teachableLearnset = sMetaletemonTeachableLearnset,
    },
#endif //P_FAMILY_DINOMON

#if P_FAMILY_METALSEADRAMON
#define MTLSEADRAMON_SPECIES_INFO(evolution)                                                  \
    {                                                                                       \
        .baseHP        = 120,                                                                \
        .baseAttack    = 95,                                                                \
        .baseDefense   = 95,                                                                \
        .baseSpeed     = 85,                                                                \
        .baseSpAttack  = 105,                                                                \
        .baseSpDefense = 125,                                                                \
        .types = MON_TYPES(TYPE_STEEL, TYPE_WATER),                                                       \
        .attribute = TYPE_DATA,                                                            \
        .catchRate = 55,                                                                    \
        .expYield = 250,                                                                    \
        .evYield_HP = 2,                                                               \
        .evYield_SpAttack = 1,                                                               \
        .evYield_SpDefense = 3,                                                               \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_SLOW,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_FULL_METAL_BODY, ABILITY_WATER_VEIL, ABILITY_STEELWORKER },  \
        .bodyColor = BODY_COLOR_YELLOW,                                                      \
        .speciesName = _("MtlSeadramon"),                                                     \
        .cryId = CRY_METALSEADRAMON,                                                            \
        .natDexNum = NATIONAL_DEX_METALSEADRAMON,                                               \
        .categoryName = _("Serpent"),                                                   \
        .height = 175,                                                                        \
        .weight = 4894,                                                                       \
        .description = gMetalseadramonPokedexText,                                              \
        .pokemonScale = 530,                                                                \
        .pokemonOffset = 13,                                                                \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Metalseadramon,                                                \
        .frontPicSize = MON_COORDS_SIZE(32, 48),                                            \
        .frontPicYOffset = 13,                                                              \
        .frontAnimFrames = sAnims_Metalseadramon,                                               \
        .frontAnimId = ANIM_V_STRETCH,                                                      \
        .backPic = gMonBackPic_Metalseadramon,                                                  \
        .backPicSize = MON_COORDS_SIZE(40, 56),                                             \
        .backPicYOffset = 12,                                                               \
        .backAnimId = BACK_ANIM_H_SLIDE,                                                    \
        .palette = gMonPalette_Metalseadramon,                                                  \
        .shinyPalette = gMonShinyPalette_Metalseadramon,                                        \
        .iconSprite = gMonIcon_Metalseadramon,                                                  \
        .iconPalIndex = 1,                                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,                                             \
        SHADOW(1, 1, SHADOW_SIZE_S)                                                         \
        FOOTPRINT(Metalseadramon)                                                               \
        OVERWORLD(                                                                          \
            sPicTable_Metalseadramon,                                                           \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Metalseadramon,                                                   \
            gShinyOverworldPalette_Metalseadramon                                               \
        )                                                                                   \
        .tmIlliterate = TRUE,                                                               \
        .levelUpLearnset = sMetalseadramonLevelUpLearnset,                                      \
        .teachableLearnset = sMetalseadramonTeachableLearnset,                                  \
        .eggMoveLearnset = sMetalseadramonEggMoveLearnset,                                      \
        .formSpeciesIdTable = sMetalseadramonFormSpeciesIdTable,                                \
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_PUKUMON_##evolution}),                \
    }                                                                                       \

    [SPECIES_METALSEADRAMON_ICY_SNOW]    = MTLSEADRAMON_SPECIES_INFO(ICY_SNOW),
    [SPECIES_METALSEADRAMON_POLAR]       = MTLSEADRAMON_SPECIES_INFO(POLAR),
    [SPECIES_METALSEADRAMON_TUNDRA]      = MTLSEADRAMON_SPECIES_INFO(TUNDRA),
    [SPECIES_METALSEADRAMON_CONTINENTAL] = MTLSEADRAMON_SPECIES_INFO(CONTINENTAL),
    [SPECIES_METALSEADRAMON_GARDEN]      = MTLSEADRAMON_SPECIES_INFO(GARDEN),
    [SPECIES_METALSEADRAMON_ELEGANT]     = MTLSEADRAMON_SPECIES_INFO(ELEGANT),
    [SPECIES_METALSEADRAMON_MEADOW]      = MTLSEADRAMON_SPECIES_INFO(MEADOW),
    [SPECIES_METALSEADRAMON_MODERN]      = MTLSEADRAMON_SPECIES_INFO(MODERN),
    [SPECIES_METALSEADRAMON_MARINE]      = MTLSEADRAMON_SPECIES_INFO(MARINE),
    [SPECIES_METALSEADRAMON_ARCHIPELAGO] = MTLSEADRAMON_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_METALSEADRAMON_HIGH_PLAINS] = MTLSEADRAMON_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_METALSEADRAMON_SANDSTORM]   = MTLSEADRAMON_SPECIES_INFO(SANDSTORM),
    [SPECIES_METALSEADRAMON_RIVER]       = MTLSEADRAMON_SPECIES_INFO(RIVER),
    [SPECIES_METALSEADRAMON_MONSOON]     = MTLSEADRAMON_SPECIES_INFO(MONSOON),
    [SPECIES_METALSEADRAMON_SAVANNA]     = MTLSEADRAMON_SPECIES_INFO(SAVANNA),
    [SPECIES_METALSEADRAMON_SUN]         = MTLSEADRAMON_SPECIES_INFO(SUN),
    [SPECIES_METALSEADRAMON_OCEAN]       = MTLSEADRAMON_SPECIES_INFO(OCEAN),
    [SPECIES_METALSEADRAMON_JUNGLE]      = MTLSEADRAMON_SPECIES_INFO(JUNGLE),
    [SPECIES_METALSEADRAMON_FANCY]       = MTLSEADRAMON_SPECIES_INFO(FANCY),
    [SPECIES_METALSEADRAMON_POKEBALL]    = MTLSEADRAMON_SPECIES_INFO(POKEBALL),

#define PUKUMON_SPECIES_INFO(evolution)                                          \
    {                                                                           \
        .baseHP        = 110,                                                    \
        .baseAttack    = 150,                                                    \
        .baseDefense   = 130,                                                    \
        .baseSpeed     = 95,                                                    \
        .baseSpAttack  = 70,                                                    \
        .baseSpDefense = 70,                                                    \
        .types = MON_TYPES(TYPE_WATER, TYPE_FIGHTING),                                           \
        .attribute = TYPE_VIRUS,                                                            \
        .catchRate = 55,                                                                    \
        .expYield = 250,                                                                    \
        .evYield_HP = 1,                                                   \
        .evYield_Attack = 3,                                                   \
        .evYield_Defense = 2,                                                   \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                             \
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_SCRAPPY, ABILITY_PUNK_ROCK }, \
        .bodyColor = BODY_COLOR_BLUE,                                          \
        .speciesName = _("Pukumon"),                                             \
        .cryId = CRY_PUKUMON,                                                    \
        .natDexNum = NATIONAL_DEX_PUKUMON,                                       \
        .categoryName = _("British Punk"),                                       \
        .height = 40,                                                            \
        .weight = 1463,                                                           \
        .description = gPukumonPokedexText,                                      \
        .pokemonScale = 530,                                                    \
        .pokemonOffset = 13,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Pukumon,                                        \
        .frontPicSize = MON_COORDS_SIZE(40, 48),                                \
        .frontPicYOffset = 11,                                                  \
        .frontAnimFrames = sAnims_Pukumon,                                       \
        .frontAnimId = ANIM_V_SHAKE,                                            \
        .backPic = gMonBackPic_Pukumon,                                          \
        .backPicSize = MON_COORDS_SIZE(48, 48),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_H_VIBRATE,                                      \
        .palette = gMonPalette_Pukumon,                                          \
        .shinyPalette = gMonShinyPalette_Pukumon,                                \
        .iconSprite = gMonIcon_Pukumon,                                          \
        .iconPalIndex = 0,                                                      \
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,                               \
        SHADOW(0, 2, SHADOW_SIZE_M)                                             \
        FOOTPRINT(Pukumon)                                                       \
        OVERWORLD(                                                              \
            sPicTable_Pukumon,                                                   \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Pukumon,                                           \
            gShinyOverworldPalette_Pukumon                                       \
        )                                                                       \
        .tmIlliterate = TRUE,                                                   \
        .levelUpLearnset = sPukumonLevelUpLearnset,                              \
        .teachableLearnset = sPukumonTeachableLearnset,                          \
        .formSpeciesIdTable = sPukumonFormSpeciesIdTable,                        \
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_SABERLEOMON_##evolution}), \
    }

    [SPECIES_PUKUMON_ICY_SNOW]    = PUKUMON_SPECIES_INFO(ICY_SNOW),
    [SPECIES_PUKUMON_POLAR]       = PUKUMON_SPECIES_INFO(POLAR),
    [SPECIES_PUKUMON_TUNDRA]      = PUKUMON_SPECIES_INFO(TUNDRA),
    [SPECIES_PUKUMON_CONTINENTAL] = PUKUMON_SPECIES_INFO(CONTINENTAL),
    [SPECIES_PUKUMON_GARDEN]      = PUKUMON_SPECIES_INFO(GARDEN),
    [SPECIES_PUKUMON_ELEGANT]     = PUKUMON_SPECIES_INFO(ELEGANT),
    [SPECIES_PUKUMON_MEADOW]      = PUKUMON_SPECIES_INFO(MEADOW),
    [SPECIES_PUKUMON_MODERN]      = PUKUMON_SPECIES_INFO(MODERN),
    [SPECIES_PUKUMON_MARINE]      = PUKUMON_SPECIES_INFO(MARINE),
    [SPECIES_PUKUMON_ARCHIPELAGO] = PUKUMON_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_PUKUMON_HIGH_PLAINS] = PUKUMON_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_PUKUMON_SANDSTORM]   = PUKUMON_SPECIES_INFO(SANDSTORM),
    [SPECIES_PUKUMON_RIVER]       = PUKUMON_SPECIES_INFO(RIVER),
    [SPECIES_PUKUMON_MONSOON]     = PUKUMON_SPECIES_INFO(MONSOON),
    [SPECIES_PUKUMON_SAVANNA]     = PUKUMON_SPECIES_INFO(SAVANNA),
    [SPECIES_PUKUMON_SUN]         = PUKUMON_SPECIES_INFO(SUN),
    [SPECIES_PUKUMON_OCEAN]       = PUKUMON_SPECIES_INFO(OCEAN),
    [SPECIES_PUKUMON_JUNGLE]      = PUKUMON_SPECIES_INFO(JUNGLE),
    [SPECIES_PUKUMON_FANCY]       = PUKUMON_SPECIES_INFO(FANCY),
    [SPECIES_PUKUMON_POKEBALL]   = PUKUMON_SPECIES_INFO(POKEBALL),

#define SABERLEOMON_MISC_INFO(form, color, iconPal)                                            \
        .baseHP        = 110,                                                                \
        .baseAttack    = 140,                                                                \
        .baseDefense   = 90,                                                                \
        .baseSpeed     = 130,                                                                \
        .baseSpAttack  = 70,                                                                \
        .baseSpDefense = 90,                                                                \
        .types = MON_TYPES(TYPE_NORMAL),                                          \
        .attribute = TYPE_DATA,                                                            \
        .catchRate = 55,                                                                    \
        .expYield = 250,                                                                    \
        .evYield_HP = 1,                                                                    \
        .evYield_Attack = 3,                                                                 \
        .evYield_Speed = 2,                                                              \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_SLOW,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_NORMALIZE, ABILITY_JUSTIFIED, ABILITY_STRONG_JAW },  \
        .bodyColor = BODY_COLOR_YELLOW,                                                                 \
        .speciesName = _("SaberLeomon"),                                                       \
        .cryId = CRY_SABERLEOMON,                                                              \
        .natDexNum = NATIONAL_DEX_SABERLEOMON,                                                 \
        .categoryName = _("Sabertooth"),                                                         \
        .height = 37,                                                                       \
        .weight = 1796,                                                                      \
        .pokemonScale = 282,                                                                \
        .pokemonOffset = 4,                                                                 \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Saberleomon ##form,                                           \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                            \
        .frontPicYOffset = 0,                                                               \
        .frontAnimFrames = sAnims_Saberleomon,                                                 \
        .frontAnimId = ANIM_ZIGZAG_SLOW,                                                    \
        .enemyMonElevation = 9,                                                             \
        .backPic = gMonBackPic_Saberleomon ##form,                                             \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                             \
        .backPicYOffset = 0,                                                                \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                                    \
        .palette = gMonPalette_Saberleomon ##form,                                             \
        .shinyPalette = gMonShinyPalette_Saberleomon ##form,                                   \
        .iconSprite = gMonIcon_Saberleomon ##form,                                             \
        .iconPalIndex = 2,                                                            \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                             \
        SHADOW(0, 20, SHADOW_SIZE_M)                                                        \
        FOOTPRINT(Saberleomon)                                                                 \
        OVERWORLD(                                                                          \
            sPicTable_Saberleomon ##form,                                                      \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Saberleomon ##form,                                              \
            gShinyOverworldPalette_Saberleomon ##form                                          \
        )                                                                                   \
        .levelUpLearnset = sSaberleomonLevelUpLearnset,                                        \
        .teachableLearnset = sSaberleomonTeachableLearnset,                                    \
        .formSpeciesIdTable = sSaberleomonFormSpeciesIdTable

    [SPECIES_SABERLEOMON_ICY_SNOW] =
    {
        SABERLEOMON_MISC_INFO(IcySnow, BODY_COLOR_WHITE, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_POLAR] =
    {
        SABERLEOMON_MISC_INFO(Polar, BODY_COLOR_BLUE, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_TUNDRA] =
    {
        SABERLEOMON_MISC_INFO(Tundra, BODY_COLOR_BLUE, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_CONTINENTAL] =
    {
        SABERLEOMON_MISC_INFO(Continental, BODY_COLOR_YELLOW, 2),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_GARDEN] =
    {
        SABERLEOMON_MISC_INFO(Garden, BODY_COLOR_GREEN, 1),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_ELEGANT] =
    {
        SABERLEOMON_MISC_INFO(Elegant, BODY_COLOR_PURPLE, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_MEADOW] =
    {
        SABERLEOMON_MISC_INFO(Meadow, BODY_COLOR_PINK, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_MODERN] =
    {
        SABERLEOMON_MISC_INFO(Modern, BODY_COLOR_RED, 2),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_MARINE] =
    {
        SABERLEOMON_MISC_INFO(Marine, BODY_COLOR_BLUE, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_ARCHIPELAGO] =
    {
        SABERLEOMON_MISC_INFO(Archipelago, BODY_COLOR_BROWN, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_HIGH_PLAINS] =
    {
        SABERLEOMON_MISC_INFO(HighPlains, BODY_COLOR_BROWN, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_SANDSTORM] =
    {
        SABERLEOMON_MISC_INFO(Sandstorm, BODY_COLOR_BROWN, 1),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_RIVER] =
    {
        SABERLEOMON_MISC_INFO(River, BODY_COLOR_BROWN, 2),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_MONSOON] =
    {
        SABERLEOMON_MISC_INFO(Monsoon, BODY_COLOR_GRAY, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_SAVANNA] =
    {
        SABERLEOMON_MISC_INFO(Savanna, BODY_COLOR_GREEN, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_SUN] =
    {
        SABERLEOMON_MISC_INFO(Sun, BODY_COLOR_RED, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_OCEAN] =
    {
        SABERLEOMON_MISC_INFO(Ocean, BODY_COLOR_RED, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_JUNGLE] =
    {
        SABERLEOMON_MISC_INFO(Jungle, BODY_COLOR_GREEN, 0),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_FANCY] =
    {
        SABERLEOMON_MISC_INFO(Fancy, BODY_COLOR_PINK, 1),
        .description = gSaberLeomonPokedexText,
    },
    [SPECIES_SABERLEOMON_POKEBALL] =
    {
        SABERLEOMON_MISC_INFO(PokeBall, BODY_COLOR_RED, 2),
        .description = gSaberLeomonPokedexText,
    },
#endif //P_FAMILY_METALSEADRAMON

#if P_FAMILY_APOCALYMON
    [SPECIES_APOCALYMON] =
    {
        .baseHP        = 160,
        .baseAttack    = 95,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 95,
        .baseSpDefense = 145,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_UKNOWN,   
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 4,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_NONE }, // DEATH EVOLUTION
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Apocalymon"),
        .cryId = CRY_APOCALYMON,
        .natDexNum = NATIONAL_DEX_APOCALYMON,
        .categoryName = _("Negative"),
        .height = 850,
        .weight = 10634,
        .description = COMPOUND_STRING(
            "Formed from negative thoughts, Apocalymon\n"
            "seeks to purge the Digital World and\n"
            "everything to nothingness. Some believe\n"
            "that Apocalymon isn't even a Digimon."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Apocalymon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Apocalymon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Apocalymon,
        .shinyPalette = gMonShinyPalette_Apocalymon,
        .iconSprite = gMonIcon_Apocalymon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Apocalymon)
        OVERWORLD(
            sPicTable_Apocalymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Apocalymon,
            gShinyOverworldPalette_Apocalymon
        )
        .levelUpLearnset = sApocalymonLevelUpLearnset,
        .teachableLearnset = sApocalymonTeachableLearnset,
        .eggMoveLearnset = sApocalymonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_BABAMON}),
    },

    [SPECIES_BABAMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .attribute = TYPE_VACCINE,   
        .catchRate = 55,
        .expYield = 250,
        .evYield_HP = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SCREEN_CLEANER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Babamon"),
        .cryId = CRY_BABAMON,
        .natDexNum = NATIONAL_DEX_BABAMON,
        .categoryName = _("Old"),
        .height = 13,
        .weight = 611,
        .description = COMPOUND_STRING(
            "Babamons are rumoured to be cranky\n"
            "because they are Rosemon who got cursed.\n"
            "Despite its frail appearance, it holds\n"
            "considerably power."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Babamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Babamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Babamon,
        .shinyPalette = gMonShinyPalette_Babamon,
        .iconSprite = gMonIcon_Babamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BabamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_BabamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .iconSpriteFemale = gMonIcon_BabamonF,
        .iconPalIndexFemale = 2,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Babamon)
        OVERWORLD(
            sPicTable_Babamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Babamon,
            gShinyOverworldPalette_Babamon
        )
        OVERWORLD_FEMALE(
            sPicTable_BabamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBabamonLevelUpLearnset,
        .teachableLearnset = sBabamonTeachableLearnset,
    },
#endif //P_FAMILY_APOCALYMON

#if P_FAMILY_FLABEBE
#define FLABEBE_MISC_INFO(Form, FORM, iconPal)                                  \
        .baseHP        = 44,                                                    \
        .baseAttack    = 38,                                                    \
        .baseDefense   = 39,                                                    \
        .baseSpeed     = 42,                                                    \
        .baseSpAttack  = 61,                                                    \
        .baseSpDefense = 79,                                                    \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 225,                                                       \
        .expYield = 61,                                                         \
        .evYield_SpDefense = 1,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Flabébé"),                                            \
        .cryId = CRY_FLABEBE,                                                   \
        .natDexNum = NATIONAL_DEX_FLABEBE,                                      \
        .categoryName = _("Single Bloom"),                                      \
        .height = 1,                                                            \
        .weight = 1,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Flabebe,                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 56),                                \
        .frontPicYOffset = 6,                                                   \
        .frontAnimFrames = sAnims_Flabebe,                                      \
        .frontAnimId = ANIM_H_SLIDE_SLOW,                                       \
        .enemyMonElevation = 6,                                                 \
        .backPic = gMonBackPic_Flabebe,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 40),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Flabebe##Form,                                   \
        .shinyPalette = gMonShinyPalette_Flabebe##Form,                         \
        .iconSprite = gMonIcon_Flabebe##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(0, 11, SHADOW_SIZE_S)                                            \
        FOOTPRINT(Flabebe)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Flabebe##Form,                                            \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Flabebe##Form,                                    \
            gShinyOverworldPalette_Flabebe##Form                                \
        )                                                                       \
        .levelUpLearnset = sFlabebeLevelUpLearnset,                             \
        .teachableLearnset = sFlabebeTeachableLearnset,                         \
        .eggMoveLearnset = sFlabebeEggMoveLearnset,                             \
        .formSpeciesIdTable = sFlabebeFormSpeciesIdTable,                       \
        .evolutions = EVOLUTION({EVO_LEVEL, 19, SPECIES_FLOETTE_ ##FORM})

    [SPECIES_FLABEBE_RED] =
    {
        FLABEBE_MISC_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
            "This Flabébé rides a red flower.\n"
            "Immediately after birth, this Pokémon\n"
            "begins flying around in search of a\n"
            "flower it likes."),
    },
    [SPECIES_FLABEBE_YELLOW] =
    {
        FLABEBE_MISC_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
            "It unleashes a variety of moves by\n"
            "drawing forth the power hidden\n"
            "within flowers. This Pokémon is\n"
            "particularly fond of yellow flowers."),
    },
    [SPECIES_FLABEBE_ORANGE] =
    {
        FLABEBE_MISC_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
            "It receives strength from flowers\n"
            "and gives them some of its energy in\n"
            "return. This Pokémon likes orange\n"
            "flowers best of all."),
    },
    [SPECIES_FLABEBE_BLUE]   =
    {
        FLABEBE_MISC_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
            "This Pokémon likes blue flowers\n"
            "best of all. It floats upward using the\n"
            "power emanating from its flower\n"
            "and bobs along lightly through the air."),
    },
    [SPECIES_FLABEBE_WHITE]  =
    {
        FLABEBE_MISC_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
            "When evening falls, it searches out\n"
            "a place blooming with flowers of\n"
            "the same white color as itself, and\n"
            "then it goes to sleep."),
    },

#define FLOETTE_MISC_INFO(form, FORM, iconPal)                                  \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 120,                                                       \
        .evYield_SpDefense = 2,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                       \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Floette"),                                            \
        .natDexNum = NATIONAL_DEX_FLOETTE,                                      \
        .categoryName = _("Single Bloom"),                                      \
        .height = 2,                                                            \
        .weight = 9,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontAnimFrames = sAnims_Floette,                                      \
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,                                     \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Floette ##form,                                  \
        .shinyPalette = gMonShinyPalette_Floette ##form,                        \
        .iconSprite = gMonIcon_Floette##form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                      \
        SHADOW(-3, 12, SHADOW_SIZE_S)                                           \
        FOOTPRINT(Floette)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Floette ##form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Floette ##form,                                   \
            gShinyOverworldPalette_Floette ##form                               \
        )                                                                       \
        .formSpeciesIdTable = sFloetteFormSpeciesIdTable

#define FLOETTE_NORMAL_INFO(form, FORM, iconPal)                                                \
        .baseHP        = 54,                                                                    \
        .baseAttack    = 45,                                                                    \
        .baseDefense   = 47,                                                                    \
        .baseSpeed     = 52,                                                                    \
        .baseSpAttack  = 75,                                                                    \
        .baseSpDefense = 98,                                                                    \
        .expYield = 130,                                                                        \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                                           \
        .cryId = CRY_FLOETTE,                                                                   \
        .frontPic = gMonFrontPic_Floette,                                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 64),                                                \
        .frontPicYOffset = 3,                                                                   \
        .enemyMonElevation = 4,                                                                 \
        .backPic = gMonBackPic_Floette,                                                         \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                 \
        .backPicYOffset = 2,                                                                    \
        .levelUpLearnset = sFloetteLevelUpLearnset,                                             \
        .teachableLearnset = sFloetteTeachableLearnset,                                         \
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_ ##FORM}),\
        FLOETTE_MISC_INFO(form, FORM, iconPal)

    [SPECIES_FLOETTE_RED] =
    {
        FLOETTE_NORMAL_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
            "This Pokémon uses red wavelengths\n"
            "of light to pour its own energy\n"
            "into flowers and draw forth their\n"
            "latent potential."),
    },
    [SPECIES_FLOETTE_YELLOW] =
    {
        FLOETTE_NORMAL_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
            "This Pokémon can draw forth the\n"
            "power hidden within yellow flowers.\n"
            "This power then becomes the moves\n"
            "Floette uses to protect itself."),
    },
    [SPECIES_FLOETTE_ORANGE] =
    {
        FLOETTE_NORMAL_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
            "This Pokémon can draw forth the\n"
            "most power when in sync with orange\n"
            "flowers, compared to flowers of other\n"
            "colors."),
    },
    [SPECIES_FLOETTE_BLUE] =
    {
        FLOETTE_NORMAL_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
            "Whenever this Pokémon finds\n"
            "flowering plants that are withering, it\n"
            "will bring them back to its territory\n"
            "and care for them."),
    },
    [SPECIES_FLOETTE_WHITE] =
    {
        FLOETTE_NORMAL_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
            "If it finds someone messing up a\n"
            "flower bed, it will attack them\n"
            "without mercy. This Floette takes\n"
            "particularly good care of white flowers."),
    },
    [SPECIES_FLOETTE_ETERNAL] =
    {
        FLOETTE_MISC_INFO(Eternal, ETERNAL, 0),
        .baseHP        = 74,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 92,
        .baseSpAttack  = 125,
        .baseSpDefense = 128,
        .expYield = 243,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .cryId = CRY_FLOETTE_ETERNAL,
        .description = COMPOUND_STRING(
            "The flower it's holding can no\n"
            "longer be found blooming anywhere. It's\n"
            "also thought to contain terrifying\n"
            "power."),
        .frontPic = gMonFrontPic_FloetteEternal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_FloetteEternal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
    },

#define FLORGES_MISC_INFO(Form, iconPal)                                        \
        .baseHP        = 78,                                                    \
        .baseAttack    = 65,                                                    \
        .baseDefense   = 68,                                                    \
        .baseSpeed     = 75,                                                    \
        .baseSpAttack  = 112,                                                   \
        .baseSpDefense = 154,                                                   \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 45,                                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 276 : 248,                \
        .evYield_SpDefense = 3,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Florges"),                                            \
        .cryId = CRY_FLORGES,                                                   \
        .natDexNum = NATIONAL_DEX_FLORGES,                                      \
        .categoryName = _("Garden"),                                            \
        .height = 11,                                                           \
        .weight = 100,                                                          \
        .pokemonScale = 320,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Florges,                                       \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                \
        .frontPicYOffset = 0,                                                   \
        .frontAnimFrames = sAnims_Florges,                                      \
        .frontAnimId = ANIM_V_SLIDE_SLOW,                                       \
        .backPic = gMonBackPic_Florges,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                 \
        .backPicYOffset = 9,                                                    \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                            \
        .palette = gMonPalette_Florges##Form,                                   \
        .shinyPalette = gMonShinyPalette_Florges##Form,                         \
        .iconSprite = gMonIcon_Florges##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-5, 15, SHADOW_SIZE_M)                                           \
        FOOTPRINT(Florges)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Florges ##Form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Florges ##Form,                                   \
            gShinyOverworldPalette_Florges ##Form                               \
        )                                                                       \
        .levelUpLearnset = sFlorgesLevelUpLearnset,                             \
        .teachableLearnset = sFlorgesTeachableLearnset,                         \
        .formSpeciesIdTable = sFlorgesFormSpeciesIdTable

    [SPECIES_FLORGES_RED] =
    {
        FLORGES_MISC_INFO(Red, 0),
        .description = COMPOUND_STRING(
            "This Pokémon creates an impressive\n"
            "flower garden in its territory. It\n"
            "draws forth the power of the red\n"
            "flowers around its neck."),
    },
    [SPECIES_FLORGES_YELLOW] =
    {
        FLORGES_MISC_INFO(Yellow, 1),
        .description = COMPOUND_STRING(
            "This Pokémon battles by drawing\n"
            "forth the power of yellow flowers. It\n"
            "ruthlessly punishes anyone who\n"
            "tramples on flowering plants."),
    },
    [SPECIES_FLORGES_ORANGE] =
    {
        FLORGES_MISC_INFO(Orange, 0),
        .description = COMPOUND_STRING(
            "In times long past, castle\n"
            "governors would lovingly raise Florges to\n"
            "care for their castles' exquisite\n"
            "gardens."),
    },
    [SPECIES_FLORGES_BLUE] =
    {
        FLORGES_MISC_INFO(Blue, 0),
        .description = COMPOUND_STRING(
            "Blue pigments were tremendously\n"
            "expensive in the past, so paintings\n"
            "of blue Florges are highly valuable."),
    },
    [SPECIES_FLORGES_WHITE] =
    {
        FLORGES_MISC_INFO(White, 0),
        .description = COMPOUND_STRING(
            "A flower garden made by a white-\n"
            "flowered Florges will be beautifully\n"
            "decorated with flowering plants of\n"
            "many different colors."),
    },
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 62,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skiddo"),
        .cryId = CRY_SKIDDO,
        .natDexNum = NATIONAL_DEX_SKIDDO,
        .categoryName = _("Mount"),
        .height = 9,
        .weight = 310,
        .description = COMPOUND_STRING(
            "If it has sunshine and water, it doesn't\n"
            "need to eat, because it can generate\n"
            "energy from the leaves on its back.\n"
            "It has a placid disposition."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skiddo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skiddo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Skiddo,
        .shinyPalette = gMonShinyPalette_Skiddo,
        .iconSprite = gMonIcon_Skiddo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Skiddo)
        OVERWORLD(
            sPicTable_Skiddo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skiddo,
            gShinyOverworldPalette_Skiddo
        )
        .levelUpLearnset = sSkiddoLevelUpLearnset,
        .teachableLearnset = sSkiddoTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GOGOAT}),
    },

    [SPECIES_GOGOAT] =
    {
        .baseHP        = 123,
        .baseAttack    = 100,
        .baseDefense   = 62,
        .baseSpeed     = 68,
        .baseSpAttack  = 97,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 186,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gogoat"),
        .cryId = CRY_GOGOAT,
        .natDexNum = NATIONAL_DEX_GOGOAT,
        .categoryName = _("Mount"),
        .height = 17,
        .weight = 910,
        .description = COMPOUND_STRING(
            "It can tell how its trainer is feeling by\n"
            "subtle shifts in the grip on its horns. This\n"
            "empathetic sense lets them run as if one\n"
            "being. They inhabit mountainous regions."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gogoat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gogoat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Gogoat,
        .shinyPalette = gMonShinyPalette_Gogoat,
        .iconSprite = gMonIcon_Gogoat,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gogoat)
        OVERWORLD(
            sPicTable_Gogoat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gogoat,
            gShinyOverworldPalette_Gogoat
        )
        .levelUpLearnset = sGogoatLevelUpLearnset,
        .teachableLearnset = sGogoatTeachableLearnset,
    },
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM] =
    {
        .baseHP        = 67,
        .baseAttack    = 82,
        .baseDefense   = 62,
        .baseSpeed     = 43,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 220,
        .expYield = 70,
        .evYield_Attack = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pancham"),
        .cryId = CRY_PANCHAM,
        .natDexNum = NATIONAL_DEX_PANCHAM,
        .categoryName = _("Playful"),
        .height = 6,
        .weight = 80,
        .description = COMPOUND_STRING(
            "There's no point to the leaf in its mouth,\n"
            "aside from an effort to look cool. It's\n"
            "mischievous, so it's not well suited to\n"
            "inexperienced Trainers."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pancham,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pancham,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Pancham,
        .shinyPalette = gMonShinyPalette_Pancham,
        .iconSprite = gMonIcon_Pancham,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pancham)
        OVERWORLD(
            sPicTable_Pancham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pancham,
            gShinyOverworldPalette_Pancham
        )
        .levelUpLearnset = sPanchamLevelUpLearnset,
        .teachableLearnset = sPanchamTeachableLearnset,
        .eggMoveLearnset = sPanchamEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_PANGORO, CONDITIONS({IF_TYPE_IN_PARTY, TYPE_DARK})}),
    },

    [SPECIES_PANGORO] =
    {
        .baseHP        = 95,
        .baseAttack    = 124,
        .baseDefense   = 78,
        .baseSpeed     = 58,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 65,
        .expYield = 173,
        .evYield_Attack = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pangoro"),
        .cryId = CRY_PANGORO,
        .natDexNum = NATIONAL_DEX_PANGORO,
        .categoryName = _("Daunting"),
        .height = 21,
        .weight = 1360,
        .description = COMPOUND_STRING(
            "It boasts superb physical strength.\n"
            "Those who wish to become Pangoro's\n"
            "Trainer have no choice but to converse\n"
            "with their fists."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Pangoro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Pangoro,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Pangoro,
        .shinyPalette = gMonShinyPalette_Pangoro,
        .iconSprite = gMonIcon_Pangoro,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pangoro)
        OVERWORLD(
            sPicTable_Pangoro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pangoro,
            gShinyOverworldPalette_Pangoro
        )
        .levelUpLearnset = sPangoroLevelUpLearnset,
        .teachableLearnset = sPangoroTeachableLearnset,
    },
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
#define FURFROU_MISC_INFO(_form, _noFlip, frontWidth, frontYOffset, backWidth, backYOffset, _iconIdx)   \
    {                                                                                                   \
        .baseHP        = 75,                                                                            \
        .baseAttack    = 80,                                                                            \
        .baseDefense   = 60,                                                                            \
        .baseSpeed     = 102,                                                                           \
        .baseSpAttack  = 65,                                                                            \
        .baseSpDefense = 90,                                                                            \
        .types = MON_TYPES(TYPE_NORMAL),                                                                \
        .catchRate = 160,                                                                               \
        .expYield = 165,                                                                                \
        .evYield_Speed = 1,                                                                             \
        .genderRatio = MON_GENDERLESS,                                                              \
        .eggCycles = 20,                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                              \
        .growthRate = GROWTH_SLOW,                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                                                   \
        .abilities = { ABILITY_FUR_COAT, ABILITY_NONE, ABILITY_NONE },                                  \
        .bodyColor = BODY_COLOR_WHITE,                                                                  \
        .noFlip = _noFlip,                                                                              \
        .speciesName = _("Furfrou"),                                                                    \
        .cryId = CRY_FURFROU,                                                                           \
        .natDexNum = NATIONAL_DEX_FURFROU,                                                              \
        .categoryName = _("Poodle"),                                                                    \
        .height = 12,                                                                                   \
        .weight = 280,                                                                                  \
        .description = gFurfrouPokedexText,                                                             \
        .pokemonScale = 282,                                                                            \
        .pokemonOffset = 4,                                                                             \
        .trainerScale = 256,                                                                            \
        .trainerOffset = 0,                                                                             \
        .frontPic = gMonFrontPic_Furfrou##_form,                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, 64),                                                \
        .frontPicYOffset = frontYOffset,                                                                \
        .frontAnimFrames = sAnims_Furfrou,                                                              \
        .frontAnimId = ANIM_H_SLIDE,                                                                    \
        .backPic = gMonBackPic_Furfrou##_form,                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, 64),                                                  \
        .backPicYOffset = backYOffset,                                                                  \
        .backAnimId = BACK_ANIM_V_STRETCH,                                                              \
        .palette = gMonPalette_Furfrou##_form,                                                          \
        .shinyPalette = gMonShinyPalette_Furfrou##_form,                                                \
        .iconSprite = gMonIcon_Furfrou##_form,                                                          \
        .iconPalIndex = _iconIdx,                                                                       \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                         \
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)                                                       \
        FOOTPRINT(Furfrou)                                                                              \
        OVERWORLD(                                                                                      \
            sPicTable_Furfrou##_form,                                                                   \
            SIZE_32x32,                                                                                 \
            SHADOW_SIZE_M,                                                                              \
            TRACKS_FOOT,                                                                                \
            sAnimTable_Following,                                                                       \
            gOverworldPalette_Furfrou##_form,                                                           \
            gShinyOverworldPalette_Furfrou##_form                                                       \
        )                                                                                               \
        .levelUpLearnset = sFurfrouLevelUpLearnset,                                                     \
        .teachableLearnset = sFurfrouTeachableLearnset,                                                 \
        .eggMoveLearnset = sFurfrouEggMoveLearnset,                                                     \
        .formSpeciesIdTable = sFurfrouFormSpeciesIdTable,                                               \
        .formChangeTable = sFurfrouFormChangeTable,                                                     \
    }

    [SPECIES_FURFROU_NATURAL]   = FURFROU_MISC_INFO(Natural,   FALSE, 48, 3, 56, 0, 0),
    [SPECIES_FURFROU_HEART]     = FURFROU_MISC_INFO(Heart,     FALSE, 56, 2, 56, 1, 0),
    [SPECIES_FURFROU_STAR]      = FURFROU_MISC_INFO(Star,      FALSE, 56, 2, 64, 1, 0),
    [SPECIES_FURFROU_DIAMOND]   = FURFROU_MISC_INFO(Diamond,   FALSE, 48, 2, 56, 1, 0),
    [SPECIES_FURFROU_DEBUTANTE] = FURFROU_MISC_INFO(Debutante, TRUE,  48, 2, 56, 1, 2),
    [SPECIES_FURFROU_MATRON]    = FURFROU_MISC_INFO(Matron,    FALSE, 48, 2, 56, 1, 2),
    [SPECIES_FURFROU_DANDY]     = FURFROU_MISC_INFO(Dandy,     FALSE, 48, 2, 56, 1, 1),
    [SPECIES_FURFROU_LA_REINE]  = FURFROU_MISC_INFO(LaReine,   FALSE, 48, 2, 56, 1, 0),
    [SPECIES_FURFROU_KABUKI]    = FURFROU_MISC_INFO(Kabuki,    FALSE, 56, 2, 56, 1, 0),
    [SPECIES_FURFROU_PHARAOH]   = FURFROU_MISC_INFO(Pharaoh,   FALSE, 48, 2, 56, 1, 0),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    [SPECIES_ESPURR] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 54,
        .baseSpeed     = 68,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 71,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Espurr"),
        .cryId = CRY_ESPURR,
        .natDexNum = NATIONAL_DEX_ESPURR,
        .categoryName = _("Restraint"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "It has enough psychic energy to blast\n"
            "everything within 300 feet of itself.\n"
            "The organ that emits its intense psychic\n"
            "power is sheltered by its ears."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Espurr,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Espurr,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Espurr,
        .shinyPalette = gMonShinyPalette_Espurr,
        .iconSprite = gMonIcon_Espurr,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Espurr)
        OVERWORLD(
            sPicTable_Espurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espurr,
            gShinyOverworldPalette_Espurr
        )
        .levelUpLearnset = sEspurrLevelUpLearnset,
        .teachableLearnset = sEspurrTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MEOWSTIC_M, CONDITIONS({IF_GENDER, MON_GENDERLESS})},
                                {EVO_LEVEL, 25, SPECIES_MEOWSTIC_F, CONDITIONS({IF_GENDER, MON_FEMALE})}),
    },

    [SPECIES_MEOWSTIC_M] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The defensive instinct of the\n"
            "males is strong. It's when they're\n"
            "protecting themselves or their partners\n"
            "that they unleash their full power."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticM,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticM,
        .shinyPalette = gMonShinyPalette_MeowsticM,
        .iconSprite = gMonIcon_MeowsticM,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticM,
            gShinyOverworldPalette_MeowsticM
        )
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
    },

    [SPECIES_MEOWSTIC_F] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Females are a bit more selfish and\n"
            "aggressive than males. If they\n"
            "don't get what they want, they will\n"
            "torment you with their psychic abilities."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticF,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticF,
        .shinyPalette = gMonShinyPalette_MeowsticF,
        .iconSprite = gMonIcon_MeowsticF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticF,
            gShinyOverworldPalette_MeowsticF
        )
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
    },
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 28,
        .baseSpAttack  = 35,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 180,
        .expYield = 65,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Honedge"),
        .cryId = CRY_HONEDGE,
        .natDexNum = NATIONAL_DEX_HONEDGE,
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 20,
        .description = COMPOUND_STRING(
            "If anyone dares to grab its hilt, it\n"
            "wraps a blue cloth around that person's\n"
            "arm and drains that person's life\n"
            "energy completely."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honedge,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Honedge,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Honedge,
        .shinyPalette = gMonShinyPalette_Honedge,
        .iconSprite = gMonIcon_Honedge,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-10, 11, SHADOW_SIZE_S)
        FOOTPRINT(Honedge)
        OVERWORLD(
            sPicTable_Honedge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Honedge,
            gShinyOverworldPalette_Honedge
        )
        .levelUpLearnset = sHonedgeLevelUpLearnset,
        .teachableLearnset = sHonedgeTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DOUBLADE}),
    },

    [SPECIES_DOUBLADE] =
    {
        .baseHP        = 59,
        .baseAttack    = 110,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 157,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Doublade"),
        .cryId = CRY_DOUBLADE,
        .natDexNum = NATIONAL_DEX_DOUBLADE,
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 45,
        .description = COMPOUND_STRING(
            "When Honedge evolves, it divides into\n"
            "two swords. The complex attack patterns\n"
            "of its two swords are unstoppable, even\n"
            "against those skilled at swordplay."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Doublade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Doublade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Doublade,
        .shinyPalette = gMonShinyPalette_Doublade,
        .iconSprite = gMonIcon_Doublade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 11, SHADOW_SIZE_M)
        FOOTPRINT(Doublade)
        OVERWORLD(
            sPicTable_Doublade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Doublade,
            gShinyOverworldPalette_Doublade
        )
        .levelUpLearnset = sDoubladeLevelUpLearnset,
        .teachableLearnset = sDoubladeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH_SHIELD}),
    },

#define AEGISLASH_MAIN_STAT (P_UPDATED_STATS >= GEN_8 ? 140 : 150)

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = AEGISLASH_MAIN_STAT,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = AEGISLASH_MAIN_STAT,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "In this defensive stance,\n"
            "Aegislash uses its steel body and a force\n"
            "field of spectral power to reduce the\n"
            "damage of any attack."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashShield,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashShield,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_AegislashShield,
        .shinyPalette = gMonShinyPalette_AegislashShield,
        .iconSprite = gMonIcon_AegislashShield,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        OVERWORLD(
            sPicTable_AegislashShield,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AegislashShield,
            gShinyOverworldPalette_AegislashShield
        )
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .baseHP        = 60,
        .baseAttack    = AEGISLASH_MAIN_STAT,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = AEGISLASH_MAIN_STAT,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
    #if P_UPDATED_EVS >= GEN_7
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
    #else
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
    #endif
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "Once upon a time, a king with an\n"
            "Aegislash reigned over the land. His\n"
            "Pokémon eventually drained him of\n"
            "life, and his kingdom fell with him."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashBlade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashBlade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_AegislashBlade,
        .shinyPalette = gMonShinyPalette_AegislashBlade,
        .iconSprite = gMonIcon_AegislashBlade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE] =
    {
        .baseHP        = 78,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 23,
        .baseSpAttack  = 63,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Spritzee"),
        .cryId = CRY_SPRITZEE,
        .natDexNum = NATIONAL_DEX_SPRITZEE,
        .categoryName = _("Perfume"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING(
            "In the past, rather than using perfume,\n"
            "royal ladies carried a Spritzee that would\n"
            "waft a fragrance they liked. Its fragrance\n"
            "changes depending on what it has eaten."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spritzee,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Spritzee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Spritzee,
        .shinyPalette = gMonShinyPalette_Spritzee,
        .iconSprite = gMonIcon_Spritzee,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Spritzee)
        OVERWORLD(
            sPicTable_Spritzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spritzee,
            gShinyOverworldPalette_Spritzee
        )
        .levelUpLearnset = sSpritzeeLevelUpLearnset,
        .teachableLearnset = sSpritzeeTeachableLearnset,
        .eggMoveLearnset = sSpritzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_AROMATISSE, CONDITIONS({IF_HOLD_ITEM, ITEM_SACHET})},
                                {EVO_ITEM, ITEM_SACHET, SPECIES_AROMATISSE}),
    },

    [SPECIES_AROMATISSE] =
    {
        .baseHP        = 101,
        .baseAttack    = 72,
        .baseDefense   = 72,
        .baseSpeed     = 29,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 162,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Aromatisse"),
        .cryId = CRY_AROMATISSE,
        .natDexNum = NATIONAL_DEX_AROMATISSE,
        .categoryName = _("Fragrance"),
        .height = 8,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Its scent is so overpowering that,\n"
            "unless a Trainer happens to really enjoy\n"
            "the smell, he or she will have a hard time\n"
            "walking alongside it."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aromatisse,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aromatisse,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Aromatisse,
        .shinyPalette = gMonShinyPalette_Aromatisse,
        .iconSprite = gMonIcon_Aromatisse,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Aromatisse)
        OVERWORLD(
            sPicTable_Aromatisse,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aromatisse,
            gShinyOverworldPalette_Aromatisse
        )
        .levelUpLearnset = sAromatisseLevelUpLearnset,
        .teachableLearnset = sAromatisseTeachableLearnset,
    },
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 66,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Swirlix"),
        .cryId = CRY_SWIRLIX,
        .natDexNum = NATIONAL_DEX_SWIRLIX,
        .categoryName = _("Cotton Candy"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
            "Because it eats nothing but sweets, its\n"
            "fur is as sticky sweet as cotton candy.\n"
            "To entangle its opponents in battle, it\n"
            "extrudes sticky white threads."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swirlix,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Swirlix,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Swirlix,
        .shinyPalette = gMonShinyPalette_Swirlix,
        .iconSprite = gMonIcon_Swirlix,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Swirlix)
        OVERWORLD(
            sPicTable_Swirlix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swirlix,
            gShinyOverworldPalette_Swirlix
        )
        .levelUpLearnset = sSwirlixLevelUpLearnset,
        .teachableLearnset = sSwirlixTeachableLearnset,
        .eggMoveLearnset = sSwirlixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_SLURPUFF, CONDITIONS({IF_HOLD_ITEM, ITEM_WHIPPED_DREAM})},
                                {EVO_ITEM, ITEM_WHIPPED_DREAM, SPECIES_SLURPUFF}),
    },

    [SPECIES_SLURPUFF] =
    {
        .baseHP        = 82,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 168,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Slurpuff"),
        .cryId = CRY_SLURPUFF,
        .natDexNum = NATIONAL_DEX_SLURPUFF,
        .categoryName = _("Meringue"),
        .height = 8,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Slurpuff can distinguish even the\n"
            "faintest of scents. It puts its sensitive\n"
            "sense of smell to use by helping pastry\n"
            "chefs in their work."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slurpuff,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slurpuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Slurpuff,
        .shinyPalette = gMonShinyPalette_Slurpuff,
        .iconSprite = gMonIcon_Slurpuff,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Slurpuff)
        OVERWORLD(
            sPicTable_Slurpuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slurpuff,
            gShinyOverworldPalette_Slurpuff
        )
        .levelUpLearnset = sSlurpuffLevelUpLearnset,
        .teachableLearnset = sSlurpuffTeachableLearnset,
    },
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    [SPECIES_INKAY] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 53,
        .baseSpeed     = 45,
        .baseSpAttack  = 37,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inkay"),
        .cryId = CRY_INKAY,
        .natDexNum = NATIONAL_DEX_INKAY,
        .categoryName = _("Revolving"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
            "It flashes the light-emitting spots on its\n"
            "body, which drains its opponent's will\n"
            "to fight. It takes the opportunity to\n"
            "scuttle away and hide."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Inkay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Inkay,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Inkay,
        .shinyPalette = gMonShinyPalette_Inkay,
        .iconSprite = gMonIcon_Inkay,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Inkay)
        OVERWORLD(
            sPicTable_Inkay,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inkay,
            gShinyOverworldPalette_Inkay
        )
        .levelUpLearnset = sInkayLevelUpLearnset,
        .teachableLearnset = sInkayTeachableLearnset,
        .eggMoveLearnset = sInkayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MALAMAR}),
    },

    [SPECIES_MALAMAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 92,
        .baseDefense   = 88,
        .baseSpeed     = 73,
        .baseSpAttack  = 68,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Malamar"),
        .cryId = CRY_MALAMAR,
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Overturning"),
        .height = 15,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It lures prey close with hypnotic motions,\n"
            "then wraps its tentacles around it before\n"
            "finishing it off with digestive fluids. It\n"
            "forces others to do whatever it wants."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Malamar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Malamar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Malamar,
        .shinyPalette = gMonShinyPalette_Malamar,
        .iconSprite = gMonIcon_Malamar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Malamar)
        OVERWORLD(
            sPicTable_Malamar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Malamar,
            gShinyOverworldPalette_Malamar
        )
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
    },
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    [SPECIES_BINACLE] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 67,
        .baseSpeed     = 50,
        .baseSpAttack  = 39,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Binacle"),
        .cryId = CRY_BINACLE,
        .natDexNum = NATIONAL_DEX_BINACLE,
        .categoryName = _("Two-Handed"),
        .height = 5,
        .weight = 310,
        .description = COMPOUND_STRING(
            "They stretch and then contract, yanking\n"
            "their rocks along with them in bold hops.\n"
            "They eat seaweed that washes up on\n"
            "the shoreline."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Binacle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Binacle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Binacle,
        .shinyPalette = gMonShinyPalette_Binacle,
        .iconSprite = gMonIcon_Binacle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Binacle)
        OVERWORLD(
            sPicTable_Binacle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Binacle,
            gShinyOverworldPalette_Binacle
        )
        .levelUpLearnset = sBinacleLevelUpLearnset,
        .teachableLearnset = sBinacleTeachableLearnset,
        .eggMoveLearnset = sBinacleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_BARBARACLE}),
    },

    [SPECIES_BARBARACLE] =
    {
        .baseHP        = 72,
        .baseAttack    = 105,
        .baseDefense   = 115,
        .baseSpeed     = 68,
        .baseSpAttack  = 54,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Barbaracle"),
        .cryId = CRY_BARBARACLE,
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Collective"),
        .height = 13,
        .weight = 960,
        .description = COMPOUND_STRING(
            "Barbaracle's legs and hands have minds\n"
            "of their own, and they will move\n"
            "independently. But they usually follow\n"
            "the head's orders."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barbaracle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barbaracle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Barbaracle,
        .shinyPalette = gMonShinyPalette_Barbaracle,
        .iconSprite = gMonIcon_Barbaracle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Barbaracle)
        OVERWORLD(
            sPicTable_Barbaracle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Barbaracle,
            gShinyOverworldPalette_Barbaracle
        )
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
    },
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    [SPECIES_SKRELP] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .catchRate = 225,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skrelp"),
        .cryId = CRY_SKRELP,
        .natDexNum = NATIONAL_DEX_SKRELP,
        .categoryName = _("Mock Kelp"),
        .height = 5,
        .weight = 73,
        .description = COMPOUND_STRING(
            "Camouflaged as rotten kelp, it hides\n"
            "from foes while storing up power for its\n"
            "evolution. They spray liquid poison on\n"
            "prey that approach unawares."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skrelp,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Skrelp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Skrelp,
        .shinyPalette = gMonShinyPalette_Skrelp,
        .iconSprite = gMonIcon_Skrelp,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skrelp)
        OVERWORLD(
            sPicTable_Skrelp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skrelp,
            gShinyOverworldPalette_Skrelp
        )
        .levelUpLearnset = sSkrelpLevelUpLearnset,
        .teachableLearnset = sSkrelpTeachableLearnset,
        .eggMoveLearnset = sSkrelpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_DRAGALGE}),
    },

    [SPECIES_DRAGALGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 44,
        .baseSpAttack  = 97,
        .baseSpDefense = 123,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragalge"),
        .cryId = CRY_DRAGALGE,
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Mock Kelp"),
        .height = 18,
        .weight = 815,
        .description = COMPOUND_STRING(
            "Their poison is strong enough to eat\n"
            "through the hull of a tanker. Tales are\n"
            "told of ships that wander into seas where\n"
            "Dragalge live, never to return."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dragalge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .backPic = gMonBackPic_Dragalge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Dragalge,
        .shinyPalette = gMonShinyPalette_Dragalge,
        .iconSprite = gMonIcon_Dragalge,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dragalge)
        OVERWORLD(
            sPicTable_Dragalge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dragalge,
            gShinyOverworldPalette_Dragalge
        )
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
    },
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 44,
        .baseSpAttack  = 58,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Clauncher"),
        .cryId = CRY_CLAUNCHER,
        .natDexNum = NATIONAL_DEX_CLAUNCHER,
        .categoryName = _("Water Gun"),
        .height = 5,
        .weight = 83,
        .description = COMPOUND_STRING(
            "Through controlled expulsions of internal\n"
            "gas, it can expel water like a pistol shot.\n"
            "At close distances, it can even shatter\n"
            "large rocks."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clauncher,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Clauncher,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Clauncher,
        .shinyPalette = gMonShinyPalette_Clauncher,
        .iconSprite = gMonIcon_Clauncher,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -6, SHADOW_SIZE_M)
        FOOTPRINT(Clauncher)
        OVERWORLD(
            sPicTable_Clauncher,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clauncher,
            gShinyOverworldPalette_Clauncher
        )
        .levelUpLearnset = sClauncherLevelUpLearnset,
        .teachableLearnset = sClauncherTeachableLearnset,
        .eggMoveLearnset = sClauncherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_CLAWITZER}),
    },

    [SPECIES_CLAWITZER] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 88,
        .baseSpeed     = 59,
        .baseSpAttack  = 120,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 55,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Clawitzer"),
        .cryId = CRY_CLAWITZER,
        .natDexNum = NATIONAL_DEX_CLAWITZER,
        .categoryName = _("Howitzer"),
        .height = 13,
        .weight = 353,
        .description = COMPOUND_STRING(
            "By expelling water from the nozzle in the\n"
            "back of its enormous claw, it can move\n"
            "at a speed of 60 knots. They launch\n"
            "cannonballs made of water."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clawitzer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Clawitzer,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Clawitzer,
        .shinyPalette = gMonShinyPalette_Clawitzer,
        .iconSprite = gMonIcon_Clawitzer,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 1, SHADOW_SIZE_L)
        FOOTPRINT(Clawitzer)
        OVERWORLD(
            sPicTable_Clawitzer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clawitzer,
            gShinyOverworldPalette_Clawitzer
        )
        .levelUpLearnset = sClawitzerLevelUpLearnset,
        .teachableLearnset = sClawitzerTeachableLearnset,
    },
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE] =
    {
        .baseHP        = 44,
        .baseAttack    = 38,
        .baseDefense   = 33,
        .baseSpeed     = 70,
        .baseSpAttack  = 61,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Helioptile"),
        .cryId = CRY_HELIOPTILE,
        .natDexNum = NATIONAL_DEX_HELIOPTILE,
        .categoryName = _("Generator"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "They make their home in deserts.\n"
            "They can generate their own energy from\n"
            "basking in the sun, so eating food is not\n"
            "a requirement."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Helioptile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Helioptile,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Helioptile,
        .shinyPalette = gMonShinyPalette_Helioptile,
        .iconSprite = gMonIcon_Helioptile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Helioptile)
        OVERWORLD(
            sPicTable_Helioptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Helioptile,
            gShinyOverworldPalette_Helioptile
        )
        .levelUpLearnset = sHelioptileLevelUpLearnset,
        .teachableLearnset = sHelioptileTeachableLearnset,
        .eggMoveLearnset = sHelioptileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}),
    },

    [SPECIES_HELIOLISK] =
    {
        .baseHP        = 62,
        .baseAttack    = 55,
        .baseDefense   = 52,
        .baseSpeed     = 109,
        .baseSpAttack  = 109,
        .baseSpDefense = 94,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Heliolisk"),
        .cryId = CRY_HELIOLISK,
        .natDexNum = NATIONAL_DEX_HELIOLISK,
        .categoryName = _("Generator"),
        .height = 10,
        .weight = 210,
        .description = COMPOUND_STRING(
            "A single Heliolisk can generate sufficient\n"
            "electricity to power a skyscraper. It can\n"
            "stimulate its muscles with electricity,\n"
            "boosting the strength in its legs."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Heliolisk,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Heliolisk,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Heliolisk,
        .shinyPalette = gMonShinyPalette_Heliolisk,
        .iconSprite = gMonIcon_Heliolisk,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Heliolisk)
        OVERWORLD(
            sPicTable_Heliolisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heliolisk,
            gShinyOverworldPalette_Heliolisk
        )
        .levelUpLearnset = sHelioliskLevelUpLearnset,
        .teachableLearnset = sHelioliskTeachableLearnset,
    },
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT] =
    {
        .baseHP        = 58,
        .baseAttack    = 89,
        .baseDefense   = 77,
        .baseSpeed     = 48,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tyrunt"),
        .cryId = CRY_TYRUNT,
        .natDexNum = NATIONAL_DEX_TYRUNT,
        .categoryName = _("Royal Heir"),
        .height = 8,
        .weight = 260,
        .description = COMPOUND_STRING(
            "Its immense jaws have enough destructive\n"
            "force that it can chew up a car. If\n"
            "something happens that it doesn't like,\n"
            "it throws a tantrum and runs wild."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyrunt,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrunt,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Tyrunt,
        .shinyPalette = gMonShinyPalette_Tyrunt,
        .iconSprite = gMonIcon_Tyrunt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tyrunt)
        OVERWORLD(
            sPicTable_Tyrunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrunt,
            gShinyOverworldPalette_Tyrunt
        )
        .levelUpLearnset = sTyruntLevelUpLearnset,
        .teachableLearnset = sTyruntTeachableLearnset,
        .eggMoveLearnset = sTyruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_TYRANTRUM, CONDITIONS({IF_NOT_TIME, TIME_NIGHT})}),
    },

    [SPECIES_TYRANTRUM] =
    {
        .baseHP        = 82,
        .baseAttack    = 121,
        .baseDefense   = 119,
        .baseSpeed     = 71,
        .baseSpAttack  = 69,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 182,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tyrantrum"),
        .cryId = CRY_TYRANTRUM,
        .natDexNum = NATIONAL_DEX_TYRANTRUM,
        .categoryName = _("Despot"),
        .height = 25,
        .weight = 2700,
        .description = COMPOUND_STRING(
            "Thanks to its gargantuan jaws, which could\n"
            "shred thick metal plates as if they were\n"
            "paper, it was invincible in the ancient\n"
            "world it once inhabited."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Tyrantrum,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrantrum,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Tyrantrum,
        .shinyPalette = gMonShinyPalette_Tyrantrum,
        .iconSprite = gMonIcon_Tyrantrum,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Tyrantrum)
        OVERWORLD(
            sPicTable_Tyrantrum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrantrum,
            gShinyOverworldPalette_Tyrantrum
        )
        .levelUpLearnset = sTyrantrumLevelUpLearnset,
        .teachableLearnset = sTyrantrumTeachableLearnset,
    },
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    [SPECIES_AMAURA] =
    {
        .baseHP        = 77,
        .baseAttack    = 59,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 67,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 72,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amaura"),
        .cryId = CRY_AMAURA,
        .natDexNum = NATIONAL_DEX_AMAURA,
        .categoryName = _("Tundra"),
        .height = 13,
        .weight = 252,
        .description = COMPOUND_STRING(
            "This ancient Pokémon was restored from\n"
            "part of its body that had been frozen in\n"
            "ice for over 100 million years. It lived in a\n"
            "cold land where there were no predators."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amaura,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL_TWICE,
        .backPic = gMonBackPic_Amaura,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Amaura,
        .shinyPalette = gMonShinyPalette_Amaura,
        .iconSprite = gMonIcon_Amaura,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Amaura)
        OVERWORLD(
            sPicTable_Amaura,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Amaura,
            gShinyOverworldPalette_Amaura
        )
        .levelUpLearnset = sAmauraLevelUpLearnset,
        .teachableLearnset = sAmauraTeachableLearnset,
        .eggMoveLearnset = sAmauraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_AURORUS, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    },

    [SPECIES_AURORUS] =
    {
        .baseHP        = 123,
        .baseAttack    = 77,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 99,
        .baseSpDefense = 92,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 104,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Aurorus"),
        .cryId = CRY_AURORUS,
        .natDexNum = NATIONAL_DEX_AURORUS,
        .categoryName = _("Tundra"),
        .height = 27,
        .weight = 2250,
        .description = COMPOUND_STRING(
            "Using the diamond-shaped crystals on its\n"
            "body it can instantly create a wall of ice\n"
            "to block an opponent's attack, or encase\n"
            "them in ice."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aurorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Aurorus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Aurorus,
        .shinyPalette = gMonShinyPalette_Aurorus,
        .iconSprite = gMonIcon_Aurorus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 14, SHADOW_SIZE_L)
        FOOTPRINT(Aurorus)
        OVERWORLD(
            sPicTable_Aurorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aurorus,
            gShinyOverworldPalette_Aurorus
        )
        .levelUpLearnset = sAurorusLevelUpLearnset,
        .teachableLearnset = sAurorusTeachableLearnset,
    },
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_HUMAN_LIKE),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #endif
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Hawlucha"),
        .cryId = CRY_HAWLUCHA,
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Wrestling"),
        .height = 8,
        .weight = 215,
        .description = COMPOUND_STRING(
            "With its wings, it controls its position in\n"
            "the air. Its proficient fighting skills\n"
            "enable it to keep up with big bruisers\n"
            "like Kozenimon and Bioquetmon."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hawlucha,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Hawlucha,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Hawlucha,
        .shinyPalette = gMonShinyPalette_Hawlucha,
        .iconSprite = gMonIcon_Hawlucha,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hawlucha)
        OVERWORLD(
            sPicTable_Hawlucha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hawlucha,
            gShinyOverworldPalette_Hawlucha
        )
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
        .eggMoveLearnset = sHawluchaEggMoveLearnset,
    },
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE] =
    {
        .baseHP        = 67,
        .baseAttack    = 58,
        .baseDefense   = 57,
        .baseSpeed     = 101,
        .baseSpAttack  = 81,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
        .catchRate = 180,
        .expYield = 151,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_PICKUP, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dedenne"),
        .cryId = CRY_DEDENNE,
        .natDexNum = NATIONAL_DEX_DEDENNE,
        .categoryName = _("Antenna"),
        .height = 2,
        .weight = 22,
        .description = COMPOUND_STRING(
            "Its whiskers serve as antennas.\n"
            "By sending and receiving electrical\n"
            "waves, it can communicate with others\n"
            "over vast distances."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dedenne,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Dedenne,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Dedenne,
        .shinyPalette = gMonShinyPalette_Dedenne,
        .iconSprite = gMonIcon_Dedenne,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Dedenne)
        OVERWORLD(
            sPicTable_Dedenne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dedenne,
            gShinyOverworldPalette_Dedenne
        )
        .levelUpLearnset = sDedenneLevelUpLearnset,
        .teachableLearnset = sDedenneTeachableLearnset,
        .eggMoveLearnset = sDedenneEggMoveLearnset,
    },
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
    [SPECIES_CARBINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 60,
        .expYield = 100,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Carbink"),
        .cryId = CRY_CARBINK,
        .natDexNum = NATIONAL_DEX_CARBINK,
        .categoryName = _("Jewel"),
        .height = 3,
        .weight = 57,
        .description = COMPOUND_STRING(
            "Born from the high temperatures and\n"
            "pressures deep underground, it defends\n"
            "itself by firing beams from the jewel part\n"
            "of its body."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carbink,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Carbink,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Carbink,
        .shinyPalette = gMonShinyPalette_Carbink,
        .iconSprite = gMonIcon_Carbink,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Carbink)
        OVERWORLD(
            sPicTable_Carbink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carbink,
            gShinyOverworldPalette_Carbink
        )
        .levelUpLearnset = sCarbinkLevelUpLearnset,
        .teachableLearnset = sCarbinkTeachableLearnset,
    },
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
    [SPECIES_GOOMY] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goomy"),
        .cryId = CRY_GOOMY,
        .natDexNum = NATIONAL_DEX_GOOMY,
        .categoryName = _("Soft Tissue"),
        .height = 3,
        .weight = 28,
        .description = COMPOUND_STRING(
            "Its source of protection is its slimy,\n"
            "germ-laden mucous membrane. Anyone\n"
            "who touches it will need some thorough\n"
            "hand-washing."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Goomy,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Goomy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Goomy,
        .shinyPalette = gMonShinyPalette_Goomy,
        .iconSprite = gMonIcon_Goomy,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Goomy)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
        .levelUpLearnset = sGoomyLevelUpLearnset,
        .teachableLearnset = sGoomyTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_SLIGGOO},
                                {EVO_NONE, 0, SPECIES_SLIGGOO_HISUI}),
    },

    [SPECIES_SLIGGOO] =
    {
        .baseHP        = 68,
        .baseAttack    = 75,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Soft Tissue"),
        .height = 8,
        .weight = 175,
        .description = COMPOUND_STRING(
            "This Pokémon's mucous can dissolve\n"
            "anything. Toothless, it sprays mucous\n"
            "on its prey. Once they're nicely dissolved,\n"
            "it slurps them up."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sliggoo,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sliggoo,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Sliggoo,
        .shinyPalette = gMonShinyPalette_Sliggoo,
        .iconSprite = gMonIcon_Sliggoo,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_Sliggoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sliggoo,
            gShinyOverworldPalette_Sliggoo
        )
        .levelUpLearnset = sSliggooLevelUpLearnset,
        .teachableLearnset = sSliggooTeachableLearnset,
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),
    },

    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Dragon"),
        .height = 20,
        .weight = 1505,
        .description = COMPOUND_STRING(
            "It gets picked on because it's meek.\n"
            "But then, whoever teased it gets to feel\n"
            "the full force of its horns and a good\n"
            "swatting from its thick tail."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Goodra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Goodra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Goodra,
        .shinyPalette = gMonShinyPalette_Goodra,
        .iconSprite = gMonIcon_Goodra,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_Goodra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goodra,
            gShinyOverworldPalette_Goodra
        )
        .levelUpLearnset = sGoodraLevelUpLearnset,
        .teachableLearnset = sGoodraTeachableLearnset,
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .baseHP        = 58,
        .baseAttack    = 75,
        .baseDefense   = 83,
        .baseSpeed     = 40,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Snail"),
        .height = 7,
        .weight = 685,
        .description = COMPOUND_STRING(
            "A creature given to melancholy.\n"
            "Its metallic shell developed as a\n"
            "result of the mucus on its skin reacting\n"
            "with the iron in Hisui's water."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SliggooHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SliggooHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SliggooHisui,
        .shinyPalette = gMonShinyPalette_SliggooHisui,
        .iconSprite = gMonIcon_SliggooHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_SliggooHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SliggooHisui,
            gShinyOverworldPalette_SliggooHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sSliggooHisuiLevelUpLearnset,
        .teachableLearnset = sSliggooHisuiTeachableLearnset,
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Shell Bunker"),
        .height = 17,
        .weight = 3341,
        .description = COMPOUND_STRING(
            "It loathes solitude and is extremely\n"
            "clingy--it will fume and run riot if\n"
            "those dearest to it ever leave its\n"
            "side."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GoodraHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GoodraHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GoodraHisui,
        .shinyPalette = gMonShinyPalette_GoodraHisui,
        .iconSprite = gMonIcon_GoodraHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_GoodraHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GoodraHisui,
            gShinyOverworldPalette_GoodraHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGoodraHisuiLevelUpLearnset,
        .teachableLearnset = sGoodraHisuiTeachableLearnset,
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Klefki"),
        .cryId = CRY_KLEFKI,
        .natDexNum = NATIONAL_DEX_KLEFKI,
        .categoryName = _("Key Ring"),
        .height = 2,
        .weight = 30,
        .description = COMPOUND_STRING(
            "These key collectors threaten any\n"
            "attackers by fiercely jingling their keys\n"
            "at them. It will sneak into people's homes\n"
            "to steal their keys."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klefki,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Klefki,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Klefki,
        .shinyPalette = gMonShinyPalette_Klefki,
        .iconSprite = gMonIcon_Klefki,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Klefki)
        OVERWORLD(
            sPicTable_Klefki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klefki,
            gShinyOverworldPalette_Klefki
        )
        .levelUpLearnset = sKlefkiLevelUpLearnset,
        .teachableLearnset = sKlefkiTeachableLearnset,
        .eggMoveLearnset = sKlefkiEggMoveLearnset,
    },
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP] =
    {
        .baseHP        = 43,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 38,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Phantump"),
        .cryId = CRY_PHANTUMP,
        .natDexNum = NATIONAL_DEX_PHANTUMP,
        .categoryName = _("Stump"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "According to legend, medicine to cure\n"
            "any illness can be made by plucking the\n"
            "green leaves on its head, brewing them,\n"
            "and boiling down the liquid."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phantump,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Phantump,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Phantump,
        .shinyPalette = gMonShinyPalette_Phantump,
        .iconSprite = gMonIcon_Phantump,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Phantump)
        OVERWORLD(
            sPicTable_Phantump,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phantump,
            gShinyOverworldPalette_Phantump
        )
        .levelUpLearnset = sPhantumpLevelUpLearnset,
        .teachableLearnset = sPhantumpTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_TREVENANT},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_TREVENANT}),
    },

    [SPECIES_TREVENANT] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 76,
        .baseSpeed     = 56,
        .baseSpAttack  = 65,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trevenant"),
        .cryId = CRY_TREVENANT,
        .natDexNum = NATIONAL_DEX_TREVENANT,
        .categoryName = _("Elder Tree"),
        .height = 15,
        .weight = 710,
        .description = COMPOUND_STRING(
            "Through its roots, it exerts control over\n"
            "other trees. A deadly curse falls upon\n"
            "anyone cutting down trees in forests\n"
            "where Trevenant dwell."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trevenant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Trevenant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Trevenant,
        .shinyPalette = gMonShinyPalette_Trevenant,
        .iconSprite = gMonIcon_Trevenant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Trevenant)
        OVERWORLD(
            sPicTable_Trevenant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trevenant,
            gShinyOverworldPalette_Trevenant
        )
        .levelUpLearnset = sTrevenantLevelUpLearnset,
        .teachableLearnset = sTrevenantTeachableLearnset,
    },
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .baseHP        = 49,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "The light that streams out from\n"
            "the holes in the pumpkin can\n"
            "hypnotize and control the people and\n"
            "Pokémon that see it."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooAverage,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooAverage,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_AVERAGE},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_AVERAGE}),
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .baseHP        = 44,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 56,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "When taking spirits to the\n"
            "afterlife, small Pumpkaboo prefer the\n"
            "spirits of children to those of adults."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSmall,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSmall,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SMALL},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SMALL}),
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .baseHP        = 54,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 46,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 5,
        .weight = 75,
        .description = COMPOUND_STRING(
            "When taking spirits to the\n"
            "afterlife, large Pumpkaboo prefer the\n"
            "spirits of adults to those of children."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooLarge,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooLarge,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_LARGE},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_LARGE}),
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 41,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO_SUPER,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Supersized Pumpkaboo are very\n"
            "partial to the spirits of people who\n"
            "were of similarly superior proportions."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSuper,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSuper,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SUPER},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SUPER}),
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 122,
        .baseSpeed     = 84,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 9,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Eerie cries emanate from its body\n"
            "in the dead of night. The sounds are\n"
            "said to be the wails of spirits who\n"
            "are suffering in the afterlife."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistAverage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistAverage,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 122,
        .baseSpeed     = 99,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 7,
        .weight = 95,
        .description = COMPOUND_STRING(
            "A small-sized Pumpkaboo evolves\n"
            "into a small-sized Gourgeist. Its\n"
            "bodily proportions also get passed on\n"
            "to its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSmall,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSmall,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 122,
        .baseSpeed     = 69,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 11,
        .weight = 140,
        .description = COMPOUND_STRING(
            "A large-sized Pumpkaboo evolves\n"
            "into a large-sized Gourgeist. Its\n"
            "bodily proportions also get passed on\n"
            "to its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistLarge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistLarge,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST_SUPER,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 17,
        .weight = 390,
        .description = COMPOUND_STRING(
            "A supersized Pumpkaboo evolves\n"
            "into a supersized Gourgeist. Its\n"
            "bodily proportions also get passed on to\n"
            "its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSuper,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSuper,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_MINERAL)
#else
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER)
#endif

    [SPECIES_BERGMITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 69,
        .baseDefense   = 85,
        .baseSpeed     = 28,
        .baseSpAttack  = 32,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bergmite"),
        .cryId = CRY_BERGMITE,
        .natDexNum = NATIONAL_DEX_BERGMITE,
        .categoryName = _("Ice Chunk"),
        .height = 10,
        .weight = 995,
        .description = COMPOUND_STRING(
            "It blocks opponents' attacks with the ice\n"
            "that shields its body. It uses cold air to\n"
            "repair any cracks with new ice. They live\n"
            "in herds on snowy mountains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bergmite,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Bergmite,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Bergmite,
        .shinyPalette = gMonShinyPalette_Bergmite,
        .iconSprite = gMonIcon_Bergmite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Bergmite)
        OVERWORLD(
            sPicTable_Bergmite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bergmite,
            gShinyOverworldPalette_Bergmite
        )
        .levelUpLearnset = sBergmiteLevelUpLearnset,
        .teachableLearnset = sBergmiteTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_AVALUGG},
                                {EVO_NONE, 0, SPECIES_AVALUGG_HISUI}),
    },

    [SPECIES_AVALUGG] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = 184,
        .baseSpeed     = 28,
        .baseSpAttack  = 44,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 20,
        .weight = 5050,
        .description = COMPOUND_STRING(
            "The way several Bergmite huddle on its\n"
            "back make it look like an aircraft carrier\n"
            "made of ice. Its cumbersome frame crushes\n"
            "anything that stands in its way."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Avalugg,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Avalugg,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Avalugg,
        .shinyPalette = gMonShinyPalette_Avalugg,
        .iconSprite = gMonIcon_Avalugg,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_Avalugg,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Avalugg,
            gShinyOverworldPalette_Avalugg
        )
        .levelUpLearnset = sAvaluggLevelUpLearnset,
        .teachableLearnset = sAvaluggTeachableLearnset,
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .baseHP        = 95,
        .baseAttack    = 127,
        .baseDefense   = 184,
        .baseSpeed     = 38,
        .baseSpAttack  = 34,
        .baseSpDefense = 36,
        .types = MON_TYPES(TYPE_ICE, TYPE_ROCK),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_STRONG_JAW, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 14,
        .weight = 2624,
        .description = COMPOUND_STRING(
            "The armor of ice covering its lower\n"
            "jaw puts steel to shame and can\n"
            "shatter rocks with ease."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_AvaluggHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AvaluggHisui,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AvaluggHisui,
        .shinyPalette = gMonShinyPalette_AvaluggHisui,
        .iconSprite = gMonIcon_AvaluggHisui,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_L)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_AvaluggHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AvaluggHisui,
            gShinyOverworldPalette_AvaluggHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sAvaluggHisuiLevelUpLearnset,
        .teachableLearnset = sAvaluggHisuiTeachableLearnset,
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
    [SPECIES_NOIBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 190,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #endif
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noibat"),
        .cryId = CRY_NOIBAT,
        .natDexNum = NATIONAL_DEX_NOIBAT,
        .categoryName = _("Sound Wave"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
            "They live in pitch-black caves. Even a\n"
            "robust wrestler will become dizzy and\n"
            "unable to stand when exposed to its\n"
            "200,000-hertz ultrasonic waves."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noibat,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Noibat,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Noibat,
        .shinyPalette = gMonShinyPalette_Noibat,
        .iconSprite = gMonIcon_Noibat,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Noibat)
        OVERWORLD(
            sPicTable_Noibat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noibat,
            gShinyOverworldPalette_Noibat
        )
        .levelUpLearnset = sNoibatLevelUpLearnset,
        .teachableLearnset = sNoibatTeachableLearnset,
        .eggMoveLearnset = sNoibatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_NOIVERN}),
    },

    [SPECIES_NOIVERN] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 123,
        .baseSpAttack  = 97,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 187,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #endif
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noivern"),
        .cryId = CRY_NOIVERN,
        .natDexNum = NATIONAL_DEX_NOIVERN,
        .categoryName = _("Sound Wave"),
        .height = 15,
        .weight = 850,
        .description = COMPOUND_STRING(
            "They fly around on moonless nights and\n"
            "attack careless prey. The ultrasonic\n"
            "waves it emits from its ears can reduce\n"
            "a large boulder to pebbles."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noivern,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noivern,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Noivern,
        .shinyPalette = gMonShinyPalette_Noivern,
        .iconSprite = gMonIcon_Noivern,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 10, SHADOW_SIZE_L)
        FOOTPRINT(Noivern)
        OVERWORLD(
            sPicTable_Noivern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noivern,
            gShinyOverworldPalette_Noivern
        )
        .levelUpLearnset = sNoivernLevelUpLearnset,
        .teachableLearnset = sNoivernTeachableLearnset,
    },
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Life"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasNeutral,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasNeutral,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasNeutral,
        .shinyPalette = gMonShinyPalette_XerneasNeutral,
        .iconSprite = gMonIcon_XerneasNeutral,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasNeutral,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Life"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasActive,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasActive,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasActive,
        .shinyPalette = gMonShinyPalette_XerneasActive,
        .iconSprite = gMonIcon_XerneasActive,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasActive,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yveltal"),
        .cryId = CRY_YVELTAL,
        .natDexNum = NATIONAL_DEX_YVELTAL,
        .categoryName = _("Destruction"),
        .height = 58,
        .weight = 2030,
        .description = COMPOUND_STRING(
            "When its life comes to an end, its wings\n"
            "and tail spread wide and glow red, and\n"
            "it absorbs the life energy of every living\n"
            "thing and turns into a cocoon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Yveltal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Yveltal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Yveltal,
        .shinyPalette = gMonShinyPalette_Yveltal,
        .iconSprite = gMonIcon_Yveltal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_L)
        FOOTPRINT(Yveltal)
        OVERWORLD(
            sPicTable_Yveltal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yveltal,
            gShinyOverworldPalette_Yveltal
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sYveltalLevelUpLearnset,
        .teachableLearnset = sYveltalTeachableLearnset,
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50AuraBreakFormChangeTable,
    },
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50PowerConstructFormChangeTable,
    },
    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10AuraBreakFormChangeTable,
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10PowerConstructFormChangeTable,
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .baseHP        = 216,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 85,
        .baseSpAttack  = 91,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 354 : 319,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_COMPLETE,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 45,
        .weight = 6100,
        .description = COMPOUND_STRING(
            "This is Zygarde's perfected form.\n"
            "From the orifice on its chest, it\n"
            "radiates high-powered energy that\n"
            "eliminates everything."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_ZygardeComplete,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_ZygardeComplete,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_ZygardeComplete,
        .shinyPalette = gMonShinyPalette_ZygardeComplete,
        .iconSprite = gMonIcon_ZygardeComplete,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_ZygardeComplete,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZygardeComplete,
            gShinyOverworldPalette_ZygardeComplete
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygardeCompleteFormChangeTable,
    },
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Jewel"),
        .height = 7,
        .weight = 88,
        .description = COMPOUND_STRING(
            "A sudden transformation of Carbink,\n"
            "its pink, glimmering body is said to be\n"
            "the loveliest sight in the whole world.\n"
            "It creates diamonds between its hands."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diancie,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Diancie,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Diancie,
        .shinyPalette = gMonShinyPalette_Diancie,
        .iconSprite = gMonIcon_Diancie,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Diancie)
        OVERWORLD(
            sPicTable_Diancie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diancie,
            gShinyOverworldPalette_Diancie
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = 315,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE_MEGA,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Jewel"),
        .height = 11,
        .weight = 278,
        .description = COMPOUND_STRING(
            "The impurities upon its body's surface\n"
            "have fallen away, sparkling so brilliantly\n"
            "that cannot be observed directly.\n"
            "It is known as “the Royal Pink Princess”."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DiancieMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiancieMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DiancieMega,
        .shinyPalette = gMonShinyPalette_DiancieMega,
        .iconSprite = gMonIcon_DiancieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Diancie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DiancieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DiancieMega,
            gShinyOverworldPalette_DiancieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMythical = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_CONFINED,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Mischief"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "In its true form, it possess a huge amount\n"
            "of power. When its powers are sealed away,\n"
            "it is transformed into a much smaller form.\n"
            "It teleports things to a secret place."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaConfined,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_HoopaConfined,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_HoopaConfined,
        .shinyPalette = gMonShinyPalette_HoopaConfined,
        .iconSprite = gMonIcon_HoopaConfined,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaConfined,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaConfined,
            gShinyOverworldPalette_HoopaConfined
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaConfinedLevelUpLearnset,
        .teachableLearnset = sHoopaConfinedTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 170,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = P_UPDATED_FRIENDSHIP >= GEN_8 ? STANDARD_FRIENDSHIP : 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_UNBOUND,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Djinn"),
        .height = 65,
        .weight = 490,
        .description = COMPOUND_STRING(
            "It is the true form of Hoopa, which has had\n"
            "its power sealed away. The rings it carries\n"
            "have the power to bend dimensions and are\n"
            "able to seize anything in the world."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaUnbound,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_HoopaUnbound,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_HoopaUnbound,
        .shinyPalette = gMonShinyPalette_HoopaUnbound,
        .iconSprite = gMonIcon_HoopaUnbound,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaUnbound,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaUnbound,
            gShinyOverworldPalette_HoopaUnbound
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaUnboundLevelUpLearnset,
        .teachableLearnset = sHoopaUnboundTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Volcanion"),
        .cryId = CRY_VOLCANION,
        .natDexNum = NATIONAL_DEX_VOLCANION,
        .categoryName = _("Steam"),
        .height = 17,
        .weight = 1950,
        .description = COMPOUND_STRING(
            "It lets out billows of steam from the arms\n"
            "on its back and disappears into the dense\n"
            "fog. It's said to live in mountains where\n"
            "humans do not tread."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Volcanion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Volcanion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Volcanion,
        .shinyPalette = gMonShinyPalette_Volcanion,
        .iconSprite = gMonIcon_Volcanion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Volcanion)
        OVERWORLD(
            sPicTable_Volcanion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Volcanion,
            gShinyOverworldPalette_Volcanion
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVolcanionLevelUpLearnset,
        .teachableLearnset = sVolcanionTeachableLearnset,
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
