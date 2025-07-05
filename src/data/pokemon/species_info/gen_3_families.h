#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen3[] =
{
#endif

#if P_FAMILY_SUNARZAMON
    [SPECIES_SUNARZAMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 54,
        .baseDefense   = 59,
        .baseSpeed     = 52,
        .baseSpAttack  = 51,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_SAND_STREAM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sunarzamon"),
        .cryId = CRY_SUNARZAMON,
        .natDexNum = NATIONAL_DEX_SUNARZAMON,
        .categoryName = _("Sand Lizard"),
        .height = 7,
        .weight = 584,
        .description = COMPOUND_STRING(
            "Although they like to act in a group,\n"
            "Sunarizamon is actually pretty strong as\n"
            "an individual as well. It will often hide\n"
            "in the sand to ambush its prey."),
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sunarzamon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sunarzamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sunarzamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Sunarzamon,
        .shinyPalette = gMonShinyPalette_Sunarzamon,
        .iconSprite = gMonIcon_Sunarzamon,
        .iconPalIndex = 1,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Sunarzamon)
        OVERWORLD(
            sPicTable_Sunarzamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sunarzamon,
            gShinyOverworldPalette_Sunarzamon
        )
        .levelUpLearnset = sSunarzamonLevelUpLearnset,
        .teachableLearnset = sSunarzamonTeachableLearnset,
        .eggMoveLearnset = sSunarzamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BABOONMON}),
    },

    [SPECIES_SWIMMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 57,
        .baseDefense   = 54,
        .baseSpeed     = 61,
        .baseSpAttack  = 54,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Swimmon"),
        .cryId = CRY_SWIMMON,
        .natDexNum = NATIONAL_DEX_SWIMMON,
        .categoryName = _("Exotic Fish"),
        .height = 10,
        .weight = 261,
        .description = COMPOUND_STRING(
            "When attacked by other Digimon, Swimmon\n"
            "has the ability to camouflage itself to\n"
            "help escape. It usually likes to form\n"
            "schools with others near warm coral reefs."),
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swimmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Swimmon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Swimmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Swimmon,
        .shinyPalette = gMonShinyPalette_Swimmon,
        .iconSprite = gMonIcon_Swimmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Swimmon)
        OVERWORLD(
            sPicTable_Swimmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swimmon,
            gShinyOverworldPalette_Swimmon
        )
        .levelUpLearnset = sSwimmonLevelUpLearnset,
        .teachableLearnset = sSwimmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_COELAMON}),
    },

    [SPECIES_SYAKOMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 52,
        .baseDefense   = 68,
        .baseSpeed     = 52,
        .baseSpAttack  = 57,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_SHELL_ARMOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Syakomon"),
        .cryId = CRY_SYAKOMON,
        .natDexNum = NATIONAL_DEX_SYAKOMON,
        .categoryName = _("Shell"),
        .height = 8,
        .weight = 522,
        .description = COMPOUND_STRING(
            "Syakomon will use its cute looks to lure\n"
            "in unsuspecting foes and attack when they\n"
            "get close. Its insides are soft and weak\n"
            "like an in-training Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Syakomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Syakomon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Syakomon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Syakomon,
        .shinyPalette = gMonShinyPalette_Syakomon,
        .iconSprite = gMonIcon_Syakomon,
        .iconPalIndex = 1,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Syakomon)
        OVERWORLD(
            sPicTable_Syakomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Syakomon,
            gShinyOverworldPalette_Syakomon
        )
        .levelUpLearnset = sSyakomonLevelUpLearnset,
        .teachableLearnset = sSyakomonTeachableLearnset,
        .formSpeciesIdTable = sSyakomonFormSpeciesIdTable,
        .formChangeTable = sSyakomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_SYAKOMON_X},
                                {EVO_LEVEL, 35, SPECIES_GESOMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SYAKOMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Syakomon"),
        .cryId = CRY_SYAKOMON_MEGA,
        .natDexNum = NATIONAL_DEX_SYAKOMON,
        .categoryName = _("Forest"),
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Thanks to the power in its quick legs,\n"
            "Mega Syakomon can be on its opponent in a\n"
            "flash. It can cut off a portion of its tail\n"
            "to fire it like a missile at an opponent."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_SyakomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SyakomonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SyakomonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_SyakomonMega,
        .shinyPalette = gMonShinyPalette_SyakomonMega,
        .iconSprite = gMonIcon_SyakomonMega,
        .iconPalIndex = 1,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(Syakomon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSyakomonLevelUpLearnset,
        .teachableLearnset = sSyakomonTeachableLearnset,
        .formSpeciesIdTable = sSyakomonFormSpeciesIdTable,
        .formChangeTable = sSyakomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SUNARZAMON

#if P_FAMILY_SYAKOMON_X
    [SPECIES_SYAKOMON_X] =
    {
        .baseHP        = 43,
        .baseAttack    = 58,
        .baseDefense   = 64,
        .baseSpeed     = 57,
        .baseSpAttack  = 57,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Syakomon"),
        .cryId = CRY_SYAKOMON_X,
        .natDexNum = NATIONAL_DEX_SYAKOMON_X,
        .categoryName = _("X Antibody"),
        .height = 8,
        .weight = 626,
        .description = COMPOUND_STRING(
            "Syakomon X is better in almost every way\n"
            "compared to its normal form as it has\n"
            "now developed jet spray ports for speed\n"
            "and a pistol for surprise attacks."),
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Syakomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .frontAnimFrames = sAnims_Syakomon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Syakomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Syakomon_x,
        .shinyPalette = gMonShinyPalette_Syakomon_x,
        .iconSprite = gMonIcon_Syakomon_x,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_Syakomon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Syakomon_x)
        OVERWORLD(
            sPicTable_Syakomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Syakomon_x,
            gShinyOverworldPalette_Syakomon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Syakomon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sSyakomon_xLevelUpLearnset,
        .teachableLearnset = sSyakomon_xTeachableLearnset,
        .eggMoveLearnset = sSyakomon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_EBIDRAMON}),
    },

    [SPECIES_TAPIRMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 50,
        .baseDefense   = 49,
        .baseSpeed     = 54,
        .baseSpAttack  = 61,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_PSYCHIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_EPIPHANY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tapirmon"),
        .cryId = CRY_TAPIRMON,
        .natDexNum = NATIONAL_DEX_TAPIRMON,
        .categoryName = _("Young Fowl"),
        .height = 10,
        .weight = 251,
        .description = COMPOUND_STRING(
            "The data that is produced from humans\n"
            "in REM sleeps seems to be what Tapirmon\n"
            "eats. It also seems to have the ability\n"
            "to purge nightmares from others."),
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tapirmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .frontAnimFrames = sAnims_Tapirmon,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Tapirmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Tapirmon,
        .shinyPalette = gMonShinyPalette_Tapirmon,
        .iconSprite = gMonIcon_Tapirmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TapirmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .backPicFemale = gMonBackPic_TapirmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Tapirmon)
        OVERWORLD(
            sPicTable_Tapirmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tapirmon,
            gShinyOverworldPalette_Tapirmon
        )
        OVERWORLD_FEMALE(
            sPicTable_TapirmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sTapirmonLevelUpLearnset,
        .teachableLearnset = sTapirmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BOARMON}),
    },

    [SPECIES_TENTOMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 57,
        .baseDefense   = 51,
        .baseSpeed     = 53,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_BUG),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SWARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tentomon"),
        .cryId = CRY_TENTOMON,
        .natDexNum = NATIONAL_DEX_TENTOMON,
        .categoryName = _("Ladybird"),
        .height = 6,
        .weight = 220,
        .description = COMPOUND_STRING(
            "The shell on Tentomons back provides only\n"
            "moderate defense. Because of this, it\n"
            "tends to avoid battles however if forced, \n"
            "it can use its four arms to attack."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Tentomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tentomon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Tentomon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Tentomon,
        .shinyPalette = gMonShinyPalette_Tentomon,
        .iconSprite = gMonIcon_Tentomon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TentomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_TentomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Tentomon)
        OVERWORLD(
            sPicTable_Tentomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tentomon,
            gShinyOverworldPalette_Tentomon
        )
        OVERWORLD_FEMALE(
            sPicTable_TentomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sTentomonLevelUpLearnset,
        .teachableLearnset = sTentomonTeachableLearnset,
        .formSpeciesIdTable = sTentomonFormSpeciesIdTable,
        .formChangeTable = sTentomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_FLAWIZAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TENTOMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tentomon"),
        .cryId = CRY_TENTOMON_MEGA,
        .natDexNum = NATIONAL_DEX_TENTOMON,
        .categoryName = _("Blaze"),
        .height = 19,
        .weight = 520,
        .description = COMPOUND_STRING(
            "As it unleashes a flurry of savage kicks,\n"
            "its legs can begin to burn from the\n"
            "friction of the surrounding atmosphere.\n"
            "They're always a source of pride to it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_TentomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TentomonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TentomonMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_TentomonMega,
        .shinyPalette = gMonShinyPalette_TentomonMega,
        .iconSprite = gMonIcon_TentomonMega,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Tentomon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTentomonLevelUpLearnset,
        .teachableLearnset = sTentomonTeachableLearnset,
        .formSpeciesIdTable = sTentomonFormSpeciesIdTable,
        .formChangeTable = sTentomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SYAKOMON_X

#if P_FAMILY_TERRIERMON
    [SPECIES_TERRIERMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 53,
        .baseDefense   = 55,
        .baseSpeed     = 52,
        .baseSpAttack  = 57,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Terriermon"),
        .cryId = CRY_TERRIERMON,
        .natDexNum = NATIONAL_DEX_TERRIERMON,
        .categoryName = _("Twin"),
        .height = 6,
        .weight = 241,
        .description = COMPOUND_STRING(
            "Although it is a very peaceful Digimon, it\n"
            "is surprisingly adept at battle, often\n"
            "overpowering opponnents. Its relationship\n"
            "with a Lopmon is very sibling like."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Terriermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .frontAnimFrames = sAnims_Terriermon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Terriermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Terriermon,
        .shinyPalette = gMonShinyPalette_Terriermon,
        .iconSprite = gMonIcon_Terriermon,
        .iconPalIndex = 0,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Terriermon)
        OVERWORLD(
            sPicTable_Terriermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Terriermon,
            gShinyOverworldPalette_Terriermon
        )
        .levelUpLearnset = sTerriermonLevelUpLearnset,
        .teachableLearnset = sTerriermonTeachableLearnset,
        .eggMoveLearnset = sTerriermonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGARGOMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_TERRIERMON_X},
                                {EVO_LEVEL, 30, SPECIES_GARGOMON}),
    },

    [SPECIES_TERRIERMON_ASSISTANT] =
    {
        .baseHP        = 53,
        .baseAttack    = 53,
        .baseDefense   = 51,
        .baseSpeed     = 52,
        .baseSpAttack  = 61,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Terriermon"),
        .cryId = CRY_TERRIERMON_ASSISTANT,
        .natDexNum = NATIONAL_DEX_TERRIERMON_ASSISTANT,
        .categoryName = _("Research"),
        .height = 6,
        .weight = 249,
        .description = COMPOUND_STRING(
            "Due to spending more time researching \n"
            "than battling, this Terriormon is much\n"
            "weaker physically however it uses its wit\n"
            "in battle to great success."),
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Terriermon_assistant,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = sAnims_Terriermon_assistant,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Terriermon_assistant,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Terriermon_assistant,
        .shinyPalette = gMonShinyPalette_Terriermon_assistant,
        .iconSprite = gMonIcon_Terriermon_assistant,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Terriermon_assistant)
        OVERWORLD(
            sPicTable_Terriermon_assistant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Terriermon_assistant,
            gShinyOverworldPalette_Terriermon_assistant
        )
        .levelUpLearnset = sTerriermon_assistantLevelUpLearnset,
        .teachableLearnset = sTerriermon_assistantTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGARGOMON},
                                {EVO_LEVEL, 30, SPECIES_GARGOMON}),
    },

    [SPECIES_TERRIERMON_X] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 50,
        .baseSpeed     = 56,
        .baseSpAttack  = 63,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Terriermon"),
        .cryId = CRY_TERRIERMON_X,
        .natDexNum = NATIONAL_DEX_TERRIERMON_X,
        .categoryName = _("X Antibody"),
        .height = 6,
        .weight = 229,
        .description = COMPOUND_STRING(
            "Terriormon Xs long ears and hair can be\n"
            "used to read the flow of the wind. It is\n"
            "also to psychically connect to Lopmon X\n"
            "with its 'Gen Emerald' ear jewelry."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Terriermon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .frontAnimFrames = sAnims_Terriermon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Terriermon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Terriermon_x,
        .shinyPalette = gMonShinyPalette_Terriermon_x,
        .iconSprite = gMonIcon_Terriermon_x,
        .iconPalIndex = 0,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Terriermon_x)
        OVERWORLD(
            sPicTable_Terriermon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Terriermon_x,
            gShinyOverworldPalette_Terriermon_x
        )
        .levelUpLearnset = sTerriermon_xLevelUpLearnset,
        .teachableLearnset = sTerriermon_xTeachableLearnset,
        .formSpeciesIdTable = sTerriermon_xFormSpeciesIdTable,
        .formChangeTable = sTerriermon_xFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DORUGAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TERRIERMON_X_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 318 : 286,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terriermon"),
        .cryId = CRY_TERRIERMON_X_MEGA,
        .natDexNum = NATIONAL_DEX_TERRIERMON_X,
        .categoryName = _("Mud Fish"),
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "When it Mega Evolves, the strength that it\n"
            "needs to act in the water is increased.\n"
            "It can use its tenacious power\n"
            "both on land and in the water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Terriermon_xMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Terriermon_xMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Terriermon_xMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Terriermon_xMega,
        .shinyPalette = gMonShinyPalette_Terriermon_xMega,
        .iconSprite = gMonIcon_Terriermon_xMega,
        .iconPalIndex = 0,
        SHADOW(6, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Terriermon_x)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTerriermon_xLevelUpLearnset,
        .teachableLearnset = sTerriermon_xTeachableLearnset,
        .formSpeciesIdTable = sTerriermon_xFormSpeciesIdTable,
        .formChangeTable = sTerriermon_xFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TERRIERMON

#if P_FAMILY_TINKERMON
    [SPECIES_TINKERMON] =
    {
        .baseHP        = 46,
        .baseAttack    = 52,
        .baseDefense   = 50,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_FLYING, TYPE_FAIRY),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_SPEED_BOOST, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tinkermon"),
        .cryId = CRY_TINKERMON,
        .natDexNum = NATIONAL_DEX_TINKERMON,
        .categoryName = _("Fairy Tale"),
        .height = 3,
        .weight = 53,
        .description = COMPOUND_STRING(
            "Although it is a very friendly Digimon\n"
            "to children, Tinker often gets into\n"
            "trouble as it will innocently kidnap\n"
            "them with Petermons help."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tinkermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = sAnims_Tinkermon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tinkermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Tinkermon,
        .shinyPalette = gMonShinyPalette_Tinkermon,
        .iconSprite = gMonIcon_Tinkermon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tinkermon)
        OVERWORLD(
            sPicTable_Tinkermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tinkermon,
            gShinyOverworldPalette_Tinkermon
        )
        .levelUpLearnset = sTinkermonLevelUpLearnset,
        .teachableLearnset = sTinkermonTeachableLearnset,
        .eggMoveLearnset = sTinkermonEggMoveLearnset,
    },

    [SPECIES_TINPET] =
    {
        .baseHP        = 48,
        .baseAttack    = 51,
        .baseDefense   = 51,
        .baseSpeed     = 48,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tinpet"),
        .cryId = CRY_TINPET,
        .natDexNum = NATIONAL_DEX_TINPET,
        .categoryName = _("Medabot"),
        .height = 10,
        .weight = 348,
        .description = COMPOUND_STRING(
            "Tinpet is the basic frame of all other\n"
            "Medabot Digimon. It has good\n"
            "customisability making it a popular\n"
            "choice for more competitive tamers."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tinpet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Tinpet,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tinpet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Tinpet,
        .shinyPalette = gMonShinyPalette_Tinpet,
        .iconSprite = gMonIcon_Tinpet,
        .iconPalIndex = 2,
        SHADOW(-2, 6, SHADOW_SIZE_L)
        FOOTPRINT(Tinpet)
        OVERWORLD(
            sPicTable_Tinpet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tinpet,
            gShinyOverworldPalette_Tinpet
        )
        .levelUpLearnset = sTinpetLevelUpLearnset,
        .teachableLearnset = sTinpetTeachableLearnset,
    },
#endif //P_FAMILY_TINKERMON

#if P_FAMILY_TOYAGUMON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define TOYAGUMON_EXP_YIELD 56
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define TOYAGUMON_EXP_YIELD 48
#else
    #define TOYAGUMON_EXP_YIELD 60
#endif

    [SPECIES_TOYAGUMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 55,
        .baseDefense   = 56,
        .baseSpeed     = 49,
        .baseSpAttack  = 51,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Toyagumon"),
        .cryId = CRY_TOYAGUMON,
        .natDexNum = NATIONAL_DEX_TOYAGUMON,
        .categoryName = _("Toy"),
        .height = 11,
        .weight = 89,
        .description = COMPOUND_STRING(
            "Toyagumon is a very playful Digimon\n"
            "that likes to interact with children. It\n"
            "spends most of its days communicating\n"
            "with them over the internet."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toyagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Toyagumon,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Toyagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Toyagumon,
        .shinyPalette = gMonShinyPalette_Toyagumon,
        .iconSprite = gMonIcon_Toyagumon,
        .iconPalIndex = 2,
        SHADOW(-4, 0, SHADOW_SIZE_M)
        FOOTPRINT(Toyagumon)
        OVERWORLD(
            sPicTable_Toyagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Toyagumon,
            gShinyOverworldPalette_Toyagumon
        )
        .levelUpLearnset = sToyagumonLevelUpLearnset,
        .teachableLearnset = sToyagumonTeachableLearnset,
        .eggMoveLearnset = sToyagumonEggMoveLearnset,
        .formSpeciesIdTable = sToyagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CLOCKMON_FUSION}),
    },

    [SPECIES_TSUKAIMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 56,
        .baseDefense   = 53,
        .baseSpeed     = 52,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsukaimon"),
        .cryId = CRY_TSUKAIMON,
        .natDexNum = NATIONAL_DEX_TSUKAIMON,
        .categoryName = _("Guinea Pig"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "It is assumed that Tsuikaimon is a\n"
            "subspecies of Patamon. It is almost the\n"
            "exact opposite in behaviour though as it\n"
            "loves to get into fights."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tsukaimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 13,
        .frontAnimFrames = sAnims_Tsukaimon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Tsukaimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Tsukaimon,
        .shinyPalette = gMonShinyPalette_Tsukaimon,
        .iconSprite = gMonIcon_Tsukaimon,
        .iconPalIndex = 2,
        SHADOW(-6, 0, SHADOW_SIZE_L)
        FOOTPRINT(Tsukaimon)
        OVERWORLD(
            sPicTable_Tsukaimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tsukaimon,
            gShinyOverworldPalette_Tsukaimon
        )
        .levelUpLearnset = sTsukaimonLevelUpLearnset,
        .teachableLearnset = sTsukaimonTeachableLearnset,
        .formSpeciesIdTable = sTsukaimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 57, SPECIES_DEVIDRAMON},
                                {EVO_LEVEL, 35, SPECIES_DEVIMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_TOYAGUMON_GALAR] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = TOYAGUMON_EXP_YIELD,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Toyagumon"),
        .cryId = CRY_TOYAGUMON,
        .natDexNum = NATIONAL_DEX_TOYAGUMON,
        .categoryName = _("Tiny Raccoon"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Its restlessness has it constantly moving\n"
            "in zigzags. It will purposely run into other\n"
            "Pokémon to start fights. It's thought to\n"
            "be the oldest form of Toyagumon."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ToyagumonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_ToyagumonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToyagumonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ToyagumonGalar,
        .shinyPalette = gMonShinyPalette_ToyagumonGalar,
        .iconSprite = gMonIcon_ToyagumonGalar,
        .iconPalIndex = 0,
        SHADOW(-5, 0, SHADOW_SIZE_M)
        FOOTPRINT(Toyagumon)
        OVERWORLD(
            sPicTable_ToyagumonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ToyagumonGalar,
            gShinyOverworldPalette_ToyagumonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sToyagumonGalarLevelUpLearnset,
        .teachableLearnset = sToyagumonGalarTeachableLearnset,
        .eggMoveLearnset = sToyagumonGalarEggMoveLearnset,
        .formSpeciesIdTable = sToyagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_TSUKAIMON_GALAR}),
    },

    [SPECIES_TSUKAIMON_GALAR] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tsukaimon"),
        .cryId = CRY_TSUKAIMON,
        .natDexNum = NATIONAL_DEX_TSUKAIMON,
        .categoryName = _("Rushing"),
        .height = 5,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This very aggressive Pokémon will\n"
            "recklessly challenge opponents stronger\n"
            "than itself. It uses its long tongue to\n"
            "taunt them to then tackle forcefully."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TsukaimonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_TsukaimonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsukaimonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TsukaimonGalar,
        .shinyPalette = gMonShinyPalette_TsukaimonGalar,
        .iconSprite = gMonIcon_TsukaimonGalar,
        .iconPalIndex = 0,
        SHADOW(-4, 0, SHADOW_SIZE_L)
        FOOTPRINT(Tsukaimon)
        OVERWORLD(
            sPicTable_TsukaimonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TsukaimonGalar,
            gShinyOverworldPalette_TsukaimonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sTsukaimonGalarLevelUpLearnset,
        .teachableLearnset = sTsukaimonGalarTeachableLearnset,
        .formSpeciesIdTable = sTsukaimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 35, SPECIES_OBSTAGOON}),
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Obstagoon"),
        .cryId = CRY_OBSTAGOON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "Its voice is staggering in volume.\n"
            "Obstagoon has a tendency to take on a\n"
            "threatening posture and shout--this move\n"
            "is known as Obstruct."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Obstagoon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Obstagoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Obstagoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Obstagoon,
        .shinyPalette = gMonShinyPalette_Obstagoon,
        .iconSprite = gMonIcon_Obstagoon,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Obstagoon)
        OVERWORLD(
            sPicTable_Obstagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Obstagoon,
            gShinyOverworldPalette_Obstagoon
        )
        .levelUpLearnset = sObstagoonLevelUpLearnset,
        .teachableLearnset = sObstagoonTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_TOYAGUMON

#if P_FAMILY_VEEMON
    [SPECIES_VEEMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 58,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 52,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Veemon"),
        .cryId = CRY_VEEMON,
        .natDexNum = NATIONAL_DEX_VEEMON,
        .categoryName = _("V"),
        .height = 8,
        .weight = 289,
        .description = COMPOUND_STRING(
            "Veemon is one of the few suriving species\n"
            "that flourished in the Genesis of the\n"
            "Digital World. It's one of few Digimon\n"
            "that can perform 'Armour Digivolution'."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Veemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = sAnims_Veemon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Veemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Veemon,
        .shinyPalette = gMonShinyPalette_Veemon,
        .iconSprite = gMonIcon_Veemon,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Veemon)
        OVERWORLD(
            sPicTable_Veemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Veemon,
            gShinyOverworldPalette_Veemon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sVeemonLevelUpLearnset,
        .teachableLearnset = sVeemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_EXVEEMON_VIRUS},
                                {EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_FLADRAMON},
                                {EVO_ITEM, ITEM_SINCERITY_EGG, SPECIES_DEPTHMON},
                                {EVO_ITEM, ITEM_LIGHT_EGG, SPECIES_GARGOYLMON},
                                {EVO_LEVEL, 36, SPECIES_EXVEEMON}),
    },

    [SPECIES_VEMMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 60,
        .baseDefense   = 59,
        .baseSpeed     = 55,
        .baseSpAttack  = 51,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .attribute = TYPE_UKNOWN,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Vemmon"),
        .cryId = CRY_VEMMON,
        .natDexNum = NATIONAL_DEX_VEMMON,
        .categoryName = _("Experiment"),
        .height = 9,
        .weight = 631,
        .description = COMPOUND_STRING(
            "Vemmon is an artificial Digimon that was\n"
            "created through extensive experimentation.\n"
            "It only has one objective and that is to\n"
            "fight, eat and get much stronger."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vemmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 10,
        .frontAnimFrames = sAnims_Vemmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Vemmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Vemmon,
        .shinyPalette = gMonShinyPalette_Vemmon,
        .iconSprite = gMonIcon_Vemmon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Vemmon)
        OVERWORLD(
            sPicTable_Vemmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Vemmon,
            gShinyOverworldPalette_Vemmon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sVemmonLevelUpLearnset,
        .teachableLearnset = sVemmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DAMEMON_FUSION}),
    },

    [SPECIES_VORVOMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 54,
        .baseDefense   = 57,
        .baseSpeed     = 48,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Vorvomon"),
        .cryId = CRY_VORVOMON,
        .natDexNum = NATIONAL_DEX_VORVOMON,
        .categoryName = _("Rock Dragon"),
        .height = 7,
        .weight = 835,
        .description = COMPOUND_STRING(
            "Vorvomons body is made up of hard, hot\n"
            "ore, this body inhibits its ability to\n"
            "fly as its too heavy for its weak wings.\n"
            "It is a very passionate Digimon."),
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vorvomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Vorvomon,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backPic = gMonBackPic_Vorvomon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Vorvomon,
        .shinyPalette = gMonShinyPalette_Vorvomon,
        .iconSprite = gMonIcon_Vorvomon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_VorvomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_VorvomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Vorvomon)
        OVERWORLD(
            sPicTable_Vorvomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Vorvomon,
            gShinyOverworldPalette_Vorvomon
        )
        OVERWORLD_FEMALE(
            sPicTable_VorvomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sVorvomonLevelUpLearnset,
        .teachableLearnset = sVorvomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_BIRDRAMON}),
    },

    [SPECIES_WORMMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 47,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 51,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Wormmon"),
        .cryId = CRY_WORMMON,
        .natDexNum = NATIONAL_DEX_WORMMON,
        .categoryName = _("Worm"),
        .height = 5,
        .weight = 158,
        .description = COMPOUND_STRING(
            "Its timid and cowardly personality makes\n"
            "it a common target for Digimon. Its only\n"
            "real strength as a Digimon is that its\n"
            "thread is fairly useful for traps."),
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wormmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 10,
        .frontAnimFrames = sAnims_Wormmon,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Wormmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 24) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Wormmon,
        .shinyPalette = gMonShinyPalette_Wormmon,
        .iconSprite = gMonIcon_Wormmon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Wormmon)
        OVERWORLD(
            sPicTable_Wormmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Wormmon,
            gShinyOverworldPalette_Wormmon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWormmonLevelUpLearnset,
        .teachableLearnset = sWormmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LOVE_EGG, SPECIES_AURUMON},
                                {EVO_ITEM, ITEM_KINDNESS_EGG, SPECIES_BUCCHIEMON_RED},
                                {EVO_ITEM, ITEM_HOPE_EGG, SPECIES_BULLMON},
                                {EVO_ITEM, ITEM_SINCERITY_EGG, SPECIES_ARCHELOMON},
                                {EVO_LEVEL, 34, SPECIES_BUCCHIEMON_GREEN}),
    },

    [SPECIES_ZENIMON] =
    {
        .baseHP        = 59,
        .baseAttack    = 38,
        .baseDefense   = 64,
        .baseSpeed     = 51,
        .baseSpAttack  = 36,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zenimon"),
        .cryId = CRY_ZENIMON,
        .natDexNum = NATIONAL_DEX_ZENIMON,
        .categoryName = _("Yen"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "If you have ever wondered where your coins\n"
            "have dissapeared to, Zenimon is likely\n"
            "the culprit. It likes to steal coins to\n"
            "give to Ganemon."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zenimon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Zenimon,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backPic = gMonBackPic_Zenimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Zenimon,
        .shinyPalette = gMonShinyPalette_Zenimon,
        .iconSprite = gMonIcon_Zenimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 5,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ZenimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_ZenimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Zenimon)
        OVERWORLD(
            sPicTable_Zenimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Zenimon,
            gShinyOverworldPalette_Zenimon
        )
        OVERWORLD_FEMALE(
            sPicTable_ZenimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sZenimonLevelUpLearnset,
        .teachableLearnset = sZenimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_GANEMON}),
    },
#endif //P_FAMILY_VEEMON

#if P_FAMILY_ZUBAMON
    [SPECIES_ZUBAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 67,
        .baseDefense   = 56,
        .baseSpeed     = 56,
        .baseSpAttack  = 49,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zubamon"),
        .cryId = CRY_ZUBAMON,
        .natDexNum = NATIONAL_DEX_ZUBAMON,
        .categoryName = _("Sword"),
        .height = 9,
        .weight = 754,
        .description = COMPOUND_STRING(
            "Often Zubamon can be heard shouting 'I am\n"
            "the Twentiest'. If you ask it what that\n"
            "means, it will not be able to explain as\n"
            "it doesn't understand itself."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zubamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = sAnims_Zubamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Zubamon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Zubamon,
        .shinyPalette = gMonShinyPalette_Zubamon,
        .iconSprite = gMonIcon_Zubamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Zubamon)
        OVERWORLD(
            sPicTable_Zubamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zubamon,
            gShinyOverworldPalette_Zubamon
        )
        .levelUpLearnset = sZubamonLevelUpLearnset,
        .teachableLearnset = sZubamonTeachableLearnset,
        .eggMoveLearnset = sZubamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_AXEMON}),
    },

    [SPECIES_AEGIOMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 84,
        .baseDefense   = 74,
        .baseSpeed     = 90,
        .baseSpAttack  = 79,
        .baseSpDefense = 91,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_QUICK_FEET, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Aegiomon"),
        .cryId = CRY_AEGIOMON,
        .natDexNum = NATIONAL_DEX_AEGIOMON,
        .categoryName = _("Deity"),
        .height = 17,
        .weight = 320,
        .description = COMPOUND_STRING(
            "Aegiomon has the appearance of a human with\n"
            "the lower body of a goat. It likes to play\n"
            "music with the pipes 'Syinx' that hand\n"
            "on on its waist."),
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aegiomon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Lombre,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lombre,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Aegiomon,
        .shinyPalette = gMonShinyPalette_Aegiomon,
        .iconSprite = gMonIcon_Aegiomon,
        .iconPalIndex = 1,
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Lombre)
        OVERWORLD(
            sPicTable_Lombre,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lombre,
            gShinyOverworldPalette_Lombre
        )
        .levelUpLearnset = sLombreLevelUpLearnset,
        .teachableLearnset = sLombreTeachableLearnset,
    },

    [SPECIES_AGUNIMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 97,
        .baseDefense   = 65,
        .baseSpeed     = 73,
        .baseSpAttack  = 84,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_SOLAR_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Agunimon"),
        .cryId = CRY_AGUNIMON,
        .natDexNum = NATIONAL_DEX_AGUNIMON,
        .categoryName = _("Ancient"),
        .height = 21,
        .weight = 826,
        .description = COMPOUND_STRING(
            "Agunimons DigiCore is wrapped in the\n"
            "Spiritual Fire is which gives it the\n"
            "ability to freely manipulate flames. It is\n"
            "said that it is descendant of AncientGreymon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Ludicolo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Agunimon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Ludicolo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agunimon,
        .shinyPalette = gMonShinyPalette_Agunimon,
        .iconSprite = gMonIcon_Agunimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LudicoloF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_LudicoloF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Ludicolo)
        OVERWORLD(
            sPicTable_Ludicolo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ludicolo,
            gShinyOverworldPalette_Ludicolo
        )
        OVERWORLD_FEMALE(
            sPicTable_LudicoloF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sLudicoloLevelUpLearnset,
        .teachableLearnset = sLudicoloTeachableLearnset,
    },
#endif //P_FAMILY_ZUBAMON

#if P_FAMILY_AIRDRAMON
    [SPECIES_AIRDRAMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 102,
        .baseSpAttack  = 83,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_AIR_LOCK, ABILITY_MARVEL_SCALE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Airdramon"),
        .cryId = CRY_AIRDRAMON,
        .natDexNum = NATIONAL_DEX_AIRDRAMON,
        .categoryName = _("Mythical"),
        .height = 150,
        .weight = 2643,
        .description = COMPOUND_STRING(
            "Texts dating thousands of years ago show\n"
            "that ancient Digimon society believed that\n"
            "Airdramon was close to god, making it a\n"
            "deity amongst society."),
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seedot,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Seedot,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Seedot,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Seedot,
        .shinyPalette = gMonShinyPalette_Seedot,
        .iconSprite = gMonIcon_Seedot,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Seedot)
        OVERWORLD(
            sPicTable_Seedot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Seedot,
            gShinyOverworldPalette_Seedot
        )
        .levelUpLearnset = sSeedotLevelUpLearnset,
        .teachableLearnset = sSeedotTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
    },

    [SPECIES_AKATORIMON] =
    {
        .baseHP        = 71,
        .baseAttack    = 89,
        .baseDefense   = 74,
        .baseSpeed     = 70,
        .baseSpAttack  = 69,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Akatorimon"),
        .cryId = CRY_AKATORIMON,
        .natDexNum = NATIONAL_DEX_AKATORIMON,
        .categoryName = _("Chicken"),
        .height = 23,
        .weight = 576,
        .description = COMPOUND_STRING(
            "Although Akatorimon has taken in lots of\n"
            "Flying data, it is unable to fly at all. To\n"
            "compensate, it has developed it's legs\n"
            "to an incredible degree."),
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nuzleaf,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Nuzleaf,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nuzleaf,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Akatorimon,
        .shinyPalette = gMonShinyPalette_Akatorimon,
        .iconSprite = gMonIcon_Akatorimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_NuzleafF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .backPicFemale = gMonBackPic_NuzleafF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Nuzleaf)
        OVERWORLD(
            sPicTable_Nuzleaf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nuzleaf,
            gShinyOverworldPalette_Nuzleaf
        )
        OVERWORLD_FEMALE(
            sPicTable_NuzleafF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sNuzleafLevelUpLearnset,
        .teachableLearnset = sNuzleafTeachableLearnset,
    },

    [SPECIES_ALLOMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 78,
        .baseDefense   = 72,
        .baseSpeed     = 98,
        .baseSpAttack  = 67,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Allomon"),
        .cryId = CRY_ALLOMON,
        .natDexNum = NATIONAL_DEX_ALLOMON,
        .categoryName = _("Dinosaur"),
        .height = 34,
        .weight = 1003,
        .description = COMPOUND_STRING(
            "Allomon are known to have a rivalry with\n"
            "any Tyrannomon they encounter. They often\n"
            "use their powerful legs to outspeed any\n"
            "opponents they encounte."),
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shiftry,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 7,
        .frontAnimFrames = sAnims_Shiftry,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Shiftry,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Shiftry,
        .shinyPalette = gMonShinyPalette_Shiftry,
        .iconSprite = gMonIcon_Shiftry,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 5,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ShiftryF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_ShiftryF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Shiftry)
        OVERWORLD(
            sPicTable_Shiftry,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shiftry,
            gShinyOverworldPalette_Shiftry
        )
        OVERWORLD_FEMALE(
            sPicTable_ShiftryF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sShiftryLevelUpLearnset,
        .teachableLearnset = sShiftryTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_ALLOMON_X}),
    },
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_ALLOMON_X
    [SPECIES_ALLOMON_X] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 72,
        .baseSpeed     = 100,
        .baseSpAttack  = 77,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Allomon"),
        .cryId = CRY_ALLOMON_X,
        .natDexNum = NATIONAL_DEX_ALLOMON_X,
        .categoryName = _("X Antibody"),
        .height = 35,
        .weight = 1074,
        .description = COMPOUND_STRING(
            "It's increased leg strength grants Allomon\n"
            "X even more speed, letting it outmaneuver\n"
            "most Digimon. Some Digimon even report it\n"
            "taking flight at its maximum speed."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Taillow,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = sAnims_Taillow,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Taillow,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Allomon_x,
        .shinyPalette = gMonShinyPalette_Allomon_x,
        .iconSprite = gMonIcon_Allomon_x,
        .iconPalIndex = 2,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Taillow)
        OVERWORLD(
            sPicTable_Taillow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Taillow,
            gShinyOverworldPalette_Taillow
        )
        .levelUpLearnset = sTaillowLevelUpLearnset,
        .teachableLearnset = sTaillowTeachableLearnset,
        .eggMoveLearnset = sTaillowEggMoveLearnset,
    },

    [SPECIES_ANGELAMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 60,
        .baseDefense   = 46,
        .baseSpeed     = 50,
        .baseSpAttack  = 46,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_SOUL_HEART },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Angelamon"),
        .cryId = CRY_ANGELAMON,
        .natDexNum = NATIONAL_DEX_ANGELAMON,
        .categoryName = _("Divorce"),
        .height = 13,
        .weight = 250,
        .description = COMPOUND_STRING(
            "I wanted to put the Angelamon greentext\n"
            "here but because I couldn't be bothered to\n"
            "expand this nor could I put a link, I'll\n"
            "ask you to google it instead."),
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Angelamon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = sAnims_Swellow,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Swellow,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Angelamon,
        .shinyPalette = gMonShinyPalette_Angelamon,
        .iconSprite = gMonIcon_Angelamon,
        .iconPalIndex = 2,
        SHADOW(-7, 7, SHADOW_SIZE_M)
        FOOTPRINT(Swellow)
        OVERWORLD(
            sPicTable_Swellow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Swellow,
            gShinyOverworldPalette_Swellow
        )
        .levelUpLearnset = sSwellowLevelUpLearnset,
        .teachableLearnset = sSwellowTeachableLearnset,
    },
#endif //P_FAMILY_ALLOMON_X

#if P_FAMILY_ANGEMON
    [SPECIES_ANGEMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 69,
        .baseSpAttack  = 104,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_PRETTY_FEATHER, 
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_EPIPHANY, ABILITY_SERENE_GRACE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Angemon"),
        .cryId = CRY_ANGEMON,
        .natDexNum = NATIONAL_DEX_ANGEMON,
        .categoryName = _("Angel"),
        .height = 27,
        .weight = 791,
        .description = COMPOUND_STRING(
            "Angemon are one of few Digimon that are a\n"
            "being of perfected virtue. However its sudden\n"
            "shift to pure violence against evil can be\n"
            "unnerving for unsuspecting bystanders."),
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wingull,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 11,
        .frontAnimFrames = sAnims_Wingull,
        .frontAnimId = ANIM_H_PIVOT,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 15,
        .backPic = gMonBackPic_Wingull,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Angemon,
        .shinyPalette = gMonShinyPalette_Angemon,
        .iconSprite = gMonIcon_Angemon,
        .iconPalIndex = 0,
        SHADOW(-2, 15, SHADOW_SIZE_S)
        FOOTPRINT(Wingull)
        OVERWORLD(
            sPicTable_Wingull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Wingull,
            gShinyOverworldPalette_Wingull
        )
        .levelUpLearnset = sWingullLevelUpLearnset,
        .teachableLearnset = sWingullTeachableLearnset,
        .eggMoveLearnset = sWingullEggMoveLearnset,
    },

    [SPECIES_ANKYLOMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 81,
        .baseDefense   = 95,
        .baseSpeed     = 62,
        .baseSpAttack  = 60,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_ROCK_HEAD, ABILITY_NONE },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RAIN_DISH },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ankylomon"),
        .cryId = CRY_ANKYLOMON,
        .natDexNum = NATIONAL_DEX_ANKYLOMON,
        .categoryName = _("Dinosaur"),
        .height = 32,
        .weight = 964,
        .description = COMPOUND_STRING(
            "Ankylomon are relativaly peaceful Digimon\n"
            "who do not seek out battle. However their\n"
            "body is decidely destructive, kitted out\n"
            "with ironclad skin and ferocious spikes."),
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pelipper,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = sAnims_Pelipper,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Ankylomon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Pelipper,
        .shinyPalette = gMonShinyPalette_Pelipper,
        .iconSprite = gMonIcon_Pelipper,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Pelipper)
        OVERWORLD(
            sPicTable_Pelipper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Pelipper,
            gShinyOverworldPalette_Pelipper
        )
        .levelUpLearnset = sPelipperLevelUpLearnset,
        .teachableLearnset = sPelipperTeachableLearnset,
    },
#endif //P_FAMILY_ANGEMON

#if P_FAMILY_APEMON
#define APEMON_FAMILY_TYPE2 (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_PSYCHIC)

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define APEMON_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS)
#else
    #define APEMON_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS)
#endif

    [SPECIES_APEMON] =
    {
        .baseHP        = 69,
        .baseAttack    = 86,
        .baseDefense   = 72,
        .baseSpeed     = 75,
        .baseSpAttack  = 68,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_LIMBER, ABILITY_VITAL_SPIRIT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Apemon"),
        .cryId = CRY_APEMON,
        .natDexNum = NATIONAL_DEX_APEMON,
        .categoryName = _("Ape"),
        .height = 20,
        .weight = 648,
        .description = COMPOUND_STRING(
            "Many don't believe in the existence of\n"
            "Apemon due its incredible stealth\n"
            "capabilities. Many researchers believe it\n"
            "likes to inhabit the Central Asian network."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Apemon,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Ralts,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Apemon,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Apemon,
        .shinyPalette = gMonShinyPalette_Apemon,
        .iconSprite = gMonIcon_Apemon,
        .iconPalIndex = 1,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ralts)
        OVERWORLD(
            sPicTable_Ralts,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ralts,
            gShinyOverworldPalette_Ralts
        )
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
    },

    [SPECIES_AQUILAMON] =
    {
        .baseHP        = 68,
        .baseAttack    = 76,
        .baseDefense   = 66,
        .baseSpeed     = 103,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_GALE_WINGS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Aquilamon"),
        .cryId = CRY_AQUILAMON,
        .natDexNum = NATIONAL_DEX_AQUILAMON,
        .categoryName = _("Bald Eagle"),
        .height = 44,
        .weight = 875,
        .description = COMPOUND_STRING(
            "Although many Flying type Digimon have\n"
            "brutal personalities, Aquilamon is a very\n"
            "respectful Digimon, often willing to work\n"
            "under others."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aquilamon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Aquilamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kirlia,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Aquilamon,
        .shinyPalette = gMonShinyPalette_Aquilamon,
        .iconSprite = gMonIcon_Aquilamon,
        .iconPalIndex = 1,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Kirlia)
        OVERWORLD(
            sPicTable_Kirlia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kirlia,
            gShinyOverworldPalette_Kirlia
        )
        .levelUpLearnset = sKirliaLevelUpLearnset,
        .teachableLearnset = sKirliaTeachableLearnset,
    },

    [SPECIES_GARDEVOIR] =
    {
        .baseHP        = 62,
        .baseAttack    = 97,
        .baseDefense   = 70,
        .baseSpeed     = 76,
        .baseSpAttack  = 74,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_CHAMPION,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_CHAMPION,
        .categoryName = _("Ultimate"),
        .height = 19,
        .weight = 653,
        .description = COMPOUND_STRING(
            "Arcadiamon that have reached Champion\n"
            "level will have consumed the data of\n"
            "various Digimon however it lacks any sense \n"
            "of self."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gardevoir,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Gardevoir,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gardevoir,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Arcadiamon_champion,
        .shinyPalette = gMonShinyPalette_Arcadiamon_champion,
        .iconSprite = gMonIcon_Arcadiamon_champion,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gardevoir)
        OVERWORLD(
            sPicTable_Gardevoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gardevoir,
            gShinyOverworldPalette_Gardevoir
        )
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable,
        .formChangeTable = sGardevoirFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ARCADIAMON_CHAMPION_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_PSYCHIC, APEMON_FAMILY_TYPE2),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_CHAMPION_MEGA,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_CHAMPION,
        .categoryName = _("Embrace"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "By opening its heart, Mega Arcadiamon_champion\n"
            "becomes able to use tremendous psychic\n"
            "power. The red plate in its chest is said to\n"
            "be a physical manifestation of its heart."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arcadiamon_championMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Arcadiamon_championMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arcadiamon_championMega,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Arcadiamon_championMega,
        .shinyPalette = gMonShinyPalette_Arcadiamon_championMega,
        .iconSprite = gMonIcon_Arcadiamon_championMega,
        .iconPalIndex = 1,
        SHADOW(1, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gardevoir)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sArcadiamon_championLevelUpLearnset,
        .teachableLearnset = sArcadiamon_championTeachableLearnset,
        .formSpeciesIdTable = sArcadiamon_championFormSpeciesIdTable,
        .formChangeTable = sArcadiamon_championFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GALLADE] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_STEADFAST, ABILITY_SHARPNESS, ABILITY_JUSTIFIED },
    #else
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .description = COMPOUND_STRING(
            "A master of courtesy and swordsmanship,\n"
            "it fights using extending swords on its\n"
            "elbows when trying to protect someone.\n"
            "It can sense what its foe is thinking."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gallade,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Gallade,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Gallade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gallade,
            gShinyOverworldPalette_Gallade
        )
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = APEMON_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE_MEGA,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_GalladeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GalladeMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GalladeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GalladeMega,
        .shinyPalette = gMonShinyPalette_GalladeMega,
        .iconSprite = gMonIcon_GalladeMega,
        .iconPalIndex = 1,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sArcadiamon_championLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_APEMON

#if P_FAMILY_ARCHELOMON
    [SPECIES_ARCHELOMON] =
    {
        .baseHP        = 72,
        .baseAttack    = 74,
        .baseDefense   = 91,
        .baseSpeed     = 62,
        .baseSpAttack  = 66,
        .baseSpDefense = 74,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 4,
        .itemCommon = ITEM_HONEY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHARPNESS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Archelomon"),
        .cryId = CRY_ARCHELOMON,
        .natDexNum = NATIONAL_DEX_ARCHELOMON,
        .categoryName = _("Sea Turtle"),
        .height = 58,
        .weight = 1235,
        .description = COMPOUND_STRING(
            "Due to its front flippers becoming sharp\n"
            "knives, it has lot of traction when moving\n"
            "making it particularly slow on land\n"
            "or in water."),
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Surskit,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 8,
        .frontAnimFrames = sAnims_Surskit,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Surskit,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Surskit,
        .shinyPalette = gMonShinyPalette_Surskit,
        .iconSprite = gMonIcon_Surskit,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Surskit)
        OVERWORLD(
            sPicTable_Surskit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Surskit,
            gShinyOverworldPalette_Surskit
        )
        .levelUpLearnset = sSurskitLevelUpLearnset,
        .teachableLearnset = sSurskitTeachableLearnset,
        .eggMoveLearnset = sSurskitEggMoveLearnset,
    },

    [SPECIES_ARGOMON_CHAMPION] =
    {
        .baseHP        = 69,
        .baseAttack    = 75,
        .baseDefense   = 72,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_CHAMPION,
        .natDexNum = NATIONAL_DEX_ARGOMON_CHAMPION,
        .categoryName = _("Algorithm"),
        .height = 15,
        .weight = 358,
        .description = COMPOUND_STRING(
            "Champion level Argomon finally grow into\n"
            "their own and start to offer some proper\n"
            "fire power. The swarms of weaker Argomon\n"
            "makes up for its average strength."),
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_champion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = sAnims_Masquerain,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Argomon_champion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Argomon_champion,
        .shinyPalette = gMonShinyPalette_Argomon_champion,
        .iconSprite = gMonIcon_Argomon_champion,
        .iconPalIndex = 0,
        SHADOW(-4, 17, SHADOW_SIZE_M)
        FOOTPRINT(Masquerain)
        OVERWORLD(
            sPicTable_Masquerain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Masquerain,
            gShinyOverworldPalette_Masquerain
        )
        .levelUpLearnset = sMasquerainLevelUpLearnset,
        .teachableLearnset = sMasquerainTeachableLearnset,
    },
#endif //P_FAMILY_ARCHELOMON

#if P_FAMILY_ARESDRAMON
    [SPECIES_ARESDRAMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 91,
        .baseDefense   = 76,
        .baseSpeed     = 74,
        .baseSpAttack  = 66,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_LIMBER, ABILITY_LONG_REACH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Aresdramon"),
        .cryId = CRY_ARESDRAMON,
        .natDexNum = NATIONAL_DEX_ARESDRAMON,
        .categoryName = _("Arrester"),
        .height = 25,
        .weight = 905,
        .description = COMPOUND_STRING(
            "The clothing on its body is a special\n"
            "rubber battle armour. This further \n"
            "strengthen its flexibility and defensive\n"
            "capabilties."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shroomish,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = sAnims_Shroomish,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shroomish,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Aresdramon,
        .shinyPalette = gMonShinyPalette_Aresdramon,
        .iconSprite = gMonIcon_Aresdramon,
        .iconPalIndex = 1,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shroomish)
        OVERWORLD(
            sPicTable_Shroomish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shroomish,
            gShinyOverworldPalette_Shroomish
        )
        .levelUpLearnset = sShroomishLevelUpLearnset,
        .teachableLearnset = sShroomishTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
    },

    [SPECIES_ATAMADEMON] =
    {
        .baseHP        = 77,
        .baseAttack    = 90,
        .baseDefense   = 75,
        .baseSpeed     = 63,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE }, // BIG HEAD
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Atamademon"),
        .cryId = CRY_ATAMADEMON,
        .natDexNum = NATIONAL_DEX_ATAMADEMON,
        .categoryName = _("Big-Headed"),
        .height = 63,
        .weight = 943,
        .description = COMPOUND_STRING(
            "Despite its menacing face, Atamadekachimon is\n"
            "actually a very gentle Digimon although that\n"
            "doesn't stop it from being very destructive\n"
            "with its giant head and poor balance."),
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Breloom,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Breloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Breloom,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Atamademon,
        .shinyPalette = gMonShinyPalette_Atamademon,
        .iconSprite = gMonIcon_Atamademon,
        .iconPalIndex = 1,
        SHADOW(-4, 9, SHADOW_SIZE_M)
        FOOTPRINT(Breloom)
        OVERWORLD(
            sPicTable_Breloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Breloom,
            gShinyOverworldPalette_Breloom
        )
        .levelUpLearnset = sBreloomLevelUpLearnset,
        .teachableLearnset = sBreloomTeachableLearnset,
    },
#endif //P_FAMILY_ARESDRAMON

#if P_FAMILY_AURUMON
    [SPECIES_AURUMON] =
    {
        .baseHP        = 69,
        .baseAttack    = 65,
        .baseDefense   = 63,
        .baseSpeed     = 98,
        .baseSpAttack  = 63,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NO_GUARD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aurumon"),
        .cryId = CRY_AURUMON,
        .natDexNum = NATIONAL_DEX_AURUMON,
        .categoryName = _("Owl"),
        .height = 16,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Aurumon is specialised in scouting moreso\n"
            "than anything else, often being able to\n"
            "detect opponents 1km away in the dark. It\n"
            "uses this ability for stealth attacks."),
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slakoth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = sAnims_Slakoth,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aurumon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Aurumon,
        .shinyPalette = gMonShinyPalette_Aurumon,
        .iconSprite = gMonIcon_Aurumon,
        .iconPalIndex = 2,
        SHADOW(1, -4, SHADOW_SIZE_M)
        FOOTPRINT(Slakoth)
        OVERWORLD(
            sPicTable_Slakoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slakoth,
            gShinyOverworldPalette_Slakoth
        )
        .levelUpLearnset = sSlakothLevelUpLearnset,
        .teachableLearnset = sSlakothTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
    },

    [SPECIES_AXEMON] =
    {
        .baseHP        = 78,
        .baseAttack    = 80,
        .baseDefense   = 71,
        .baseSpeed     = 96,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_ROUGH_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Axemon"),
        .cryId = CRY_AXEMON,
        .natDexNum = NATIONAL_DEX_AXEMON,
        .categoryName = _("Axe"),
        .height = 31,
        .weight = 885,
        .description = COMPOUND_STRING(
            "Axemon uses it incredibly tough and fast\n"
            "body to rush opponents and ram into them.\n"
            "Its speed however doesn't let it be very\n"
            "nimble so it can only charge opponents."),
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vigoroth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 7,
        .frontAnimFrames = sAnims_Vigoroth,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Vigoroth,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Axemon,
        .shinyPalette = gMonShinyPalette_Axemon,
        .iconSprite = gMonIcon_Axemon,
        .iconPalIndex = 2,
        SHADOW(4, 6, SHADOW_SIZE_M)
        FOOTPRINT(Vigoroth)
        OVERWORLD(
            sPicTable_Vigoroth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vigoroth,
            gShinyOverworldPalette_Vigoroth
        )
        .levelUpLearnset = sVigorothLevelUpLearnset,
        .teachableLearnset = sVigorothTeachableLearnset,
    },

    [SPECIES_BABOONMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 76,
        .baseDefense   = 91,
        .baseSpeed     = 61,
        .baseSpAttack  = 62,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_ROCK),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_ROUGH_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Baboonmon"),
        .cryId = CRY_BABOONMON,
        .natDexNum = NATIONAL_DEX_BABOONMON,
        .categoryName = _("Baboon"),
        .height = 30,
        .weight = 963,
        .description = COMPOUND_STRING(
            "The rocks on Baboongamons skin regenerate\n"
            "everytime they break, in doing so they become\n"
            "even tougher. The Baboongamon with the\n"
            "toughest rocks is the leader."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Slaking,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Slaking,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Slaking,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Slaking,
        .shinyPalette = gMonShinyPalette_Slaking,
        .iconSprite = gMonIcon_Slaking,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Slaking)
        OVERWORLD(
            sPicTable_Slaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slaking,
            gShinyOverworldPalette_Slaking
        )
        .levelUpLearnset = sSlakingLevelUpLearnset,
        .teachableLearnset = sSlakingTeachableLearnset,
    },
#endif //P_FAMILY_AURUMON

#if P_FAMILY_BAKEMON
    [SPECIES_BAKEMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 69,
        .baseDefense   = 91,
        .baseSpeed     = 72,
        .baseSpAttack  = 77,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 3,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bakemon"),
        .cryId = CRY_BAKEMON,
        .natDexNum = NATIONAL_DEX_BAKEMON,
        .categoryName = _("Ghost"),
        .height = 12,
        .weight = 55,
        .description = COMPOUND_STRING(
            "Everything about Bakemons true form is a\n"
            "complete mystery. The only thing that is\n"
            "known is that its covered in a white cloth.\n"
            "It prefers curses when fighting."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bakemon,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 16,
        .frontAnimFrames = sAnims_Nincada,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nincada,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bakemon,
        .shinyPalette = gMonShinyPalette_Bakemon,
        .iconSprite = gMonIcon_Bakemon,
        .iconPalIndex = 1,
        SHADOW(2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Nincada)
        OVERWORLD(
            sPicTable_Nincada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Nincada,
            gShinyOverworldPalette_Nincada
        )
        .levelUpLearnset = sNincadaLevelUpLearnset,
        .teachableLearnset = sNincadaTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
    },

    [SPECIES_BALISTAMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 94,
        .baseDefense   = 78,
        .baseSpeed     = 66,
        .baseSpAttack  = 65,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_TRANSISTOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Balistamon"),
        .cryId = CRY_BALISTAMON,
        .natDexNum = NATIONAL_DEX_BALISTAMON,
        .categoryName = _("Beetle"),
        .height = 21,
        .weight = 876,
        .description = COMPOUND_STRING(
            "Many people mistake its emotionless and\n"
            "warlike appearence to mean it is a violent\n"
            "Digimon however Ballistamon generally avoid\n"
            "combat where possible."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Balistamon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Ninjask,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ninjask,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Balistamon,
        .shinyPalette = gMonShinyPalette_Balistamon,
        .iconSprite = gMonIcon_Balistamon,
        .iconPalIndex = 1,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Ninjask)
        OVERWORLD(
            sPicTable_Ninjask,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Ninjask,
            gShinyOverworldPalette_Ninjask
        )
        .levelUpLearnset = sNinjaskLevelUpLearnset,
        .teachableLearnset = sNinjaskTeachableLearnset,
    },

    [SPECIES_BALUCHIMON] =
    {
        .baseHP        = 71,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpeed     = 89,
        .baseSpAttack  = 76,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_LIGHT),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Baluchimon"),
        .cryId = CRY_BALUCHIMON,
        .natDexNum = NATIONAL_DEX_BALUCHIMON,
        .categoryName = _("Holy"),
        .height = 30,
        .weight = 653,
        .description = COMPOUND_STRING(
            "Baluchimon were first discovered in ruins\n"
            "beneath Folder Continent. These ruins were\n"
            "once a fortress used by Angel Digimon. Balu-\n"
            "chimon are the fortress's protectors."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Baluchimon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Baluchimon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Shedinja,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Baluchimon,
        .shinyPalette = gMonShinyPalette_Baluchimon,
        .iconSprite = gMonIcon_Baluchimon,
        .iconPalIndex = 1,
        SHADOW(-2, 9, SHADOW_SIZE_S)
        FOOTPRINT(Shedinja)
        OVERWORLD(
            sPicTable_Shedinja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Shedinja,
            gShinyOverworldPalette_Shedinja
        )
        .levelUpLearnset = sShedinjaLevelUpLearnset,
        .teachableLearnset = sShedinjaTeachableLearnset,
    },
#endif //P_FAMILY_BAKEMON

#if P_FAMILY_BAOHUCKMON
    [SPECIES_BAOHUCKMON] =
    {
        .baseHP        = 91,
        .baseAttack    = 79,
        .baseDefense   = 73,
        .baseSpeed     = 75,
        .baseSpAttack  = 73,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHARPNESS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Baohuckmon"),
        .cryId = CRY_BAOHUCKMON,
        .natDexNum = NATIONAL_DEX_BAOHUCKMON,
        .categoryName = _("Training"),
        .height = 15,
        .weight = 352,
        .description = COMPOUND_STRING(
            "BaoHuckmon go through strick training to\n"
            "reach this point. Its desires to join the\n"
            "Royal Knights means it is willing to fight\n"
            "in any situation it can do so."),
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whismur,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = sAnims_Whismur,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Whismur,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Whismur,
        .shinyPalette = gMonShinyPalette_Whismur,
        .iconSprite = gMonIcon_Whismur,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Whismur)
        OVERWORLD(
            sPicTable_Whismur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whismur,
            gShinyOverworldPalette_Whismur
        )
        .levelUpLearnset = sWhismurLevelUpLearnset,
        .teachableLearnset = sWhismurTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
    },

    [SPECIES_BAROMON] =
    {
        .baseHP        = 68,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 63,
        .baseSpAttack  = 84,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Baromon"),
        .cryId = CRY_BAROMON,
        .natDexNum = NATIONAL_DEX_BAROMON,
        .categoryName = _("Foresight"),
        .height = 23,
        .weight = 505,
        .description = COMPOUND_STRING(
            "Despite being relatively weak, Baromons use\n"
            "of the ancient lost technology, its third\n"
            "eye, lets it swiftly deal with opponents\n"
            "and forewarn others of incoming danger."),
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Baromon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Loudred,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Loudred,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Baromon,
        .shinyPalette = gMonShinyPalette_Baromon,
        .iconSprite = gMonIcon_Baromon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Loudred)
        OVERWORLD(
            sPicTable_Loudred,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Loudred,
            gShinyOverworldPalette_Loudred
        )
        .levelUpLearnset = sLoudredLevelUpLearnset,
        .teachableLearnset = sLoudredTeachableLearnset,
    },

    [SPECIES_TRAILMON_BATTLE_ARMAMENT] =
    {
        .baseHP        = 79,
        .baseAttack    = 102,
        .baseDefense   = 78,
        .baseSpeed     = 89,
        .baseSpAttack  = 55,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_HUGE_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Trailmon"),
        .cryId = CRY_TRAILMON_BATTLE_ARMAMENT,
        .natDexNum = NATIONAL_DEX_TRAILMON_BATTLE_ARMAMENT,
        .categoryName = _("Train"),
        .height = 65,
        .weight = 2460,
        .description = COMPOUND_STRING(
            "Unlike most Trailmon, this Trailmon is\n"
            "heavily geared towards combat, sporting an\n"
            "insane amount of armour and weapons. All this\n"
            "added weight barely inhibits its speed as well."),
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trailmon_battle_armament,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Exploud,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Trailmon_battle_armament,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Trailmon_battle_armament,
        .shinyPalette = gMonShinyPalette_Trailmon_battle_armament,
        .iconSprite = gMonIcon_Trailmon_battle_armament,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(Exploud)
        OVERWORLD(
            sPicTable_Exploud,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Exploud,
            gShinyOverworldPalette_Exploud
        )
        .levelUpLearnset = sExploudLevelUpLearnset,
        .teachableLearnset = sExploudTeachableLearnset,
    },
#endif //P_FAMILY_BAOHUCKMON

#if P_FAMILY_BETGAMAMON
    [SPECIES_BETGAMAMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 83,
        .baseDefense   = 64,
        .baseSpeed     = 94,
        .baseSpAttack  = 80,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLARE_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Betgamamon"),
        .cryId = CRY_BETGAMAMON,
        .natDexNum = NATIONAL_DEX_BETGAMAMON,
        .categoryName = _("Spirit"),
        .height = 16,
        .weight = 311,
        .description = COMPOUND_STRING(
            "Although BetelGammamon is very strong when\n"
            "they evolve, they often get stronger in\n"
            "battle as excitement can nearly double its\n"
            "attack power."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Makuhita,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = sAnims_Makuhita,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Makuhita,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Makuhita,
        .shinyPalette = gMonShinyPalette_Makuhita,
        .iconSprite = gMonIcon_Makuhita,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 1,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Makuhita)
        OVERWORLD(
            sPicTable_Makuhita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Makuhita,
            gShinyOverworldPalette_Makuhita
        )
        .levelUpLearnset = sMakuhitaLevelUpLearnset,
        .teachableLearnset = sMakuhitaTeachableLearnset,
        .eggMoveLearnset = sMakuhitaEggMoveLearnset,
    },

    [SPECIES_BIOQUETMON] =
    {
        .baseHP        = 78,
        .baseAttack    = 78,
        .baseDefense   = 69,
        .baseSpeed     = 96,
        .baseSpAttack  = 74,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Speed     = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE }, // BIO HYBRID DNA
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bioquetmon"),
        .cryId = CRY_BIOQUETMON,
        .natDexNum = NATIONAL_DEX_BIOQUETMON,
        .categoryName = _("Bio-Hybrid"),
        .height = 47,
        .weight = 885,
        .description = COMPOUND_STRING(
            "BioQuetzalmon are incredibly rare, enough\n"
            "so that scientists theorise that they need\n"
            "Human data to even exist. They are much\n"
            "faster and stronger than normal Quetzalmon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Bioquetmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Hariyama,
        .frontAnimId = ANIM_ROTATE_UP_TO_SIDES,
        .backPic = gMonBackPic_Bioquetmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hariyama,
        .shinyPalette = gMonShinyPalette_Hariyama,
        .iconSprite = gMonIcon_Hariyama,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Hariyama)
        OVERWORLD(
            sPicTable_Hariyama,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hariyama,
            gShinyOverworldPalette_Hariyama
        )
        .levelUpLearnset = sHariyamaLevelUpLearnset,
        .teachableLearnset = sHariyamaTeachableLearnset,
    },
#endif //P_FAMILY_BETGAMAMON

#if P_FAMILY_BIOTHUNMON
    [SPECIES_BIOTHUNMON] =
    {
        .baseHP        = 61,
        .baseAttack    = 81,
        .baseDefense   = 71,
        .baseSpeed     = 101,
        .baseSpAttack  = 79,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .itemRare = ITEM_MAGNET,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE }, // BIO HYBRID DNA
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Biothunmon"),
        .cryId = CRY_BIOTHUNMON,
        .natDexNum = NATIONAL_DEX_BIOTHUNMON,
        .categoryName = _("Bio-Hybrid"),
        .height = 61,
        .weight = 799,
        .description = COMPOUND_STRING(
            "It is unsure what makes BioThunderbirdmon\n"
            "stronger than normal Thunderbirdmon. There\n"
            "are still ongoing efforts to capture one\n"
            "despite their elusive nature."),
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Biothunmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Nosepass,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Nosepass,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Biothunmon,
        .shinyPalette = gMonShinyPalette_Biothunmon,
        .iconSprite = gMonIcon_Biothunmon,
        .iconPalIndex = 0,
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Nosepass)
        OVERWORLD(
            sPicTable_Nosepass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nosepass,
            gShinyOverworldPalette_Nosepass
        )
        .levelUpLearnset = sNosepassLevelUpLearnset,
        .teachableLearnset = sNosepassTeachableLearnset,
        .eggMoveLearnset = sNosepassEggMoveLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MAGNET,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Probopass"),
        .cryId = CRY_PROBOPASS,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .description = COMPOUND_STRING(
            "It freely controls three units called\n"
            "Mini-Noses using magnetic force.\n"
            "With them, it can attack its foes from\n"
            "three directions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Probopass,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Probopass,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Probopass,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Probopass,
        .shinyPalette = gMonShinyPalette_Probopass,
        .iconSprite = gMonIcon_Probopass,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Probopass)
        OVERWORLD(
            sPicTable_Probopass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Probopass,
            gShinyOverworldPalette_Probopass
        )
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BIOTHUNMON

#if P_FAMILY_BIRDRAMON
    [SPECIES_BIRDRAMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 74,
        .baseDefense   = 69,
        .baseSpeed     = 92,
        .baseSpAttack  = 78,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 3,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_GALE_WINGS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Birdramon"),
        .cryId = CRY_BIRDRAMON,
        .natDexNum = NATIONAL_DEX_BIRDRAMON,
        .categoryName = _("Phoenix"),
        .height = 60,
        .weight = 678,
        .description = COMPOUND_STRING(
            "Thought to be generated from the internets\n"
            "defensive 'firewall', Birdramon is actually\n"
            "not a very combative Digimon. However when\n"
            "it is forced into fighting, it is vicious."),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skitty,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = sAnims_Skitty,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skitty,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Birdramon,
        .shinyPalette = gMonShinyPalette_Birdramon,
        .iconSprite = gMonIcon_Birdramon,
        .iconPalIndex = 0,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Skitty)
        OVERWORLD(
            sPicTable_Skitty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skitty,
            gShinyOverworldPalette_Skitty
        )
        .levelUpLearnset = sSkittyLevelUpLearnset,
        .teachableLearnset = sSkittyTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
    },

    [SPECIES_BLGAOGAMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 92,
        .baseDefense   = 79,
        .baseSpeed     = 74,
        .baseSpAttack  = 69,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blgaogamon"),
        .cryId = CRY_BLGAOGAMON,
        .natDexNum = NATIONAL_DEX_BLGAOGAMON,
        .categoryName = _("Akita Inu"),
        .height = 38,
        .weight = 775,
        .description = COMPOUND_STRING(
            "During evolution, Black Digitron is mixed\n"
            "in, creating BlackGaogamon. Unlike other\n"
            "Digimon that go through this process,\n"
            "BlackGaogamon is relatively peaceful."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delcatty,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = sAnims_Delcatty,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Delcatty,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Blgaogamon,
        .shinyPalette = gMonShinyPalette_Blgaogamon,
        .iconSprite = gMonIcon_Blgaogamon,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Delcatty)
        OVERWORLD(
            sPicTable_Delcatty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Delcatty,
            gShinyOverworldPalette_Delcatty
        )
        .levelUpLearnset = sDelcattyLevelUpLearnset,
        .teachableLearnset = sDelcattyTeachableLearnset,
    },
#endif //P_FAMILY_BIRDRAMON

#if P_FAMILY_BLGARGOMON
    [SPECIES_BLGARGOMON] =
    {
        .baseHP        = 79,
        .baseAttack    = 77,
        .baseDefense   = 73,
        .baseSpeed     = 69,
        .baseSpAttack  = 91,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blgargomon"),
        .cryId = CRY_BLGARGOMON,
        .natDexNum = NATIONAL_DEX_BLGARGOMON,
        .categoryName = _("Dog Rabbit"),
        .height = 50,
        .weight = 762,
        .description = COMPOUND_STRING(
            "BlackGargomon specialises in ambushing\n"
            "Enemies in the dark. Rather than using its\n"
            "gatling arms to fire from range, it\n"
            "instead gets close and pummels them."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blgargomon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Sableye,
        .frontAnimId = ANIM_GLOW_BLACK,
        .backPic = gMonBackPic_Sableye,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Blgargomon,
        .shinyPalette = gMonShinyPalette_Blgargomon,
        .iconSprite = gMonIcon_Blgargomon,
        .iconPalIndex = 2,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sableye)
        OVERWORLD(
            sPicTable_Sableye,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sableye,
            gShinyOverworldPalette_Sableye
        )
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLGARGOMON_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_DARK, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Blgargomon"),
        .cryId = CRY_BLGARGOMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLGARGOMON,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Bathed in the energy of Mega Evolution,\n"
            "the gemstone on its chest expands, rips\n"
            "through its skin, and falls out."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BlgargomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlgargomonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlgargomonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_BlgargomonMega,
        .shinyPalette = gMonShinyPalette_BlgargomonMega,
        .iconSprite = gMonIcon_BlgargomonMega,
        .iconPalIndex = 2,
        SHADOW(3, 7, SHADOW_SIZE_S)
        FOOTPRINT(Sableye)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARGOMON

#if P_FAMILY_BLGARURMON
#if P_UPDATED_TYPES >= GEN_6
    #define BLGARURMON_TYPES { TYPE_STEEL, TYPE_FAIRY }
#else
    #define BLGARURMON_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

    [SPECIES_BLGARURMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 77,
        .baseDefense   = 71,
        .baseSpeed     = 93,
        .baseSpAttack  = 78,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_ICE, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_IRON_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blgarurmon"),
        .cryId = CRY_BLGARURMON,
        .natDexNum = NATIONAL_DEX_BLGARURMON,
        .categoryName = _("canine"),
        .height = 56,
        .weight = 653,
        .description = COMPOUND_STRING(
            "Other than being more vicious than\n"
            "normal Garurumon, BlackGarurumon's blades\n"
            "on its shoulders are sharp enough to\n"
            "dice up just about anything."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mawile,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Blgarurmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blgarurmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Blgarurmon,
        .shinyPalette = gMonShinyPalette_Blgarurmon,
        .iconSprite = gMonIcon_Blgarurmon,
        .iconPalIndex = 2,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Mawile)
        OVERWORLD(
            sPicTable_Mawile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mawile,
            gShinyOverworldPalette_Mawile
        )
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLGARURMON_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = BLGARURMON_TYPES,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blgarurmon"),
        .cryId = CRY_BLGARURMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLGARURMON,
        .categoryName = _("Deceiver"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its two sets of jaws thrash about\n"
            "violently as if they each had a will of\n"
            "their own. One gnash from them can turn a\n"
            "boulder to dust."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BlgarurmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlgarurmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlgarurmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_BlgarurmonMega,
        .shinyPalette = gMonShinyPalette_BlgarurmonMega,
        .iconSprite = gMonIcon_BlgarurmonMega,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mawile)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARURMON

#if P_FAMILY_BLKGATOMON
    [SPECIES_BLKGATOMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 62,
        .baseSpeed     = 89,
        .baseSpAttack  = 67,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkgatomon"),
        .cryId = CRY_BLKGATOMON,
        .natDexNum = NATIONAL_DEX_BLKGATOMON,
        .categoryName = _("Fallen Cat"),
        .height = 6,
        .weight = 107,
        .description = COMPOUND_STRING(
            "Even in comparison to other dark mutated\n"
            "Digimon, BlackGatomon is incredibly rare.\n"
            "This is likely because of it's mutation\n"
            "not being caused by Black Digitron at all."),
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aron,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 14,
        .frontAnimFrames = sAnims_Aron,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aron,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Blkgatomon,
        .shinyPalette = gMonShinyPalette_Blkgatomon,
        .iconSprite = gMonIcon_Blkgatomon,
        .iconPalIndex = 2,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Aron)
        OVERWORLD(
            sPicTable_Aron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aron,
            gShinyOverworldPalette_Aron
        )
        .levelUpLearnset = sAronLevelUpLearnset,
        .teachableLearnset = sAronTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
    },

    [SPECIES_BLKGATOMON_UVER] =
    {
        .baseHP        = 83,
        .baseAttack    = 61,
        .baseDefense   = 62,
        .baseSpeed     = 95,
        .baseSpAttack  = 62,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Speed     = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_QUICK_FEET, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkgatomon"),
        .cryId = CRY_BLKGATOMON_UVER,
        .natDexNum = NATIONAL_DEX_BLKGATOMON_UVER,
        .categoryName = _("Courier"),
        .height = 6,
        .weight = 231,
        .description = COMPOUND_STRING(
            "BlackGatomon Uver is a very peaceful Digimon\n"
            "who dedicates itself wholly to protecting\n"
            "and delivering packages. Everything in its\n"
            "bag is stored in the optimum state."),
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lairon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .frontAnimFrames = sAnims_Lairon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lairon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Blkgatomon_uver,
        .shinyPalette = gMonShinyPalette_Blkgatomon_uver,
        .iconSprite = gMonIcon_Blkgatomon_uver,
        .iconPalIndex = 2,
        SHADOW(4, 2, SHADOW_SIZE_L)
        FOOTPRINT(Lairon)
        OVERWORLD(
            sPicTable_Lairon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lairon,
            gShinyOverworldPalette_Lairon
        )
        .levelUpLearnset = sLaironLevelUpLearnset,
        .teachableLearnset = sLaironTeachableLearnset,
    },

    [SPECIES_BLGROWLMON] =
    {
        .baseHP        = 84,
        .baseAttack    = 73,
        .baseDefense   = 75,
        .baseSpeed     = 63,
        .baseSpAttack  = 98,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blgrowlmon"),
        .cryId = CRY_BLGROWLMON,
        .natDexNum = NATIONAL_DEX_BLGROWLMON,
        .categoryName = _("Dark Hazard"),
        .height = 51,
        .weight = 876,
        .description = COMPOUND_STRING(
            "As the name implies, dark mutated Digimon\n"
            "are usually mutations of a Digimon however\n"
            "their is a growing belief that Black-\n"
            "Growlmon is the natural form of Growlmon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Blgrowlmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Blgrowlmon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Blgrowlmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Blgrowlmon,
        .shinyPalette = gMonShinyPalette_Blgrowlmon,
        .iconSprite = gMonIcon_Blgrowlmon,
        .iconPalIndex = 2,
        SHADOW(5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Aggron)
        OVERWORLD(
            sPicTable_Aggron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aggron,
            gShinyOverworldPalette_Aggron
        )
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLGROWLMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Defense = 3,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Blgrowlmon"),
        .cryId = CRY_BLGROWLMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLGROWLMON,
        .categoryName = _("Iron Armor"),
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Blgrowlmon Mega Evolves into\n"
            "Mega Blgrowlmon, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_BlgrowlmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlgrowlmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlgrowlmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_BlgrowlmonMega,
        .shinyPalette = gMonShinyPalette_BlgrowlmonMega,
        .iconSprite = gMonIcon_BlgrowlmonMega,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Aggron)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlgrowlmonLevelUpLearnset,
        .teachableLearnset = sBlgrowlmonTeachableLearnset,
        .formSpeciesIdTable = sBlgrowlmonFormSpeciesIdTable,
        .formChangeTable = sBlgrowlmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLKGATOMON

#if P_FAMILY_SAWKUWAMON
    [SPECIES_SAWKUWAMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 78,
        .baseDefense   = 77,
        .baseSpeed     = 90,
        .baseSpAttack  = 61,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_SHARPNESS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sawkuwamon"),
        .cryId = CRY_SAWKUWAMON,
        .natDexNum = NATIONAL_DEX_SAWKUWAMON,
        .categoryName = _("Blade Bug"),
        .height = 13,
        .weight = 112,
        .description = COMPOUND_STRING(
            "BladeKuwagamon are not particularly powerful\n"
            "on their, even for a champion level Digimon\n"
            "so they have adapted to group up and swarm\n"
            "anything they deem a foe."),
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meditite,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Meditite,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Meditite,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Sawkuwamon,
        .shinyPalette = gMonShinyPalette_Sawkuwamon,
        .iconSprite = gMonIcon_Sawkuwamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MedititeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_MedititeF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Meditite)
        OVERWORLD(
            sPicTable_Meditite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meditite,
            gShinyOverworldPalette_Meditite
        )
        OVERWORLD_FEMALE(
            sPicTable_MedititeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sMedititeLevelUpLearnset,
        .teachableLearnset = sMedititeTeachableLearnset,
        .eggMoveLearnset = sMedititeEggMoveLearnset,
    },

    [SPECIES_BLIMPMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 68,
        .baseDefense   = 69,
        .baseSpeed     = 75,
        .baseSpAttack  = 90,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FLYING, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIGHT_METAL, ABILITY_PRESSURE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Blimpmon"),
        .cryId = CRY_BLIMPMON,
        .natDexNum = NATIONAL_DEX_BLIMPMON,
        .categoryName = _("Blimp"),
        .height = 140,
        .weight = 1001,
        .description = COMPOUND_STRING(
            "Blimpmon is a particular favourite for\n"
            "vehicle Digimon for its carefree nature.\n"
            "Despite how delicate the balloon portion\n"
            "is, it is only partially covered."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Medicham,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Medicham,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Medicham,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Blimpmon,
        .shinyPalette = gMonShinyPalette_Blimpmon,
        .iconSprite = gMonIcon_Blimpmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MedichamF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 64),
        .backPicFemale = gMonBackPic_MedichamF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Medicham)
        OVERWORLD(
            sPicTable_Medicham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Medicham,
            gShinyOverworldPalette_Medicham
        )
        OVERWORLD_FEMALE(
            sPicTable_MedichamF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,
        .formChangeTable = sMedichamFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLIMPMON_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = 179,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Blimpmon"),
        .cryId = CRY_BLIMPMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLIMPMON,
        .categoryName = _("Meditate"),
        .height = 13,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It uses its amped-up willpower to create\n"
            "additional arms for itself. The more it\n"
            "has trained its spirit, the more realistic\n"
            "and dexterous these arms become."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BlimpmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlimpmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlimpmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_BlimpmonMega,
        .shinyPalette = gMonShinyPalette_BlimpmonMega,
        .iconSprite = gMonIcon_BlimpmonMega,
        .iconPalIndex = 0,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Medicham)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlimpmonLevelUpLearnset,
        .teachableLearnset = sBlimpmonTeachableLearnset,
        .formSpeciesIdTable = sBlimpmonFormSpeciesIdTable,
        .formChangeTable = sBlimpmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SAWKUWAMON

#if P_FAMILY_BOARMON
    [SPECIES_BOARMON] =
    {
        .baseHP        = 81,
        .baseAttack    = 79,
        .baseDefense   = 80,
        .baseSpeed     = 92,
        .baseSpAttack  = 69,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 120,
        .expYield = 104,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_RECKLESS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Boarmon"),
        .cryId = CRY_BOARMON,
        .natDexNum = NATIONAL_DEX_BOARMON,
        .categoryName = _("Boar"),
        .height = 17,
        .weight = 462,
        .description = COMPOUND_STRING(
            "When Boarmon starts stampeding, it is next\n"
            "to impossible to stop it until it tires\n"
            "itself out. Their is a leading theory that\n"
            "Boarmon has no concept of turning."),
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Electrike,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 14,
        .frontAnimFrames = sAnims_Electrike,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Electrike,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Boarmon,
        .shinyPalette = gMonShinyPalette_Boarmon,
        .iconSprite = gMonIcon_Boarmon,
        .iconPalIndex = 1,
        SHADOW(3, -1, SHADOW_SIZE_M)
        FOOTPRINT(Electrike)
        OVERWORLD(
            sPicTable_Electrike,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electrike,
            gShinyOverworldPalette_Electrike
        )
        .levelUpLearnset = sElectrikeLevelUpLearnset,
        .teachableLearnset = sElectrikeTeachableLearnset,
        .eggMoveLearnset = sElectrikeEggMoveLearnset,
    },

    [SPECIES_BOMNANIMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 84,
        .baseDefense   = 71,
        .baseSpeed     = 72,
        .baseSpAttack  = 96,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_AFTERMATH, ABILITY_HUSTLE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Bomnanimon"),
        .cryId = CRY_BOMNANIMON,
        .natDexNum = NATIONAL_DEX_BOMNANIMON,
        .categoryName = _("Bomb"),
        .height = 10,
        .weight = 382,
        .description = COMPOUND_STRING(
            "Although it is very clearly a subspecies\n"
            "of Nanimon, BomberNanimon will always\n"
            "deny this claim. If pushed too hard on\n"
            "this idea, it will light its fuse."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Manectric,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = sAnims_Manectric,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Manectric,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bomnanimon,
        .shinyPalette = gMonShinyPalette_Bomnanimon,
        .iconSprite = gMonIcon_Bomnanimon,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Manectric)
        OVERWORLD(
            sPicTable_Manectric,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Manectric,
            gShinyOverworldPalette_Manectric
        )
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .formSpeciesIdTable = sManectricFormSpeciesIdTable,
        .formChangeTable = sManectricFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BOMNANIMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = 201,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Bomnanimon"),
        .cryId = CRY_BOMNANIMON_MEGA,
        .natDexNum = NATIONAL_DEX_BOMNANIMON,
        .categoryName = _("Discharge"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Bomnanimon. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BomnanimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_BomnanimonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BomnanimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_BomnanimonMega,
        .shinyPalette = gMonShinyPalette_BomnanimonMega,
        .iconSprite = gMonIcon_BomnanimonMega,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Manectric)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBomnanimonLevelUpLearnset,
        .teachableLearnset = sBomnanimonTeachableLearnset,
        .formSpeciesIdTable = sBomnanimonFormSpeciesIdTable,
        .formChangeTable = sBomnanimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BOARMON

#if P_FAMILY_BOOGIEMON
    [SPECIES_BOOGIEMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 70,
        .baseDefense   = 77,
        .baseSpeed     = 74,
        .baseSpAttack  = 92,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MERCILESS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Boogiemon"),
        .cryId = CRY_BOOGIEMON,
        .natDexNum = NATIONAL_DEX_BOOGIEMON,
        .categoryName = _("Devil"),
        .height = 22,
        .weight = 574,
        .description = COMPOUND_STRING(
            "When battling a Boogiemon, it is a good\n"
            "idea to count how many tattoos it has as\n"
            "that amount of spells it can cast is\n"
            "always equal to the amount of tattoos."),
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Boogiemon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Plusle,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Plusle,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Boogiemon,
        .shinyPalette = gMonShinyPalette_Boogiemon,
        .iconSprite = gMonIcon_Boogiemon,
        .iconPalIndex = 0,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Plusle)
        OVERWORLD(
            sPicTable_Plusle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Plusle,
            gShinyOverworldPalette_Plusle
        )
        .levelUpLearnset = sPlusleLevelUpLearnset,
        .teachableLearnset = sPlusleTeachableLearnset,
        .eggMoveLearnset = sPlusleEggMoveLearnset,
    },
#endif //P_FAMILY_BOOGIEMON

#if P_FAMILY_BUCCHIEMON_RED
    [SPECIES_BUCCHIEMON_RED] =
    {
        .baseHP        = 67,
        .baseAttack    = 63,
        .baseDefense   = 65,
        .baseSpeed     = 67,
        .baseSpAttack  = 80,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_PICKUP, ABILITY_CUTE_CHARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Bucchiemon"),
        .cryId = CRY_BUCCHIEMON_RED,
        .natDexNum = NATIONAL_DEX_BUCCHIEMON_RED,
        .categoryName = _("Calming"),
        .height = 12,
        .weight = 206,
        .description = COMPOUND_STRING(
            "In battle, Bucchiemon is pretty weak\n"
            "however what makes it special is the\n"
            "ability to calm down just about any\n"
            "Digimon it wants."),
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minun,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = sAnims_Minun,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_STRETCH_TWICE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Minun,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Bucchiemon_red,
        .shinyPalette = gMonShinyPalette_Bucchiemon_red,
        .iconSprite = gMonIcon_Bucchiemon_red,
        .iconPalIndex = 0,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Minun)
        OVERWORLD(
            sPicTable_Minun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Minun,
            gShinyOverworldPalette_Minun
        )
        .levelUpLearnset = sMinunLevelUpLearnset,
        .teachableLearnset = sMinunTeachableLearnset,
        .eggMoveLearnset = sMinunEggMoveLearnset,
    },
#endif //P_FAMILY_BUCCHIEMON_RED

#if P_FAMILY_BUCCHIEMON_GREEN_BULKMON
    [SPECIES_BUCCHIEMON_GREEN] =
    {
        .baseHP        = 65,
        .baseAttack    = 63,
        .baseDefense   = 63,
        .baseSpeed     = 69,
        .baseSpAttack  = 80,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PICKUP, ABILITY_CUTE_CHARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bucchiemon"),
        .cryId = CRY_BUCCHIEMON_GREEN,
        .natDexNum = NATIONAL_DEX_BUCCHIEMON_GREEN,
        .categoryName = _("Calming"),
        .height = 12,
        .weight = 206,
        .description = COMPOUND_STRING(
            "Their are very few differences between\n"
            "Green and Red Bucchiemon other than green\n"
            "ones being much rarer. Both colours despise\n"
            "having their tail played with."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Volbeat,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Bucchiemon_green,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Volbeat,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bucchiemon_green,
        .shinyPalette = gMonShinyPalette_Bucchiemon_green,
        .iconSprite = gMonIcon_Bucchiemon_green,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Volbeat)
        OVERWORLD(
            sPicTable_Volbeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Volbeat,
            gShinyOverworldPalette_Volbeat
        )
        .levelUpLearnset = sVolbeatLevelUpLearnset,
        .teachableLearnset = sVolbeatTeachableLearnset,
        .eggMoveLearnset = sVolbeatEggMoveLearnset,
    },

    [SPECIES_BULKMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 82,
        .baseDefense   = 77,
        .baseSpeed     = 79,
        .baseSpAttack  = 74,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STATIC, ABILITY_VITAL_SPIRIT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Bulkmon"),
        .cryId = CRY_BULKMON,
        .natDexNum = NATIONAL_DEX_BULKMON,
        .categoryName = _("Fitness"),
        .height = 32,
        .weight = 865,
        .description = COMPOUND_STRING(
            "Bulkmon is an incredibly well developed\n"
            "Digimon that has put its all into training\n"
            "itself. It's strength, reaction speed\n"
            "and health outclass many bulky Digimon."),
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bulkmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = sAnims_Illumise,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Illumise,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bulkmon,
        .shinyPalette = gMonShinyPalette_Bulkmon,
        .iconSprite = gMonIcon_Bulkmon,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Illumise)
        OVERWORLD(
            sPicTable_Illumise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Illumise,
            gShinyOverworldPalette_Illumise
        )
        .levelUpLearnset = sIllumiseLevelUpLearnset,
        .teachableLearnset = sIllumiseTeachableLearnset,
        .eggMoveLearnset = sIllumiseEggMoveLearnset,
    },
#endif //P_FAMILY_BUCCHIEMON_GREEN_BULKMON

#if P_FAMILY_BULLMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 68,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Budew"),
        .cryId = CRY_BUDEW,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("Bud"),
        .height = 2,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Over the winter, it closes its bud and\n"
            "endures the cold. Sensitive to changing\n"
            "temperature, the bud is said to bloom\n"
            "when it feels the sun's warm touch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Budew,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Budew,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Budew,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Budew,
        .shinyPalette = gMonShinyPalette_Budew,
        .iconSprite = gMonIcon_Budew,
        .iconPalIndex = 1,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Budew)
        OVERWORLD(
            sPicTable_Budew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Budew,
            gShinyOverworldPalette_Budew
        )
        .levelUpLearnset = sBudewLevelUpLearnset,
        .teachableLearnset = sBudewTeachableLearnset,
        .eggMoveLearnset = sBudewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_ROSELIA}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BULLMON] =
    {
        .baseHP        = 69,
        .baseAttack    = 78,
        .baseDefense   = 76,
        .baseSpeed     = 93,
        .baseSpAttack  = 70,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_ANGER_POINT, ABILITY_SAP_SIPPER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Bullmon"),
        .cryId = CRY_BULLMON,
        .natDexNum = NATIONAL_DEX_BULLMON,
        .categoryName = _("Bull"),
        .height = 20,
        .weight = 553,
        .description = COMPOUND_STRING(
            "Bullmon are particularly short tempered\n"
            "and will charge others for various minor\n"
            "reasons. When charging, it is incapable\n"
            "of turning or reversing."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roselia,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .frontAnimFrames = sAnims_Roselia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Roselia,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Roselia,
        .shinyPalette = gMonShinyPalette_Roselia,
        .iconSprite = gMonIcon_Roselia,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 4,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RoseliaF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_RoseliaF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Roselia)
        OVERWORLD(
            sPicTable_Roselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Roselia,
            gShinyOverworldPalette_Roselia
        )
        OVERWORLD_FEMALE(
            sPicTable_RoseliaF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRoseliaLevelUpLearnset,
        .teachableLearnset = sRoseliaTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 65 : 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 258,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 232,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 227,
    #else
        .expYield = 204,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Roserade"),
        .cryId = CRY_ROSERADE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roserade,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Roserade,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Roserade,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Roserade,
        .shinyPalette = gMonShinyPalette_Roserade,
        .iconSprite = gMonIcon_Roserade,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RoseradeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_RoseradeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Roserade)
        OVERWORLD(
            sPicTable_Roserade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Roserade,
            gShinyOverworldPalette_Roserade
        )
        OVERWORLD_FEMALE(
            sPicTable_RoseradeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BULLMON

#if P_FAMILY_BURAIMON
    [SPECIES_BURAIMON] =
    {
        .baseHP        = 68,
        .baseAttack    = 83,
        .baseDefense   = 70,
        .baseSpeed     = 97,
        .baseSpAttack  = 71,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FLYING, TYPE_FIGHTING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Speed     = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_STEADFAST, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Buraimon"),
        .cryId = CRY_BURAIMON,
        .natDexNum = NATIONAL_DEX_BURAIMON,
        .categoryName = _("Vagrant"),
        .height = 24,
        .weight = 657,
        .description = COMPOUND_STRING(
            "Continuing its training from when it was\n"
            "a Chicchimon, Buraimon is now a rogue. It\n"
            "will take on bodyguard jobs and protect\n"
            "the weak while wandering."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gulpin,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = sAnims_Gulpin,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gulpin,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Buraimon,
        .shinyPalette = gMonShinyPalette_Buraimon,
        .iconSprite = gMonIcon_Buraimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GulpinF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_GulpinF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Gulpin)
        OVERWORLD(
            sPicTable_Gulpin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Gulpin,
            gShinyOverworldPalette_Gulpin
        )
        OVERWORLD_FEMALE(
            sPicTable_GulpinF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .levelUpLearnset = sGulpinLevelUpLearnset,
        .teachableLearnset = sGulpinTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
    },

    [SPECIES_BURGERMON_CHAMPION] =
    {
        .baseHP        = 62,
        .baseAttack    = 60,
        .baseDefense   = 63,
        .baseSpeed     = 66,
        .baseSpAttack  = 67,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Burgermon"),
        .cryId = CRY_BURGERMON_CHAMPION,
        .natDexNum = NATIONAL_DEX_BURGERMON_CHAMPION,
        .categoryName = _("Burger"),
        .height = 10,
        .weight = 193,
        .description = COMPOUND_STRING(
            "Burgermon are very king Digimon who dedicate\n"
            "themselves to feeding everyone they can\n"
            "without asking anything in return. Its food\n"
            "can cause others to lose all fighting spirit"),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Swalot,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .frontAnimFrames = sAnims_Swalot,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Swalot,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Burgermon_champion,
        .shinyPalette = gMonShinyPalette_Burgermon_champion,
        .iconSprite = gMonIcon_Burgermon_champion,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SwalotF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_SwalotF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Swalot)
        OVERWORLD(
            sPicTable_Swalot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Swalot,
            gShinyOverworldPalette_Swalot
        )
        OVERWORLD_FEMALE(
            sPicTable_SwalotF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sSwalotLevelUpLearnset,
        .teachableLearnset = sSwalotTeachableLearnset,
    },
#endif //P_FAMILY_BURAIMON

#if P_FAMILY_CHOUMON
    [SPECIES_CHOUMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 73,
        .baseDefense   = 71,
        .baseSpeed     = 89,
        .baseSpAttack  = 78,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_LEVITATE, ABILITY_TINTED_LENS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Choumon"),
        .cryId = CRY_CHOUMON,
        .natDexNum = NATIONAL_DEX_CHOUMON,
        .categoryName = _("Butterfly"),
        .height = 18,
        .weight = 208,
        .description = COMPOUND_STRING(
            "Often found in warmer climates and meadows,\n"
            "Butterflymon is a very kind and warm Digimon\n"
            "who will help anyone it can. If in danger, it\n"
            "can inflict hallucinations on foes."),
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Choumon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Choumon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Carvanha,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Choumon,
        .shinyPalette = gMonShinyPalette_Choumon,
        .iconSprite = gMonIcon_Choumon,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Carvanha)
        OVERWORLD(
            sPicTable_Carvanha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Carvanha,
            gShinyOverworldPalette_Carvanha
        )
        .levelUpLearnset = sCarvanhaLevelUpLearnset,
        .teachableLearnset = sCarvanhaTeachableLearnset,
        .eggMoveLearnset = sCarvanhaEggMoveLearnset,
    },

    [SPECIES_CENTARUMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 78,
        .baseDefense   = 77,
        .baseSpeed     = 95,
        .baseSpAttack  = 76,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Centarumon"),
        .cryId = CRY_CENTARUMON,
        .natDexNum = NATIONAL_DEX_CENTARUMON,
        .categoryName = _("Centaur"),
        .height = 31,
        .weight = 703,
        .description = COMPOUND_STRING(
            "Centarumon is an extremely prideful Digimon\n"
            "who is exceptional is just about every area.\n"
            "The ducts on its back spout high pressure\n"
            "vapor that let it move at sub-sonic speeds."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Sharpedo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .frontAnimFrames = sAnims_Sharpedo,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Centarumon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Centarumon,
        .shinyPalette = gMonShinyPalette_Centarumon,
        .iconSprite = gMonIcon_Centarumon,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sharpedo)
        OVERWORLD(
            sPicTable_Sharpedo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Sharpedo,
            gShinyOverworldPalette_Sharpedo
        )
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CENTARUMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 60,
        .expYield = 196,
        .evYield_Attack = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Centarumon"),
        .cryId = CRY_CENTARUMON_MEGA,
        .natDexNum = NATIONAL_DEX_CENTARUMON,
        .categoryName = _("Brutal"),
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "The yellow patterns it bears are old scars.\n"
            "The energy from Mega Evolution runs\n"
            "through them, causing it sharp pain and\n"
            "suffering."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_CentarumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CentarumonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_CentarumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_CentarumonMega,
        .shinyPalette = gMonShinyPalette_CentarumonMega,
        .iconSprite = gMonIcon_CentarumonMega,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sharpedo)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCentarumonLevelUpLearnset,
        .teachableLearnset = sCentarumonTeachableLearnset,
        .formSpeciesIdTable = sCentarumonFormSpeciesIdTable,
        .formChangeTable = sCentarumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHOUMON

#if P_FAMILY_CHAMBLEMON
    [SPECIES_CHAMBLEMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 71,
        .baseDefense   = 73,
        .baseSpeed     = 66,
        .baseSpAttack  = 88,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_MYCELIUM_MIGHT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Chamblemon"),
        .cryId = CRY_CHAMBLEMON,
        .natDexNum = NATIONAL_DEX_CHAMBLEMON,
        .categoryName = _("Mushroom"),
        .height = 33,
        .weight = 407,
        .description = COMPOUND_STRING(
            "While often mistaken to be Rookies like\n"
            "Mushroomon, Chamblemon is actually a tricky\n"
            "Champion to fight. Its use of spores\n"
            "makes it dangerous to the unprepared."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wailmer,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 10,
        .frontAnimFrames = sAnims_Wailmer,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Wailmer,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Chamblemon,
        .shinyPalette = gMonShinyPalette_Chamblemon,
        .iconSprite = gMonIcon_Chamblemon,
        .iconPalIndex = 2,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Wailmer)
        OVERWORLD(
            sPicTable_Wailmer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Wailmer,
            gShinyOverworldPalette_Wailmer
        )
        .levelUpLearnset = sWailmerLevelUpLearnset,
        .teachableLearnset = sWailmerTeachableLearnset,
        .eggMoveLearnset = sWailmerEggMoveLearnset,
    },

    [SPECIES_CHAMELEMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 72,
        .baseDefense   = 74,
        .baseSpeed     = 90,
        .baseSpAttack  = 77,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chamelemon"),
        .cryId = CRY_CHAMELEMON,
        .natDexNum = NATIONAL_DEX_CHAMELEMON,
        .categoryName = _("Camouflage"),
        .height = 16,
        .weight = 275,
        .description = COMPOUND_STRING(
            "Although not particularly strong, Chamelemon\n"
            "makes up for it by being exceptional at\n"
            "infiltration. Competiting groups are known\n"
            "to hire Chamelemon to spy on eachother."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
        .frontPic = gMonFrontPic_Chamelemon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 4,
        .frontAnimFrames = sAnims_Wailord,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Wailord,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 22 : 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Chamelemon,
        .shinyPalette = gMonShinyPalette_Chamelemon,
        .iconSprite = gMonIcon_Chamelemon,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wailord)
        OVERWORLD(
            sPicTable_Wailord,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Wailord,
            gShinyOverworldPalette_Wailord
        )
        .levelUpLearnset = sWailordLevelUpLearnset,
        .teachableLearnset = sWailordTeachableLearnset,
    },
#endif //P_FAMILY_CHAMBLEMON

#if P_FAMILY_CHRYSALMON
    [SPECIES_CHRYSALMON] =
    {
        .baseHP        = 83,
        .baseAttack    = 77,
        .baseDefense   = 99,
        .baseSpeed     = 52,
        .baseSpAttack  = 66,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE }, // VIRUS DOWNLOAD
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Chrysalmon"),
        .cryId = CRY_CHRYSALMON,
        .natDexNum = NATIONAL_DEX_CHRYSALMON,
        .categoryName = _("Virus"),
        .height = 42,
        .weight = 972,
        .description = COMPOUND_STRING(
            "Compared to it's previous evolutions more\n"
            "agile nature, Chrysalimon is almost\n"
            "completely immobile however its shell is\n"
            "incredibly strong, protecting it well."),
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Numel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 9,
        .frontAnimFrames = sAnims_Numel,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Numel,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chrysalmon,
        .shinyPalette = gMonShinyPalette_Chrysalmon,
        .iconSprite = gMonIcon_Chrysalmon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_NumelF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_NumelF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Numel)
        OVERWORLD(
            sPicTable_Numel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Numel,
            gShinyOverworldPalette_Numel
        )
        OVERWORLD_FEMALE(
            sPicTable_NumelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sNumelLevelUpLearnset,
        .teachableLearnset = sNumelTeachableLearnset,
        .eggMoveLearnset = sNumelEggMoveLearnset,
    },

    [SPECIES_CITRAMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 87,
        .baseDefense   = 69,
        .baseSpeed     = 75,
        .baseSpAttack  = 100,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_GRASS),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUSTLE, ABILITY_IMMUNITY, ABILITY_NATURAL_CURE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Citramon"),
        .cryId = CRY_CITRAMON,
        .natDexNum = NATIONAL_DEX_CITRAMON,
        .categoryName = _("Citrus"),
        .height = 10,
        .weight = 162,
        .description = COMPOUND_STRING(
            "Although it has a comical appearance,\n"
            "Citramon can be quite rough to fight.\n"
            "It will use its own citrous juice\n"
            "ito blind opponents and irritate wounds."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Camerupt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = sAnims_Camerupt,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Camerupt,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Citramon,
        .shinyPalette = gMonShinyPalette_Citramon,
        .iconSprite = gMonIcon_Citramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CameruptF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_CameruptF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 4, SHADOW_SIZE_L)
        FOOTPRINT(Camerupt)
        OVERWORLD(
            sPicTable_Camerupt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Camerupt,
            gShinyOverworldPalette_Camerupt
        )
        OVERWORLD_FEMALE(
            sPicTable_CameruptF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,
        .formChangeTable = sCameruptFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CITRAMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 150,
        .expYield = 196,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Citramon"),
        .cryId = CRY_CITRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_CITRAMON,
        .categoryName = _("Eruption"),
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "The humps on its back have transformed\n"
            "into one large and very active volcano. It\n"
            "has a deep hatred of water or any moisture\n"
            "and has an explosive personality."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_CitramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CitramonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CitramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CitramonMega,
        .shinyPalette = gMonShinyPalette_CitramonMega,
        .iconSprite = gMonIcon_CitramonMega,
        .iconPalIndex = 0,
        SHADOW(1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Camerupt)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCitramonLevelUpLearnset,
        .teachableLearnset = sCitramonTeachableLearnset,
        .formSpeciesIdTable = sCitramonFormSpeciesIdTable,
        .formChangeTable = sCitramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHRYSALMON

#if P_FAMILY_CLOCKMON
    [SPECIES_CLOCKMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 79,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 92,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INSOMNIA, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Clockmon"),
        .cryId = CRY_CLOCKMON,
        .natDexNum = NATIONAL_DEX_CLOCKMON,
        .categoryName = _("Time"),
        .height = 25,
        .weight = 884,
        .description = COMPOUND_STRING(
            "Clockmon is a Digimon that is extremely\n"
            "dangerous even compared to Ultra Digimon\n"
            "If it is between the year 1900 and 1999, \n"
            "it has near unlimited power of time."),
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clockmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = sAnims_Torkoal,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Clockmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Torkoal,
        .shinyPalette = gMonShinyPalette_Torkoal,
        .iconSprite = gMonIcon_Torkoal,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(Torkoal)
        OVERWORLD(
            sPicTable_Torkoal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Torkoal,
            gShinyOverworldPalette_Torkoal
        )
        .levelUpLearnset = sTorkoalLevelUpLearnset,
        .teachableLearnset = sTorkoalTeachableLearnset,
        .eggMoveLearnset = sTorkoalEggMoveLearnset,
    },
#endif //P_FAMILY_CLOCKMON

#if P_FAMILY_CLOCKMON_FUSION
    [SPECIES_CLOCKMON_FUSION] =
    {
        .baseHP        = 65,
        .baseAttack    = 74,
        .baseDefense   = 69,
        .baseSpeed     = 77,
        .baseSpAttack  = 92,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INSOMNIA, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Clockmon"),
        .cryId = CRY_CLOCKMON_FUSION,
        .natDexNum = NATIONAL_DEX_CLOCKMON_FUSION,
        .categoryName = _("Time"),
        .height = 19,
        .weight = 760,
        .description = COMPOUND_STRING(
            "Because it has lost its upper half, this\n"
            "Clockmon is worse in many ways. It\n"
            "struggles to use its control of time as\n"
            "efficiently making it an easier opponent."),
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clockmon_fusion,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Clockmon_fusion,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Spoink,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Clockmon_fusion,
        .shinyPalette = gMonShinyPalette_Clockmon_fusion,
        .iconSprite = gMonIcon_Clockmon_fusion,
        .iconPalIndex = 0,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Spoink)
        OVERWORLD(
            sPicTable_Spoink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Spoink,
            gShinyOverworldPalette_Spoink
        )
        .levelUpLearnset = sSpoinkLevelUpLearnset,
        .teachableLearnset = sSpoinkTeachableLearnset,
        .eggMoveLearnset = sSpoinkEggMoveLearnset,
    },

    [SPECIES_COELAMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 78,
        .baseDefense   = 92,
        .baseSpeed     = 72,
        .baseSpAttack  = 73,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_SWIFT_SWIM, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Coelamon"),
        .cryId = CRY_COELAMON,
        .natDexNum = NATIONAL_DEX_COELAMON,
        .categoryName = _("Primitive"),
        .height = 12,
        .weight = 598,
        .description = COMPOUND_STRING(
            "Thought to be extinct, after a deep search\n"
            "of the Net Ocean, it was found to be alive\n"
            "and thriving. It looks to be in the early\n"
            "stages of evolution as it has hands and feet."),
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grumpig,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .frontAnimFrames = sAnims_Grumpig,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Grumpig,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Coelamon,
        .shinyPalette = gMonShinyPalette_Coelamon,
        .iconSprite = gMonIcon_Coelamon,
        .iconPalIndex = 2,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Grumpig)
        OVERWORLD(
            sPicTable_Grumpig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grumpig,
            gShinyOverworldPalette_Grumpig
        )
        .levelUpLearnset = sGrumpigLevelUpLearnset,
        .teachableLearnset = sGrumpigTeachableLearnset,
    },
#endif //P_FAMILY_CLOCKMON_FUSION

#if P_FAMILY_COREDRAMON_BLUE
    [SPECIES_COREDRAMON_BLUE] =
    {
        .baseHP        = 75,
        .baseAttack    = 79,
        .baseDefense   = 77,
        .baseSpeed     = 75,
        .baseSpAttack  = 91,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Coredramon"),
        .cryId = CRY_COREDRAMON_BLUE,
        .natDexNum = NATIONAL_DEX_COREDRAMON_BLUE,
        .categoryName = _("Dragon"),
        .height = 53,
        .weight = 2536,
        .description = COMPOUND_STRING(
            "Coredramon is one of the purest Dragon type\n"
            "Digimon out there. The blue variant happens\n"
            "when it comes into plenty of Blue Diamante\n"
            "mined from moutainous regions."),
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Coredramon_blue,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Spinda,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Spinda,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Coredramon_blue,
        .shinyPalette = gMonShinyPalette_Coredramon_blue,
        .iconSprite = gMonIcon_Coredramon_blue,
        .iconPalIndex = 1,
        SHADOW(2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Spinda)
        OVERWORLD(
            sPicTable_Spinda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spinda,
            gShinyOverworldPalette_Spinda
        )
        .levelUpLearnset = sSpindaLevelUpLearnset,
        .teachableLearnset = sSpindaTeachableLearnset,
        .eggMoveLearnset = sSpindaEggMoveLearnset,
    },
#endif //P_FAMILY_COREDRAMON_BLUE

#if P_FAMILY_COREDRAMON_GREEN
    [SPECIES_COREDRAMON_GREEN] =
    {
        .baseHP        = 74,
        .baseAttack    = 79,
        .baseDefense   = 75,
        .baseSpeed     = 79,
        .baseSpAttack  = 90,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GRASS),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Coredramon"),
        .cryId = CRY_COREDRAMON_GREEN,
        .natDexNum = NATIONAL_DEX_COREDRAMON_GREEN,
        .categoryName = _("Dragon"),
        .height = 53,
        .weight = 2947,
        .description = COMPOUND_STRING(
            "Unlike blue Coredramon, Green Coredramon\n"
            "can barely fly, instead developing stronger\n"
            "legs. Green Malachite, found in forest areas\n"
            "is the reason for the way it is."),
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trapinch,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Trapinch,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Trapinch,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Trapinch,
        .shinyPalette = gMonShinyPalette_Trapinch,
        .iconSprite = gMonIcon_Trapinch,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(4, -1, SHADOW_SIZE_S)
        FOOTPRINT(Trapinch)
        OVERWORLD(
            sPicTable_Trapinch,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Trapinch,
            gShinyOverworldPalette_Trapinch
        )
        .levelUpLearnset = sTrapinchLevelUpLearnset,
        .teachableLearnset = sTrapinchTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
    },

    [SPECIES_CYCLONEMON] =
    {
        .baseHP        = 78,
        .baseAttack    = 103,
        .baseDefense   = 72,
        .baseSpeed     = 69,
        .baseSpAttack  = 74,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cyclonemon"),
        .cryId = CRY_CYCLONEMON,
        .natDexNum = NATIONAL_DEX_CYCLONEMON,
        .categoryName = _("Cyclops"),
        .height = 30,
        .weight = 1134,
        .description = COMPOUND_STRING(
            "Cyclonemon has developed its right arm to\n"
            "an extreme extent just for the sake of\n"
            "defeating Leomon who is believed to have\n"
            "been the cause of its lost right eye."),
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cyclonemon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Vibrava,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Vibrava,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Cyclonemon,
        .shinyPalette = gMonShinyPalette_Cyclonemon,
        .iconSprite = gMonIcon_Cyclonemon,
        .iconPalIndex = 1,
        SHADOW(-2, 0, SHADOW_SIZE_L)
        FOOTPRINT(Vibrava)
        OVERWORLD(
            sPicTable_Vibrava,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vibrava,
            gShinyOverworldPalette_Vibrava
        )
        .levelUpLearnset = sVibravaLevelUpLearnset,
        .teachableLearnset = sVibravaTeachableLearnset,
    },

    [SPECIES_DAMEMON_FUSION] =
    {
        .baseHP        = 70,
        .baseAttack    = 86,
        .baseDefense   = 71,
        .baseSpeed     = 66,
        .baseSpAttack  = 74,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STENCH, ABILITY_CLEAR_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Damemon"),
        .cryId = CRY_DAMEMON_FUSION,
        .natDexNum = NATIONAL_DEX_DAMEMON_FUSION,
        .categoryName = _("No Good"),
        .height = 9,
        .weight = 246,
        .description = COMPOUND_STRING(
            "Damemon is a very socially awkward Digimon\n"
            "that often struggles to read the room. It\n"
            "has a special place for ChuuChuumon to ride\n"
            "so that they can have fun together."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Damemon_fusion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Damemon_fusion,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Damemon_fusion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Damemon_fusion,
        .shinyPalette = gMonShinyPalette_Damemon_fusion,
        .iconSprite = gMonIcon_Damemon_fusion,
        .iconPalIndex = 1,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Flygon)
        OVERWORLD(
            sPicTable_Flygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Flygon,
            gShinyOverworldPalette_Flygon
        )
        .levelUpLearnset = sFlygonLevelUpLearnset,
        .teachableLearnset = sFlygonTeachableLearnset,
    },
#endif //P_FAMILY_COREDRAMON_GREEN

#if P_FAMILY_DARCMON
    [SPECIES_DARCMON] =
    {
        .baseHP        = 83,
        .baseAttack    = 93,
        .baseDefense   = 72,
        .baseSpeed     = 70,
        .baseSpAttack  = 71,
        .baseSpDefense = 74,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darcmon"),
        .cryId = CRY_DARCMON,
        .natDexNum = NATIONAL_DEX_DARCMON,
        .categoryName = _("Hero"),
        .height = 19,
        .weight = 629,
        .description = COMPOUND_STRING(
            "As a low-ranking angel Digimon, Darcmon\n"
            "doesn't have much sway however that\n"
            "doesn't make it weak, often found in the\n"
            "advanced forces acting as the vanguard."),
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cacnea,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = sAnims_Cacnea,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Darcmon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Darcmon,
        .shinyPalette = gMonShinyPalette_Darcmon,
        .iconSprite = gMonIcon_Darcmon,
        .iconPalIndex = 1,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Cacnea)
        OVERWORLD(
            sPicTable_Cacnea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cacnea,
            gShinyOverworldPalette_Cacnea
        )
        .levelUpLearnset = sCacneaLevelUpLearnset,
        .teachableLearnset = sCacneaTeachableLearnset,
        .eggMoveLearnset = sCacneaEggMoveLearnset,
    },

    [SPECIES_TRAILMON_DARK] =
    {
        .baseHP        = 79,
        .baseAttack    = 65,
        .baseDefense   = 76,
        .baseSpeed     = 102,
        .baseSpAttack  = 62,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Trailmon"),
        .cryId = CRY_TRAILMON_DARK,
        .natDexNum = NATIONAL_DEX_TRAILMON_DARK,
        .categoryName = _("Train"),
        .height = 40,
        .weight = 1964,
        .description = COMPOUND_STRING(
            "Although often mistaken as a Digimon of\n"
            "Evil, it's actually a well-tempered\n"
            "Digimon who has no qualms helping out\n"
            "although it can be strict with rules."),
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cacturne,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Trailmon_dark,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Cacturne,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Trailmon_dark,
        .shinyPalette = gMonShinyPalette_Trailmon_dark,
        .iconSprite = gMonIcon_Trailmon_dark,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CacturneF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cacturne)
        OVERWORLD(
            sPicTable_Cacturne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cacturne,
            gShinyOverworldPalette_Cacturne
        )
        OVERWORLD_FEMALE(
            sPicTable_CacturneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sCacturneLevelUpLearnset,
        .teachableLearnset = sCacturneTeachableLearnset,
    },
#endif //P_FAMILY_DARCMON

#if P_FAMILY_DARLIZAMON
    [SPECIES_DARLIZAMON] =
    {
        .baseHP        = 93,
        .baseAttack    = 78,
        .baseDefense   = 72,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Darlizamon"),
        .cryId = CRY_DARLIZAMON,
        .natDexNum = NATIONAL_DEX_DARLIZAMON,
        .categoryName = _("Evil Twin"),
        .height = 29,
        .weight = 974,
        .description = COMPOUND_STRING(
            "Unlike Flarerizamons more tempered nature,\n"
            "DarkLizardmon is much more aggressive,\n"
            "seemingly lack any logic in its actions\n"
            "other than that of pure violence."),
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swablu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 14,
        .frontAnimFrames = sAnims_Swablu,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Swablu,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Darlizamon,
        .shinyPalette = gMonShinyPalette_Darlizamon,
        .iconSprite = gMonIcon_Darlizamon,
        .iconPalIndex = 0,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Swablu)
        OVERWORLD(
            sPicTable_Swablu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Swablu,
            gShinyOverworldPalette_Swablu
        )
        .levelUpLearnset = sSwabluLevelUpLearnset,
        .teachableLearnset = sSwabluTeachableLearnset,
        .eggMoveLearnset = sSwabluEggMoveLearnset,
    },

    [SPECIES_DARMAILMON] =
    {
        .baseHP        = 67,
        .baseAttack    = 71,
        .baseDefense   = 90,
        .baseSpeed     = 73,
        .baseSpAttack  = 79,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Darmailmon"),
        .cryId = CRY_DARMAILMON,
        .natDexNum = NATIONAL_DEX_DARMAILMON,
        .categoryName = _("Mount"),
        .height = 174,
        .weight = 4964,
        .description = COMPOUND_STRING(
            "DarkMaildramon spends its time bullying\n"
            "the weak and searching for Knight Digimon\n"
            "who have a heart of darkness to serve. If\n"
            "its master ever changes, it will crush them."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Darmailmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = sAnims_Altaria,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Darmailmon,
        .shinyPalette = gMonShinyPalette_Darmailmon,
        .iconSprite = gMonIcon_Darmailmon,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,
        .formChangeTable = sAltariaFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DARMAILMON_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 207,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Darmailmon"),
        .cryId = CRY_DARMAILMON_MEGA,
        .natDexNum = NATIONAL_DEX_DARMAILMON,
        .categoryName = _("Humming"),
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It sings with a voice that is even more\n"
            "beautiful than before it Mega Evolved.\n"
            "Its feathers became larger for protection\n"
            "and glimmer with an iridescent sheen."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarmailmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DarmailmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_DarmailmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_DarmailmonMega,
        .shinyPalette = gMonShinyPalette_DarmailmonMega,
        .iconSprite = gMonIcon_DarmailmonMega,
        .iconPalIndex = 0,
        SHADOW(-2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDarmailmonLevelUpLearnset,
        .teachableLearnset = sDarmailmonTeachableLearnset,
        .formSpeciesIdTable = sDarmailmonFormSpeciesIdTable,
        .formChangeTable = sDarmailmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DARLIZAMON

#if P_FAMILY_DARKTYRMON
    [SPECIES_DARKTYRMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 93,
        .baseDefense   = 73,
        .baseSpeed     = 66,
        .baseSpAttack  = 83,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_PRESSURE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Darktyrmon"),
        .cryId = CRY_DARKTYRMON,
        .natDexNum = NATIONAL_DEX_DARKTYRMON,
        .categoryName = _("Frenzy"),
        .height = 88,
        .weight = 1432,
        .description = COMPOUND_STRING(
            "DarkTyrannomon is in a constant frenzy\n"
            "attacking anything that passes its eyes.\n"
            "Its viciousness makes it a highly desired\n"
            "minion for evil Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zangoose,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Darktyrmon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Zangoose,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Darktyrmon,
        .shinyPalette = gMonShinyPalette_Darktyrmon,
        .iconSprite = gMonIcon_Darktyrmon,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Zangoose)
        OVERWORLD(
            sPicTable_Zangoose,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zangoose,
            gShinyOverworldPalette_Zangoose
        )
        .levelUpLearnset = sZangooseLevelUpLearnset,
        .teachableLearnset = sZangooseTeachableLearnset,
        .eggMoveLearnset = sZangooseEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DARKTYRMON_X}),
    },
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_DARKTYRMON_X
    [SPECIES_DARKTYRMON_X] =
    {
        .baseHP        = 79,
        .baseAttack    = 95,
        .baseDefense   = 78,
        .baseSpeed     = 64,
        .baseSpAttack  = 82,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Darktyrmon"),
        .cryId = CRY_DARKTYRMON_X,
        .natDexNum = NATIONAL_DEX_DARKTYRMON_X,
        .categoryName = _("X Antibody"),
        .height = 60,
        .weight = 1248,
        .description = COMPOUND_STRING(
            "Unlike a normal DarkTyrannomon,\n"
            "DarkTyrannomon X is much more composed\n"
            "letting it pick its battles more carefully\n"
            "and fight with more strategy."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seviper,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Seviper,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Darktyrmon_x,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Darktyrmon_x,
        .shinyPalette = gMonShinyPalette_Darktyrmon_x,
        .iconSprite = gMonIcon_Darktyrmon_x,
        .iconPalIndex = 2,
        SHADOW(-3, 7, SHADOW_SIZE_L)
        FOOTPRINT(Seviper)
        OVERWORLD(
            sPicTable_Seviper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BIKE_TIRE,
            gOverworldPalette_Seviper,
            gShinyOverworldPalette_Seviper
        )
        .levelUpLearnset = sSeviperLevelUpLearnset,
        .teachableLearnset = sSeviperTeachableLearnset,
        .eggMoveLearnset = sSeviperEggMoveLearnset,
    },
#endif //P_FAMILY_DARKTYRMON_X

#if P_FAMILY_DECKDRAMON
    [SPECIES_DECKDRAMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 71,
        .baseDefense   = 76,
        .baseSpeed     = 70,
        .baseSpAttack  = 112,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 4,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_HEAVY_METAL, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Deckdramon"),
        .cryId = CRY_DECKDRAMON,
        .natDexNum = NATIONAL_DEX_DECKDRAMON,
        .categoryName = _("Anti-Air"),
        .height = 49,
        .weight = 1180,
        .description = COMPOUND_STRING(
            "Hyper-specialised in taking down Flying\n"
            "Digimon, Deckerdramon is a beast of pure\n"
            "fury. When fighting grounded, it will use\n"
            "its tail to deal devastating attacks."),
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deckdramon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Deckdramon,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Lunatone,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Deckdramon,
        .shinyPalette = gMonShinyPalette_Deckdramon,
        .iconSprite = gMonIcon_Deckdramon,
        .iconPalIndex = 1,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Lunatone)
        OVERWORLD(
            sPicTable_Lunatone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Lunatone,
            gShinyOverworldPalette_Lunatone
        )
        .levelUpLearnset = sLunatoneLevelUpLearnset,
        .teachableLearnset = sLunatoneTeachableLearnset,
    },
#endif //P_FAMILY_DECKDRAMON

#if P_FAMILY_DELTAMON
    [SPECIES_DELTAMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 90,
        .baseDefense   = 74,
        .baseSpeed     = 70,
        .baseSpAttack  = 77,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SKILL_LINK, ABILITY_MEGA_LAUNCHER, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Deltamon"),
        .cryId = CRY_DELTAMON,
        .natDexNum = NATIONAL_DEX_DELTAMON,
        .categoryName = _("Tripartite"),
        .height = 177,
        .weight = 3540,
        .description = COMPOUND_STRING(
            "Deltamon are formed from the fusion of\n"
            "three different Digimon. The ferocious\n"
            "nature of each of these Digimon makes it\n"
            "particularly destructive."),
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deltamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Solrock,
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Solrock,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Deltamon,
        .shinyPalette = gMonShinyPalette_Deltamon,
        .iconSprite = gMonIcon_Deltamon,
        .iconPalIndex = 0,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(Solrock)
        OVERWORLD(
            sPicTable_Solrock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Solrock,
            gShinyOverworldPalette_Solrock
        )
        .levelUpLearnset = sSolrockLevelUpLearnset,
        .teachableLearnset = sSolrockTeachableLearnset,
    },
#endif //P_FAMILY_DELTAMON

#if P_FAMILY_DEPTHMON
    [SPECIES_DEPTHMON] =
    {
        .baseHP        = 64,
        .baseAttack    = 72,
        .baseDefense   = 96,
        .baseSpeed     = 80,
        .baseSpAttack  = 69,
        .baseSpDefense = 84,
        .types = MON_TYPES(TYPE_WATER, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,  
        .evYield_Defense   = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Depthmon"),
        .cryId = CRY_DEPTHMON,
        .natDexNum = NATIONAL_DEX_DEPTHMON,
        .categoryName = _("Diving"),
        .height = 23,
        .weight = 864,
        .description = COMPOUND_STRING(
            "Depthmon specialises in underwater activities\n"
            "due to its armour having high resistance to\n"
            "pressure while being very mobile. It can\n"
            "often get competitive with Whamon."),
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barboach,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .frontAnimFrames = sAnims_Barboach,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 7,
        .backPic = gMonBackPic_Barboach,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Depthmon,
        .shinyPalette = gMonShinyPalette_Depthmon,
        .iconSprite = gMonIcon_Depthmon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Barboach)
        OVERWORLD(
            sPicTable_Barboach,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Barboach,
            gShinyOverworldPalette_Barboach
        )
        .levelUpLearnset = sBarboachLevelUpLearnset,
        .teachableLearnset = sBarboachTeachableLearnset,
        .eggMoveLearnset = sBarboachEggMoveLearnset,
    },

    [SPECIES_DEPUTYMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 72,
        .baseSpAttack  = 100,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_BULLETPROOF, ABILITY_MEGA_LAUNCHER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Deputymon"),
        .cryId = CRY_DEPUTYMON,
        .natDexNum = NATIONAL_DEX_DEPUTYMON,
        .categoryName = _("Revolver"),
        .height = 19,
        .weight = 781,
        .description = COMPOUND_STRING(
            "Its knack for playing Russian Roulette\n"
            "makes Deputymon an interesting Digimon to\n"
            "encounter. Anyone who can 'win' Russian\n"
            "Roulette can easily befriend Deputymon."),
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whiscash,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Deputymon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Deputymon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Deputymon,
        .shinyPalette = gMonShinyPalette_Deputymon,
        .iconSprite = gMonIcon_Deputymon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Whiscash)
        OVERWORLD(
            sPicTable_Whiscash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whiscash,
            gShinyOverworldPalette_Whiscash
        )
        .levelUpLearnset = sWhiscashLevelUpLearnset,
        .teachableLearnset = sWhiscashTeachableLearnset,
    },
#endif //P_FAMILY_DEPTHMON

#if P_FAMILY_DEVIDRAMON
    [SPECIES_DEVIDRAMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 78,
        .baseDefense   = 68,
        .baseSpeed     = 78,
        .baseSpAttack  = 93,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_LIMBER, ABILITY_GUTS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Devidramon"),
        .cryId = CRY_DEVIDRAMON,
        .natDexNum = NATIONAL_DEX_DEVIDRAMON,
        .categoryName = _("Dark Beast"),
        .height = 70,
        .weight = 1875,
        .description = COMPOUND_STRING(
            "Although it is a Dragon type Digimon, \n"
            "Devidramon is unusually developed, using\n"
            "its elongated arms to shred any foes it\n"
            "comes across on its patrols."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Corphish,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = sAnims_Corphish,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Corphish,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Devidramon,
        .shinyPalette = gMonShinyPalette_Devidramon,
        .iconSprite = gMonIcon_Devidramon,
        .iconPalIndex = 0,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Corphish)
        OVERWORLD(
            sPicTable_Corphish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Corphish,
            gShinyOverworldPalette_Corphish
        )
        .levelUpLearnset = sCorphishLevelUpLearnset,
        .teachableLearnset = sCorphishTeachableLearnset,
        .eggMoveLearnset = sCorphishEggMoveLearnset,
    },

    [SPECIES_DEVIMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 89,
        .baseDefense   = 73,
        .baseSpeed     = 69,
        .baseSpAttack  = 77,
        .baseSpDefense = 74,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_PRESSURE, ABILITY_INTIMIDATE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Devimon"),
        .cryId = CRY_DEVIMON,
        .natDexNum = NATIONAL_DEX_DEVIMON,
        .categoryName = _("Devil"),
        .height = 30,
        .weight = 908,
        .description = COMPOUND_STRING(
            "Lured to the dark side by DemiDevimon, \n"
            "Devimon is originally a form of Angemon.\n"
            "It's fiendish and cunning personality often\n"
            "puts it as the leader of many evil Digimon."),
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Devimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = sAnims_Crawdaunt,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Devimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Devimon,
        .shinyPalette = gMonShinyPalette_Devimon,
        .iconSprite = gMonIcon_Devimon,
        .iconPalIndex = 0,
        SHADOW(6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Crawdaunt)
        OVERWORLD(
            sPicTable_Crawdaunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crawdaunt,
            gShinyOverworldPalette_Crawdaunt
        )
        .levelUpLearnset = sCrawdauntLevelUpLearnset,
        .teachableLearnset = sCrawdauntTeachableLearnset,
    },
#endif //P_FAMILY_DEVIDRAMON

#if P_FAMILY_DEXDORUMON
    [SPECIES_DEXDORUMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 93,
        .baseDefense   = 71,
        .baseSpeed     = 74,
        .baseSpAttack  = 71,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dexdorumon"),
        .cryId = CRY_DEXDORUMON,
        .natDexNum = NATIONAL_DEX_DEXDORUMON,
        .categoryName = _("X Antibody"),
        .height = 31,
        .weight = 657,
        .description = COMPOUND_STRING(
            "Dexdorugamon was formed from the\n"
            "experiments performed to find further\n"
            "evolutions. Its malformed mind has an obsess-\n"
            "ion with preying on others DigiCores"),
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dexdorumon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = sAnims_Baltoy,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .backPic = gMonBackPic_Baltoy,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Baltoy,
        .shinyPalette = gMonShinyPalette_Baltoy,
        .iconSprite = gMonIcon_Baltoy,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Baltoy)
        OVERWORLD(
            sPicTable_Baltoy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Baltoy,
            gShinyOverworldPalette_Baltoy
        )
        .levelUpLearnset = sBaltoyLevelUpLearnset,
        .teachableLearnset = sBaltoyTeachableLearnset,
    },

    [SPECIES_DIATRYMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 77,
        .baseDefense   = 75,
        .baseSpeed     = 91,
        .baseSpAttack  = 70,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_BIG_PECKS, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Diatrymon"),
        .cryId = CRY_DIATRYMON,
        .natDexNum = NATIONAL_DEX_DIATRYMON,
        .categoryName = _("Fossil Bird"),
        .height = 37,
        .weight = 999,
        .description = COMPOUND_STRING(
            "Although it is very clearly flying type\n"
            "and has wings, Diatrymon is incapable of\n"
            "however its powerful legs let it easily\n"
            "sprint upwards of 200km/h."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Diatrymon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 3,
        .frontAnimFrames = sAnims_Claydol,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Diatrymon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Diatrymon,
        .shinyPalette = gMonShinyPalette_Diatrymon,
        .iconSprite = gMonIcon_Diatrymon,
        .iconPalIndex = 0,
        SHADOW(0, 18, SHADOW_SIZE_M)
        FOOTPRINT(Claydol)
        OVERWORLD(
            sPicTable_Claydol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Claydol,
            gShinyOverworldPalette_Claydol
        )
        .levelUpLearnset = sClaydolLevelUpLearnset,
        .teachableLearnset = sClaydolTeachableLearnset,
    },
#endif //P_FAMILY_DEXDORUMON

#if P_FAMILY_DIGMON
    [SPECIES_DIGMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 79,
        .baseDefense   = 74,
        .baseSpeed     = 71,
        .baseSpAttack  = 66,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 3,
        .evYield_Attack    = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_NONE, ABILITY_SAND_STREAM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Digmon"),
        .cryId = CRY_DIGMON,
        .natDexNum = NATIONAL_DEX_DIGMON,
        .categoryName = _("Drill"),
        .height = 26,
        .weight = 776,
        .description = COMPOUND_STRING(
            "Once a Digmon decides to start tunnelling,\n"
            "it is basically impossible to catch. Even\n"
            "Ultra level Digimon will struggle to catch\n"
            "it without destroying the terrain completely."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Digmon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Digmon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lileep,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Digmon,
        .shinyPalette = gMonShinyPalette_Digmon,
        .iconSprite = gMonIcon_Digmon,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Lileep)
        OVERWORLD(
            sPicTable_Lileep,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Lileep,
            gShinyOverworldPalette_Lileep
        )
        .levelUpLearnset = sLileepLevelUpLearnset,
        .teachableLearnset = sLileepTeachableLearnset,
        .eggMoveLearnset = sLileepEggMoveLearnset,
    },

    [SPECIES_DINOHYUMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 90,
        .baseDefense   = 71,
        .baseSpeed     = 72,
        .baseSpAttack  = 68,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUTS, ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dinohyumon"),
        .cryId = CRY_DINOHYUMON,
        .natDexNum = NATIONAL_DEX_DINOHYUMON,
        .categoryName = _("Tribal"),
        .height = 21,
        .weight = 801,
        .description = COMPOUND_STRING(
            "Dinohyumon comes from a tribe in which all\n"
            "tribesman are trained in combat. It is a\n"
            "great warrior that boasts great strength\n"
            "and deep understanding of all its weapons."),
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dinohyumon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dinohyumon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Cradily,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Cradily,
        .shinyPalette = gMonShinyPalette_Cradily,
        .iconSprite = gMonIcon_Cradily,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Cradily)
        OVERWORLD(
            sPicTable_Cradily,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Cradily,
            gShinyOverworldPalette_Cradily
        )
        .levelUpLearnset = sCradilyLevelUpLearnset,
        .teachableLearnset = sCradilyTeachableLearnset,
    },
#endif //P_FAMILY_DIGMON

#if P_FAMILY_DOBERMON
    [SPECIES_DOBERMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 71,
        .baseSpeed     = 93,
        .baseSpAttack  = 80,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_GUARD_DOG },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dobermon"),
        .cryId = CRY_DOBERMON,
        .natDexNum = NATIONAL_DEX_DOBERMON,
        .categoryName = _("Hunting"),
        .height = 11,
        .weight = 365,
        .description = COMPOUND_STRING(
            "Originally a Virus type Digimon, Dobermon\n"
            "changed to a Vaccine type after a mutation.\n"
            "It still retains its ferocious nature\n"
            "making it perfect for hunting Virus types."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Anorith,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Anorith,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Anorith,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(56, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 23 : 19,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dobermon,
        .shinyPalette = gMonShinyPalette_Dobermon,
        .iconSprite = gMonIcon_Dobermon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Anorith)
        OVERWORLD(
            sPicTable_Anorith,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Anorith,
            gShinyOverworldPalette_Anorith
        )
        .levelUpLearnset = sAnorithLevelUpLearnset,
        .teachableLearnset = sAnorithTeachableLearnset,
        .eggMoveLearnset = sAnorithEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DOBERMON_X}),
    },

    [SPECIES_DOBERMON_X] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 68,
        .baseSpeed     = 92,
        .baseSpAttack  = 80,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUARD_DOG, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dobermon"),
        .cryId = CRY_DOBERMON_X,
        .natDexNum = NATIONAL_DEX_DOBERMON_X,
        .categoryName = _("X Antibody"),
        .height = 13,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Upon encountering the X Antibody, Dobermon\n"
            "reverts back to its Virus typing, becoming\n"
            "Dobermon X. Its even more ferocious meaning\n"
            "only the best can control it."),
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dobermon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = sAnims_Armaldo,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Armaldo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Armaldo,
        .shinyPalette = gMonShinyPalette_Armaldo,
        .iconSprite = gMonIcon_Armaldo,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Armaldo)
        OVERWORLD(
            sPicTable_Armaldo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Armaldo,
            gShinyOverworldPalette_Armaldo
        )
        .levelUpLearnset = sArmaldoLevelUpLearnset,
        .teachableLearnset = sArmaldoTeachableLearnset,
    },
#endif //P_FAMILY_DOBERMON

#if P_FAMILY_DOGGYMON
    [SPECIES_DOGGYMON] =
    {
        .baseHP        = 97,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 61,
        .baseSpAttack  = 64,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIMBER, ABILITY_VITAL_SPIRIT, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Doggymon"),
        .cryId = CRY_DOGGYMON,
        .natDexNum = NATIONAL_DEX_DOGGYMON,
        .categoryName = _("Cartoon"),
        .height = 8,
        .weight = 211,
        .description = COMPOUND_STRING(
            "Doggymon is likely produced from stray\n"
            "data released by American cartoon\n"
            "production. It has incredibly stretchy skin\n"
            "letting it absorb most attacks."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Feebas,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .frontAnimFrames = sAnims_Feebas,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Doggymon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Doggymon,
        .shinyPalette = gMonShinyPalette_Doggymon,
        .iconSprite = gMonIcon_Doggymon,
        .iconPalIndex = 2,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Feebas)
        OVERWORLD(
            sPicTable_Feebas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Feebas,
            gShinyOverworldPalette_Feebas
        )
        .levelUpLearnset = sFeebasLevelUpLearnset,
        .teachableLearnset = sFeebasTeachableLearnset,
        .eggMoveLearnset = sFeebasEggMoveLearnset,
    },

    [SPECIES_DOKUGUMON] =
    {
        .baseHP        = 67,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 99,
        .baseSpAttack  = 83,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 3,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INSOMNIA, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dokugumon"),
        .cryId = CRY_DOKUGUMON,
        .natDexNum = NATIONAL_DEX_DOKUGUMON,
        .categoryName = _("Spider"),
        .height = 21,
        .weight = 685,
        .description = COMPOUND_STRING(
            "Without preparation, Dokugumon will\n"
            "struggle in most fights. However given\n"
            "some time to set up webs and survey the\n"
            "area, it is terrifying beast in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Milotic,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = sAnims_Milotic,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLUE : ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Milotic,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Milotic,
        .shinyPalette = gMonShinyPalette_Milotic,
        .iconSprite = gMonIcon_Milotic,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MiloticF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_MiloticF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Milotic)
        OVERWORLD(
            sPicTable_Milotic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Milotic,
            gShinyOverworldPalette_Milotic
        )
        OVERWORLD_FEMALE(
            sPicTable_MiloticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sMiloticLevelUpLearnset,
        .teachableLearnset = sMiloticTeachableLearnset,
    },
#endif //P_FAMILY_DOGGYMON

#if P_FAMILY_DOLPHMON
    [SPECIES_DOLPHMON_NORMAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 68,
        .baseDefense   = 72,
        .baseSpeed     = 96,
        .baseSpAttack  = 82,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_TORRENT, ABILITY_SWIFT_SWIM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dolphmon"),
        .cryId = CRY_DOLPHMON,
        .natDexNum = NATIONAL_DEX_DOLPHMON,
        .categoryName = _("Dolphin"),
        .height = 12,
        .weight = 329,
        .description = COMPOUND_STRING(
            "Dolphmon is in incredibly intelligent\n"
            "Digimon that can outsmart just about\n"
            "anyone it encounters. It uses this intell-\n"
            "igence to swiftly deal with battles."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DolphmonNormal,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_DolphmonNormal,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_DolphmonNormal,
        .backPicSize = MON_COORDS_SIZE(32, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_DolphmonNormal,
        .shinyPalette = gMonShinyPalette_DolphmonNormal,
        .iconSprite = gMonIcon_DolphmonNormal,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformNormal,
            gShinyOverworldPalette_CastformNormal
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_DOLPHMON_SUNNY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dolphmon"),
        .cryId = CRY_DOLPHMON,
        .natDexNum = NATIONAL_DEX_DOLPHMON,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Dolphmon takes this form on bright days.\n"
            "In an experiment where is was placed in\n"
            "front of a heater, it didn't change to this\n"
            "form. Its body is warm and toasty."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DolphmonSunny,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_DolphmonSunny,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_DolphmonSunny,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_DolphmonSunny,
        .shinyPalette = gMonShinyPalette_DolphmonSunny,
        .iconSprite = gMonIcon_DolphmonSunny,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformSunny,
            gShinyOverworldPalette_CastformSunny
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_DOLPHMON_RAINY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dolphmon"),
        .cryId = CRY_DOLPHMON,
        .natDexNum = NATIONAL_DEX_DOLPHMON,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Dolphmon's form while it's raining.\n"
            "In an experiment where it was placed in a\n"
            "shower, it didn't change to this form. Its\n"
            "body is soft, slightly swollen with water."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DolphmonRainy,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_DolphmonRainy,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_DolphmonRainy,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_DolphmonRainy,
        .shinyPalette = gMonShinyPalette_DolphmonRainy,
        .iconSprite = gMonIcon_DolphmonRainy,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformRainy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformRainy,
            gShinyOverworldPalette_CastformRainy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_DOLPHMON_SNOWY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dolphmon"),
        .cryId = CRY_DOLPHMON,
        .natDexNum = NATIONAL_DEX_DOLPHMON,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Dolphmon's form in a hailstorm.\n"
            "In an experiment where it was placed\n"
            "in a freezer, it didn't change to this form.\n"
            "Its cold skin is as smooth as ice."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DolphmonSnowy,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_DolphmonSnowy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_DolphmonSnowy,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DolphmonSnowy,
        .shinyPalette = gMonShinyPalette_DolphmonSnowy,
        .iconSprite = gMonIcon_DolphmonSnowy,
        .iconPalIndex = 0,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSnowy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_CastformSnowy,
            gShinyOverworldPalette_CastformSnowy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },
#endif //P_FAMILY_DOLPHMON

#if P_FAMILY_DONSHOUMON
    [SPECIES_DONSHOUMON] =
    {
        .baseHP        = 78,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpeed     = 68,
        .baseSpAttack  = 72,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Donshoumon"),
        .cryId = CRY_DONSHOUMON,
        .natDexNum = NATIONAL_DEX_DONSHOUMON,
        .categoryName = _("Rhythm"),
        .height = 7,
        .weight = 220,
        .description = COMPOUND_STRING(
            "When a DonShoutmon is around, it is almost\n"
            "guaranteed that any fights and arguments are\n"
            "going to get worse as it will throw itself\n"
            "into any altercation."),
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Donshoumon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = sAnims_Kecleon,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Kecleon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Donshoumon,
        .shinyPalette = gMonShinyPalette_Donshoumon,
        .iconSprite = gMonIcon_Donshoumon,
        .iconPalIndex = 1,
        SHADOW(2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Kecleon)
        OVERWORLD(
            sPicTable_Kecleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kecleon,
            gShinyOverworldPalette_Kecleon
        )
        .levelUpLearnset = sKecleonLevelUpLearnset,
        .teachableLearnset = sKecleonTeachableLearnset,
        .eggMoveLearnset = sKecleonEggMoveLearnset,
    },
#endif //P_FAMILY_DONSHOUMON

#if P_FAMILY_DORUGAMON
    [SPECIES_DORUGAMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 86,
        .baseDefense   = 72,
        .baseSpeed     = 74,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MOXIE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dorugamon"),
        .cryId = CRY_DORUGAMON,
        .natDexNum = NATIONAL_DEX_DORUGAMON,
        .categoryName = _("X Antibody"),
        .height = 30,
        .weight = 954,
        .description = COMPOUND_STRING(
            "Dorugamon can very easily flip personalities;\n"
            "when in battle, it is almost indistinguishable\n"
            "from a wild however when outside battle, it\n"
            "is a very intelligent and docile Digimon."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shuppet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = sAnims_Shuppet,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Shuppet,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dorugamon,
        .shinyPalette = gMonShinyPalette_Dorugamon,
        .iconSprite = gMonIcon_Dorugamon,
        .iconPalIndex = 0,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Shuppet)
        OVERWORLD(
            sPicTable_Shuppet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Shuppet,
            gShinyOverworldPalette_Shuppet
        )
        .levelUpLearnset = sShuppetLevelUpLearnset,
        .teachableLearnset = sShuppetTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BANETTE}),
    },

    [SPECIES_DORULUMON] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 74,
        .baseSpeed     = 75,
        .baseSpAttack  = 68,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GROUND),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 3,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_FLASH_FIRE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dorulumon"),
        .cryId = CRY_DORULUMON,
        .natDexNum = NATIONAL_DEX_DORULUMON,
        .categoryName = _("Drill Wolf"),
        .height = 21,
        .weight = 796,
        .description = COMPOUND_STRING(
            "Dorulumon is a faithful Digimon that will\n"
            "always stick to its word. When in battle,\n"
            "it prefers to use hit and run tactics to\n"
            "overwhelm opponents."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Banette,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 7,
        .frontAnimFrames = sAnims_Banette,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Banette,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dorulumon,
        .shinyPalette = gMonShinyPalette_Dorulumon,
        .iconSprite = gMonIcon_Dorulumon,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Banette)
        OVERWORLD(
            sPicTable_Banette,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Banette,
            gShinyOverworldPalette_Banette
        )
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,
        .formChangeTable = sBanetteFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DORULUMON_MEGA] =
    {
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 194,
        .evYield_Attack = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dorulumon"),
        .cryId = CRY_DORULUMON_MEGA,
        .natDexNum = NATIONAL_DEX_DORULUMON,
        .categoryName = _("Marionette"),
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Extraordinary energy amplifies its\n"
            "cursing power to such an extent that it\n"
            "can't help but curse its own Trainer."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DorulumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DorulumonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_DorulumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_DorulumonMega,
        .shinyPalette = gMonShinyPalette_DorulumonMega,
        .iconSprite = gMonIcon_DorulumonMega,
        .iconPalIndex = 0,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Banette)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDorulumonLevelUpLearnset,
        .teachableLearnset = sDorulumonTeachableLearnset,
        .formSpeciesIdTable = sDorulumonFormSpeciesIdTable,
        .formChangeTable = sDorulumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DORUGAMON

#if P_FAMILY_DRIMOGEMON
    [SPECIES_DRIMOGEMON] =
    {
        .baseHP        = 93,
        .baseAttack    = 82,
        .baseDefense   = 77,
        .baseSpeed     = 67,
        .baseSpAttack  = 62,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_ARENA_TRAP, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Drimogemon"),
        .cryId = CRY_DRIMOGEMON,
        .natDexNum = NATIONAL_DEX_DRIMOGEMON,
        .categoryName = _("Mole"),
        .height = 23,
        .weight = 908,
        .description = COMPOUND_STRING(
            "Drimogemon are rarely found however this\n"
            "is not due to a smaller population but rather\n"
            "because it spends most of its time burrrowing\n"
            "deep underground."),
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Duskull,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = sAnims_Duskull,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 9 : 13,
        .backPic = gMonBackPic_Duskull,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Drimogemon,
        .shinyPalette = gMonShinyPalette_Drimogemon,
        .iconSprite = gMonIcon_Drimogemon,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Duskull)
        OVERWORLD(
            sPicTable_Duskull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Duskull,
            gShinyOverworldPalette_Duskull
        )
        .levelUpLearnset = sDuskullLevelUpLearnset,
        .teachableLearnset = sDuskullTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
    },

    [SPECIES_EBIDRAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 91,
        .baseDefense   = 80,
        .baseSpeed     = 66,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_HYPER_CUTTER, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ebidramon"),
        .cryId = CRY_EBIDRAMON,
        .natDexNum = NATIONAL_DEX_EBIDRAMON,
        .categoryName = _("Shrimp"),
        .height = 18,
        .weight = 792,
        .description = COMPOUND_STRING(
            "Ebidramons tough outer shell can sometimes\n"
            "lead others to mistake it as not being\n"
            "very good at fighting back however its\n"
            "gigantic pincers quickly show otherwise."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dusclops,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .frontAnimFrames = sAnims_Dusclops,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Dusclops,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 2,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ebidramon,
        .shinyPalette = gMonShinyPalette_Ebidramon,
        .iconSprite = gMonIcon_Ebidramon,
        .iconPalIndex = 0,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Dusclops)
        OVERWORLD(
            sPicTable_Dusclops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dusclops,
            gShinyOverworldPalette_Dusclops
        )
        .levelUpLearnset = sDusclopsLevelUpLearnset,
        .teachableLearnset = sDusclopsTeachableLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_DUSKNOIR,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Dusknoir,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Dusknoir,
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Dusknoir,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Dusknoir,
        .shinyPalette = gMonShinyPalette_Dusknoir,
        .iconSprite = gMonIcon_Dusknoir,
        .iconPalIndex = 2,
        SHADOW(6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Dusknoir)
        OVERWORLD(
            sPicTable_Dusknoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dusknoir,
            gShinyOverworldPalette_Dusknoir
        )
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DRIMOGEMON

#if P_FAMILY_ELEPHANMON
    [SPECIES_ELEPHANMON] =
    {
        .baseHP        = 77,
        .baseAttack    = 74,
        .baseDefense   = 75,
        .baseSpeed     = 89,
        .baseSpAttack  = 76,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_HEAVY_METAL, ABILITY_THICK_FAT, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elephanmon"),
        .cryId = CRY_ELEPHANMON,
        .natDexNum = NATIONAL_DEX_ELEPHANMON,
        .categoryName = _("Elephant"),
        .height = 55,
        .weight = 2350,
        .description = COMPOUND_STRING(
            "Contrary to its large build, Elephantmon\n"
            "is incredibly fast Digimon due to the giant\n"
            "turbines that make up its ears. It can't\n"
            "fly but it can float indefinitely."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Elephanmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Elephanmon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tropius,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Elephanmon,
        .shinyPalette = gMonShinyPalette_Elephanmon,
        .iconSprite = gMonIcon_Elephanmon,
        .iconPalIndex = 1,
        SHADOW(-6, 13, SHADOW_SIZE_L)
        FOOTPRINT(Tropius)
        OVERWORLD(
            sPicTable_Tropius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tropius,
            gShinyOverworldPalette_Tropius
        )
        .levelUpLearnset = sTropiusLevelUpLearnset,
        .teachableLearnset = sTropiusTeachableLearnset,
        .eggMoveLearnset = sTropiusEggMoveLearnset,
    },
#endif //P_FAMILY_ELEPHANMON

#if P_FAMILY_EOSMON_CHAMPION
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 74,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chingling"),
        .cryId = CRY_CHINGLING,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        .categoryName = _("Bell"),
        .height = 2,
        .weight = 6,
        .description = COMPOUND_STRING(
            "There is an orb inside its mouth.\n"
            "When it hops, the orb bounces all\n"
            "over and makes a ringing sound.\n"
            "It can cry for an awfully long time."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chingling,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Chingling,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Chingling,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Chingling,
        .shinyPalette = gMonShinyPalette_Chingling,
        .iconSprite = gMonIcon_Chingling,
        .iconPalIndex = 1,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Chingling)
        OVERWORLD(
            sPicTable_Chingling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chingling,
            gShinyOverworldPalette_Chingling
        )
        .levelUpLearnset = sChinglingLevelUpLearnset,
        .teachableLearnset = sChinglingTeachableLearnset,
        .eggMoveLearnset = sChinglingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_EOSMON_CHAMPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 74,
        .baseDefense   = 87,
        .baseSpeed     = 80,
        .baseSpAttack  = 75,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BUG),
        .attribute = TYPE_UKNOWN,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_COMPOUND_EYES, ABILITY_PRISM_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eosmon"),
        .cryId = CRY_EOSMON_CHAMPION,
        .natDexNum = NATIONAL_DEX_EOSMON_CHAMPION,
        .categoryName = _("Artificial"),
        .height = 11,
        .weight = 582,
        .description = COMPOUND_STRING(
            "Produced from the mad research into\n"
            "artificial Digimon, Eosmon is the first\n"
            "Champion level Digimon. Before then, the\n"
            "highest level achieved was Rookie level."),
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Eosmon_champion,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eosmon_champion,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 16,
        .backPic = gMonBackPic_Chimecho,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Eosmon_champion,
        .shinyPalette = gMonShinyPalette_Eosmon_champion,
        .iconSprite = gMonIcon_Eosmon_champion,
        .iconPalIndex = 0,
        SHADOW(-3, 16, SHADOW_SIZE_S)
        FOOTPRINT(Chimecho)
        OVERWORLD(
            sPicTable_Chimecho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Chimecho,
            gShinyOverworldPalette_Chimecho
        )
        .levelUpLearnset = sChimechoLevelUpLearnset,
        .teachableLearnset = sChimechoTeachableLearnset,
        .eggMoveLearnset = sChimechoEggMoveLearnset,
    },
#endif //P_FAMILY_EOSMON_CHAMPION

#if P_FAMILY_EXERMON
    [SPECIES_EXERMON] =
    {
        .baseHP        = 77,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 89,
        .baseSpAttack  = 76,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIMBER, ABILITY_INNER_FOCUS, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Exermon"),
        .cryId = CRY_EXERMON,
        .natDexNum = NATIONAL_DEX_EXERMON,
        .categoryName = _("Yoga"),
        .height = 25,
        .weight = 872,
        .description = COMPOUND_STRING(
            "Exermon spends most of its time atop high\n"
            "mountainous regions in which it practises\n"
            "yoga and taijutsu. All this practise has\n"
            "led it to perfect its sense of balance."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Absol,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = sAnims_Absol,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Absol,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Exermon,
        .shinyPalette = gMonShinyPalette_Exermon,
        .iconSprite = gMonIcon_Exermon,
        .iconPalIndex = 0,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Absol)
        OVERWORLD(
            sPicTable_Absol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Absol,
            gShinyOverworldPalette_Absol
        )
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_EXERMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 30,
        .expYield = 198,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Exermon"),
        .cryId = CRY_EXERMON_MEGA,
        .natDexNum = NATIONAL_DEX_EXERMON,
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 490,
        .description = COMPOUND_STRING(
            "As the energy of Mega Evolution fills it,\n"
            "its fur bristles. What you see on its back\n"
            "are not true wings, and this Pokémon isn't\n"
            "able to fly."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ExermonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ExermonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExermonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_ExermonMega,
        .shinyPalette = gMonShinyPalette_ExermonMega,
        .iconSprite = gMonIcon_ExermonMega,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Absol)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_EXERMON

#if P_FAMILY_EXVEEMON_VIRUS
    [SPECIES_EXVEEMON_VIRUS] =
    {
        .baseHP        = 77,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 89,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Exveemon"),
        .cryId = CRY_EXVEEMON_VIRUS,
        .natDexNum = NATIONAL_DEX_EXVEEMON_VIRUS,
        .categoryName = _("Dragon Man"),
        .height = 44,
        .weight = 1397,
        .description = COMPOUND_STRING(
            "Very little is known about this variant of\n"
            "ExVeemon. It is an incredibly rare virus\n"
            "type, its personality is percieved to be\n"
            "slightly more vicious."),
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snorunt,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = sAnims_Snorunt,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Exveemon_virus,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Exveemon_virus,
        .shinyPalette = gMonShinyPalette_Exveemon_virus,
        .iconSprite = gMonIcon_Exveemon_virus,
        .iconPalIndex = 2,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Snorunt)
        OVERWORLD(
            sPicTable_Snorunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snorunt,
            gShinyOverworldPalette_Snorunt
        )
        .levelUpLearnset = sSnoruntLevelUpLearnset,
        .teachableLearnset = sSnoruntTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
    },

    [SPECIES_EYESMON] =
    {
        .baseHP        = 77,
        .baseAttack    = 66,
        .baseDefense   = 71,
        .baseSpeed     = 90,
        .baseSpAttack  = 69,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Eyesmon"),
        .cryId = CRY_EYESMON,
        .natDexNum = NATIONAL_DEX_EYESMON,
        .categoryName = _("Shadow"),
        .height = 69,
        .weight = 53,
        .description = COMPOUND_STRING(
            "Capable of hiding itself in the shadows, \n"
            "Eyesmon is a frustrating Digimon to fight.\n"
            "As it accumulates more data, it gets\n"
            "stronger letting it defeat Ultimates."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glalie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = sAnims_Glalie,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Glalie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Eyesmon,
        .shinyPalette = gMonShinyPalette_Eyesmon,
        .iconSprite = gMonIcon_Eyesmon,
        .iconPalIndex = 0,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Glalie)
        OVERWORLD(
            sPicTable_Glalie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glalie,
            gShinyOverworldPalette_Glalie
        )
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,
        .formChangeTable = sGlalieFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_EYESMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 75,
        .expYield = 203,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Eyesmon"),
        .cryId = CRY_EYESMON_MEGA,
        .natDexNum = NATIONAL_DEX_EYESMON,
        .categoryName = _("Face"),
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution was so strong\n"
            "that it smashed Eyesmon's jaw. Its inability\n"
            "to eat very well leaves Eyesmon irritated."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_EyesmonMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_EyesmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_EyesmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_EyesmonMega,
        .shinyPalette = gMonShinyPalette_EyesmonMega,
        .iconSprite = gMonIcon_EyesmonMega,
        .iconPalIndex = 0,
        SHADOW(3, 18, SHADOW_SIZE_L)
        FOOTPRINT(Glalie)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sEyesmonLevelUpLearnset,
        .teachableLearnset = sEyesmonTeachableLearnset,
        .formSpeciesIdTable = sEyesmonFormSpeciesIdTable,
        .formChangeTable = sEyesmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
        .cryId = CRY_FROSLASS,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .description = COMPOUND_STRING(
            "When it finds people or Pokémon it likes,\n"
            "it freezes them and takes them to its\n"
            "chilly den, where they become its\n"
            "decorations."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Froslass,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Froslass,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Froslass,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Froslass,
        .shinyPalette = gMonShinyPalette_Froslass,
        .iconSprite = gMonIcon_Froslass,
        .iconPalIndex = 0,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Froslass)
        OVERWORLD(
            sPicTable_Froslass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Froslass,
            gShinyOverworldPalette_Froslass
        )
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_EXVEEMON_VIRUS

#if P_FAMILY_EYESMON_SCATTERMODE
    [SPECIES_EYESMON_SCATTERMODE] =
    {
        .baseHP        = 9,
        .baseAttack    = 7,
        .baseDefense   = 8,
        .baseSpeed     = 9,
        .baseSpAttack  = 8,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Eyesmon"),
        .cryId = CRY_EYESMON_SCATTERMODE,
        .natDexNum = NATIONAL_DEX_EYESMON_SCATTERMODE,
        .categoryName = _("Shadow"),
        .height = 3,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Although it is still a part of Eyesmon, it\n"
            "is so incredibly weak that it basically has\n"
            "no fighting capabilities, instead being\n"
            "used for monitoring far and wide."),
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spheal,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = sAnims_Spheal,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SPIN : ANIM_SPIN_LONG,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Spheal,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Eyesmon_scattermode,
        .shinyPalette = gMonShinyPalette_Eyesmon_scattermode,
        .iconSprite = gMonIcon_Eyesmon_scattermode,
        .iconPalIndex = 2,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Spheal)
        OVERWORLD(
            sPicTable_Spheal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spheal,
            gShinyOverworldPalette_Spheal
        )
        .levelUpLearnset = sSphealLevelUpLearnset,
        .teachableLearnset = sSphealTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
    },

    [SPECIES_FANGMON] =
    {
        .baseHP        = 77,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 69,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fangmon"),
        .cryId = CRY_FANGMON,
        .natDexNum = NATIONAL_DEX_FANGMON,
        .categoryName = _("Grimms Wolf"),
        .height = 28,
        .weight = 753,
        .description = COMPOUND_STRING(
            "Living in the depths of forests, Fangmon\n"
            "likes to prey on those who lose their way.\n"
            "It is believed to be composed of data from\n"
            "children fairy tales."),
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sealeo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Fangmon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Fangmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Fangmon,
        .shinyPalette = gMonShinyPalette_Fangmon,
        .iconSprite = gMonIcon_Fangmon,
        .iconPalIndex = 2,
        SHADOW(-1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Sealeo)
        OVERWORLD(
            sPicTable_Sealeo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sealeo,
            gShinyOverworldPalette_Sealeo
        )
        .levelUpLearnset = sSealeoLevelUpLearnset,
        .teachableLearnset = sSealeoTeachableLearnset,
    },

    [SPECIES_FILMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 88,
        .baseDefense   = 73,
        .baseSpeed     = 72,
        .baseSpAttack  = 77,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_LIGHTNING_ROD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Filmon"),
        .cryId = CRY_FILMON,
        .natDexNum = NATIONAL_DEX_FILMON,
        .categoryName = _("Hedgehog"),
        .height = 19,
        .weight = 634,
        .description = COMPOUND_STRING(
            "Filmon likes to wonder about collecting soft\n"
            "materials for bedding. It has to be careful\n"
            "when near others as its quills can unleash a\n"
            "storm of electricity if they pierce something."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Filmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Filmon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Walrein,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Filmon,
        .shinyPalette = gMonShinyPalette_Filmon,
        .iconSprite = gMonIcon_Filmon,
        .iconPalIndex = 0,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Walrein)
        OVERWORLD(
            sPicTable_Walrein,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Walrein,
            gShinyOverworldPalette_Walrein
        )
        .levelUpLearnset = sWalreinLevelUpLearnset,
        .teachableLearnset = sWalreinTeachableLearnset,
    },
#endif //P_FAMILY_EYESMON_SCATTERMODE

#if P_FAMILY_FIRAMON
    [SPECIES_FIRAMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 75,
        .baseDefense   = 71,
        .baseSpeed     = 90,
        .baseSpAttack  = 73,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_BLAZE, ABILITY_FLASH_FIRE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Firamon"),
        .cryId = CRY_FIRAMON,
        .natDexNum = NATIONAL_DEX_FIRAMON,
        .categoryName = _("Sky Lion"),
        .height = 30,
        .weight = 1102,
        .description = COMPOUND_STRING(
            "Although they do not wish it, Firamon are\n"
            "often thrusted into leadership positions.\n"
            "It is considered a very wise and strong\n"
            "leader who protects all."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clamperl,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Clamperl,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Clamperl,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Firamon,
        .shinyPalette = gMonShinyPalette_Firamon,
        .iconSprite = gMonIcon_Firamon,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Clamperl)
        OVERWORLD(
            sPicTable_Clamperl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Clamperl,
            gShinyOverworldPalette_Clamperl
        )
        .levelUpLearnset = sClamperlLevelUpLearnset,
        .teachableLearnset = sClamperlTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 66,
        .baseAttack    = 81,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 93,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SOLAR_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fladramon"),
        .cryId = CRY_FLADRAMON,
        .natDexNum = NATIONAL_DEX_FLADRAMON,
        .categoryName = _("Courage"),
        .height = 23,
        .weight = 885,
        .description = COMPOUND_STRING(
            "With the use of the Digi-Egg of courage, \n"
            "Fladramons power increasess as if though it\n"
            "is a blazing flame. It uses this power to\n"
            "unleash fast and devestating attacks."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Huntail,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Fladramon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Huntail,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Fladramon,
        .shinyPalette = gMonShinyPalette_Fladramon,
        .iconSprite = gMonIcon_Fladramon,
        .iconPalIndex = 0,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(Huntail)
        OVERWORLD(
            sPicTable_Huntail,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Huntail,
            gShinyOverworldPalette_Huntail
        )
        .levelUpLearnset = sHuntailLevelUpLearnset,
        .teachableLearnset = sHuntailTeachableLearnset,
    },

    [SPECIES_FLAWIZAMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 63,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 98,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 3,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_BLAZE, ABILITY_MAGICIAN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flawizamon"),
        .cryId = CRY_FLAWIZAMON,
        .natDexNum = NATIONAL_DEX_FLAWIZAMON,
        .categoryName = _("Fire Wizard"),
        .height = 17,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Unlike the shy Wizardmon, Flafalcomonizardmon\n"
            "is a very confident Digimon. It wields\n"
            "two matchstick-like canes which lets its\n"
            "fire magic reach its true potential."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gorebyss,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = sAnims_Gorebyss,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Gorebyss,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Flawizamon,
        .shinyPalette = gMonShinyPalette_Flawizamon,
        .iconSprite = gMonIcon_Flawizamon,
        .iconPalIndex = 0,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Gorebyss)
        OVERWORLD(
            sPicTable_Gorebyss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Gorebyss,
            gShinyOverworldPalette_Gorebyss
        )
        .levelUpLearnset = sGorebyssLevelUpLearnset,
        .teachableLearnset = sGorebyssTeachableLearnset,
    },
#endif //P_FAMILY_FIRAMON

#if P_FAMILY_FLARIZAMON
    [SPECIES_FLARIZAMON] =
    {
        .baseHP        = 99,
        .baseAttack    = 72,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flarizamon"),
        .cryId = CRY_FLARIZAMON,
        .natDexNum = NATIONAL_DEX_FLARIZAMON,
        .categoryName = _("Fire Lizard"),
        .height = 32,
        .weight = 964,
        .description = COMPOUND_STRING(
            "The flames that make up its body are formed\n"
            "from its own skin combusting. To keep up\n"
            "with the constant self damage, it has\n"
            "developed incredibly regenerative skin."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Relicanth,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Relicanth,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Relicanth,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Relicanth,
        .shinyPalette = gMonShinyPalette_Relicanth,
        .iconSprite = gMonIcon_Relicanth,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RelicanthF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_RelicanthF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Relicanth)
        OVERWORLD(
            sPicTable_Relicanth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Relicanth,
            gShinyOverworldPalette_Relicanth
        )
        OVERWORLD_FEMALE(
            sPicTable_RelicanthF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sRelicanthLevelUpLearnset,
        .teachableLearnset = sRelicanthTeachableLearnset,
        .eggMoveLearnset = sRelicanthEggMoveLearnset,
    },
#endif //P_FAMILY_FLARIZAMON

#if P_FAMILY_FLYBEEMON
    [SPECIES_FLYBEEMON] =
    {
        .baseHP        = 64,
        .baseAttack    = 75,
        .baseDefense   = 77,
        .baseSpeed     = 93,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 1,
        .evYield_Speed     = 3,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_HUSTLE, ABILITY_PICKUP, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flybeemon"),
        .cryId = CRY_FLYBEEMON,
        .natDexNum = NATIONAL_DEX_FLYBEEMON,
        .categoryName = _("Wasp"),
        .height = 10,
        .weight = 392,
        .description = COMPOUND_STRING(
            "Although it has evolved due to the Digi-Egg\n"
            "of Knowledge, it is not particularly smart.\n"
            "When Digimon enter its territory, it will try\n"
            "to repel even if they are Mega level"),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luvdisc,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 14,
        .frontAnimFrames = sAnims_Luvdisc,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Luvdisc,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Flybeemon,
        .shinyPalette = gMonShinyPalette_Flybeemon,
        .iconSprite = gMonIcon_Flybeemon,
        .iconPalIndex = 0,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Luvdisc)
        OVERWORLD(
            sPicTable_Luvdisc,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Luvdisc,
            gShinyOverworldPalette_Luvdisc
        )
        .levelUpLearnset = sLuvdiscLevelUpLearnset,
        .teachableLearnset = sLuvdiscTeachableLearnset,
        .eggMoveLearnset = sLuvdiscEggMoveLearnset,
    },
#endif //P_FAMILY_FLYBEEMON

#if P_FAMILY_FLYMON
    [SPECIES_FLYMON] =
    {
        .baseHP        = 67,
        .baseAttack    = 77,
        .baseDefense   = 78,
        .baseSpeed     = 88,
        .baseSpAttack  = 70,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FLYING, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_Speed     = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Flymon"),
        .cryId = CRY_FLYMON,
        .natDexNum = NATIONAL_DEX_FLYMON,
        .categoryName = _("Bee"),
        .height = 23,
        .weight = 707,
        .description = COMPOUND_STRING(
            "Flymons body is protected by a hard shell\n"
            "that lets it get aggressive in fights.\n"
            "When it catches an opponent, it will hold\n"
            "them down with its talons."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bagon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = sAnims_Bagon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE_TWICE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Bagon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bagon,
        .shinyPalette = gMonShinyPalette_Bagon,
        .iconSprite = gMonIcon_Bagon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Bagon)
        OVERWORLD(
            sPicTable_Bagon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bagon,
            gShinyOverworldPalette_Bagon
        )
        .levelUpLearnset = sBagonLevelUpLearnset,
        .teachableLearnset = sBagonTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
    },

    [SPECIES_FRIGIMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 73,
        .baseDefense   = 71,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frigimon"),
        .cryId = CRY_FRIGIMON,
        .natDexNum = NATIONAL_DEX_FRIGIMON,
        .categoryName = _("Snowman"),
        .height = 20,
        .weight = 578,
        .description = COMPOUND_STRING(
            "Many mistake Frigimons to be cold hearted\n"
            "Digimon however it is actually incredibly\n"
            "loving, willing to look after any Digimon\n"
            "that crosses its path."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frigimon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Frigimon,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Frigimon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Frigimon,
        .shinyPalette = gMonShinyPalette_Frigimon,
        .iconSprite = gMonIcon_Frigimon,
        .iconPalIndex = 2,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Shelgon)
        OVERWORLD(
            sPicTable_Shelgon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shelgon,
            gShinyOverworldPalette_Shelgon
        )
        .levelUpLearnset = sShelgonLevelUpLearnset,
        .teachableLearnset = sShelgonTeachableLearnset,
    },

    [SPECIES_FROGMON] =
    {
        .baseHP        = 72,
        .baseAttack    = 89,
        .baseDefense   = 72,
        .baseSpeed     = 77,
        .baseSpAttack  = 73,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_Speed     = 1,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_DRY_SKIN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Frogmon"),
        .cryId = CRY_FROGMON,
        .natDexNum = NATIONAL_DEX_FROGMON,
        .categoryName = _("Frog"),
        .height = 14,
        .weight = 492,
        .description = COMPOUND_STRING(
            "Not much is known about Frogmon as they\n"
            "have spent most of their existence in\n"
            "hiding. The wheels on its back let it\n"
            "fly for a considerable amount of time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamence,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Salamence,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 70,
        .backPic = gMonBackPic_Salamence,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Frogmon,
        .shinyPalette = gMonShinyPalette_Frogmon,
        .iconSprite = gMonIcon_Frogmon,
        .iconPalIndex = 0,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Salamence)
        OVERWORLD(
            sPicTable_Salamence,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salamence,
            gShinyOverworldPalette_Salamence
        )
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable,
        .formChangeTable = sSalamenceFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_FROGMON_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Frogmon"),
        .cryId = CRY_FROGMON_MEGA,
        .natDexNum = NATIONAL_DEX_FROGMON,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "Mega Evolution fuels its brutality, and it\n"
            "may even turn on the Trainer who raised it.\n"
            "It's been dubbed the blood-soaked.\n"
            "crescent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FrogmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_FrogmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FrogmonMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_FrogmonMega,
        .shinyPalette = gMonShinyPalette_FrogmonMega,
        .iconSprite = gMonIcon_FrogmonMega,
        .iconPalIndex = 0,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Salamence)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sFrogmonLevelUpLearnset,
        .teachableLearnset = sFrogmonTeachableLearnset,
        .formSpeciesIdTable = sFrogmonFormSpeciesIdTable,
        .formChangeTable = sFrogmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FLYMON

#if P_FAMILY_FUGAMON
    [SPECIES_FUGAMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 88,
        .baseDefense   = 72,
        .baseSpeed     = 68,
        .baseSpAttack  = 77,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fugamon"),
        .cryId = CRY_FUGAMON,
        .natDexNum = NATIONAL_DEX_FUGAMON,
        .categoryName = _("Oni"),
        .height = 27,
        .weight = 952,
        .description = COMPOUND_STRING(
            "Fugamon comes from the same family as\n"
            "Ogremon however it appears to have been\n"
            "formed from data based on eastern Oni. Its\n"
            "punches let it fire out small hurricanes."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beldum,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Fugamon,
        .frontAnimId = ANIM_H_SHAKE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Beldum,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Fugamon,
        .shinyPalette = gMonShinyPalette_Fugamon,
        .iconSprite = gMonIcon_Fugamon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Beldum)
        OVERWORLD(
            sPicTable_Beldum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Beldum,
            gShinyOverworldPalette_Beldum
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sFugamonLevelUpLearnset,
        .teachableLearnset = sFugamonTeachableLearnset,
    },

    [SPECIES_GANEMON] =
    {
        .baseHP        = 94,
        .baseAttack    = 69,
        .baseDefense   = 80,
        .baseSpeed     = 68,
        .baseSpAttack  = 72,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ganemon"),
        .cryId = CRY_GANEMON,
        .natDexNum = NATIONAL_DEX_GANEMON,
        .categoryName = _("Yen"),
        .height = 18,
        .weight = 45,
        .description = COMPOUND_STRING(
            "Although initially small in size, Ganemon\n"
            "grows larger and stronger the more money it\n"
            "eats. It is able to detect Zenimon with\n"
            "money letting it grow its personal wealth."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metang,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = sAnims_Metang,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Metang,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Ganemon,
        .shinyPalette = gMonShinyPalette_Ganemon,
        .iconSprite = gMonIcon_Ganemon,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Metang)
        OVERWORLD(
            sPicTable_Metang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Metang,
            gShinyOverworldPalette_Metang
        )
        .levelUpLearnset = sMetangLevelUpLearnset,
        .teachableLearnset = sMetangTeachableLearnset,
    },

    [SPECIES_GAOGAMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 91,
        .baseDefense   = 75,
        .baseSpeed     = 78,
        .baseSpAttack  = 69,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gaogamon"),
        .cryId = CRY_GAOGAMON,
        .natDexNum = NATIONAL_DEX_GAOGAMON,
        .categoryName = _("Akita Inu"),
        .height = 38,
        .weight = 744,
        .description = COMPOUND_STRING(
            "Although it is now on four legs, it still\n"
            "has the capabilities to fight like a martial\n"
            "artist by standing on its rear legs like a\n"
            "bear."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_Metagross,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = sAnims_Metagross,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Metagross,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gaogamon,
        .shinyPalette = gMonShinyPalette_Gaogamon,
        .iconSprite = gMonIcon_Gaogamon,
        .iconPalIndex = 0,
        SHADOW(2, -2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Metagross)
        OVERWORLD(
            sPicTable_Metagross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Metagross,
            gShinyOverworldPalette_Metagross
        )
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,
        .formChangeTable = sMetagrossFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGAOGAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GAOGAMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Defense = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gaogamon"),
        .cryId = CRY_GAOGAMON_MEGA,
        .natDexNum = NATIONAL_DEX_GAOGAMON,
        .categoryName = _("Iron Leg"),
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "When it knows it can't win, it digs the\n"
            "claws on its legs into its opponent and\n"
            "starts the countdown to a big explosion."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_GaogamonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GaogamonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_GaogamonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_GaogamonMega,
        .shinyPalette = gMonShinyPalette_GaogamonMega,
        .iconSprite = gMonIcon_GaogamonMega,
        .iconPalIndex = 0,
        SHADOW(1, 15, SHADOW_SIZE_L)
        FOOTPRINT(Metagross)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGaogamonLevelUpLearnset,
        .teachableLearnset = sGaogamonTeachableLearnset,
        .formSpeciesIdTable = sGaogamonFormSpeciesIdTable,
        .formChangeTable = sGaogamonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FUGAMON

#if P_FAMILY_GARGOMON
    [SPECIES_GARGOMON] =
    {
        .baseHP        = 89,
        .baseAttack    = 74,
        .baseDefense   = 75,
        .baseSpeed     = 72,
        .baseSpAttack  = 78,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Gargomon"),
        .cryId = CRY_GARGOMON,
        .natDexNum = NATIONAL_DEX_GARGOMON,
        .categoryName = _("Dog Rabbit"),
        .height = 50,
        .weight = 762,
        .description = COMPOUND_STRING(
            "Despite its large size, Gargomon is a pretty\n"
            "nimble Digimon. Combined with its incredible\n"
            "aim, it can quickly take down opponents. It\n"
            "cherishes its jeans."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Regirock,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Regirock,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Regirock,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gargomon,
        .shinyPalette = gMonShinyPalette_Gargomon,
        .iconSprite = gMonIcon_Gargomon,
        .iconPalIndex = 2,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Regirock)
        OVERWORLD(
            sPicTable_Regirock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regirock,
            gShinyOverworldPalette_Regirock
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegirockLevelUpLearnset,
        .teachableLearnset = sRegirockTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGARGOMON}),
    },
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_GARGOYLMON
    [SPECIES_GARGOYLMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 67,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gargoylmon"),
        .cryId = CRY_GARGOYLMON,
        .natDexNum = NATIONAL_DEX_GARGOYLMON,
        .categoryName = _("Holy Demon"),
        .height = 93,
        .weight = 1461,
        .description = COMPOUND_STRING(
            "Originally a Demon Digimon, it has suppressed\n"
            "its own powers giving it greater control over\n"
            "its urges. Gargoylemon is often used as a\n"
            "familiar by other Angel Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Gargoylmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Regice,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FOUR_PETAL : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Regice,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Regice,
        .shinyPalette = gMonShinyPalette_Regice,
        .iconSprite = gMonIcon_Regice,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Regice)
        OVERWORLD(
            sPicTable_Regice,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regice,
            gShinyOverworldPalette_Regice
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegiceLevelUpLearnset,
        .teachableLearnset = sRegiceTeachableLearnset,
    },
#endif //P_FAMILY_GARGOYLMON

#if P_FAMILY_GARURUMON
    [SPECIES_GARURUMON] =
    {
        .baseHP        = 72,
        .baseAttack    = 76,
        .baseDefense   = 73,
        .baseSpeed     = 94,
        .baseSpAttack  = 76,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garurumon"),
        .cryId = CRY_GARURUMON,
        .natDexNum = NATIONAL_DEX_GARURUMON,
        .categoryName = _("Canine"),
        .height = 56,
        .weight = 621,
        .description = COMPOUND_STRING(
            "Garurumon is both a very strong Digimon and\n"
            "very intelligent Digimon making is very\n"
            "fearsome to fight against. When fighting, it\n"
            "can also use its sharp shoulders to attack."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Registeel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .frontAnimFrames = sAnims_Registeel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Registeel,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Garurumon,
        .shinyPalette = gMonShinyPalette_Garurumon,
        .iconSprite = gMonIcon_Garurumon,
        .iconPalIndex = 2,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Registeel)
        OVERWORLD(
            sPicTable_Registeel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Registeel,
            gShinyOverworldPalette_Registeel
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegisteelLevelUpLearnset,
        .teachableLearnset = sRegisteelTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGARURMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GARURUMON_X}),
    },
#endif //P_FAMILY_GARURUMON

#if P_FAMILY_GARURUMON_X
    [SPECIES_GARURUMON_X] =
    {
        .baseHP        = 70,
        .baseAttack    = 79,
        .baseDefense   = 77,
        .baseSpeed     = 92,
        .baseSpAttack  = 76,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garurumon"),
        .cryId = CRY_GARURUMON_X,
        .natDexNum = NATIONAL_DEX_GARURUMON_X,
        .categoryName = _("X Antibody"),
        .height = 60,
        .weight = 691,
        .description = COMPOUND_STRING(
            "Very few Digimon are willing to fight\n"
            "Garurumon X as it has honed its fighting\n"
            "capabilities down to an art. Its hard fur\n"
            "provides excellent defense as well."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Latias,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 8,
        .frontAnimFrames = sAnims_Latias,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE_FAST_SHORT : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 12,
        .backPic = gMonBackPic_Latias,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Garurumon_x,
        .shinyPalette = gMonShinyPalette_Garurumon_x,
        .iconSprite = gMonIcon_Garurumon_x,
        .iconPalIndex = 0,
        SHADOW(3, 15, SHADOW_SIZE_M)
        FOOTPRINT(Latias)
        OVERWORLD(
            sPicTable_Latias,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Latias,
            gShinyOverworldPalette_Latias
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARURUMON_X_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Garurumon"),
        .cryId = CRY_GARURUMON_X_MEGA,
        .natDexNum = NATIONAL_DEX_GARURUMON_X,
        .categoryName = _("Eon"),
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Its body is smaller than Mega Gatomon's\n"
            "body. It is more agile and can make very\n"
            "sharp turns. When it Mega Evolves, its\n"
            "defensive strength grows substantially."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Garurumon_xMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Garurumon_xMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Garurumon_xMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Garurumon_xMega,
        .shinyPalette = gMonShinyPalette_Garurumon_xMega,
        .iconSprite = gMonIcon_Garurumon_xMega,
        .iconPalIndex = 2,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latias)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GARURUMON_X

#if P_FAMILY_GATOMON
    [SPECIES_GATOMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 67,
        .baseDefense   = 62,
        .baseSpeed     = 89,
        .baseSpAttack  = 65,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gatomon"),
        .cryId = CRY_GATOMON,
        .natDexNum = NATIONAL_DEX_GATOMON,
        .categoryName = _("Holy Cat"),
        .height = 6,
        .weight = 107,
        .description = COMPOUND_STRING(
            "Its small size is highly misleading as it\n"
            "packs a pretty strong punch. Its far\n"
            "stronger than a rookie and only mildly\n"
            "weaker than the average champion."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Gatomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .frontAnimFrames = sAnims_Latios,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Latios,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Latios,
        .shinyPalette = gMonShinyPalette_Latios,
        .iconSprite = gMonIcon_Latios,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Latios)
        OVERWORLD(
            sPicTable_Latios,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Latios,
            gShinyOverworldPalette_Latios
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_CHOUMON},
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKGATOMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GATOMON_X}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GATOMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gatomon"),
        .cryId = CRY_GATOMON_MEGA,
        .natDexNum = NATIONAL_DEX_GATOMON,
        .categoryName = _("Eon"),
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It's larger than Mega Garurumon_x, and can\n"
            "achieve higher speeds in flight.\n"
            "This Pokémon can use its speed in battle\n"
            "to unleash a flurry of attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_GatomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GatomonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_GatomonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_GatomonMega,
        .shinyPalette = gMonShinyPalette_GatomonMega,
        .iconSprite = gMonIcon_GatomonMega,
        .iconPalIndex = 2,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latios)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GATOMON

#if P_FAMILY_GATOMON_X
    [SPECIES_GATOMON_X] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 62,
        .baseSpeed     = 87,
        .baseSpAttack  = 74,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_EPIPHANY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gatomon"),
        .cryId = CRY_GATOMON_X,
        .natDexNum = NATIONAL_DEX_GATOMON_X,
        .categoryName = _("X Antibody"),
        .height = 4,
        .weight = 87,
        .description = COMPOUND_STRING(
            "To draw out more Holy power, Gatomon X\n"
            "cuts away a lot of redundant parts of\n"
            "normal Gatomon. This leaves it much\n"
            "smaller and a bit more mischevious."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Kyogre,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .frontAnimFrames = sAnims_Kyogre,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .frontAnimDelay = 60,
        .backPic = gMonBackPic_Gatomon_x,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Gatomon_x,
        .shinyPalette = gMonShinyPalette_Gatomon_x,
        .iconSprite = gMonIcon_Gatomon_x,
        .iconPalIndex = 2,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kyogre)
        OVERWORLD(
            sPicTable_Kyogre,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kyogre,
            gShinyOverworldPalette_Kyogre
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
    },
#if P_PRIMAL_REVERSIONS
    [SPECIES_GATOMON_X_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRIMORDIAL_SEA, ABILITY_PRIMORDIAL_SEA },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gatomon"),
        .cryId = CRY_GATOMON_X_PRIMAL,
        .natDexNum = NATIONAL_DEX_GATOMON_X,
        .categoryName = _("Sea Basin"),
        .height = 98,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "When Gatomon_x roared, water poured forth\n"
            "and the seas spread outward.\n"
            "Dark clouds enshrouded the world,\n"
            "and the deluge fell upon all…"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Gatomon_xPrimal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gatomon_xPrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gatomon_xPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Gatomon_xPrimal,
        .shinyPalette = gMonShinyPalette_Gatomon_xPrimal,
        .iconSprite = gMonIcon_Gatomon_xPrimal,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kyogre)
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GATOMON_X

#if P_FAMILY_GEKOMON
    [SPECIES_GEKOMON] =
    {
        .baseHP        = 73,
        .baseAttack    = 66,
        .baseDefense   = 69,
        .baseSpeed     = 75,
        .baseSpAttack  = 92,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gekomon"),
        .cryId = CRY_GEKOMON,
        .natDexNum = NATIONAL_DEX_GEKOMON,
        .categoryName = _("Gecko"),
        .height = 9,
        .weight = 284,
        .description = COMPOUND_STRING(
            "Gekomon is renowned by musicians of the\n"
            "Digital world as it is one of few species\n"
            "born from music composition software giving\n"
            "it a natural edge when making music."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Gekomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Groudon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Groudon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Gekomon,
        .shinyPalette = gMonShinyPalette_Gekomon,
        .iconSprite = gMonIcon_Gekomon,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Groudon)
        OVERWORLD(
            sPicTable_Groudon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Groudon,
            gShinyOverworldPalette_Groudon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
    },

#if P_PRIMAL_REVERSIONS
    [SPECIES_GEKOMON_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FIRE),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DESOLATE_LAND, ABILITY_DESOLATE_LAND },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gekomon"),
        .cryId = CRY_GEKOMON,
        .natDexNum = NATIONAL_DEX_GEKOMON,
        .categoryName = _("Continent"),
        .height = 50,
        .weight = 9997,
        .description = COMPOUND_STRING(
            "When Gekomon howled, the earth swelled and\n"
            "the land grew wide. The sun blazed atop\n"
            "and all the world around the creature\n"
            "was enveloped in incandescent heat."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_GekomonPrimal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GekomonPrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GekomonPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_GekomonPrimal,
        .shinyPalette = gMonShinyPalette_GekomonPrimal,
        .iconSprite = gMonIcon_GekomonPrimal,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Groudon)
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GEKOMON

#if P_FAMILY_GEOGREYMON
    [SPECIES_GEOGREYMON] =
    {
        .baseHP        = 74,
        .baseAttack    = 94,
        .baseDefense   = 76,
        .baseSpeed     = 73,
        .baseSpAttack  = 79,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ROUGH_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Geogreymon"),
        .cryId = CRY_GEOGREYMON,
        .natDexNum = NATIONAL_DEX_GEOGREYMON,
        .categoryName = _("Dinosaur"),
        .height = 78,
        .weight = 1102,
        .description = COMPOUND_STRING(
            "GeoGreymon is a subspecies of Greymon that\n"
            "has developed further for physical fighting.\n"
            "The sharp points on its body have grown even\n"
            "more and it has a better build for moving."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        .frontPic = gMonFrontPic_Geogreymon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Geogreymon,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 60,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Rayquaza,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Geogreymon,
        .shinyPalette = gMonShinyPalette_Geogreymon,
        .iconSprite = gMonIcon_Geogreymon,
        .iconPalIndex = 1,
        SHADOW(0, 17, SHADOW_SIZE_L)
        FOOTPRINT(Rayquaza)
        OVERWORLD(
            sPicTable_Rayquaza,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Rayquaza,
            gShinyOverworldPalette_Rayquaza
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GEOGREYMON_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Geogreymon"),
        .cryId = CRY_GEOGREYMON,
        .natDexNum = NATIONAL_DEX_GEOGREYMON,
        .categoryName = _("Sky High"),
        .height = 108,
        .weight = 3920,
        .description = COMPOUND_STRING(
            "Particles stream from the filaments that\n"
            "extend from its jaw. They can control the\n"
            "density and humidity of the air, allowing\n"
            "Geogreymon to manipulate the weather."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        .frontPic = gMonFrontPic_GeogreymonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GeogreymonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_GeogreymonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_GeogreymonMega,
        .shinyPalette = gMonShinyPalette_GeogreymonMega,
        .iconSprite = gMonIcon_GeogreymonMega,
        .iconPalIndex = 1,
        SHADOW(0, 15, SHADOW_SIZE_L)
        FOOTPRINT(Rayquaza)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GEOGREYMON

#if P_FAMILY_GEREMON
    [SPECIES_GEREMON] =
    {
        .baseHP        = 84,
        .baseAttack    = 64,
        .baseDefense   = 65,
        .baseSpeed     = 62,
        .baseSpAttack  = 73,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STENCH, ABILITY_LIQUID_OOZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Geremon"),
        .cryId = CRY_GEREMON,
        .natDexNum = NATIONAL_DEX_GEREMON,
        .categoryName = _("Slug"),
        .height = 10,
        .weight = 273,
        .description = COMPOUND_STRING(
            "A Tamer who has a Geremon is usually a bad\n"
            "Tamer as Geremon are only produced from\n"
            "negligent care. Its a frustratingly weak\n"
            "Digimon that never lets up."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jirachi,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Jirachi,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_RISING_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Jirachi,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Geremon,
        .shinyPalette = gMonShinyPalette_Geremon,
        .iconSprite = gMonIcon_Geremon,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Jirachi)
        OVERWORLD(
            sPicTable_Jirachi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Jirachi,
            gShinyOverworldPalette_Jirachi
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sJirachiLevelUpLearnset,
        .teachableLearnset = sJirachiTeachableLearnset,
    },
#endif //P_FAMILY_GEREMON

#if P_FAMILY_GESOMON
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GESOMON_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GESOMON_EXP_YIELD 270
#else
    #define GESOMON_EXP_YIELD 215
#endif

    [SPECIES_GESOMON_NORMAL] =
    {
        .baseHP        = 73,
        .baseAttack    = 90,
        .baseDefense   = 74,
        .baseSpeed     = 75,
        .baseSpAttack  = 69,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gesomon"),
        .cryId = CRY_GESOMON,
        .natDexNum = NATIONAL_DEX_GESOMON,
        .categoryName = _("Squid"),
        .height = 30,
        .weight = 836,
        .description = COMPOUND_STRING(
            "Gesomon is highly intelligent, often\n"
            "attending to its territory. It rarely\n"
            "attacks Digimon outside its territory\n"
            "but anything that enters is obliterated."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GesomonNormal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GesomonNormal,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonNormal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GesomonNormal,
        .shinyPalette = gMonShinyPalette_GesomonNormal,
        .iconSprite = gMonIcon_GesomonNormal,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysNormal,
            gShinyOverworldPalette_DeoxysNormal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysNormalLevelUpLearnset,
        .teachableLearnset = sDeoxysNormalTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysNormalFormChangeTable,
    },

    [SPECIES_GESOMON_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = GESOMON_EXP_YIELD,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gesomon"),
        .cryId = CRY_GESOMON,
        .natDexNum = NATIONAL_DEX_GESOMON,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gGesomonNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GesomonAttack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GesomonAttack,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonAttack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonAttack,
        .shinyPalette = gMonShinyPalette_GesomonAttack,
        .iconSprite = gMonIcon_GesomonAttack,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_DeoxysAttack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysAttack,
            gShinyOverworldPalette_DeoxysAttack
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysAttackLevelUpLearnset,
        .teachableLearnset = sDeoxysAttackTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysAttackFormChangeTable,
    },

    [SPECIES_GESOMON_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = GESOMON_EXP_YIELD,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gesomon"),
        .cryId = CRY_GESOMON,
        .natDexNum = NATIONAL_DEX_GESOMON,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gGesomonNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GesomonDefense,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GesomonDefense,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonDefense,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonDefense,
        .shinyPalette = gMonShinyPalette_GesomonDefense,
        .iconSprite = gMonIcon_GesomonDefense,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysDefense,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysDefense,
            gShinyOverworldPalette_DeoxysDefense
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysDefenseLevelUpLearnset,
        .teachableLearnset = sDeoxysDefenseTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysDefenseFormChangeTable,
    },

    [SPECIES_GESOMON_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = GESOMON_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Gesomon"),
        .cryId = CRY_GESOMON,
        .natDexNum = NATIONAL_DEX_GESOMON,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gGesomonNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GesomonSpeed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GesomonSpeed,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonSpeed,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonSpeed,
        .shinyPalette = gMonShinyPalette_GesomonSpeed,
        .iconSprite = gMonIcon_GesomonSpeed,
        .iconPalIndex = 0,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysSpeed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeoxysSpeed,
            gShinyOverworldPalette_DeoxysSpeed
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysSpeedLevelUpLearnset,
        .teachableLearnset = sDeoxysSpeedTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysSpeedFormChangeTable,
    },
#endif //P_FAMILY_GESOMON

#ifdef __INTELLISENSE__
};
#endif
