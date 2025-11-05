#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen4[] =
{
#endif

[SPECIES_AEGIOMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .evYield_SpDefense = 1,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Aegiomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Aegiomon,
        .shinyPalette = gMonShinyPalette_Aegiomon,
        .iconSprite = gMonIcon_Aegiomon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Aegiomon)
        OVERWORLD(
            sPicTable_Aegiomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aegiomon,
            gShinyOverworldPalette_Aegiomon
        )
        .levelUpLearnset = sAegiomonLevelUpLearnset,
        .teachableLearnset = sAegiomonTeachableLearnset,
    },

    [SPECIES_ROKUSHO] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .attribute = TYPE_UKNOWN,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rokusho"),
        .cryId = CRY_ROKUSHO,
        .natDexNum = NATIONAL_DEX_ROKUSHO,
        .categoryName = _("Medabot"),
        .height = 10,
        .weight = 648,
        .description = COMPOUND_STRING(
            "Rokusho specialises in a standard fighting\n"
            "style. This style lacks any range but\n"
            "gives it more than enough power for\n"
            "attacking and defending."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rokusho,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rokusho,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Rokusho,
        .shinyPalette = gMonShinyPalette_Rokusho,
        .iconSprite = gMonIcon_Rokusho,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rokusho)
        OVERWORLD(
            sPicTable_Rokusho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rokusho,
            gShinyOverworldPalette_Rokusho
        )
        .levelUpLearnset = sRokushoLevelUpLearnset,
        .teachableLearnset = sRokushoTeachableLearnset,
        .eggMoveLearnset = sRokushoEggMoveLearnset,
    },

    [SPECIES_METABEE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .attribute = TYPE_UKNOWN,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Metabee"),
        .cryId = CRY_METABEE,
        .natDexNum = NATIONAL_DEX_METABEE,
        .categoryName = _("Medabot"),
        .height = 10,
        .weight = 648,
        .description = COMPOUND_STRING(
            "Metabee is a very standard Digimon that\n"
            "focuses on shooting. It does not have\n"
            "outstanding strength but its balanced\n"
            "strength makes it hard to fight against."),
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metabee,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 17),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backPic = gMonBackPic_Metabee,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Metabee,
        .shinyPalette = gMonShinyPalette_Metabee,
        .iconSprite = gMonIcon_Metabee,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MetabeeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_MetabeeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Metabee)
        OVERWORLD(
            sPicTable_Metabee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Metabee,
            gShinyOverworldPalette_Metabee
        )
        OVERWORLD_FEMALE(
            sPicTable_MetabeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sMetabeeLevelUpLearnset,
        .teachableLearnset = sMetabeeTeachableLearnset,
        .eggMoveLearnset = sMetabeeEggMoveLearnset,
    },

    #if P_GEN_3_CROSS_EVOS
    [SPECIES_BIOSTEGOMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE }, // BIO-HYBRID DNA
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("BioStegomon"),
        .cryId = CRY_BIOSTEGOMON,
        .natDexNum = NATIONAL_DEX_BIOSTEGOMON,
        .categoryName = _("Bio-Hybrid"),
        .height = 57,
        .weight = 1964,
        .description = COMPOUND_STRING(
            "Thought to just be a rare version of\n"
            "Stegomon, BioStegomon is actually an \n"
            "illegal experiment caused by the forceful\n"
            "merging of Human data and Stegomon Data."),
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biostegomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Biostegomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Biostegomon,
        .shinyPalette = gMonShinyPalette_Biostegomon,
        .iconSprite = gMonIcon_Biostegomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Biostegomon)
        OVERWORLD(
            sPicTable_Biostegomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Biostegomon,
            gShinyOverworldPalette_Biostegomon
        )
        .levelUpLearnset = sBiostegomonLevelUpLearnset,
        .teachableLearnset = sBiostegomonTeachableLearnset,
        .eggMoveLearnset = sBiostegomonEggMoveLearnset,
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_AGUNIMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Agunimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Agunimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agunimon,
        .shinyPalette = gMonShinyPalette_Agunimon,
        .iconSprite = gMonIcon_Agunimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AgunimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_AgunimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Agunimon)
        OVERWORLD(
            sPicTable_Agunimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agunimon,
            gShinyOverworldPalette_Agunimon
        )
        OVERWORLD_FEMALE(
            sPicTable_AgunimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sAgunimonLevelUpLearnset,
        .teachableLearnset = sAgunimonTeachableLearnset,
    },

#if P_FAMILY_AIRDRAMON
    [SPECIES_AIRDRAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Airdramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Airdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Airdramon,
        .shinyPalette = gMonShinyPalette_Airdramon,
        .iconSprite = gMonIcon_Airdramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 20, SHADOW_SIZE_L)
        FOOTPRINT(Airdramon)
        OVERWORLD(
            sPicTable_Airdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Airdramon,
            gShinyOverworldPalette_Airdramon
        )
        .levelUpLearnset = sAirdramonLevelUpLearnset,
        .teachableLearnset = sAirdramonTeachableLearnset,
        .eggMoveLearnset = sAirdramonEggMoveLearnset,
    },

    [SPECIES_AKATORIMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 2,
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
        .frontPic = gMonFrontPic_Akatorimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Akatorimon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Akatorimon,
        .shinyPalette = gMonShinyPalette_Akatorimon,
        .iconSprite = gMonIcon_Akatorimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AkatorimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .backPicFemale = gMonBackPic_AkatorimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Akatorimon)
        OVERWORLD(
            sPicTable_Akatorimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Akatorimon,
            gShinyOverworldPalette_Akatorimon
        )
        OVERWORLD_FEMALE(
            sPicTable_AkatorimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sAkatorimonLevelUpLearnset,
        .teachableLearnset = sAkatorimonTeachableLearnset,
    },

    [SPECIES_ALLOMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
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
        .frontPic = gMonFrontPic_Allomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Allomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Allomon,
        .shinyPalette = gMonShinyPalette_Allomon,
        .iconSprite = gMonIcon_Allomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 5,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AllomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_AllomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Allomon)
        OVERWORLD(
            sPicTable_Allomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Allomon,
            gShinyOverworldPalette_Allomon
        )
        OVERWORLD_FEMALE(
            sPicTable_AllomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sAllomonLevelUpLearnset,
        .teachableLearnset = sAllomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_ALLOMON_X}),
    },
#endif //P_FAMILY_AIRDRAMON

#if P_FAMILY_ALLOMON_X
    [SPECIES_ALLOMON_X] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
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
        .frontPic = gMonFrontPic_Allomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Allomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Allomon_x,
        .shinyPalette = gMonShinyPalette_Allomon_x,
        .iconSprite = gMonIcon_Allomon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Allomon_x)
        OVERWORLD(
            sPicTable_Allomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Allomon_x,
            gShinyOverworldPalette_Allomon_x
        )
        .levelUpLearnset = sAllomon_xLevelUpLearnset,
        .teachableLearnset = sAllomon_xTeachableLearnset,
        .eggMoveLearnset = sAllomon_xEggMoveLearnset,
    },

    [SPECIES_ANGELAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Angelamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Angelamon,
        .shinyPalette = gMonShinyPalette_Angelamon,
        .iconSprite = gMonIcon_Angelamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 7, SHADOW_SIZE_M)
        FOOTPRINT(Angelamon)
        OVERWORLD(
            sPicTable_Angelamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Angelamon,
            gShinyOverworldPalette_Angelamon
        )
        .levelUpLearnset = sAngelamonLevelUpLearnset,
        .teachableLearnset = sAngelamonTeachableLearnset,
    },
#endif //P_FAMILY_ALLOMON_X

#if P_FAMILY_ANGEMON
    [SPECIES_ANGEMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 2,
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
        .categoryName = _("Virtous"),
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
        .frontPic = gMonFrontPic_Angemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 23),
            ANIMCMD_FRAME(0, 13),
        ),
        .frontAnimId = ANIM_H_PIVOT,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 15,
        .backPic = gMonBackPic_Angemon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Angemon,
        .shinyPalette = gMonShinyPalette_Angemon,
        .iconSprite = gMonIcon_Angemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 15, SHADOW_SIZE_S)
        FOOTPRINT(Angemon)
        OVERWORLD(
            sPicTable_Angemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Angemon,
            gShinyOverworldPalette_Angemon
        )
        .levelUpLearnset = sAngemonLevelUpLearnset,
        .teachableLearnset = sAngemonTeachableLearnset,
        .eggMoveLearnset = sAngemonEggMoveLearnset,
    },

    [SPECIES_ANKYLOMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_ROCK_HEAD, ABILITY_NONE },
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
        .frontPic = gMonFrontPic_Ankylomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Ankylomon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ankylomon,
        .shinyPalette = gMonShinyPalette_Ankylomon,
        .iconSprite = gMonIcon_Ankylomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Ankylomon)
        OVERWORLD(
            sPicTable_Ankylomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ankylomon,
            gShinyOverworldPalette_Ankylomon
        )
        .levelUpLearnset = sAnkylomonLevelUpLearnset,
        .teachableLearnset = sAnkylomonTeachableLearnset,
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
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Apemon,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Apemon,
        .shinyPalette = gMonShinyPalette_Apemon,
        .iconSprite = gMonIcon_Apemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Apemon)
        OVERWORLD(
            sPicTable_Apemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Apemon,
            gShinyOverworldPalette_Apemon
        )
        .levelUpLearnset = sApemonLevelUpLearnset,
        .teachableLearnset = sApemonTeachableLearnset,
        .eggMoveLearnset = sApemonEggMoveLearnset,
    },

    [SPECIES_AQUILAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 75,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 39),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Aquilamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Aquilamon,
        .shinyPalette = gMonShinyPalette_Aquilamon,
        .iconSprite = gMonIcon_Aquilamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Aquilamon)
        OVERWORLD(
            sPicTable_Aquilamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aquilamon,
            gShinyOverworldPalette_Aquilamon
        )
        .levelUpLearnset = sAquilamonLevelUpLearnset,
        .teachableLearnset = sAquilamonTeachableLearnset,
    },

    [SPECIES_ARCADIAMON_CHAMPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
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
        .frontPic = gMonFrontPic_Arcadiamon_champion,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Arcadiamon_champion,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Arcadiamon_champion,
        .shinyPalette = gMonShinyPalette_Arcadiamon_champion,
        .iconSprite = gMonIcon_Arcadiamon_champion,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Arcadiamon_champion)
        OVERWORLD(
            sPicTable_Arcadiamon_champion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arcadiamon_champion,
            gShinyOverworldPalette_Arcadiamon_champion
        )
        .levelUpLearnset = sArcadiamon_championLevelUpLearnset,
        .teachableLearnset = sArcadiamon_championTeachableLearnset,
        .formSpeciesIdTable = sArcadiamon_championFormSpeciesIdTable,
        .formChangeTable = sArcadiamon_championFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arcadiamon_championMega,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Arcadiamon_championMega,
        .shinyPalette = gMonShinyPalette_Arcadiamon_championMega,
        .iconSprite = gMonIcon_Arcadiamon_championMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Arcadiamon_champion)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Arcadiamon_championMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arcadiamon_championMega,
            gShinyOverworldPalette_Arcadiamon_championMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Gallade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GalladeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GalladeMega,
        .shinyPalette = gMonShinyPalette_GalladeMega,
        .iconSprite = gMonIcon_GalladeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GalladeMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GalladeMega,
            gShinyOverworldPalette_GalladeMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 4,
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
        .frontPic = gMonFrontPic_Archelomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Archelomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Archelomon,
        .shinyPalette = gMonShinyPalette_Archelomon,
        .iconSprite = gMonIcon_Archelomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Archelomon)
        OVERWORLD(
            sPicTable_Archelomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Archelomon,
            gShinyOverworldPalette_Archelomon
        )
        .levelUpLearnset = sArchelomonLevelUpLearnset,
        .teachableLearnset = sArchelomonTeachableLearnset,
        .eggMoveLearnset = sArchelomonEggMoveLearnset,
    },

    [SPECIES_ARGOMON_CHAMPION] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 17, SHADOW_SIZE_M)
        FOOTPRINT(Argomon_champion)
        OVERWORLD(
            sPicTable_Argomon_champion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Argomon_champion,
            gShinyOverworldPalette_Argomon_champion
        )
        .levelUpLearnset = sArgomon_championLevelUpLearnset,
        .teachableLearnset = sArgomon_championTeachableLearnset,
    },
#endif //P_FAMILY_ARCHELOMON

#if P_FAMILY_ARRESTERDRAMON
    [SPECIES_ARRESTERDRAMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_LIMBER, ABILITY_LONG_REACH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Arestrdramon"),
        .cryId = CRY_ARRESTERDRAMON,
        .natDexNum = NATIONAL_DEX_ARRESTERDRAMON,
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
        .frontPic = gMonFrontPic_Arresterdramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arresterdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Arresterdramon,
        .shinyPalette = gMonShinyPalette_Arresterdramon,
        .iconSprite = gMonIcon_Arresterdramon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Arresterdramon)
        OVERWORLD(
            sPicTable_Arresterdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arresterdramon,
            gShinyOverworldPalette_Arresterdramon
        )
        .levelUpLearnset = sArresterdramonLevelUpLearnset,
        .teachableLearnset = sArresterdramonTeachableLearnset,
        .eggMoveLearnset = sArresterdramonEggMoveLearnset,
    },

    [SPECIES_ATAMADEKACHIMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE }, // BIG HEAD
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Atamadekamon"),
        .cryId = CRY_ATAMADEKACHIMON,
        .natDexNum = NATIONAL_DEX_ATAMADEKACHIMON,
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
        .frontPic = gMonFrontPic_Atamadekachimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Atamadekachimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Atamadekachimon,
        .shinyPalette = gMonShinyPalette_Atamadekachimon,
        .iconSprite = gMonIcon_Atamadekachimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_M)
        FOOTPRINT(Atamadekachimon)
        OVERWORLD(
            sPicTable_Atamadekachimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Atamadekachimon,
            gShinyOverworldPalette_Atamadekachimon
        )
        .levelUpLearnset = sAtamadekachimonLevelUpLearnset,
        .teachableLearnset = sAtamadekachimonTeachableLearnset,
    },
#endif //P_FAMILY_ARRESTERDRAMON

#if P_FAMILY_AURUMON
    [SPECIES_AURUMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
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
        .frontPic = gMonFrontPic_Aurumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aurumon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Aurumon,
        .shinyPalette = gMonShinyPalette_Aurumon,
        .iconSprite = gMonIcon_Aurumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -4, SHADOW_SIZE_M)
        FOOTPRINT(Aurumon)
        OVERWORLD(
            sPicTable_Aurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aurumon,
            gShinyOverworldPalette_Aurumon
        )
        .levelUpLearnset = sAurumonLevelUpLearnset,
        .teachableLearnset = sAurumonTeachableLearnset,
        .eggMoveLearnset = sAurumonEggMoveLearnset,
    },

    [SPECIES_AXEMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
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
        .frontPic = gMonFrontPic_Axemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 7,
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
        .backPic = gMonBackPic_Axemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Axemon,
        .shinyPalette = gMonShinyPalette_Axemon,
        .iconSprite = gMonIcon_Axemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_M)
        FOOTPRINT(Axemon)
        OVERWORLD(
            sPicTable_Axemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Axemon,
            gShinyOverworldPalette_Axemon
        )
        .levelUpLearnset = sAxemonLevelUpLearnset,
        .teachableLearnset = sAxemonTeachableLearnset,
    },

    [SPECIES_BABOONGAMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 80,
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
        .speciesName = _("Baboongamon"),
        .cryId = CRY_BABOONGAMON,
        .natDexNum = NATIONAL_DEX_BABOONGAMON,
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
        .frontPic = gMonFrontPic_Baboongamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Baboongamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Baboongamon,
        .shinyPalette = gMonShinyPalette_Baboongamon,
        .iconSprite = gMonIcon_Baboongamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Baboongamon)
        OVERWORLD(
            sPicTable_Baboongamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Baboongamon,
            gShinyOverworldPalette_Baboongamon
        )
        .levelUpLearnset = sBaboongamonLevelUpLearnset,
        .teachableLearnset = sBaboongamonTeachableLearnset,
    },
#endif //P_FAMILY_AURUMON

#if P_FAMILY_BAKEMON
    [SPECIES_BAKEMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 85,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense  = 4,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bakemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bakemon,
        .shinyPalette = gMonShinyPalette_Bakemon,
        .iconSprite = gMonIcon_Bakemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Bakemon)
        OVERWORLD(
            sPicTable_Bakemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Bakemon,
            gShinyOverworldPalette_Bakemon
        )
        .levelUpLearnset = sBakemonLevelUpLearnset,
        .teachableLearnset = sBakemonTeachableLearnset,
        .eggMoveLearnset = sBakemonEggMoveLearnset,
    },

    [SPECIES_BALLISTAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
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
        .speciesName = _("Ballistamon"),
        .cryId = CRY_BALLISTAMON,
        .natDexNum = NATIONAL_DEX_BALLISTAMON,
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
        .frontPic = gMonFrontPic_Ballistamon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ballistamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ballistamon,
        .shinyPalette = gMonShinyPalette_Ballistamon,
        .iconSprite = gMonIcon_Ballistamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Ballistamon)
        OVERWORLD(
            sPicTable_Ballistamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ballistamon,
            gShinyOverworldPalette_Ballistamon
        )
        .levelUpLearnset = sBallistamonLevelUpLearnset,
        .teachableLearnset = sBallistamonTeachableLearnset,
    },

    [SPECIES_BALUCHIMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Baluchimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Baluchimon,
        .shinyPalette = gMonShinyPalette_Baluchimon,
        .iconSprite = gMonIcon_Baluchimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 9, SHADOW_SIZE_S)
        FOOTPRINT(Baluchimon)
        OVERWORLD(
            sPicTable_Baluchimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Baluchimon,
            gShinyOverworldPalette_Baluchimon
        )
        .levelUpLearnset = sBaluchimonLevelUpLearnset,
        .teachableLearnset = sBaluchimonTeachableLearnset,
    },
#endif //P_FAMILY_BAKEMON

#if P_FAMILY_BAOHUCKMON
    [SPECIES_BAOHUCKMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
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
        .frontPic = gMonFrontPic_Baohuckmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Baohuckmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Baohuckmon,
        .shinyPalette = gMonShinyPalette_Baohuckmon,
        .iconSprite = gMonIcon_Baohuckmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Baohuckmon)
        OVERWORLD(
            sPicTable_Baohuckmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Baohuckmon,
            gShinyOverworldPalette_Baohuckmon
        )
        .levelUpLearnset = sBaohuckmonLevelUpLearnset,
        .teachableLearnset = sBaohuckmonTeachableLearnset,
        .eggMoveLearnset = sBaohuckmonEggMoveLearnset,
    },

    [SPECIES_BAROMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 33),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Baromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Baromon,
        .shinyPalette = gMonShinyPalette_Baromon,
        .iconSprite = gMonIcon_Baromon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Baromon)
        OVERWORLD(
            sPicTable_Baromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Baromon,
            gShinyOverworldPalette_Baromon
        )
        .levelUpLearnset = sBaromonLevelUpLearnset,
        .teachableLearnset = sBaromonTeachableLearnset,
    },

    [SPECIES_TRAILMON_BATTLE_ARMAMENT] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 75,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Trailmon_battle_armament,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Trailmon_battle_armament,
        .shinyPalette = gMonShinyPalette_Trailmon_battle_armament,
        .iconSprite = gMonIcon_Trailmon_battle_armament,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(Trailmon_battle_armament)
        OVERWORLD(
            sPicTable_Trailmon_battle_armament,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trailmon_battle_armament,
            gShinyOverworldPalette_Trailmon_battle_armament
        )
        .levelUpLearnset = sTrailmon_battle_armamentLevelUpLearnset,
        .teachableLearnset = sTrailmon_battle_armamentTeachableLearnset,
    },
#endif //P_FAMILY_BAOHUCKMON

#if P_FAMILY_BETELGAMMAMON
    [SPECIES_BETELGAMMAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLARE_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("BetlGammamon"),
        .cryId = CRY_BETELGAMMAMON,
        .natDexNum = NATIONAL_DEX_BETELGAMMAMON,
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
        .frontPic = gMonFrontPic_Betelgammamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Betelgammamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Betelgammamon,
        .shinyPalette = gMonShinyPalette_Betelgammamon,
        .iconSprite = gMonIcon_Betelgammamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Betelgammamon)
        OVERWORLD(
            sPicTable_Betelgammamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Betelgammamon,
            gShinyOverworldPalette_Betelgammamon
        )
        .levelUpLearnset = sBetelgammamonLevelUpLearnset,
        .teachableLearnset = sBetelgammamonTeachableLearnset,
        .eggMoveLearnset = sBetelgammamonEggMoveLearnset,
    },

    [SPECIES_BIOQUETZALMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE }, // BIO HYBRID DNA
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("BioQuetzamon"),
        .cryId = CRY_BIOQUETZALMON,
        .natDexNum = NATIONAL_DEX_BIOQUETZALMON,
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
        .frontPic = gMonFrontPic_Bioquetzalmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_ROTATE_UP_TO_SIDES,
        .backPic = gMonBackPic_Bioquetzalmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bioquetzalmon,
        .shinyPalette = gMonShinyPalette_Bioquetzalmon,
        .iconSprite = gMonIcon_Bioquetzalmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Bioquetzalmon)
        OVERWORLD(
            sPicTable_Bioquetzalmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bioquetzalmon,
            gShinyOverworldPalette_Bioquetzalmon
        )
        .levelUpLearnset = sBioquetzalmonLevelUpLearnset,
        .teachableLearnset = sBioquetzalmonTeachableLearnset,
    },
#endif //P_FAMILY_BETELGAMMAMON

#if P_FAMILY_BIOTHUNDERBIRDMON
    [SPECIES_BIOTHUNDERBIRDMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE }, // BIO HYBRID DNA
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("BioThundrmon"),
        .cryId = CRY_BIOTHUNDERBIRDMON,
        .natDexNum = NATIONAL_DEX_BIOTHUNDERBIRDMON,
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
        .frontPic = gMonFrontPic_Biothunderbirdmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Biothunderbirdmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Biothunderbirdmon,
        .shinyPalette = gMonShinyPalette_Biothunderbirdmon,
        .iconSprite = gMonIcon_Biothunderbirdmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Biothunderbirdmon)
        OVERWORLD(
            sPicTable_Biothunderbirdmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Biothunderbirdmon,
            gShinyOverworldPalette_Biothunderbirdmon
        )
        .levelUpLearnset = sBiothunderbirdmonLevelUpLearnset,
        .teachableLearnset = sBiothunderbirdmonTeachableLearnset,
        .eggMoveLearnset = sBiothunderbirdmonEggMoveLearnset,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Probopass)
        OVERWORLD(
            sPicTable_Probopass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Probopass,
            gShinyOverworldPalette_Probopass
        )
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BIOTHUNDERBIRDMON

#if P_FAMILY_BIRDRAMON
    [SPECIES_BIRDRAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
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
        .frontPic = gMonFrontPic_Birdramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Birdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Birdramon,
        .shinyPalette = gMonShinyPalette_Birdramon,
        .iconSprite = gMonIcon_Birdramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Birdramon)
        OVERWORLD(
            sPicTable_Birdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Birdramon,
            gShinyOverworldPalette_Birdramon
        )
        .levelUpLearnset = sBirdramonLevelUpLearnset,
        .teachableLearnset = sBirdramonTeachableLearnset,
        .eggMoveLearnset = sBirdramonEggMoveLearnset,
    },

    [SPECIES_BLACKGAOGAMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
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
        .speciesName = _("BlkGaogamon"),
        .cryId = CRY_BLACKGAOGAMON,
        .natDexNum = NATIONAL_DEX_BLACKGAOGAMON,
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
        .frontPic = gMonFrontPic_Blackgaogamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Blackgaogamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Blackgaogamon,
        .shinyPalette = gMonShinyPalette_Blackgaogamon,
        .iconSprite = gMonIcon_Blackgaogamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Blackgaogamon)
        OVERWORLD(
            sPicTable_Blackgaogamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgaogamon,
            gShinyOverworldPalette_Blackgaogamon
        )
        .levelUpLearnset = sBlackgaogamonLevelUpLearnset,
        .teachableLearnset = sBlackgaogamonTeachableLearnset,
    },
#endif //P_FAMILY_BIRDRAMON

#if P_FAMILY_BLACKGARGOMON
    [SPECIES_BLACKGARGOMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("BlkGargomon"),
        .cryId = CRY_BLACKGARGOMON,
        .natDexNum = NATIONAL_DEX_BLACKGARGOMON,
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
        .frontPic = gMonFrontPic_Blackgargomon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_BLACK,
        .backPic = gMonBackPic_Blackgargomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Blackgargomon,
        .shinyPalette = gMonShinyPalette_Blackgargomon,
        .iconSprite = gMonIcon_Blackgargomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Blackgargomon)
        OVERWORLD(
            sPicTable_Blackgargomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgargomon,
            gShinyOverworldPalette_Blackgargomon
        )
        .levelUpLearnset = sBlackgargomonLevelUpLearnset,
        .teachableLearnset = sBlackgargomonTeachableLearnset,
        .eggMoveLearnset = sBlackgargomonEggMoveLearnset,
        .formSpeciesIdTable = sBlackgargomonFormSpeciesIdTable,
        .formChangeTable = sBlackgargomonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLACKGARGOMON_MEGA] =
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
        .speciesName = _("Blkgargomon"),
        .cryId = CRY_BLACKGARGOMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLACKGARGOMON,
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
        .frontPic = gMonFrontPic_BlackgargomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlackgargomonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_BlackgargomonMega,
        .shinyPalette = gMonShinyPalette_BlackgargomonMega,
        .iconSprite = gMonIcon_BlackgargomonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, 7, SHADOW_SIZE_S)
        FOOTPRINT(Blackgargomon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlackgargomonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlackgargomonMega,
            gShinyOverworldPalette_BlackgargomonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlackgargomonLevelUpLearnset,
        .teachableLearnset = sBlackgargomonTeachableLearnset,
        .eggMoveLearnset = sBlackgargomonEggMoveLearnset,
        .formSpeciesIdTable = sBlackgargomonFormSpeciesIdTable,
        .formChangeTable = sBlackgargomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLACKGARGOMON

#if P_FAMILY_BLACKGARURUMON
#if P_UPDATED_TYPES >= GEN_6
    #define BLACKGARURUMON_TYPES { TYPE_STEEL, TYPE_FAIRY }
#else
    #define BLACKGARURUMON_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

    [SPECIES_BLACKGARURUMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("BlkGarurumon"),
        .cryId = CRY_BLACKGARURUMON,
        .natDexNum = NATIONAL_DEX_BLACKGARURUMON,
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
        .frontPic = gMonFrontPic_Blackgarurumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blackgarurumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Blackgarurumon,
        .shinyPalette = gMonShinyPalette_Blackgarurumon,
        .iconSprite = gMonIcon_Blackgarurumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Blackgarurumon)
        OVERWORLD(
            sPicTable_Blackgarurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgarurumon,
            gShinyOverworldPalette_Blackgarurumon
        )
        .levelUpLearnset = sBlackgarurumonLevelUpLearnset,
        .teachableLearnset = sBlackgarurumonTeachableLearnset,
        .eggMoveLearnset = sBlackgarurumonEggMoveLearnset,
        .formSpeciesIdTable = sBlackgarurumonFormSpeciesIdTable,
        .formChangeTable = sBlackgarurumonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLACKGARURUMON_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = BLACKGARURUMON_TYPES,
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
        .speciesName = _("BlkGarurumon"),
        .cryId = CRY_BLACKGARURUMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLACKGARURUMON,
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
        .frontPic = gMonFrontPic_BlackgarurumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlackgarurumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_BlackgarurumonMega,
        .shinyPalette = gMonShinyPalette_BlackgarurumonMega,
        .iconSprite = gMonIcon_BlackgarurumonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blackgarurumon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlackgarurumonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlackgarurumonMega,
            gShinyOverworldPalette_BlackgarurumonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlackgarurumonLevelUpLearnset,
        .teachableLearnset = sBlackgarurumonTeachableLearnset,
        .eggMoveLearnset = sBlackgarurumonEggMoveLearnset,
        .formSpeciesIdTable = sBlackgarurumonFormSpeciesIdTable,
        .formChangeTable = sBlackgarurumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLACKGARURUMON

#if P_FAMILY_BLACKGATOMON
    [SPECIES_BLACKGATOMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("BlackGatomon"),
        .cryId = CRY_BLACKGATOMON,
        .natDexNum = NATIONAL_DEX_BLACKGATOMON,
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
        .frontPic = gMonFrontPic_Blackgatomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Blackgatomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Blackgatomon,
        .shinyPalette = gMonShinyPalette_Blackgatomon,
        .iconSprite = gMonIcon_Blackgatomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Blackgatomon)
        OVERWORLD(
            sPicTable_Blackgatomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgatomon,
            gShinyOverworldPalette_Blackgatomon
        )
        .levelUpLearnset = sBlackgatomonLevelUpLearnset,
        .teachableLearnset = sBlackgatomonTeachableLearnset,
        .eggMoveLearnset = sBlackgatomonEggMoveLearnset,
    },

    [SPECIES_BLACKGATOMON_UVER] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_QUICK_FEET, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("BlackGatomon"),
        .cryId = CRY_BLACKGATOMON_UVER,
        .natDexNum = NATIONAL_DEX_BLACKGATOMON_UVER,
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
        .frontPic = gMonFrontPic_Blackgatomon_uver,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blackgatomon_uver,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Blackgatomon_uver,
        .shinyPalette = gMonShinyPalette_Blackgatomon_uver,
        .iconSprite = gMonIcon_Blackgatomon_uver,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 9, SHADOW_SIZE_M)
        FOOTPRINT(Blackgatomon_uver)
        OVERWORLD(
            sPicTable_Blackgatomon_uver,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgatomon_uver,
            gShinyOverworldPalette_Blackgatomon_uver
        )
        .levelUpLearnset = sBlackgatomon_uverLevelUpLearnset,
        .teachableLearnset = sBlackgatomon_uverTeachableLearnset,
    },

    [SPECIES_BLACKGROWLMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("BlkGrowlmon"),
        .cryId = CRY_BLACKGROWLMON,
        .natDexNum = NATIONAL_DEX_BLACKGROWLMON,
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
        .frontPic = gMonFrontPic_Blackgrowlmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Blackgrowlmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Blackgrowlmon,
        .shinyPalette = gMonShinyPalette_Blackgrowlmon,
        .iconSprite = gMonIcon_Blackgrowlmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Blackgrowlmon)
        OVERWORLD(
            sPicTable_Blackgrowlmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blackgrowlmon,
            gShinyOverworldPalette_Blackgrowlmon
        )
        .levelUpLearnset = sBlackgrowlmonLevelUpLearnset,
        .teachableLearnset = sBlackgrowlmonTeachableLearnset,
        .formSpeciesIdTable = sBlackgrowlmonFormSpeciesIdTable,
        .formChangeTable = sBlackgrowlmonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLACKGROWLMON_MEGA] =
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
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Blkgrowlmon"),
        .cryId = CRY_BLACKGROWLMON_MEGA,
        .natDexNum = NATIONAL_DEX_BLACKGROWLMON,
        .categoryName = _("Iron Armor"),
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Blackgrowlmon Mega Evolves into\n"
            "Mega Blackgrowlmon, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_BlackgrowlmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlackgrowlmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_BlackgrowlmonMega,
        .shinyPalette = gMonShinyPalette_BlackgrowlmonMega,
        .iconSprite = gMonIcon_BlackgrowlmonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blackgrowlmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlackgrowlmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlackgrowlmonMega,
            gShinyOverworldPalette_BlackgrowlmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlackgrowlmonLevelUpLearnset,
        .teachableLearnset = sBlackgrowlmonTeachableLearnset,
        .formSpeciesIdTable = sBlackgrowlmonFormSpeciesIdTable,
        .formChangeTable = sBlackgrowlmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLACKGATOMON

#if P_FAMILY_BLADEKUWAGAMON
    [SPECIES_BLADEKUWAGAMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 115,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
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
        .speciesName = _("BladeKuwamon"),
        .cryId = CRY_BLADEKUWAGAMON,
        .natDexNum = NATIONAL_DEX_BLADEKUWAGAMON,
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
        .frontPic = gMonFrontPic_Bladekuwagamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Bladekuwagamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Bladekuwagamon,
        .shinyPalette = gMonShinyPalette_Bladekuwagamon,
        .iconSprite = gMonIcon_Bladekuwagamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BladekuwagamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_BladekuwagamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Bladekuwagamon)
        OVERWORLD(
            sPicTable_Bladekuwagamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bladekuwagamon,
            gShinyOverworldPalette_Bladekuwagamon
        )
        OVERWORLD_FEMALE(
            sPicTable_BladekuwagamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBladekuwagamonLevelUpLearnset,
        .teachableLearnset = sBladekuwagamonTeachableLearnset,
        .eggMoveLearnset = sBladekuwagamonEggMoveLearnset,
    },

    [SPECIES_BLIMPMON] =
    {
        .baseHP        = 135,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 30,
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
        .frontPic = gMonFrontPic_Blimpmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Blimpmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Blimpmon,
        .shinyPalette = gMonShinyPalette_Blimpmon,
        .iconSprite = gMonIcon_Blimpmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BlimpmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 64),
        .backPicFemale = gMonBackPic_BlimpmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Blimpmon)
        OVERWORLD(
            sPicTable_Blimpmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blimpmon,
            gShinyOverworldPalette_Blimpmon
        )
        OVERWORLD_FEMALE(
            sPicTable_BlimpmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBlimpmonLevelUpLearnset,
        .teachableLearnset = sBlimpmonTeachableLearnset,
        .formSpeciesIdTable = sBlimpmonFormSpeciesIdTable,
        .formChangeTable = sBlimpmonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlimpmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_BlimpmonMega,
        .shinyPalette = gMonShinyPalette_BlimpmonMega,
        .iconSprite = gMonIcon_BlimpmonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Blimpmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlimpmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlimpmonMega,
            gShinyOverworldPalette_BlimpmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlimpmonLevelUpLearnset,
        .teachableLearnset = sBlimpmonTeachableLearnset,
        .formSpeciesIdTable = sBlimpmonFormSpeciesIdTable,
        .formChangeTable = sBlimpmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLADEKUWAGAMON

#if P_FAMILY_BOARMON
    [SPECIES_BOARMON] =
    {
        .baseHP        = 110,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
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
        .frontPic = gMonFrontPic_Boarmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Boarmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Boarmon,
        .shinyPalette = gMonShinyPalette_Boarmon,
        .iconSprite = gMonIcon_Boarmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, -1, SHADOW_SIZE_M)
        FOOTPRINT(Boarmon)
        OVERWORLD(
            sPicTable_Boarmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Boarmon,
            gShinyOverworldPalette_Boarmon
        )
        .levelUpLearnset = sBoarmonLevelUpLearnset,
        .teachableLearnset = sBoarmonTeachableLearnset,
        .eggMoveLearnset = sBoarmonEggMoveLearnset,
    },

    [SPECIES_BOMBERNANIMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
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
        .speciesName = _("BombrNanimon"),
        .cryId = CRY_BOMBERNANIMON,
        .natDexNum = NATIONAL_DEX_BOMBERNANIMON,
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
        .frontPic = gMonFrontPic_Bombernanimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bombernanimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bombernanimon,
        .shinyPalette = gMonShinyPalette_Bombernanimon,
        .iconSprite = gMonIcon_Bombernanimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Bombernanimon)
        OVERWORLD(
            sPicTable_Bombernanimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bombernanimon,
            gShinyOverworldPalette_Bombernanimon
        )
        .levelUpLearnset = sBombernanimonLevelUpLearnset,
        .teachableLearnset = sBombernanimonTeachableLearnset,
        .formSpeciesIdTable = sBombernanimonFormSpeciesIdTable,
        .formChangeTable = sBombernanimonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BOMBERNANIMON_MEGA] =
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
        .speciesName = _("Bombrnanimon"),
        .cryId = CRY_BOMBERNANIMON_MEGA,
        .natDexNum = NATIONAL_DEX_BOMBERNANIMON,
        .categoryName = _("Discharge"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Bombernanimon. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BombernanimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BombernanimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_BombernanimonMega,
        .shinyPalette = gMonShinyPalette_BombernanimonMega,
        .iconSprite = gMonIcon_BombernanimonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Bombernanimon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BombernanimonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BombernanimonMega,
            gShinyOverworldPalette_BombernanimonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBombernanimonLevelUpLearnset,
        .teachableLearnset = sBombernanimonTeachableLearnset,
        .formSpeciesIdTable = sBombernanimonFormSpeciesIdTable,
        .formChangeTable = sBombernanimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BOARMON

#if P_FAMILY_BOOGIEMON
    [SPECIES_BOOGIEMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Boogiemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Boogiemon,
        .shinyPalette = gMonShinyPalette_Boogiemon,
        .iconSprite = gMonIcon_Boogiemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Boogiemon)
        OVERWORLD(
            sPicTable_Boogiemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Boogiemon,
            gShinyOverworldPalette_Boogiemon
        )
        .levelUpLearnset = sBoogiemonLevelUpLearnset,
        .teachableLearnset = sBoogiemonTeachableLearnset,
        .eggMoveLearnset = sBoogiemonEggMoveLearnset,
    },
#endif //P_FAMILY_BOOGIEMON

#if P_FAMILY_BUCCHIEMON_RED
    [SPECIES_BUCCHIEMON_RED] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Bucchiemon_red,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_STRETCH_TWICE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Bucchiemon_red,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Bucchiemon_red,
        .shinyPalette = gMonShinyPalette_Bucchiemon_red,
        .iconSprite = gMonIcon_Bucchiemon_red,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Bucchiemon_red)
        OVERWORLD(
            sPicTable_Bucchiemon_red,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bucchiemon_red,
            gShinyOverworldPalette_Bucchiemon_red
        )
        .levelUpLearnset = sBucchiemon_redLevelUpLearnset,
        .teachableLearnset = sBucchiemon_redTeachableLearnset,
        .eggMoveLearnset = sBucchiemon_redEggMoveLearnset,
    },
#endif //P_FAMILY_BUCCHIEMON_RED

#if P_FAMILY_BUCCHIEMON_GREEN_BULKMON
    [SPECIES_BUCCHIEMON_GREEN] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Bucchiemon_green,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bucchiemon_green,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bucchiemon_green,
        .shinyPalette = gMonShinyPalette_Bucchiemon_green,
        .iconSprite = gMonIcon_Bucchiemon_green,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Bucchiemon_green)
        OVERWORLD(
            sPicTable_Bucchiemon_green,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bucchiemon_green,
            gShinyOverworldPalette_Bucchiemon_green
        )
        .levelUpLearnset = sBucchiemon_greenLevelUpLearnset,
        .teachableLearnset = sBucchiemon_greenTeachableLearnset,
        .eggMoveLearnset = sBucchiemon_greenEggMoveLearnset,
    },

    [SPECIES_BULKMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Bulkmon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bulkmon,
        .shinyPalette = gMonShinyPalette_Bulkmon,
        .iconSprite = gMonIcon_Bulkmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Bulkmon)
        OVERWORLD(
            sPicTable_Bulkmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bulkmon,
            gShinyOverworldPalette_Bulkmon
        )
        .levelUpLearnset = sBulkmonLevelUpLearnset,
        .teachableLearnset = sBulkmonTeachableLearnset,
        .eggMoveLearnset = sBulkmonEggMoveLearnset,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Budew,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Budew,
        .shinyPalette = gMonShinyPalette_Budew,
        .iconSprite = gMonIcon_Budew,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Budew)
        OVERWORLD(
            sPicTable_Budew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Budew,
            gShinyOverworldPalette_Budew
        )
        .levelUpLearnset = sBudewLevelUpLearnset,
        .teachableLearnset = sBudewTeachableLearnset,
        .eggMoveLearnset = sBudewEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BULLMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
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
        .frontPic = gMonFrontPic_Bullmon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Bullmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Bullmon,
        .shinyPalette = gMonShinyPalette_Bullmon,
        .iconSprite = gMonIcon_Bullmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 4,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BullmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_BullmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Bullmon)
        OVERWORLD(
            sPicTable_Bullmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bullmon,
            gShinyOverworldPalette_Bullmon
        )
        OVERWORLD_FEMALE(
            sPicTable_BullmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBullmonLevelUpLearnset,
        .teachableLearnset = sBullmonTeachableLearnset,
        .eggMoveLearnset = sBullmonEggMoveLearnset,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Roserade)
        OVERWORLD(
            sPicTable_Roserade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Roserade,
            gShinyOverworldPalette_Roserade
        )
        OVERWORLD_FEMALE(
            sPicTable_RoseradeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BULLMON

#if P_FAMILY_BURAIMON
    [SPECIES_BURAIMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FLYING, TYPE_FIGHTING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Speed     = 2,
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
        .frontPic = gMonFrontPic_Buraimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Buraimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Buraimon,
        .shinyPalette = gMonShinyPalette_Buraimon,
        .iconSprite = gMonIcon_Buraimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BuraimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_BuraimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Buraimon)
        OVERWORLD(
            sPicTable_Buraimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Buraimon,
            gShinyOverworldPalette_Buraimon
        )
        OVERWORLD_FEMALE(
            sPicTable_BuraimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBuraimonLevelUpLearnset,
        .teachableLearnset = sBuraimonTeachableLearnset,
        .eggMoveLearnset = sBuraimonEggMoveLearnset,
    },

    [SPECIES_BURGERMON_CHAMPION] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
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
        .frontPic = gMonFrontPic_Burgermon_champion,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Burgermon_champion,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Burgermon_champion,
        .shinyPalette = gMonShinyPalette_Burgermon_champion,
        .iconSprite = gMonIcon_Burgermon_champion,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Burgermon_championF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_Burgermon_championF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Burgermon_champion)
        OVERWORLD(
            sPicTable_Burgermon_champion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Burgermon_champion,
            gShinyOverworldPalette_Burgermon_champion
        )
        OVERWORLD_FEMALE(
            sPicTable_Burgermon_championF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sBurgermon_championLevelUpLearnset,
        .teachableLearnset = sBurgermon_championTeachableLearnset,
    },
#endif //P_FAMILY_BURAIMON

#if P_FAMILY_BUTTERFLYMON
    [SPECIES_BUTTERFLYMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_TINTED_LENS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Butterflymon"),
        .cryId = CRY_BUTTERFLYMON,
        .natDexNum = NATIONAL_DEX_BUTTERFLYMON,
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
        .frontPic = gMonFrontPic_Butterflymon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Butterflymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Butterflymon,
        .shinyPalette = gMonShinyPalette_Butterflymon,
        .iconSprite = gMonIcon_Butterflymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Butterflymon)
        OVERWORLD(
            sPicTable_Butterflymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Butterflymon,
            gShinyOverworldPalette_Butterflymon
        )
        .levelUpLearnset = sButterflymonLevelUpLearnset,
        .teachableLearnset = sButterflymonTeachableLearnset,
        .eggMoveLearnset = sButterflymonEggMoveLearnset,
    },

    [SPECIES_CENTARUMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 75,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 3,
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
        .frontPic = gMonFrontPic_Centarumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Centarumon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Centarumon,
        .shinyPalette = gMonShinyPalette_Centarumon,
        .iconSprite = gMonIcon_Centarumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Centarumon)
        OVERWORLD(
            sPicTable_Centarumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Centarumon,
            gShinyOverworldPalette_Centarumon
        )
        .levelUpLearnset = sCentarumonLevelUpLearnset,
        .teachableLearnset = sCentarumonTeachableLearnset,
        .formSpeciesIdTable = sCentarumonFormSpeciesIdTable,
        .formChangeTable = sCentarumonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Centarumon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_CentarumonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CentarumonMega,
            gShinyOverworldPalette_CentarumonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCentarumonLevelUpLearnset,
        .teachableLearnset = sCentarumonTeachableLearnset,
        .formSpeciesIdTable = sCentarumonFormSpeciesIdTable,
        .formChangeTable = sCentarumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUTTERFLYMON

#if P_FAMILY_CHAMBLEMON
    [SPECIES_CHAMBLEMON] =
    {
        .baseHP        = 120,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
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
        .frontPic = gMonFrontPic_Chamblemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Chamblemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Chamblemon,
        .shinyPalette = gMonShinyPalette_Chamblemon,
        .iconSprite = gMonIcon_Chamblemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Chamblemon)
        OVERWORLD(
            sPicTable_Chamblemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Chamblemon,
            gShinyOverworldPalette_Chamblemon
        )
        .levelUpLearnset = sChamblemonLevelUpLearnset,
        .teachableLearnset = sChamblemonTeachableLearnset,
        .eggMoveLearnset = sChamblemonEggMoveLearnset,
    },

    [SPECIES_CHAMELEMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 110,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 48),
            ANIMCMD_FRAME(0, 33),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Chamelemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 22 : 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Chamelemon,
        .shinyPalette = gMonShinyPalette_Chamelemon,
        .iconSprite = gMonIcon_Chamelemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Chamelemon)
        OVERWORLD(
            sPicTable_Chamelemon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Chamelemon,
            gShinyOverworldPalette_Chamelemon
        )
        .levelUpLearnset = sChamelemonLevelUpLearnset,
        .teachableLearnset = sChamelemonTeachableLearnset,
    },
#endif //P_FAMILY_CHAMBLEMON

#if P_FAMILY_CHRYSALIMON
    [SPECIES_CHRYSALIMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 85,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
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
        .speciesName = _("Chrysalimon"),
        .cryId = CRY_CHRYSALIMON,
        .natDexNum = NATIONAL_DEX_CHRYSALIMON,
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
        .frontPic = gMonFrontPic_Chrysalimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Chrysalimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chrysalimon,
        .shinyPalette = gMonShinyPalette_Chrysalimon,
        .iconSprite = gMonIcon_Chrysalimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ChrysalimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_ChrysalimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Chrysalimon)
        OVERWORLD(
            sPicTable_Chrysalimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chrysalimon,
            gShinyOverworldPalette_Chrysalimon
        )
        OVERWORLD_FEMALE(
            sPicTable_ChrysalimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sChrysalimonLevelUpLearnset,
        .teachableLearnset = sChrysalimonTeachableLearnset,
        .eggMoveLearnset = sChrysalimonEggMoveLearnset,
    },

    [SPECIES_CITRAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
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
        .frontPic = gMonFrontPic_Citramon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Citramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Citramon,
        .shinyPalette = gMonShinyPalette_Citramon,
        .iconSprite = gMonIcon_Citramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CitramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_CitramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_L)
        FOOTPRINT(Citramon)
        OVERWORLD(
            sPicTable_Citramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Citramon,
            gShinyOverworldPalette_Citramon
        )
        OVERWORLD_FEMALE(
            sPicTable_CitramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sCitramonLevelUpLearnset,
        .teachableLearnset = sCitramonTeachableLearnset,
        .formSpeciesIdTable = sCitramonFormSpeciesIdTable,
        .formChangeTable = sCitramonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CitramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CitramonMega,
        .shinyPalette = gMonShinyPalette_CitramonMega,
        .iconSprite = gMonIcon_CitramonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Citramon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_CitramonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CitramonMega,
            gShinyOverworldPalette_CitramonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCitramonLevelUpLearnset,
        .teachableLearnset = sCitramonTeachableLearnset,
        .formSpeciesIdTable = sCitramonFormSpeciesIdTable,
        .formChangeTable = sCitramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHRYSALIMON

#if P_FAMILY_CLOCKMON
    [SPECIES_CLOCKMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 2,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Clockmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Clockmon,
        .shinyPalette = gMonShinyPalette_Clockmon,
        .iconSprite = gMonIcon_Clockmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(Clockmon)
        OVERWORLD(
            sPicTable_Clockmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clockmon,
            gShinyOverworldPalette_Clockmon
        )
        .levelUpLearnset = sClockmonLevelUpLearnset,
        .teachableLearnset = sClockmonTeachableLearnset,
        .eggMoveLearnset = sClockmonEggMoveLearnset,
    },
#endif //P_FAMILY_CLOCKMON

#if P_FAMILY_CLOCKMON_FUSION
    [SPECIES_CLOCKMON_FUSION] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 4,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Clockmon_fusion,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Clockmon_fusion,
        .shinyPalette = gMonShinyPalette_Clockmon_fusion,
        .iconSprite = gMonIcon_Clockmon_fusion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Clockmon_fusion)
        OVERWORLD(
            sPicTable_Clockmon_fusion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Clockmon_fusion,
            gShinyOverworldPalette_Clockmon_fusion
        )
        .levelUpLearnset = sClockmon_fusionLevelUpLearnset,
        .teachableLearnset = sClockmon_fusionTeachableLearnset,
        .eggMoveLearnset = sClockmon_fusionEggMoveLearnset,
    },

    [SPECIES_COELAMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 4,
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
        .frontPic = gMonFrontPic_Coelamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Coelamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Coelamon,
        .shinyPalette = gMonShinyPalette_Coelamon,
        .iconSprite = gMonIcon_Coelamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Coelamon)
        OVERWORLD(
            sPicTable_Coelamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Coelamon,
            gShinyOverworldPalette_Coelamon
        )
        .levelUpLearnset = sCoelamonLevelUpLearnset,
        .teachableLearnset = sCoelamonTeachableLearnset,
    },
#endif //P_FAMILY_CLOCKMON_FUSION

#if P_FAMILY_COREDRAMON_BLUE
    [SPECIES_COREDRAMON_BLUE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 23),
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 23),
            ANIMCMD_FRAME(0, 13),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Coredramon_blue,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Coredramon_blue,
        .shinyPalette = gMonShinyPalette_Coredramon_blue,
        .iconSprite = gMonIcon_Coredramon_blue,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Coredramon_blue)
        OVERWORLD(
            sPicTable_Coredramon_blue,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Coredramon_blue,
            gShinyOverworldPalette_Coredramon_blue
        )
        .levelUpLearnset = sCoredramon_blueLevelUpLearnset,
        .teachableLearnset = sCoredramon_blueTeachableLearnset,
        .eggMoveLearnset = sCoredramon_blueEggMoveLearnset,
    },
#endif //P_FAMILY_COREDRAMON_BLUE

#if P_FAMILY_COREDRAMON_GREEN
    [SPECIES_COREDRAMON_GREEN] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GRASS),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Coredramon_green,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Coredramon_green,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Coredramon_green,
        .shinyPalette = gMonShinyPalette_Coredramon_green,
        .iconSprite = gMonIcon_Coredramon_green,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -1, SHADOW_SIZE_S)
        FOOTPRINT(Coredramon_green)
        OVERWORLD(
            sPicTable_Coredramon_green,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Coredramon_green,
            gShinyOverworldPalette_Coredramon_green
        )
        .levelUpLearnset = sCoredramon_greenLevelUpLearnset,
        .teachableLearnset = sCoredramon_greenTeachableLearnset,
        .eggMoveLearnset = sCoredramon_greenEggMoveLearnset,
    },

    [SPECIES_CYCLONEMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Cyclonemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Cyclonemon,
        .shinyPalette = gMonShinyPalette_Cyclonemon,
        .iconSprite = gMonIcon_Cyclonemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_L)
        FOOTPRINT(Cyclonemon)
        OVERWORLD(
            sPicTable_Cyclonemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cyclonemon,
            gShinyOverworldPalette_Cyclonemon
        )
        .levelUpLearnset = sCyclonemonLevelUpLearnset,
        .teachableLearnset = sCyclonemonTeachableLearnset,
    },

    [SPECIES_DAMEMON_FUSION] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL, TYPE_POISON),
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Damemon_fusion)
        OVERWORLD(
            sPicTable_Damemon_fusion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Damemon_fusion,
            gShinyOverworldPalette_Damemon_fusion
        )
        .levelUpLearnset = sDamemon_fusionLevelUpLearnset,
        .teachableLearnset = sDamemon_fusionTeachableLearnset,
    },
#endif //P_FAMILY_COREDRAMON_GREEN

#if P_FAMILY_DARCMON
    [SPECIES_DARCMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
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
        .frontPic = gMonFrontPic_Darcmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Darcmon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Darcmon,
        .shinyPalette = gMonShinyPalette_Darcmon,
        .iconSprite = gMonIcon_Darcmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Darcmon)
        OVERWORLD(
            sPicTable_Darcmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Darcmon,
            gShinyOverworldPalette_Darcmon
        )
        .levelUpLearnset = sDarcmonLevelUpLearnset,
        .teachableLearnset = sDarcmonTeachableLearnset,
        .eggMoveLearnset = sDarcmonEggMoveLearnset,
    },

    [SPECIES_TRAILMON_DARK] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
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
        .frontPic = gMonFrontPic_Trailmon_dark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Trailmon_dark,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Trailmon_dark,
        .shinyPalette = gMonShinyPalette_Trailmon_dark,
        .iconSprite = gMonIcon_Trailmon_dark,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Trailmon_darkF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_M)
        FOOTPRINT(Trailmon_dark)
        OVERWORLD(
            sPicTable_Trailmon_dark,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trailmon_dark,
            gShinyOverworldPalette_Trailmon_dark
        )
        OVERWORLD_FEMALE(
            sPicTable_Trailmon_darkF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sTrailmon_darkLevelUpLearnset,
        .teachableLearnset = sTrailmon_darkTeachableLearnset,
    },
#endif //P_FAMILY_DARCMON

#if P_FAMILY_DARKLIZARDMON
    [SPECIES_DARKLIZARDMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
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
        .speciesName = _("DarkLzardmon"),
        .cryId = CRY_DARKLIZARDMON,
        .natDexNum = NATIONAL_DEX_DARKLIZARDMON,
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
        .frontPic = gMonFrontPic_Darklizardmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Darklizardmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Darklizardmon,
        .shinyPalette = gMonShinyPalette_Darklizardmon,
        .iconSprite = gMonIcon_Darklizardmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Darklizardmon)
        OVERWORLD(
            sPicTable_Darklizardmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Darklizardmon,
            gShinyOverworldPalette_Darklizardmon
        )
        .levelUpLearnset = sDarklizardmonLevelUpLearnset,
        .teachableLearnset = sDarklizardmonTeachableLearnset,
        .eggMoveLearnset = sDarklizardmonEggMoveLearnset,
    },

    [SPECIES_DARKMAILDRAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 75,
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
        .speciesName = _("DarkMailmon"),
        .cryId = CRY_DARKMAILDRAMON,
        .natDexNum = NATIONAL_DEX_DARKMAILDRAMON,
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
        .frontPic = gMonFrontPic_Darkmaildramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Darkmaildramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Darkmaildramon,
        .shinyPalette = gMonShinyPalette_Darkmaildramon,
        .iconSprite = gMonIcon_Darkmaildramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Darkmaildramon)
        OVERWORLD(
            sPicTable_Darkmaildramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Darkmaildramon,
            gShinyOverworldPalette_Darkmaildramon
        )
        .levelUpLearnset = sDarkmaildramonLevelUpLearnset,
        .teachableLearnset = sDarkmaildramonTeachableLearnset,
        .formSpeciesIdTable = sDarkmaildramonFormSpeciesIdTable,
        .formChangeTable = sDarkmaildramonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DARKMAILDRAMON_MEGA] =
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
        .speciesName = _("DarkMailmon"),
        .cryId = CRY_DARKMAILDRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_DARKMAILDRAMON,
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
        .frontPic = gMonFrontPic_DarkmaildramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_DarkmaildramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_DarkmaildramonMega,
        .shinyPalette = gMonShinyPalette_DarkmaildramonMega,
        .iconSprite = gMonIcon_DarkmaildramonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Darkmaildramon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DarkmaildramonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DarkmaildramonMega,
            gShinyOverworldPalette_DarkmaildramonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDarkmaildramonLevelUpLearnset,
        .teachableLearnset = sDarkmaildramonTeachableLearnset,
        .formSpeciesIdTable = sDarkmaildramonFormSpeciesIdTable,
        .formChangeTable = sDarkmaildramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DARKLIZARDMON

#if P_FAMILY_DARKTYRANNOMON
    [SPECIES_DARKTYRANNOMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
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
        .abilities = { ABILITY_INTIMIDATE, ABILITY_PRESSURE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("DarkTyrnomon"),
        .cryId = CRY_DARKTYRANNOMON,
        .natDexNum = NATIONAL_DEX_DARKTYRANNOMON,
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
        .frontPic = gMonFrontPic_Darktyrannomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Darktyrannomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Darktyrannomon,
        .shinyPalette = gMonShinyPalette_Darktyrannomon,
        .iconSprite = gMonIcon_Darktyrannomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Darktyrannomon)
        OVERWORLD(
            sPicTable_Darktyrannomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Darktyrannomon,
            gShinyOverworldPalette_Darktyrannomon
        )
        .levelUpLearnset = sDarktyrannomonLevelUpLearnset,
        .teachableLearnset = sDarktyrannomonTeachableLearnset,
        .eggMoveLearnset = sDarktyrannomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DARKTYRANNOMON_X}),
    },
#endif //P_FAMILY_DARKTYRANNOMON

#if P_FAMILY_DARKTYRANNOMON_X
    [SPECIES_DARKTYRANNOMON_X] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("DarkTyrnomon"),
        .cryId = CRY_DARKTYRANNOMON_X,
        .natDexNum = NATIONAL_DEX_DARKTYRANNOMON_X,
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
        .frontPic = gMonFrontPic_Darktyrannomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
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
        .backPic = gMonBackPic_Darktyrannomon_x,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Darktyrannomon_x,
        .shinyPalette = gMonShinyPalette_Darktyrannomon_x,
        .iconSprite = gMonIcon_Darktyrannomon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 7, SHADOW_SIZE_L)
        FOOTPRINT(Darktyrannomon_x)
        OVERWORLD(
            sPicTable_Darktyrannomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BIKE_TIRE,
            sAnimTable_Following,
            gOverworldPalette_Darktyrannomon_x,
            gShinyOverworldPalette_Darktyrannomon_x
        )
        .levelUpLearnset = sDarktyrannomon_xLevelUpLearnset,
        .teachableLearnset = sDarktyrannomon_xTeachableLearnset,
        .eggMoveLearnset = sDarktyrannomon_xEggMoveLearnset,
    },
#endif //P_FAMILY_DARKTYRANNOMON_X

#if P_FAMILY_DECKERDRAMON
    [SPECIES_DECKERDRAMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_HEAVY_METAL, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Deckerdramon"),
        .cryId = CRY_DECKERDRAMON,
        .natDexNum = NATIONAL_DEX_DECKERDRAMON,
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
        .frontPic = gMonFrontPic_Deckerdramon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Deckerdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Deckerdramon,
        .shinyPalette = gMonShinyPalette_Deckerdramon,
        .iconSprite = gMonIcon_Deckerdramon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Deckerdramon)
        OVERWORLD(
            sPicTable_Deckerdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Deckerdramon,
            gShinyOverworldPalette_Deckerdramon
        )
        .levelUpLearnset = sDeckerdramonLevelUpLearnset,
        .teachableLearnset = sDeckerdramonTeachableLearnset,
    },
#endif //P_FAMILY_DECKERDRAMON

#if P_FAMILY_DELTAMON
    [SPECIES_DELTAMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Deltamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Deltamon,
        .shinyPalette = gMonShinyPalette_Deltamon,
        .iconSprite = gMonIcon_Deltamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(Deltamon)
        OVERWORLD(
            sPicTable_Deltamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Deltamon,
            gShinyOverworldPalette_Deltamon
        )
        .levelUpLearnset = sDeltamonLevelUpLearnset,
        .teachableLearnset = sDeltamonTeachableLearnset,
    },
#endif //P_FAMILY_DELTAMON

#if P_FAMILY_DEPTHMON
    [SPECIES_DEPTHMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 70,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
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
        .frontPic = gMonFrontPic_Depthmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 7,
        .backPic = gMonBackPic_Depthmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Depthmon,
        .shinyPalette = gMonShinyPalette_Depthmon,
        .iconSprite = gMonIcon_Depthmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Depthmon)
        OVERWORLD(
            sPicTable_Depthmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Depthmon,
            gShinyOverworldPalette_Depthmon
        )
        .levelUpLearnset = sDepthmonLevelUpLearnset,
        .teachableLearnset = sDepthmonTeachableLearnset,
        .eggMoveLearnset = sDepthmonEggMoveLearnset,
    },

    [SPECIES_DEPUTYMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
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
        .frontPic = gMonFrontPic_Deputymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Deputymon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Deputymon,
        .shinyPalette = gMonShinyPalette_Deputymon,
        .iconSprite = gMonIcon_Deputymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Deputymon)
        OVERWORLD(
            sPicTable_Deputymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Deputymon,
            gShinyOverworldPalette_Deputymon
        )
        .levelUpLearnset = sDeputymonLevelUpLearnset,
        .teachableLearnset = sDeputymonTeachableLearnset,
    },
#endif //P_FAMILY_DEPTHMON

#if P_FAMILY_DEVIDRAMON
    [SPECIES_DEVIDRAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = 50,
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
        .frontPic = gMonFrontPic_Devidramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Devidramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Devidramon,
        .shinyPalette = gMonShinyPalette_Devidramon,
        .iconSprite = gMonIcon_Devidramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Devidramon)
        OVERWORLD(
            sPicTable_Devidramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Devidramon,
            gShinyOverworldPalette_Devidramon
        )
        .levelUpLearnset = sDevidramonLevelUpLearnset,
        .teachableLearnset = sDevidramonTeachableLearnset,
        .eggMoveLearnset = sDevidramonEggMoveLearnset,
    },

    [SPECIES_DEVIMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
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
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Devimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Devimon,
        .shinyPalette = gMonShinyPalette_Devimon,
        .iconSprite = gMonIcon_Devimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_M)
        FOOTPRINT(Devimon)
        OVERWORLD(
            sPicTable_Devimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Devimon,
            gShinyOverworldPalette_Devimon
        )
        .levelUpLearnset = sDevimonLevelUpLearnset,
        .teachableLearnset = sDevimonTeachableLearnset,
    },
#endif //P_FAMILY_DEVIDRAMON

#if P_FAMILY_DEXDORUGAMON
    [SPECIES_DEXDORUGAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("DexDorugamon"),
        .cryId = CRY_DEXDORUGAMON,
        .natDexNum = NATIONAL_DEX_DEXDORUGAMON,
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
        .frontPic = gMonFrontPic_Dexdorugamon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .backPic = gMonBackPic_Dexdorugamon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dexdorugamon,
        .shinyPalette = gMonShinyPalette_Dexdorugamon,
        .iconSprite = gMonIcon_Dexdorugamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Dexdorugamon)
        OVERWORLD(
            sPicTable_Dexdorugamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Dexdorugamon,
            gShinyOverworldPalette_Dexdorugamon
        )
        .levelUpLearnset = sDexdorugamonLevelUpLearnset,
        .teachableLearnset = sDexdorugamonTeachableLearnset,
    },

    [SPECIES_DIATRYMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_M)
        FOOTPRINT(Diatrymon)
        OVERWORLD(
            sPicTable_Diatrymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Diatrymon,
            gShinyOverworldPalette_Diatrymon
        )
        .levelUpLearnset = sDiatrymonLevelUpLearnset,
        .teachableLearnset = sDiatrymonTeachableLearnset,
    },
#endif //P_FAMILY_DEXDORUGAMON

#if P_FAMILY_DIGMON
    [SPECIES_DIGMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 3,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_EARTH_EATER },
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Digmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Digmon,
        .shinyPalette = gMonShinyPalette_Digmon,
        .iconSprite = gMonIcon_Digmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Digmon)
        OVERWORLD(
            sPicTable_Digmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Digmon,
            gShinyOverworldPalette_Digmon
        )
        .levelUpLearnset = sDigmonLevelUpLearnset,
        .teachableLearnset = sDigmonTeachableLearnset,
        .eggMoveLearnset = sDigmonEggMoveLearnset,
    },

    [SPECIES_DINOHYUMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Dinohyumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Dinohyumon,
        .shinyPalette = gMonShinyPalette_Dinohyumon,
        .iconSprite = gMonIcon_Dinohyumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Dinohyumon)
        OVERWORLD(
            sPicTable_Dinohyumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Dinohyumon,
            gShinyOverworldPalette_Dinohyumon
        )
        .levelUpLearnset = sDinohyumonLevelUpLearnset,
        .teachableLearnset = sDinohyumonTeachableLearnset,
    },
#endif //P_FAMILY_DIGMON

#if P_FAMILY_DOBERMON
    [SPECIES_DOBERMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
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
        .frontPic = gMonFrontPic_Dobermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Dobermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(56, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 23 : 19,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dobermon,
        .shinyPalette = gMonShinyPalette_Dobermon,
        .iconSprite = gMonIcon_Dobermon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Dobermon)
        OVERWORLD(
            sPicTable_Dobermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Dobermon,
            gShinyOverworldPalette_Dobermon
        )
        .levelUpLearnset = sDobermonLevelUpLearnset,
        .teachableLearnset = sDobermonTeachableLearnset,
        .eggMoveLearnset = sDobermonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DOBERMON_X}),
    },

    [SPECIES_DOBERMON_X] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Dobermon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Dobermon_x,
        .shinyPalette = gMonShinyPalette_Dobermon_x,
        .iconSprite = gMonIcon_Dobermon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Dobermon_x)
        OVERWORLD(
            sPicTable_Dobermon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dobermon_x,
            gShinyOverworldPalette_Dobermon_x
        )
        .levelUpLearnset = sDobermon_xLevelUpLearnset,
        .teachableLearnset = sDobermon_xTeachableLearnset,
    },
#endif //P_FAMILY_DOBERMON

#if P_FAMILY_DOGGYMON
    [SPECIES_DOGGYMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FAIRY),
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
        .frontPic = gMonFrontPic_Doggymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Doggymon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Doggymon,
        .shinyPalette = gMonShinyPalette_Doggymon,
        .iconSprite = gMonIcon_Doggymon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Doggymon)
        OVERWORLD(
            sPicTable_Doggymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Doggymon,
            gShinyOverworldPalette_Doggymon
        )
        .levelUpLearnset = sDoggymonLevelUpLearnset,
        .teachableLearnset = sDoggymonTeachableLearnset,
        .eggMoveLearnset = sDoggymonEggMoveLearnset,
    },

    [SPECIES_DOKUGUMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
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
        .frontPic = gMonFrontPic_Dokugumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLUE : ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Dokugumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Dokugumon,
        .shinyPalette = gMonShinyPalette_Dokugumon,
        .iconSprite = gMonIcon_Dokugumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_DokugumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_DokugumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Dokugumon)
        OVERWORLD(
            sPicTable_Dokugumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Dokugumon,
            gShinyOverworldPalette_Dokugumon
        )
        OVERWORLD_FEMALE(
            sPicTable_DokugumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sDokugumonLevelUpLearnset,
        .teachableLearnset = sDokugumonTeachableLearnset,
    },
#endif //P_FAMILY_DOGGYMON

#if P_FAMILY_DOLPHMON
    [SPECIES_DOLPHMON_NORMAL] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 24),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 24),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Dolphmon)
        OVERWORLD(
            sPicTable_DolphmonNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DolphmonNormal,
            gShinyOverworldPalette_DolphmonNormal
        )
        .levelUpLearnset = sDolphmonLevelUpLearnset,
        .teachableLearnset = sDolphmonTeachableLearnset,
        .eggMoveLearnset = sDolphmonEggMoveLearnset,
        .formSpeciesIdTable = sDolphmonFormSpeciesIdTable,
        .formChangeTable = sDolphmonFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Dolphmon)
        OVERWORLD(
            sPicTable_DolphmonSunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DolphmonSunny,
            gShinyOverworldPalette_DolphmonSunny
        )
        .levelUpLearnset = sDolphmonLevelUpLearnset,
        .teachableLearnset = sDolphmonTeachableLearnset,
        .eggMoveLearnset = sDolphmonEggMoveLearnset,
        .formSpeciesIdTable = sDolphmonFormSpeciesIdTable,
        .formChangeTable = sDolphmonFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Dolphmon)
        OVERWORLD(
            sPicTable_DolphmonRainy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DolphmonRainy,
            gShinyOverworldPalette_DolphmonRainy
        )
        .levelUpLearnset = sDolphmonLevelUpLearnset,
        .teachableLearnset = sDolphmonTeachableLearnset,
        .eggMoveLearnset = sDolphmonEggMoveLearnset,
        .formSpeciesIdTable = sDolphmonFormSpeciesIdTable,
        .formChangeTable = sDolphmonFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 12),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Dolphmon)
        OVERWORLD(
            sPicTable_DolphmonSnowy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DolphmonSnowy,
            gShinyOverworldPalette_DolphmonSnowy
        )
        .levelUpLearnset = sDolphmonLevelUpLearnset,
        .teachableLearnset = sDolphmonTeachableLearnset,
        .eggMoveLearnset = sDolphmonEggMoveLearnset,
        .formSpeciesIdTable = sDolphmonFormSpeciesIdTable,
        .formChangeTable = sDolphmonFormChangeTable,
    },
#endif //P_FAMILY_DOLPHMON

#if P_FAMILY_DONSHOUTMON
    [SPECIES_DONSHOUTMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
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
        .speciesName = _("DonShoutmon"),
        .cryId = CRY_DONSHOUTMON,
        .natDexNum = NATIONAL_DEX_DONSHOUTMON,
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
        .frontPic = gMonFrontPic_Donshoutmon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Donshoutmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Donshoutmon,
        .shinyPalette = gMonShinyPalette_Donshoutmon,
        .iconSprite = gMonIcon_Donshoutmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Donshoutmon)
        OVERWORLD(
            sPicTable_Donshoutmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Donshoutmon,
            gShinyOverworldPalette_Donshoutmon
        )
        .levelUpLearnset = sDonshoutmonLevelUpLearnset,
        .teachableLearnset = sDonshoutmonTeachableLearnset,
        .eggMoveLearnset = sDonshoutmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_DORULUMON},
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_AGUMON}),
    },
#endif //P_FAMILY_DONSHOUTMON


#if P_FAMILY_DORUGAMON
    [SPECIES_DORUGAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
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
        .frontPic = gMonFrontPic_Dorugamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Dorugamon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dorugamon,
        .shinyPalette = gMonShinyPalette_Dorugamon,
        .iconSprite = gMonIcon_Dorugamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Dorugamon)
        OVERWORLD(
            sPicTable_Dorugamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dorugamon,
            gShinyOverworldPalette_Dorugamon
        )
        .levelUpLearnset = sDorugamonLevelUpLearnset,
        .teachableLearnset = sDorugamonTeachableLearnset,
        .eggMoveLearnset = sDorugamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DORULUMON}),
    },

    [SPECIES_DORULUMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GROUND),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 3,
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
        .frontPic = gMonFrontPic_Dorulumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Dorulumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dorulumon,
        .shinyPalette = gMonShinyPalette_Dorulumon,
        .iconSprite = gMonIcon_Dorulumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Dorulumon)
        OVERWORLD(
            sPicTable_Dorulumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dorulumon,
            gShinyOverworldPalette_Dorulumon
        )
        .levelUpLearnset = sDorulumonLevelUpLearnset,
        .teachableLearnset = sDorulumonTeachableLearnset,
        .formSpeciesIdTable = sDorulumonFormSpeciesIdTable,
        .formChangeTable = sDorulumonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Dorulumon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DorulumonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DorulumonMega,
            gShinyOverworldPalette_DorulumonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_ARENA_TRAP, ABILITY_SAND_VEIL, ABILITY_SAND_VEIL }, // Power Drill
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
        .frontPic = gMonFrontPic_Drimogemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 9 : 13,
        .backPic = gMonBackPic_Drimogemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Drimogemon,
        .shinyPalette = gMonShinyPalette_Drimogemon,
        .iconSprite = gMonIcon_Drimogemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Drimogemon)
        OVERWORLD(
            sPicTable_Drimogemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Drimogemon,
            gShinyOverworldPalette_Drimogemon
        )
        .levelUpLearnset = sDrimogemonLevelUpLearnset,
        .teachableLearnset = sDrimogemonTeachableLearnset,
        .eggMoveLearnset = sDrimogemonEggMoveLearnset,
    },

    [SPECIES_EBIDRAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_Defense   = 2,
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
        .frontPic = gMonFrontPic_Ebidramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Ebidramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ebidramon,
        .shinyPalette = gMonShinyPalette_Ebidramon,
        .iconSprite = gMonIcon_Ebidramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Ebidramon)
        OVERWORLD(
            sPicTable_Ebidramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ebidramon,
            gShinyOverworldPalette_Ebidramon
        )
        .levelUpLearnset = sEbidramonLevelUpLearnset,
        .teachableLearnset = sEbidramonTeachableLearnset,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Dusknoir)
        OVERWORLD(
            sPicTable_Dusknoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dusknoir,
            gShinyOverworldPalette_Dusknoir
        )
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DRIMOGEMON

#if P_FAMILY_ELEPHANTMON
    [SPECIES_ELEPHANTMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_HEAVY_METAL, ABILITY_THICK_FAT, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elephantmon"),
        .cryId = CRY_ELEPHANTMON,
        .natDexNum = NATIONAL_DEX_ELEPHANTMON,
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
        .frontPic = gMonFrontPic_Elephantmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Elephantmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Elephantmon,
        .shinyPalette = gMonShinyPalette_Elephantmon,
        .iconSprite = gMonIcon_Elephantmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 13, SHADOW_SIZE_L)
        FOOTPRINT(Elephantmon)
        OVERWORLD(
            sPicTable_Elephantmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Elephantmon,
            gShinyOverworldPalette_Elephantmon
        )
        .levelUpLearnset = sElephantmonLevelUpLearnset,
        .teachableLearnset = sElephantmonTeachableLearnset,
        .eggMoveLearnset = sElephantmonEggMoveLearnset,
    },
#endif //P_FAMILY_ELEPHANTMON

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
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Chingling,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Chingling,
        .shinyPalette = gMonShinyPalette_Chingling,
        .iconSprite = gMonIcon_Chingling,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Chingling)
        OVERWORLD(
            sPicTable_Chingling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chingling,
            gShinyOverworldPalette_Chingling
        )
        .levelUpLearnset = sChinglingLevelUpLearnset,
        .teachableLearnset = sChinglingTeachableLearnset,
        .eggMoveLearnset = sChinglingEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_EOSMON_CHAMPION] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BUG),
        .attribute = TYPE_UKNOWN,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 2,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 16,
        .backPic = gMonBackPic_Eosmon_champion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Eosmon_champion,
        .shinyPalette = gMonShinyPalette_Eosmon_champion,
        .iconSprite = gMonIcon_Eosmon_champion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 16, SHADOW_SIZE_S)
        FOOTPRINT(Eosmon_champion)
        OVERWORLD(
            sPicTable_Eosmon_champion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Eosmon_champion,
            gShinyOverworldPalette_Eosmon_champion
        )
        .levelUpLearnset = sEosmon_championLevelUpLearnset,
        .teachableLearnset = sEosmon_championTeachableLearnset,
        .eggMoveLearnset = sEosmon_championEggMoveLearnset,
    },
#endif //P_FAMILY_EOSMON_CHAMPION

#if P_FAMILY_EXERMON
    [SPECIES_EXERMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
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
        .frontPic = gMonFrontPic_Exermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Exermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Exermon,
        .shinyPalette = gMonShinyPalette_Exermon,
        .iconSprite = gMonIcon_Exermon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Exermon)
        OVERWORLD(
            sPicTable_Exermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Exermon,
            gShinyOverworldPalette_Exermon
        )
        .levelUpLearnset = sExermonLevelUpLearnset,
        .teachableLearnset = sExermonTeachableLearnset,
        .eggMoveLearnset = sExermonEggMoveLearnset,
        .formSpeciesIdTable = sExermonFormSpeciesIdTable,
        .formChangeTable = sExermonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExermonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_ExermonMega,
        .shinyPalette = gMonShinyPalette_ExermonMega,
        .iconSprite = gMonIcon_ExermonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Exermon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_ExermonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ExermonMega,
            gShinyOverworldPalette_ExermonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sExermonLevelUpLearnset,
        .teachableLearnset = sExermonTeachableLearnset,
        .eggMoveLearnset = sExermonEggMoveLearnset,
        .formSpeciesIdTable = sExermonFormSpeciesIdTable,
        .formChangeTable = sExermonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_EXERMON

[SPECIES_EXVEEMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_VICTORY_STAR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("ExVeemon"),
        .cryId = CRY_EXVEEMON,
        .natDexNum = NATIONAL_DEX_EXVEEMON,
        .categoryName = _("Dragon Man"),
        .height = 45,
        .weight = 1432,
        .description = COMPOUND_STRING(
            "ExVeemon is the purebred form of Veedramon\n"
            "making it the true form in some peoples eyes.\n"
            "Its legs and arms are incredibly developed\n"
            "letting it destory foes with ease."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Exveemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Exveemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Exveemon,
        .shinyPalette = gMonShinyPalette_Exveemon,
        .iconSprite = gMonIcon_Exveemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Exveemon)
        OVERWORLD(
            sPicTable_Exveemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Exveemon,
            gShinyOverworldPalette_Exveemon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sExveemonLevelUpLearnset,
        .teachableLearnset = sExveemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_EXVEEMON_VIRUS}),
    },

#if P_FAMILY_EXVEEMON_VIRUS
    [SPECIES_EXVEEMON_VIRUS] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 4,
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
        .frontPic = gMonFrontPic_Exveemon_virus,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Exveemon_virus)
        OVERWORLD(
            sPicTable_Exveemon_virus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Exveemon_virus,
            gShinyOverworldPalette_Exveemon_virus
        )
        .levelUpLearnset = sExveemon_virusLevelUpLearnset,
        .teachableLearnset = sExveemon_virusTeachableLearnset,
        .eggMoveLearnset = sExveemon_virusEggMoveLearnset,
    },

    [SPECIES_EYESMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
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
        .frontPic = gMonFrontPic_Eyesmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Eyesmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Eyesmon,
        .shinyPalette = gMonShinyPalette_Eyesmon,
        .iconSprite = gMonIcon_Eyesmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Eyesmon)
        OVERWORLD(
            sPicTable_Eyesmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eyesmon,
            gShinyOverworldPalette_Eyesmon
        )
        .levelUpLearnset = sEyesmonLevelUpLearnset,
        .teachableLearnset = sEyesmonTeachableLearnset,
        .formSpeciesIdTable = sEyesmonFormSpeciesIdTable,
        .formChangeTable = sEyesmonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 18, SHADOW_SIZE_L)
        FOOTPRINT(Eyesmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_EyesmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_EyesmonMega,
            gShinyOverworldPalette_EyesmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Froslass)
        OVERWORLD(
            sPicTable_Froslass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
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
        .baseHP        = 35,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 4,
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
        .frontPic = gMonFrontPic_Eyesmon_scattermode,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 43),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SPIN : ANIM_SPIN_LONG,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Eyesmon_scattermode,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Eyesmon_scattermode,
        .shinyPalette = gMonShinyPalette_Eyesmon_scattermode,
        .iconSprite = gMonIcon_Eyesmon_scattermode,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Eyesmon_scattermode)
        OVERWORLD(
            sPicTable_Eyesmon_scattermode,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eyesmon_scattermode,
            gShinyOverworldPalette_Eyesmon_scattermode
        )
        .levelUpLearnset = sEyesmon_scattermodeLevelUpLearnset,
        .teachableLearnset = sEyesmon_scattermodeTeachableLearnset,
        .eggMoveLearnset = sEyesmon_scattermodeEggMoveLearnset,
    },

    [SPECIES_FANGMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
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
        .frontPic = gMonFrontPic_Fangmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Fangmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Fangmon,
        .shinyPalette = gMonShinyPalette_Fangmon,
        .iconSprite = gMonIcon_Fangmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Fangmon)
        OVERWORLD(
            sPicTable_Fangmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fangmon,
            gShinyOverworldPalette_Fangmon
        )
        .levelUpLearnset = sFangmonLevelUpLearnset,
        .teachableLearnset = sFangmonTeachableLearnset,
    },

    [SPECIES_FILMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Filmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Filmon,
        .shinyPalette = gMonShinyPalette_Filmon,
        .iconSprite = gMonIcon_Filmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Filmon)
        OVERWORLD(
            sPicTable_Filmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Filmon,
            gShinyOverworldPalette_Filmon
        )
        .levelUpLearnset = sFilmonLevelUpLearnset,
        .teachableLearnset = sFilmonTeachableLearnset,
    },
#endif //P_FAMILY_EYESMON_SCATTERMODE

#if P_FAMILY_FIRAMON
    [SPECIES_FIRAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed     = 4,
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
        .frontPic = gMonFrontPic_Firamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Firamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Firamon,
        .shinyPalette = gMonShinyPalette_Firamon,
        .iconSprite = gMonIcon_Firamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Firamon)
        OVERWORLD(
            sPicTable_Firamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Firamon,
            gShinyOverworldPalette_Firamon
        )
        .levelUpLearnset = sFiramonLevelUpLearnset,
        .teachableLearnset = sFiramonTeachableLearnset,
        .eggMoveLearnset = sFiramonEggMoveLearnset,
    },

    [SPECIES_FLAMEDRAMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SOLAR_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flamedramon"),
        .cryId = CRY_FLAMEDRAMON,
        .natDexNum = NATIONAL_DEX_FLAMEDRAMON,
        .categoryName = _("Courage"),
        .height = 23,
        .weight = 885,
        .description = COMPOUND_STRING(
            "With the use of the Digi-Egg of courage, \n"
            "Flamedramons power increasess as if though it\n"
            "is a blazing flame. It uses this power to\n"
            "unleash fast and devestating attacks."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flamedramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Flamedramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Flamedramon,
        .shinyPalette = gMonShinyPalette_Flamedramon,
        .iconSprite = gMonIcon_Flamedramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_L)
        FOOTPRINT(Flamedramon)
        OVERWORLD(
            sPicTable_Flamedramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Flamedramon,
            gShinyOverworldPalette_Flamedramon
        )
        .levelUpLearnset = sFlamedramonLevelUpLearnset,
        .teachableLearnset = sFlamedramonTeachableLearnset,
    },

    [SPECIES_FLAMEWIZARDMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack  = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_BLAZE, ABILITY_MAGICIAN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("FlmeWzardmon"),
        .cryId = CRY_FLAMEWIZARDMON,
        .natDexNum = NATIONAL_DEX_FLAMEWIZARDMON,
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
        .frontPic = gMonFrontPic_Flamewizardmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Flamewizardmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Flamewizardmon,
        .shinyPalette = gMonShinyPalette_Flamewizardmon,
        .iconSprite = gMonIcon_Flamewizardmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Flamewizardmon)
        OVERWORLD(
            sPicTable_Flamewizardmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Flamewizardmon,
            gShinyOverworldPalette_Flamewizardmon
        )
        .levelUpLearnset = sFlamewizardmonLevelUpLearnset,
        .teachableLearnset = sFlamewizardmonTeachableLearnset,
    },
#endif //P_FAMILY_FIRAMON

#if P_FAMILY_FLARERIZAMON
    [SPECIES_FLARERIZAMON] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flarerizamon"),
        .cryId = CRY_FLARERIZAMON,
        .natDexNum = NATIONAL_DEX_FLARERIZAMON,
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
        .frontPic = gMonFrontPic_Flarerizamon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Flarerizamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Flarerizamon,
        .shinyPalette = gMonShinyPalette_Flarerizamon,
        .iconSprite = gMonIcon_Flarerizamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FlarerizamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_FlarerizamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Flarerizamon)
        OVERWORLD(
            sPicTable_Flarerizamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Flarerizamon,
            gShinyOverworldPalette_Flarerizamon
        )
        OVERWORLD_FEMALE(
            sPicTable_FlarerizamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sFlarerizamonLevelUpLearnset,
        .teachableLearnset = sFlarerizamonTeachableLearnset,
        .eggMoveLearnset = sFlarerizamonEggMoveLearnset,
    },
#endif //P_FAMILY_FLARERIZAMON

#if P_FAMILY_FLYBEEMON
    [SPECIES_FLYBEEMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 1,
        .evYield_Speed     = 3,
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
        .frontPic = gMonFrontPic_Flybeemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Flybeemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Flybeemon,
        .shinyPalette = gMonShinyPalette_Flybeemon,
        .iconSprite = gMonIcon_Flybeemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Flybeemon)
        OVERWORLD(
            sPicTable_Flybeemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Flybeemon,
            gShinyOverworldPalette_Flybeemon
        )
        .levelUpLearnset = sFlybeemonLevelUpLearnset,
        .teachableLearnset = sFlybeemonTeachableLearnset,
        .eggMoveLearnset = sFlybeemonEggMoveLearnset,
    },
#endif //P_FAMILY_FLYBEEMON

#if P_FAMILY_FLYMON
    [SPECIES_FLYMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FLYING, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense   = 2,
        .evYield_Speed     = 2,
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
        .frontPic = gMonFrontPic_Flymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE_TWICE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Flymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Flymon,
        .shinyPalette = gMonShinyPalette_Flymon,
        .iconSprite = gMonIcon_Flymon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Flymon)
        OVERWORLD(
            sPicTable_Flymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flymon,
            gShinyOverworldPalette_Flymon
        )
        .levelUpLearnset = sFlymonLevelUpLearnset,
        .teachableLearnset = sFlymonTeachableLearnset,
        .eggMoveLearnset = sFlymonEggMoveLearnset,
    },

    [SPECIES_FRIGIMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frigimon"),
        .cryId = CRY_FRIGIMON,
        .natDexNum = NATIONAL_DEX_FRIGIMON,
        .categoryName = _("Snowman"),
        .height = 20,
        .weight = 505,
        .description = COMPOUND_STRING(
            "Contrary to its cold appearance, it\n"
            "has a very warm and gentle personality.\n"
            "Frigimon hates fighting and so often\n"
            "tries to befriend those that approach."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frigimon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Frigimon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Frigimon,
        .shinyPalette = gMonShinyPalette_Frigimon,
        .iconSprite = gMonIcon_Frigimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Frigimon)
        OVERWORLD(
            sPicTable_Frigimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frigimon,
            gShinyOverworldPalette_Frigimon
        )
        .levelUpLearnset = sFrigimonLevelUpLearnset,
        .teachableLearnset = sFrigimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_VILEMON}),
    },

    [SPECIES_FROGMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 3,
        .evYield_Speed     = 1,
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
        .frontPic = gMonFrontPic_Frogmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 70,
        .backPic = gMonBackPic_Frogmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Frogmon,
        .shinyPalette = gMonShinyPalette_Frogmon,
        .iconSprite = gMonIcon_Frogmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Frogmon)
        OVERWORLD(
            sPicTable_Frogmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frogmon,
            gShinyOverworldPalette_Frogmon
        )
        .levelUpLearnset = sFrogmonLevelUpLearnset,
        .teachableLearnset = sFrogmonTeachableLearnset,
        .formSpeciesIdTable = sFrogmonFormSpeciesIdTable,
        .formChangeTable = sFrogmonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FrogmonMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_FrogmonMega,
        .shinyPalette = gMonShinyPalette_FrogmonMega,
        .iconSprite = gMonIcon_FrogmonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Frogmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_FrogmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_FrogmonMega,
            gShinyOverworldPalette_FrogmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Fugamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Fugamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Fugamon,
        .shinyPalette = gMonShinyPalette_Fugamon,
        .iconSprite = gMonIcon_Fugamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Fugamon)
        OVERWORLD(
            sPicTable_Fugamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Fugamon,
            gShinyOverworldPalette_Fugamon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sFugamonLevelUpLearnset,
        .teachableLearnset = sFugamonTeachableLearnset,
    },

    [SPECIES_GANEMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 70,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_Defense   = 2,
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
        .frontPic = gMonFrontPic_Ganemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Ganemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Ganemon,
        .shinyPalette = gMonShinyPalette_Ganemon,
        .iconSprite = gMonIcon_Ganemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Ganemon)
        OVERWORLD(
            sPicTable_Ganemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ganemon,
            gShinyOverworldPalette_Ganemon
        )
        .levelUpLearnset = sGanemonLevelUpLearnset,
        .teachableLearnset = sGanemonTeachableLearnset,
    },

    [SPECIES_GAOGAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack    = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_IRON_FIST },
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
        .frontPic = gMonFrontPic_Gaogamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Gaogamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gaogamon,
        .shinyPalette = gMonShinyPalette_Gaogamon,
        .iconSprite = gMonIcon_Gaogamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gaogamon)
        OVERWORLD(
            sPicTable_Gaogamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gaogamon,
            gShinyOverworldPalette_Gaogamon
        )
        .levelUpLearnset = sGaogamonLevelUpLearnset,
        .teachableLearnset = sGaogamonTeachableLearnset,
        .formSpeciesIdTable = sGaogamonFormSpeciesIdTable,
        .formChangeTable = sGaogamonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLACKGAOGAMON}),
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_L)
        FOOTPRINT(Gaogamon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GaogamonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GaogamonMega,
            gShinyOverworldPalette_GaogamonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
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
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
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
        .abilities = { ABILITY_SNIPER, ABILITY_NONE, ABILITY_NONE },
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
        .frontPic = gMonFrontPic_Gargomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Gargomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gargomon,
        .shinyPalette = gMonShinyPalette_Gargomon,
        .iconSprite = gMonIcon_Gargomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Gargomon)
        OVERWORLD(
            sPicTable_Gargomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gargomon,
            gShinyOverworldPalette_Gargomon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGargomonLevelUpLearnset,
        .teachableLearnset = sGargomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLACKGARGOMON}),
    },
#endif //P_FAMILY_GARGOMON

#if P_FAMILY_GARGOYLEMON
    [SPECIES_GARGOYLEMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
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
        .speciesName = _("Gargoylemon"),
        .cryId = CRY_GARGOYLEMON,
        .natDexNum = NATIONAL_DEX_GARGOYLEMON,
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
        .frontPic = gMonFrontPic_Gargoylemon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FOUR_PETAL : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Gargoylemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gargoylemon,
        .shinyPalette = gMonShinyPalette_Gargoylemon,
        .iconSprite = gMonIcon_Gargoylemon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Gargoylemon)
        OVERWORLD(
            sPicTable_Gargoylemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gargoylemon,
            gShinyOverworldPalette_Gargoylemon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGargoylemonLevelUpLearnset,
        .teachableLearnset = sGargoylemonTeachableLearnset,
    },
#endif //P_FAMILY_GARGOYLEMON

#if P_FAMILY_GARURUMON
    [SPECIES_GARURUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
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
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_SPEED_BOOST },
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
        .frontPic = gMonFrontPic_Garurumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Garurumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Garurumon,
        .shinyPalette = gMonShinyPalette_Garurumon,
        .iconSprite = gMonIcon_Garurumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Garurumon)
        OVERWORLD(
            sPicTable_Garurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Garurumon,
            gShinyOverworldPalette_Garurumon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGarurumonLevelUpLearnset,
        .teachableLearnset = sGarurumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLACKGARURUMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GARURUMON_X}),
    },
#endif //P_FAMILY_GARURUMON

#if P_FAMILY_GARURUMON_X
    [SPECIES_GARURUMON_X] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
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
        .frontPic = gMonFrontPic_Garurumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE_FAST_SHORT : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 12,
        .backPic = gMonBackPic_Garurumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Garurumon_x,
        .shinyPalette = gMonShinyPalette_Garurumon_x,
        .iconSprite = gMonIcon_Garurumon_x,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 15, SHADOW_SIZE_M)
        FOOTPRINT(Garurumon_x)
        OVERWORLD(
            sPicTable_Garurumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Garurumon_x,
            gShinyOverworldPalette_Garurumon_x
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGarurumon_xLevelUpLearnset,
        .teachableLearnset = sGarurumon_xTeachableLearnset,
        .formSpeciesIdTable = sGarurumon_xFormSpeciesIdTable,
        .formChangeTable = sGarurumon_xFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Garurumon_x)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Garurumon_xMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Garurumon_xMega,
            gShinyOverworldPalette_Garurumon_xMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGarurumon_xLevelUpLearnset,
        .teachableLearnset = sGarurumon_xTeachableLearnset,
        .formSpeciesIdTable = sGarurumon_xFormSpeciesIdTable,
        .formChangeTable = sGarurumon_xFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GARURUMON_X

#if P_FAMILY_GATOMON
    [SPECIES_GATOMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
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
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Gatomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Gatomon,
        .shinyPalette = gMonShinyPalette_Gatomon,
        .iconSprite = gMonIcon_Gatomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gatomon)
        OVERWORLD(
            sPicTable_Gatomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gatomon,
            gShinyOverworldPalette_Gatomon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGatomonLevelUpLearnset,
        .teachableLearnset = sGatomonTeachableLearnset,
        .formSpeciesIdTable = sGatomonFormSpeciesIdTable,
        .formChangeTable = sGatomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_BUTTERFLYMON},
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLACKGATOMON},
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Gatomon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GatomonMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_GatomonMega,
            gShinyOverworldPalette_GatomonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGatomonLevelUpLearnset,
        .teachableLearnset = sGatomonTeachableLearnset,
        .formSpeciesIdTable = sGatomonFormSpeciesIdTable,
        .formChangeTable = sGatomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GATOMON

#if P_FAMILY_GATOMON_X
    [SPECIES_GATOMON_X] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
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
        .frontPic = gMonFrontPic_Gatomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gatomon_x)
        OVERWORLD(
            sPicTable_Gatomon_x,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gatomon_x,
            gShinyOverworldPalette_Gatomon_x
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGatomon_xLevelUpLearnset,
        .teachableLearnset = sGatomon_xTeachableLearnset,
        .formSpeciesIdTable = sGatomon_xFormSpeciesIdTable,
        .formChangeTable = sGatomon_xFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gatomon_xPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Gatomon_xPrimal,
        .shinyPalette = gMonShinyPalette_Gatomon_xPrimal,
        .iconSprite = gMonIcon_Gatomon_xPrimal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gatomon_x)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Gatomon_xPrimal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gatomon_xPrimal,
            gShinyOverworldPalette_Gatomon_xPrimal
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGatomon_xLevelUpLearnset,
        .teachableLearnset = sGatomon_xTeachableLearnset,
        .formSpeciesIdTable = sGatomon_xFormSpeciesIdTable,
        .formChangeTable = sGatomon_xFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GATOMON_X

#if P_FAMILY_GEKOMON
    [SPECIES_GEKOMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
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
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_NONE }, // Sound Boost
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Gekomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Gekomon,
        .shinyPalette = gMonShinyPalette_Gekomon,
        .iconSprite = gMonIcon_Gekomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gekomon)
        OVERWORLD(
            sPicTable_Gekomon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gekomon,
            gShinyOverworldPalette_Gekomon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGekomonLevelUpLearnset,
        .teachableLearnset = sGekomonTeachableLearnset,
        .formSpeciesIdTable = sGekomonFormSpeciesIdTable,
        .formChangeTable = sGekomonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GekomonPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_GekomonPrimal,
        .shinyPalette = gMonShinyPalette_GekomonPrimal,
        .iconSprite = gMonIcon_GekomonPrimal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gekomon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GekomonPrimal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GekomonPrimal,
            gShinyOverworldPalette_GekomonPrimal
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGekomonLevelUpLearnset,
        .teachableLearnset = sGekomonTeachableLearnset,
        .formSpeciesIdTable = sGekomonFormSpeciesIdTable,
        .formChangeTable = sGekomonFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GEKOMON

#if P_FAMILY_GEOGREYMON
    [SPECIES_GEOGREYMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 60,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Geogreymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Geogreymon,
        .shinyPalette = gMonShinyPalette_Geogreymon,
        .iconSprite = gMonIcon_Geogreymon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_L)
        FOOTPRINT(Geogreymon)
        OVERWORLD(
            sPicTable_Geogreymon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Geogreymon,
            gShinyOverworldPalette_Geogreymon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGeogreymonLevelUpLearnset,
        .teachableLearnset = sGeogreymonTeachableLearnset,
        .formSpeciesIdTable = sGeogreymonFormSpeciesIdTable,
        .formChangeTable = sGeogreymonFormChangeTable,
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_L)
        FOOTPRINT(Geogreymon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GeogreymonMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_GeogreymonMega,
            gShinyOverworldPalette_GeogreymonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGeogreymonLevelUpLearnset,
        .teachableLearnset = sGeogreymonTeachableLearnset,
        .formSpeciesIdTable = sGeogreymonFormSpeciesIdTable,
        .formChangeTable = sGeogreymonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GEOGREYMON

#if P_FAMILY_GEREMON
    [SPECIES_GEREMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 2,
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
        .frontPic = gMonFrontPic_Geremon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_RISING_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Geremon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Geremon,
        .shinyPalette = gMonShinyPalette_Geremon,
        .iconSprite = gMonIcon_Geremon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Geremon)
        OVERWORLD(
            sPicTable_Geremon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Geremon,
            gShinyOverworldPalette_Geremon
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGeremonLevelUpLearnset,
        .teachableLearnset = sGeremonTeachableLearnset,
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
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonNormal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GesomonNormal,
        .shinyPalette = gMonShinyPalette_GesomonNormal,
        .iconSprite = gMonIcon_GesomonNormal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gesomon)
        OVERWORLD(
            sPicTable_GesomonNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GesomonNormal,
            gShinyOverworldPalette_GesomonNormal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGesomonNormalLevelUpLearnset,
        .teachableLearnset = sGesomonNormalTeachableLearnset,
        .formSpeciesIdTable = sGesomonFormSpeciesIdTable,
        .formChangeTable = sGesomonNormalFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonAttack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonAttack,
        .shinyPalette = gMonShinyPalette_GesomonAttack,
        .iconSprite = gMonIcon_GesomonAttack,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_GesomonAttack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GesomonAttack,
            gShinyOverworldPalette_GesomonAttack
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGesomonAttackLevelUpLearnset,
        .teachableLearnset = sGesomonAttackTeachableLearnset,
        .formSpeciesIdTable = sGesomonFormSpeciesIdTable,
        .formChangeTable = sGesomonAttackFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonDefense,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonDefense,
        .shinyPalette = gMonShinyPalette_GesomonDefense,
        .iconSprite = gMonIcon_GesomonDefense,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gesomon)
        OVERWORLD(
            sPicTable_GesomonDefense,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GesomonDefense,
            gShinyOverworldPalette_GesomonDefense
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGesomonDefenseLevelUpLearnset,
        .teachableLearnset = sGesomonDefenseTeachableLearnset,
        .formSpeciesIdTable = sGesomonFormSpeciesIdTable,
        .formChangeTable = sGesomonDefenseFormChangeTable,
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
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GesomonSpeed,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GesomonSpeed,
        .shinyPalette = gMonShinyPalette_GesomonSpeed,
        .iconSprite = gMonIcon_GesomonSpeed,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gesomon)
        OVERWORLD(
            sPicTable_GesomonSpeed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GesomonSpeed,
            gShinyOverworldPalette_GesomonSpeed
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGesomonSpeedLevelUpLearnset,
        .teachableLearnset = sGesomonSpeedTeachableLearnset,
        .formSpeciesIdTable = sGesomonFormSpeciesIdTable,
        .formChangeTable = sGesomonSpeedFormChangeTable,
    },
#endif //P_FAMILY_GESOMON

#if P_FAMILY_DEATHMON_CMON_DIGIMON
    [SPECIES_DEATHMON_CMON_DIGIMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_POWER_OF_ALCHEMY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Deathmon"),
        .cryId = CRY_DEATHMON_CMON_DIGIMON,
        .natDexNum = NATIONAL_DEX_DEATHMON_CMON_DIGIMON,
        .categoryName = _("Death"),
        .height = 18,
        .weight = 574,
        .description = COMPOUND_STRING(
            "Like all Digimon, Deathmon gets stronger\n"
            "by absorbing Digimon data. However\n"
            "Deathmon will also start to take\n"
            "on the characteristics of this data"),
        .pokemonScale = 491,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deathmon_cmon_digimon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deathmon_cmon_digimon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Deathmon_cmon_digimon,
        .shinyPalette = gMonShinyPalette_Deathmon_cmon_digimon,
        .iconSprite = gMonIcon_Deathmon_cmon_digimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deathmon_cmon_digimon)
        OVERWORLD(
            sPicTable_Deathmon_cmon_digimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Deathmon_cmon_digimon,
            gShinyOverworldPalette_Deathmon_cmon_digimon
        )
        .levelUpLearnset = sDeathmon_cmon_digimonLevelUpLearnset,
        .teachableLearnset = sDeathmon_cmon_digimonTeachableLearnset,
        .eggMoveLearnset = sDeathmon_cmon_digimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_GREYMON}),
    },

    [SPECIES_GREYMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_BLAZE, ABILITY_HUSTLE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Greymon"),
        .cryId = CRY_GREYMON,
        .natDexNum = NATIONAL_DEX_GREYMON,
        .categoryName = _("Dinosaur"),
        .height = 49,
        .weight = 1563,
        .description = COMPOUND_STRING(
            "The body of a Greymon is considered\n"
            "to be a lethal weapon as it is\n"
            "covered in sharp claws and horns. It\n"
            "is a very aggressive Digimon."),
        .pokemonScale = 320,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greymon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greymon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Greymon,
        .shinyPalette = gMonShinyPalette_Greymon,
        .iconSprite = gMonIcon_Greymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Greymon)
        OVERWORLD(
            sPicTable_Greymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greymon,
            gShinyOverworldPalette_Greymon
        )
        .levelUpLearnset = sGreymonLevelUpLearnset,
        .teachableLearnset = sGreymonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_KABUTERIMON}),
    },

    [SPECIES_KABUTERIMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 90,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_STATIC, ABILITY_SWARM, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Kabuterimon"),
        .cryId = CRY_KABUTERIMON,
        .natDexNum = NATIONAL_DEX_KABUTERIMON,
        .categoryName = _("Rhino Beetle"),
        .height = 60,
        .weight = 1483,
        .description = COMPOUND_STRING(
            "Although derived from beetle data, \n"
            "Kabuterimon seems to have ant-like\n"
            "abilties. Its head has been metallized\n"
            "giving it even greater defense."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Kabuterimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Kabuterimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Kabuterimon,
        .shinyPalette = gMonShinyPalette_Kabuterimon,
        .iconSprite = gMonIcon_Kabuterimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Kabuterimon)
        OVERWORLD(
            sPicTable_Kabuterimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kabuterimon,
            gShinyOverworldPalette_Kabuterimon
        )
        .levelUpLearnset = sKabuterimonLevelUpLearnset,
        .teachableLearnset = sKabuterimonTeachableLearnset,
    },
#endif //P_FAMILY_DEATHMON_CMON_DIGIMON

#if P_FAMILY_MERAMON
    [SPECIES_MERAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Meramon"),
        .cryId = CRY_MERAMON,
        .natDexNum = NATIONAL_DEX_MERAMON,
        .categoryName = _("Burning"),
        .height = 24,
        .weight = 483,
        .description = COMPOUND_STRING(
            "Generated from the defensive\n"
            "Firewall, Meramon possesses a\n"
            "violent nature and tries to\n"
            "incinerate everything it encounters."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meramon,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Meramon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Meramon,
        .shinyPalette = gMonShinyPalette_Meramon,
        .iconSprite = gMonIcon_Meramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Meramon)
        OVERWORLD(
            sPicTable_Meramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meramon,
            gShinyOverworldPalette_Meramon
        )
        .levelUpLearnset = sMeramonLevelUpLearnset,
        .teachableLearnset = sMeramonTeachableLearnset,
        .eggMoveLearnset = sMeramonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_NUMEMON}),
    },

    [SPECIES_NUMEMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON),
        .attribute = TYPE_VIRUS, 
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 2,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Numemon"),
        .cryId = CRY_NUMEMON,
        .natDexNum = NATIONAL_DEX_NUMEMON,
        .categoryName = _("Mollusk"),
        .height = 6,
        .weight = 151,
        .description = COMPOUND_STRING(
            "In dark, gloomy environments, you can\n"
            "often find Numemon colonies. When they\n"
            "feel threatened, they will attack by\n"
            "throwing their own poop."),
        .pokemonScale = 338,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Numemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Numemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Numemon,
        .shinyPalette = gMonShinyPalette_Numemon,
        .iconSprite = gMonIcon_Numemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Numemon)
        OVERWORLD(
            sPicTable_Numemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Numemon,
            gShinyOverworldPalette_Numemon
        )
        .levelUpLearnset = sNumemonLevelUpLearnset,
        .teachableLearnset = sNumemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SEADRAMON}),
    },

    [SPECIES_SEADRAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 2,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_WATER_ABSORB, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Seadramon"),
        .cryId = CRY_SEADRAMON,
        .natDexNum = NATIONAL_DEX_SEADRAMON,
        .categoryName = _("Sea Dragon"),
        .height = 81,
        .weight = 1285,
        .description = COMPOUND_STRING(
            "Using its long body, Seadramon wreathes\n"
            "itself around enemies and constricts them\n"
            "until they suffocate. It instinctually\n"
            "swims around in the Net Ocean hunting."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seadramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Seadramon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Seadramon,
        .shinyPalette = gMonShinyPalette_Seadramon,
        .iconSprite = gMonIcon_Seadramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Seadramon)
        OVERWORLD(
            sPicTable_Seadramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Seadramon,
            gShinyOverworldPalette_Seadramon
        )
        .levelUpLearnset = sSeadramonLevelUpLearnset,
        .teachableLearnset = sSeadramonTeachableLearnset,
    },
#endif //P_FAMILY_MERAMON

#if P_FAMILY_TYRANNOMON
    [SPECIES_TYRANNOMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tyrannomon"),
        .cryId = CRY_TYRANNOMON,
        .natDexNum = NATIONAL_DEX_TYRANNOMON,
        .categoryName = _("Dinosaur"),
        .height = 47,
        .weight = 743,
        .description = COMPOUND_STRING(
            "A docile Digimon, Tyrannomon is considered\n"
            "to be one of the best Digimon for beginner\n"
            "tamers. Some consider it to be the\n"
            "representative figure of the basic Digimon."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyrannomon,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tyrannomon,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Tyrannomon,
        .shinyPalette = gMonShinyPalette_Tyrannomon,
        .iconSprite = gMonIcon_Tyrannomon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 3, SHADOW_SIZE_L)
        FOOTPRINT(Tyrannomon)
        OVERWORLD(
            sPicTable_Tyrannomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrannomon,
            gShinyOverworldPalette_Tyrannomon
        )
        .levelUpLearnset = sTyrannomonLevelUpLearnset,
        .teachableLearnset = sTyrannomonTeachableLearnset,
        .eggMoveLearnset = sTyrannomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_VEGIEMON}),
    },

    [SPECIES_VEGIEMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HARVEST, ABILITY_RIPEN, ABILITY_PROTOSYNTHESIS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Vegiemon"),
        .cryId = CRY_VEGIEMON,
        .natDexNum = NATIONAL_DEX_VEGIEMON,
        .categoryName = _("Pitcher"),
        .height = 9,
        .weight = 269,
        .description = COMPOUND_STRING(
            "Although Vegiemon has an aggressive\n"
            "temperament, it lacks the strength to\n"
            "back it up. Instead it uses a sweet\n"
            "scent to attract weaker Digimon."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vegiemon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Vegiemon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Vegiemon,
        .shinyPalette = gMonShinyPalette_Vegiemon,
        .iconSprite = gMonIcon_Vegiemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Vegiemon)
        OVERWORLD(
            sPicTable_Vegiemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vegiemon,
            gShinyOverworldPalette_Vegiemon
        )
        .levelUpLearnset = sVegiemonLevelUpLearnset,
        .teachableLearnset = sVegiemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_WHAMON}),
    },

    [SPECIES_WHAMON] =
    {
        .baseHP        = 110,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_OBLIVIOUS, ABILITY_DRIZZLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Whamon"),
        .cryId = CRY_WHAMON,
        .natDexNum = NATIONAL_DEX_WHAMON,
        .categoryName = _("Whale"),
        .height = 90,
        .weight = 3196,
        .description = COMPOUND_STRING(
            "Often found in the deepest regions of \n"
            "the Net Ocean, Whamon are ferocious Digimon\n"
            "that will with tsunamis. It is believed\n"
            "to be quick to attack due its weak eyes."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Whamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Whamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Whamon,
        .shinyPalette = gMonShinyPalette_Whamon,
        .iconSprite = gMonIcon_Whamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Whamon)
        OVERWORLD(
            sPicTable_Whamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Whamon,
            gShinyOverworldPalette_Whamon
        )
        .levelUpLearnset = sWhamonLevelUpLearnset,
        .teachableLearnset = sWhamonTeachableLearnset,
    },
#endif //P_FAMILY_TYRANNOMON

#if P_FAMILY_KOKATORIMON
    [SPECIES_KOKATORIMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_EARLY_BIRD, ABILITY_NONE }, // Strong Legs
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kokatorimon"),
        .cryId = CRY_KOKATORIMON,
        .natDexNum = NATIONAL_DEX_KOKATORIMON,
        .categoryName = _("Giant Bird"),
        .height = 23,
        .weight = 745,
        .description = COMPOUND_STRING(
            "Due to living on the ground for so\n"
            "long, Kokatorimon has evolved a body that\n"
            "can't fly. It uses its giant size and\n"
            "degraded wings to intimidate its foes."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokatorimon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kokatorimon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kokatorimon,
        .shinyPalette = gMonShinyPalette_Kokatorimon,
        .iconSprite = gMonIcon_Kokatorimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KokatorimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_KokatorimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Kokatorimon)
        OVERWORLD(
            sPicTable_Kokatorimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kokatorimon,
            gShinyOverworldPalette_Kokatorimon
        )
        OVERWORLD_FEMALE(
            sPicTable_KokatorimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sKokatorimonLevelUpLearnset,
        .teachableLearnset = sKokatorimonTeachableLearnset,
        .eggMoveLearnset = sKokatorimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_VILEMON}),
    },

    [SPECIES_VILEMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_WIMP_OUT, ABILITY_RUN_AWAY, ABILITY_OPPORTUNIST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Vilemon"),
        .cryId = CRY_VILEMON,
        .natDexNum = NATIONAL_DEX_VILEMON,
        .categoryName = _("Coward"),
        .height = 9,
        .weight = 226,
        .description = COMPOUND_STRING(
            "To avoid losing, Vilemon have developed\n"
            "some of the most cowardly acts possible.\n"
            "It will torment weak digimon but run\n"
            "away as soon as its opposed in any way."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vilemon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Vilemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Vilemon,
        .shinyPalette = gMonShinyPalette_Vilemon,
        .iconSprite = gMonIcon_Vilemon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_VilemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_VilemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Vilemon)
        OVERWORLD(
            sPicTable_Vilemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vilemon,
            gShinyOverworldPalette_Vilemon
        )
        OVERWORLD_FEMALE(
            sPicTable_VilemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sVilemonLevelUpLearnset,
        .teachableLearnset = sVilemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_ROACHMON}),
    },

    [SPECIES_ROACHMON] =
    {
        .baseHP        = 110,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_IMMUNITY, ABILITY_STURDY, ABILITY_STAMINA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Roachmon"),
        .cryId = CRY_ROACHMON,
        .natDexNum = NATIONAL_DEX_ROACHMON,
        .categoryName = _("Cockroach"),
        .height = 23,
        .weight = 613,
        .description = COMPOUND_STRING(
            "One of the most hated Digimon, Roachmon\n"
            "moves around steathily and nimbly. What\n"
            "it lacks in offensive power it more\n"
            "than makes up in speed and stamina."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roachmon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Roachmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Roachmon,
        .shinyPalette = gMonShinyPalette_Roachmon,
        .iconSprite = gMonIcon_Roachmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RoachmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Roachmon)
        OVERWORLD(
            sPicTable_Roachmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Roachmon,
            gShinyOverworldPalette_Roachmon
        )
        OVERWORLD_FEMALE(
            sPicTable_RoachmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRoachmonLevelUpLearnset,
        .teachableLearnset = sRoachmonTeachableLearnset,
    },
#endif //P_FAMILY_KOKATORIMON

#if P_FAMILY_GORILLAMON
    [SPECIES_GORILLAMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_MEGA_LAUNCHER },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gorillamon"),
        .cryId = CRY_GORILLAMON,
        .natDexNum = NATIONAL_DEX_GORILLAMON,
        .categoryName = _("Gorilla"),
        .height = 48,
        .weight = 1643,
        .description = COMPOUND_STRING(
            "The strength of both Gorillamons arm\n"
            "and legs are near unparalleled. Its\n"
            "bulk doesn't stop it from being\n"
            "incredibly light on its feet as well."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gorillamon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Gorillamon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Gorillamon,
        .shinyPalette = gMonShinyPalette_Gorillamon,
        .iconSprite = gMonIcon_Gorillamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GorillamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_GorillamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Gorillamon)
        OVERWORLD(
            sPicTable_Gorillamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gorillamon,
            gShinyOverworldPalette_Gorillamon
        )
        OVERWORLD_FEMALE(
            sPicTable_GorillamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sGorillamonLevelUpLearnset,
        .teachableLearnset = sGorillamonTeachableLearnset,
        .eggMoveLearnset = sGorillamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_IKKAKUMON}),
    },

    [SPECIES_IKKAKUMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ikkakumon"),
        .cryId = CRY_IKKAKUMON,
        .natDexNum = NATIONAL_DEX_IKKAKUMON,
        .categoryName = _("Beaver"),
        .height = 55,
        .weight = 2363,
        .description = COMPOUND_STRING(
            "The thick fur and stout body of Ikkakumon\n"
            "let it endure in the coldest of lands.\n"
            "Its paws are able to heat up letting\n"
            "it maintain a strong grip on ice."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ikkakumon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Ikkakumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Ikkakumon,
        .shinyPalette = gMonShinyPalette_Ikkakumon,
        .iconSprite = gMonIcon_Ikkakumon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_IkkakumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Ikkakumon)
        OVERWORLD(
            sPicTable_Ikkakumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ikkakumon,
            gShinyOverworldPalette_Ikkakumon
        )
        OVERWORLD_FEMALE(
            sPicTable_IkkakumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sIkkakumonLevelUpLearnset,
        .teachableLearnset = sIkkakumonTeachableLearnset,
    },
#endif //P_FAMILY_GORILLAMON

#if P_FAMILY_KUWAGAMON
    [SPECIES_KUWAGAMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 3,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HUSTLE, ABILITY_HYPER_CUTTER, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kuwagamon"),
        .cryId = CRY_KUWAGAMON,
        .natDexNum = NATIONAL_DEX_KUWAGAMON,
        .categoryName = _("Stag Beetle"),
        .height = 58,
        .weight = 1753,
        .description = COMPOUND_STRING(
            "Kuwagamons sturdy shell allows its to\n"
            "take risks that other champion Digimon\n"
            "would be more hesitent to take. It uses\n"
            "its powerful pincirs to clamp any foes."),
        .pokemonScale = 530,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kuwagamon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kuwagamon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kuwagamon,
        .shinyPalette = gMonShinyPalette_Kuwagamon,
        .iconSprite = gMonIcon_Kuwagamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KuwagamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_KuwagamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kuwagamon)
        OVERWORLD(
            sPicTable_Kuwagamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kuwagamon,
            gShinyOverworldPalette_Kuwagamon
        )
        OVERWORLD_FEMALE(
            sPicTable_KuwagamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sKuwagamonLevelUpLearnset,
        .teachableLearnset = sKuwagamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_LEOMON}),
    },

    [SPECIES_LEOMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 3,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Leomon"),
        .cryId = CRY_LEOMON,
        .natDexNum = NATIONAL_DEX_LEOMON,
        .categoryName = _("Noble Hero"),
        .height = 27,
        .weight = 1014,
        .description = COMPOUND_STRING(
            "Leomon lacks the savagery that is\n"
            "expected of many beast Digimon, instead\n"
            "possessing a strong purpose and a\n"
            "heart of justice that never wavers."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leomon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Leomon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Leomon,
        .shinyPalette = gMonShinyPalette_Leomon,
        .iconSprite = gMonIcon_Leomon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LeomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_LeomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Leomon)
        OVERWORLD(
            sPicTable_Leomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Leomon,
            gShinyOverworldPalette_Leomon
        )
        OVERWORLD_FEMALE(
            sPicTable_LeomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sLeomonLevelUpLearnset,
        .teachableLearnset = sLeomonTeachableLearnset,
    },
#endif //P_FAMILY_KUWAGAMON

#if P_FAMILY_SHADRAMON
    [SPECIES_SHADRAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shadramon"),
        .cryId = CRY_SHADRAMON,
        .natDexNum = NATIONAL_DEX_SHADRAMON,
        .categoryName = _("Blazing"),
        .height = 21,
        .weight = 374,
        .description = COMPOUND_STRING(
            "Due to having an adverse reaction to\n"
            "the Digimental of Courage, Shadramon\n"
            "has developed a fiendish personality.\n"
            "It can manipulate flames with its hands."),
        .pokemonScale = 432,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shadramon,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Shadramon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Shadramon,
        .shinyPalette = gMonShinyPalette_Shadramon,
        .iconSprite = gMonIcon_Shadramon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ShadramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .backPicFemale = gMonBackPic_ShadramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Shadramon)
        OVERWORLD(
            sPicTable_Shadramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shadramon,
            gShinyOverworldPalette_Shadramon
        )
        OVERWORLD_FEMALE(
            sPicTable_ShadramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sShadramonLevelUpLearnset,
        .teachableLearnset = sShadramonTeachableLearnset,
        .eggMoveLearnset = sShadramonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_RAIDRAMON}),
    },

    [SPECIES_RAIDRAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_QUICK_FEET, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Raidramon"),
        .cryId = CRY_RAIDRAMON,
        .natDexNum = NATIONAL_DEX_RAIDRAMON,
        .categoryName = _("Thundering"),
        .height = 21,
        .weight = 874,
        .description = COMPOUND_STRING(
            "Raidramons nimble movements are like\n"
            "lightning letting it quickly outpace\n"
            "any foes. It is so fast that bystanders\n"
            "believe it is flying when its running."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raidramon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Raidramon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Raidramon,
        .shinyPalette = gMonShinyPalette_Raidramon,
        .iconSprite = gMonIcon_Raidramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RaidramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_RaidramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Raidramon)
        OVERWORLD(
            sPicTable_Raidramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raidramon,
            gShinyOverworldPalette_Raidramon
        )
        OVERWORLD_FEMALE(
            sPicTable_RaidramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRaidramonLevelUpLearnset,
        .teachableLearnset = sRaidramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TOGEMON}),
    },

    [SPECIES_TOGEMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IRON_FIST, ABILITY_ROUGH_SKIN, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Togemon"),
        .cryId = CRY_TOGEMON,
        .natDexNum = NATIONAL_DEX_TOGEMON,
        .categoryName = _("Cactus"),
        .height = 28,
        .weight = 915,
        .description = COMPOUND_STRING(
            "Storing nutrient data within its\n"
            "body, Togemon can survive for a long\n"
            "time in harsh environments. Its face\n"
            "makes it hard to discern its emotions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togemon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Togemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Togemon,
        .shinyPalette = gMonShinyPalette_Togemon,
        .iconSprite = gMonIcon_Togemon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TogemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_TogemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Togemon)
        OVERWORLD(
            sPicTable_Togemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Togemon,
            gShinyOverworldPalette_Togemon
        )
        OVERWORLD_FEMALE(
            sPicTable_TogemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sTogemonLevelUpLearnset,
        .teachableLearnset = sTogemonTeachableLearnset,
    },
#endif //P_FAMILY_SHADRAMON

#if P_FAMILY_GROWLMON
    [SPECIES_GROWLMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_VIRUS, 
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 2,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Growlmon"),
        .cryId = CRY_GROWLMON,
        .natDexNum = NATIONAL_DEX_GROWLMON,
        .categoryName = _("Demon Dragon"),
        .height = 51,
        .weight = 1734,
        .description = COMPOUND_STRING(
            "The childishness it had when it was a\n"
            "Guilmon has completely dissapeared\n"
            "making Growlmon a far more ferocious\n"
            "and wild Digimon."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Growlmon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Growlmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Growlmon,
        .shinyPalette = gMonShinyPalette_Growlmon,
        .iconSprite = gMonIcon_Growlmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Growlmon)
        OVERWORLD(
            sPicTable_Growlmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Growlmon,
            gShinyOverworldPalette_Growlmon
        )
        .levelUpLearnset = sGrowlmonLevelUpLearnset,
        .teachableLearnset = sGrowlmonTeachableLearnset,
        .eggMoveLearnset = sGrowlmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_STINGMON}),
    },

    [SPECIES_STINGMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_UNNERVE, ABILITY_COMPOUND_EYES, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Stingmon"),
        .cryId = CRY_STINGMON,
        .natDexNum = NATIONAL_DEX_STINGMON,
        .categoryName = _("Bug Man"),
        .height = 44,
        .weight = 1289,
        .description = COMPOUND_STRING(
            "Stingmons human form is an unusual\n"
            "look for an insect Digimon, its has\n"
            "both strong insect exoskeleton and\n"
            "keen human judgement."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Stingmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Stingmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Stingmon,
        .shinyPalette = gMonShinyPalette_Stingmon,
        .iconSprite = gMonIcon_Stingmon,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Stingmon)
        OVERWORLD(
            sPicTable_Stingmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stingmon,
            gShinyOverworldPalette_Stingmon
        )
        .levelUpLearnset = sStingmonLevelUpLearnset,
        .teachableLearnset = sStingmonTeachableLearnset,
    },
#endif //P_FAMILY_GROWLMON

#if P_FAMILY_TUSKMON
    [SPECIES_TUSKMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 3,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_SHED_SKIN, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tuskmon"),
        .cryId = CRY_TUSKMON,
        .natDexNum = NATIONAL_DEX_TUSKMON,
        .categoryName = _("Panzer"),
        .height = 42,
        .weight = 1536,
        .description = COMPOUND_STRING(
            "Tuskmon has earned the title of Panzer\n"
            "Digimon from how it will destroy all\n"
            "obstructions as it charges forward. Its\n"
            "horns regrow like shark teeth when broken."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tuskmon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tuskmon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Tuskmon,
        .shinyPalette = gMonShinyPalette_Tuskmon,
        .iconSprite = gMonIcon_Tuskmon,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Tuskmon)
        OVERWORLD(
            sPicTable_Tuskmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tuskmon,
            gShinyOverworldPalette_Tuskmon
        )
        .levelUpLearnset = sTuskmonLevelUpLearnset,
        .teachableLearnset = sTuskmonTeachableLearnset,
        .eggMoveLearnset = sTuskmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MONOCHROMON}),
    },

    [SPECIES_MONOCHROMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_HUSTLE, ABILITY_STURDY, ABILITY_SOUNDPROOF }, //Big Horn
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Monochromon"),
        .cryId = CRY_MONOCHROMON,
        .natDexNum = NATIONAL_DEX_MONOCHROMON,
        .categoryName = _("Ankylosaur"),
        .height = 54,
        .weight = 6540,
        .description = COMPOUND_STRING(
            "Once enraged, Monochromon will attack\n"
            "with relentless fury until its near\n"
            "bottomless stamina is drained or its\n"
            "target stops fighting back."),
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monochromon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Monochromon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Monochromon,
        .shinyPalette = gMonShinyPalette_Monochromon,
        .iconSprite = gMonIcon_Monochromon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Monochromon)
        OVERWORLD(
            sPicTable_Monochromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Monochromon,
            gShinyOverworldPalette_Monochromon
        )
        .levelUpLearnset = sMonochromonLevelUpLearnset,
        .teachableLearnset = sMonochromonTeachableLearnset,
    },
#endif //P_FAMILY_TUSKMON

#if P_FAMILY_MEKANORIMON
    [SPECIES_MEKANORIMON] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SLOW_START, ABILITY_NONE, ABILITY_DEFEATIST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mekanorimon"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 38,
        .weight = 4731,
        .description = COMPOUND_STRING(
            "Mekanorimon is one of the first discovered\n"
            "vehicle Digimon. It is unable to act for\n"
            "itself requiring a pilot such as a\n"
            "smaller Digimon or a human."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mekanorimon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Mekanorimon,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Mekanorimon,
        .shinyPalette = gMonShinyPalette_Mekanorimon,
        .iconSprite = gMonIcon_Mekanorimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_Mekanorimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mekanorimon,
            gShinyOverworldPalette_Mekanorimon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sMekanorimonLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NANIMON, CONDITIONS({IF_GENDER, MON_GENDERLESS})},
                                {EVO_LEVEL, 20, SPECIES_MOTHIM_PLANT, CONDITIONS({IF_GENDER, MON_GENDERLESS})}),
    },

    [SPECIES_MINOTARUMON] =
    {
        .baseHP        = 130,
        .baseAttack    = 110,
        .baseDefense   = 85,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 3,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_RECKLESS, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Minotarumon"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Minotaur"),
        .height = 118,
        .weight = 3902,
        .description = COMPOUND_STRING(
            "The firm skin of Minotarumon more than\n"
            "makes up for its lack of speed and\n"
            "flexibility as it lets it handle ordinary\n"
            "attacks with no issue."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minotarumon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Minotarumon,
        .backPicSize = MON_COORDS_SIZE(32, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Minotarumon,
        .shinyPalette = gMonShinyPalette_Minotarumon,
        .iconSprite = gMonIcon_Minotarumon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_Minotarumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Minotarumon,
            gShinyOverworldPalette_Minotarumon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sMinotarumonLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_OCTOMON, CONDITIONS({IF_GENDER, MON_GENDERLESS})},
                                {EVO_LEVEL, 20, SPECIES_MOTHIM_SANDY, CONDITIONS({IF_GENDER, MON_GENDERLESS})}),
    },

    [SPECIES_MOJYAMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_FLUFFY, ABILITY_FUR_COAT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Mojyamon"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Yeti"),
        .height = 7,
        .weight = 343,
        .description = COMPOUND_STRING(
            "This Digimon wasn't originally thought\n"
            "to be real, merely just a hoax created\n"
            "for laughs. When Mojyamon was eventually\n"
            "discovered, it was found to be carefree."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mojyamon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Mojyamon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Mojyamon,
        .shinyPalette = gMonShinyPalette_Mojyamon,
        .iconSprite = gMonIcon_Mojyamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Mojyamon)
        OVERWORLD(
            sPicTable_Mojyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mojyamon,
            gShinyOverworldPalette_Mojyamon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sMojyamonLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_OGREMON, CONDITIONS({IF_GENDER, MON_GENDERLESS})},
                                {EVO_LEVEL, 20, SPECIES_MOTHIM_TRASH, CONDITIONS({IF_GENDER, MON_GENDERLESS})}),
    },

    [SPECIES_NANIMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_RECKLESS, ABILITY_LINGERING_AROMA },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Nanimon"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Oyaji"),
        .height = 35,
        .weight = 965,
        .description = COMPOUND_STRING(
            "Nanimon is a Digimon that loves\n"
            "alcohol. Regardless of its\n"
            "sobriety, it will bully the\n"
            "weakest Digimon."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nanimon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Nanimon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Nanimon,
        .shinyPalette = gMonShinyPalette_Nanimon,
        .iconSprite = gMonIcon_Nanimon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_Nanimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nanimon,
            gShinyOverworldPalette_Nanimon
        )
        .levelUpLearnset = sNanimonLevelUpLearnset,
        .teachableLearnset = sNanimonTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_OCTOMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_PICKPOCKET, ABILITY_DISGUISE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Octomon"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Pirate"),
        .height = 98,
        .weight = 2274,
        .description = COMPOUND_STRING(
            "As a result of its nasty habit of collecting\n"
            "things, Octomon is adourned with its many\n"
            "treasures. The Fujitisumon that live on its\n"
            "pot help develop its senses."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Octomon,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Octomon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Octomon,
        .shinyPalette = gMonShinyPalette_Octomon,
        .iconSprite = gMonIcon_Octomon,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_Octomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Octomon,
            gShinyOverworldPalette_Octomon
        )
        .levelUpLearnset = sOctomonLevelUpLearnset,
        .teachableLearnset = sOctomonTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_OGREMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_UNNERVE, ABILITY_DEFIANT, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ogremon"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Hunter"),
        .height = 90,
        .weight = 2487,
        .description = COMPOUND_STRING(
            "The data that makes up Ogremon is based\n"
            "on the Oni that comes from Eastern legends.\n"
            "Despite its violent temperament, it\n"
            "actually exhibits high intelligence."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ogremon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Ogremon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Ogremon,
        .shinyPalette = gMonShinyPalette_Ogremon,
        .iconSprite = gMonIcon_Ogremon,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_Ogremon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ogremon,
            gShinyOverworldPalette_Ogremon
        )
        .levelUpLearnset = sOgremonLevelUpLearnset,
        .teachableLearnset = sOgremonTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

#define MOTHIM_SPECIES_INFO                                                 \
    {                                                                       \
        .baseHP        = 70,                                                \
        .baseAttack    = 94,                                                \
        .baseDefense   = 50,                                                \
        .baseSpeed     = 66,                                                \
        .baseSpAttack  = 94,                                                \
        .baseSpDefense = 50,                                                \
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),                          \
        .catchRate = 45,                                                    \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,            \
        .evYield_Attack = 1,                                                \
        .evYield_SpAttack = 1,                                              \
        .genderRatio = MON_GENDERLESS,                                            \
        .eggCycles = 15,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                         \
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .speciesName = _("Mothim"),                                         \
        .cryId = CRY_MOTHIM,                                                \
        .natDexNum = NATIONAL_DEX_MOTHIM,                                   \
        .categoryName = _("Moth"),                                          \
        .height = 9,                                                        \
        .weight = 233,                                                      \
        .description = gMothimPokedexText,                                  \
        .pokemonScale = 338,                                                \
        .pokemonOffset = 8,                                                 \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
        .frontPic = gMonFrontPic_Mothim,                                    \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                            \
        .frontPicYOffset = 12,                                              \
        .frontAnimFrames = sAnims_Mothim,                                   \
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,                                 \
        .enemyMonElevation = 10,                                            \
        .backPic = gMonBackPic_Mothim,                                      \
        .backPicSize = MON_COORDS_SIZE(64, 56),                             \
        .backPicYOffset = 8,                                                \
        .backAnimId = BACK_ANIM_H_SHAKE,                                    \
        .palette = gMonPalette_Mothim,                                      \
        .shinyPalette = gMonShinyPalette_Mothim,                            \
        .iconSprite = gMonIcon_Mothim,                                      \
        .iconPalIndex = 0,                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                             \
        SHADOW(-1, 9, SHADOW_SIZE_S)                                        \
        FOOTPRINT(Mothim)                                                   \
        OVERWORLD(                                                          \
            sPicTable_Mothim,                                               \
            SIZE_32x32,                                                     \
            SHADOW_SIZE_M,                                                  \
            TRACKS_FOOT,                                                    \
            sAnimTable_Following,                                           \
            gOverworldPalette_Mothim,                                       \
            gShinyOverworldPalette_Mothim                                   \
        )                                                                   \
        .levelUpLearnset = sMothimLevelUpLearnset,                          \
        .teachableLearnset = sMothimTeachableLearnset,                      \
        .formSpeciesIdTable = sMothimFormSpeciesIdTable,                    \
    }

    [SPECIES_MOTHIM_PLANT] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_SANDY] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_TRASH] = MOTHIM_SPECIES_INFO,
#endif //P_FAMILY_MEKANORIMON

#if P_FAMILY_TESLAJELLYMON
    [SPECIES_TESLAJELLYMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 80,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STATIC, ABILITY_TRANSISTOR, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("TeslaJellmon"),
        .cryId = CRY_TESLAJELLYMON,
        .natDexNum = NATIONAL_DEX_TESLAJELLYMON,
        .categoryName = _("Jellyfish"),
        .height = 15,
        .weight = 217,
        .description = COMPOUND_STRING(
            "TeslaJellymons constant search for\n"
            "stimulation and pleasure leads it to\n"
            "absorb data from human death matches\n"
            "letting it be a strong CQC fighter."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Teslajellymon,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Teslajellymon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Teslajellymon,
        .shinyPalette = gMonShinyPalette_Teslajellymon,
        .iconSprite = gMonIcon_Teslajellymon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_TeslajellymonF,
        .shinyPaletteFemale = gMonShinyPalette_TeslajellymonF,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_L)
        FOOTPRINT(Teslajellymon)
        OVERWORLD(
            sPicTable_Teslajellymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Teslajellymon,
            gShinyOverworldPalette_Teslajellymon
        )
        OVERWORLD_FEMALE(
            sPicTable_TeslajellymonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTeslajellymonLevelUpLearnset,
        .teachableLearnset = sTeslajellymonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_RAREMON, CONDITIONS({IF_GENDER, MON_GENDERLESS})}),
    },

    [SPECIES_RAREMON] =
    {
        .baseHP        = 120,
        .baseAttack    = 45,
        .baseDefense   = 85,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_POISON),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INSOMNIA, ABILITY_POISON_POINT, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Raremon"),
        .cryId = CRY_RAREMON,
        .natDexNum = NATIONAL_DEX_RAREMON,
        .categoryName = _("Rotten"),
        .height = 62,
        .weight = 1655,
        .description = COMPOUND_STRING(
            "Raremons muscles have completely\n"
            "rotted, this is caused by its\n"
            "attempt to mechanise its body. It\n"
            "offensive capabilities are shallow"),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raremon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Raremon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Raremon,
        .shinyPalette = gMonShinyPalette_Raremon,
        .iconSprite = gMonIcon_Raremon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Raremon)
        OVERWORLD(
            sPicTable_Raremon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raremon,
            gShinyOverworldPalette_Raremon
        )
        .levelUpLearnset = sRaremonLevelUpLearnset,
        .teachableLearnset = sRaremonTeachableLearnset,
    },
#endif //P_FAMILY_TESLAJELLYMON

#if P_FAMILY_SUKAMON
    [SPECIES_SUKAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STENCH, ABILITY_LIQUID_OOZE, ABILITY_LINGERING_AROMA },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sukamon"),
        .cryId = CRY_SUKAMON,
        .natDexNum = NATIONAL_DEX_SUKAMON,
        .categoryName = _("Poop"),
        .height = 11,
        .weight = 123,
        .description = COMPOUND_STRING(
            "Born from scrap data, Sukamon is the\n"
            "digital embodiment of all waste. It is\n"
            "often found with a Chuumon as they\n"
            "both like to cause trouble to anyone."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sukamon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sukamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Sukamon,
        .shinyPalette = gMonShinyPalette_Sukamon,
        .iconSprite = gMonIcon_Sukamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SukamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Sukamon)
        OVERWORLD(
            sPicTable_Sukamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sukamon,
            gShinyOverworldPalette_Sukamon
        )
        OVERWORLD_FEMALE(
            sPicTable_SukamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sSukamonLevelUpLearnset,
        .teachableLearnset = sSukamonTeachableLearnset,
        .eggMoveLearnset = sSukamonEggMoveLearnset,
    },
#endif //P_FAMILY_SUKAMON

#if P_FAMILY_SHELLMON
    [SPECIES_SHELLMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_DAMP, ABILITY_SHELL_ARMOR, ABILITY_ANGER_SHELL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Shellmon"),
        .cryId = CRY_SHELLMON,
        .natDexNum = NATIONAL_DEX_SHELLMON,
        .categoryName = _("Hermit Crab"),
        .height = 41,
        .weight = 1369,
        .description = COMPOUND_STRING(
            "The body of a Shellmon is constantly\n"
            "growing forcing it to seek new homes\n"
            "constantly in its youth. Its low\n"
            "intellect causes it to be aggressive."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shellmon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Shellmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Shellmon,
        .shinyPalette = gMonShinyPalette_Shellmon,
        .iconSprite = gMonIcon_Shellmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_ShellmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(2, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Shellmon)
        OVERWORLD(
            sPicTable_Shellmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shellmon,
            gShinyOverworldPalette_Shellmon
        )
        OVERWORLD_FEMALE(
            sPicTable_ShellmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sShellmonLevelUpLearnset,
        .teachableLearnset = sShellmonTeachableLearnset,
        .eggMoveLearnset = sShellmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_STARMON}),
    },

    [SPECIES_STARMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 2,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_IRON_FIST, ABILITY_SCRAPPY, ABILITY_VICTORY_STAR },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Starmon"),
        .cryId = CRY_STARMON, 
        .natDexNum = NATIONAL_DEX_STARMON,
        .categoryName = _("Star"),
        .height = 20,
        .weight = 604,
        .description = COMPOUND_STRING(
            "Its eyes are burning with fighting spririt\n"
            "and are able to convey its will without\n"
            "saying a word. Starmon looks up to\n"
            "Leomon as its hero ."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Starmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Starmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Starmon,
        .shinyPalette = gMonShinyPalette_Starmon,
        .iconSprite = gMonIcon_Starmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_StarmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Starmon)
        OVERWORLD(
            sPicTable_Starmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Starmon,
            gShinyOverworldPalette_Starmon
        )
        OVERWORLD_FEMALE(
            sPicTable_StarmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sStarmonLevelUpLearnset,
        .teachableLearnset = sStarmonTeachableLearnset,
    },
#endif //P_FAMILY_SHELLMON

#if P_FAMILY_TORTOMON
    [SPECIES_TORTOMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_ROUGH_SKIN, ABILITY_SOLID_ROCK },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tortomon"),
        .cryId = CRY_TORTOMON,
        .natDexNum = NATIONAL_DEX_TORTOMON,
        .categoryName = _("Noise"),
        .height = 48,
        .weight = 2734,
        .description = COMPOUND_STRING(
            "Tortomon is far heavier than it looks\n"
            "causing it to create tremors with every step\n"
            "it takes. It has shrill metallic-sounding\n"
            "cry that many Digimon find offputting."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tortomon,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tortomon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Tortomon,
        .shinyPalette = gMonShinyPalette_Tortomon,
        .iconSprite = gMonIcon_Tortomon,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, -2, SHADOW_SIZE_S)
        FOOTPRINT(Tortomon)
        OVERWORLD(
            sPicTable_Tortomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tortomon,
            gShinyOverworldPalette_Tortomon
        )
        .levelUpLearnset = sTortomonLevelUpLearnset,
        .teachableLearnset = sTortomonTeachableLearnset,
        .eggMoveLearnset = sTortomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_UNIMON}),
    },

    [SPECIES_UNIMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FLYING, TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 3,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_STEADFAST, ABILITY_MOODY, ABILITY_CHILLING_NEIGH },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Unimon"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Unicorn"),
        .height = 53,
        .weight = 963,
        .description = COMPOUND_STRING(
            "Often found running around the world of\n"
            "the Computer Network, Unimonm is a rough\n"
            "Digimon that will stab anyone it\n"
            "encounters with its horn."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Unimon,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Unimon,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Unimon,
        .shinyPalette = gMonShinyPalette_Unimon,
        .iconSprite = gMonIcon_Unimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        OVERWORLD(
            sPicTable_Unimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Unimon,
            gShinyOverworldPalette_Unimon
        )
        .levelUpLearnset = sUnimonLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },

    [SPECIES_VEEDRAMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_GUARD_DOG },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Veedramon"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Ancient"),
        .height = 30,
        .weight = 784,
        .description = COMPOUND_STRING(
            "Cherrim takes this form on sunny days.\n"
            "Its faint scent entices bug Pokémon to it.\n"
            "It immediately closes its petals and\n"
            "becomes immobile once the sun hides."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Veedramon,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Veedramon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Veedramon,
        .shinyPalette = gMonShinyPalette_Veedramon,
        .iconSprite = gMonIcon_Veedramon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        .levelUpLearnset = sVeedramonLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },
#endif //P_FAMILY_TORTOMON

#if P_FAMILY_SHELLOS
    [SPECIES_GOLEMON] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STURDY, ABILITY_OBLIVIOUS, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Golemon"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Golem"),
        .height = 61,
        .weight = 1955,
        .description = COMPOUND_STRING(
            "The carvings on its body are believed\n"
            "to be ancient incantations spelling\n"
            "various words such as 'plague',\n"
            "'curse', and 'misfortune'."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golemon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Golemon,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Golemon,
        .shinyPalette = gMonShinyPalette_Golemon,
        .iconSprite = gMonIcon_Golemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_Golemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Golemon,
            gShinyOverworldPalette_Golemon
        )
        .levelUpLearnset = sGolemonLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_EAST}),
    },

    [SPECIES_SHELLOS_EAST] =
    {
        .baseHP        = 76,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 34,
        .baseSpAttack  = 57,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 73,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It's capable of spending a limited amount\n"
            "of time on land until their skin dries out.\n"
            "One theory suggests that living in cold\n"
            "seas causes Shellos to take on this form."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosEast,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosEast,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosEast,
        .shinyPalette = gMonShinyPalette_ShellosEast,
        .iconSprite = gMonIcon_ShellosEast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShellosEast,
            gShinyOverworldPalette_ShellosEast
        )
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_EAST}),
    },

    [SPECIES_GURURUMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WONDER_SKIN, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gururumon"),
        .cryId = CRY_GURURUMON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Canine"),
        .height = 55,
        .weight = 604,
        .description = COMPOUND_STRING(
            "Unlike Garurumon, who it shares a\n"
            "striking similiarity to, Gururumon\n"
            "likes to lurk in the dark and cause\n"
            "mischief for anyone who passes it by."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gururumon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Gururumon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gururumon,
        .shinyPalette = gMonShinyPalette_Gururumon,
        .iconSprite = gMonIcon_Gururumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_Gururumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gururumon,
            gShinyOverworldPalette_Gururumon
        )
        .levelUpLearnset = sGururumonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },

    [SPECIES_GASTRODON_EAST] =
    {
        .baseHP        = 111,
        .baseAttack    = 83,
        .baseDefense   = 68,
        .baseSpeed     = 39,
        .baseSpAttack  = 92,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GURURUMON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Found more often on land than in the sea.\n"
            "They normally live in rocky seashores, but\n"
            "when cloudy or rainy, they can sometimes\n"
            "be found on mountains, far from the sea."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonEast,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonEast,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonEast,
        .shinyPalette = gMonShinyPalette_GastrodonEast,
        .iconSprite = gMonIcon_GastrodonEast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GastrodonEast,
            gShinyOverworldPalette_GastrodonEast
        )
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_GUARDROMON
    [SPECIES_GUARDROMON] =
    {
        .baseHP        = 110,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 3,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_GUARD_DOG, ABILITY_ARENA_TRAP, ABILITY_STEAM_ENGINE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Guardromon"),
        .cryId = CRY_GUARDROMON,
        .natDexNum = NATIONAL_DEX_GUARDROMON,
        .categoryName = _("Mecha"),
        .height = 39,
        .weight = 2845,
        .description = COMPOUND_STRING(
            "The only command that Guardromon knows\n"
            "is 'Defend' making it one of the most\n"
            "reliable guardians in the Digital World.\n"
            "It is very easy to hack it though."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guardromon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Guardromon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Guardromon,
        .shinyPalette = gMonShinyPalette_Guardromon,
        .iconSprite = gMonIcon_Guardromon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Guardromon)
        OVERWORLD(
            sPicTable_Guardromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Guardromon,
            gShinyOverworldPalette_Guardromon
        )
        .levelUpLearnset = sGuardromonLevelUpLearnset,
        .teachableLearnset = sGuardromonTeachableLearnset,
        .eggMoveLearnset = sGuardromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_HONEYBEEMON}),
    },

    [SPECIES_HONEYBEEMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Honeybeemon"),
        .cryId = CRY_HONEYBEEMON,
        .natDexNum = NATIONAL_DEX_HONEYBEEMON,
        .categoryName = _("Knowledge"),
        .height = 9,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It likes to play with its enemies by\n"
            "circling behind them and stinging them.\n"
            "Its small size means Honeybeemon\n"
            "doesn't deal much damage."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honeybeemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Honeybeemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Honeybeemon,
        .shinyPalette = gMonShinyPalette_Honeybeemon,
        .iconSprite = gMonIcon_Honeybeemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Honeybeemon)
        OVERWORLD(
            sPicTable_Honeybeemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Honeybeemon,
            gShinyOverworldPalette_Honeybeemon
        )
        .levelUpLearnset = sHoneybeemonLevelUpLearnset,
        .teachableLearnset = sHoneybeemonTeachableLearnset,
    },
#endif //P_FAMILY_GUARDROMON

#if P_FAMILY_HYOGAMON
    [SPECIES_HYOGAMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 2,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hyogamon"),
        .cryId = CRY_HYOGAMON,
        .natDexNum = NATIONAL_DEX_HYOGAMON,
        .categoryName = _("Ogre"),
        .height = 28,
        .weight = 875,
        .description = COMPOUND_STRING(
            "As a species of Ogremon, it is\n"
            "incredibly territorial and will fly\n"
            "into a rage when it notices\n"
            "intruders on its icy home"),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hyogamon,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Hyogamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hyogamon,
        .shinyPalette = gMonShinyPalette_Hyogamon,
        .iconSprite = gMonIcon_Hyogamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Hyogamon)
        OVERWORLD(
            sPicTable_Hyogamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hyogamon,
            gShinyOverworldPalette_Hyogamon
        )
        .levelUpLearnset = sHyogamonLevelUpLearnset,
        .teachableLearnset = sHyogamonTeachableLearnset,
        .eggMoveLearnset = sHyogamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ICEDEVIMON, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD})}),
    },

    [SPECIES_ICEDEVIMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 130,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ICE_BODY, ABILITY_INTIMIDATE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("IceDevimon"),
        .cryId = CRY_ICEDEVIMON,
        .natDexNum = NATIONAL_DEX_ICEDEVIMON,
        .categoryName = _("Devil"),
        .height = 30,
        .weight = 908,
        .description = COMPOUND_STRING(
            "Using the wings on its back, IceDevimon\n"
            "wraps up any enemies it encounters and\n"
            "freeezes them. It has an especially\n"
            "twisted desire to harm others."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Icedevimon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Icedevimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Icedevimon,
        .shinyPalette = gMonShinyPalette_Icedevimon,
        .iconSprite = gMonIcon_Icedevimon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Icedevimon)
        OVERWORLD(
            sPicTable_Icedevimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Icedevimon,
            gShinyOverworldPalette_Icedevimon
        )
        .levelUpLearnset = sIcedevimonLevelUpLearnset,
        .teachableLearnset = sIcedevimonTeachableLearnset,
        .formSpeciesIdTable = sIcedevimonFormSpeciesIdTable,
        .formChangeTable = sIcedevimonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ICEDEVIMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 60,
        .expYield = 203,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Icedevimon"),
        .cryId = CRY_ICEDEVIMON_MEGA,
        .natDexNum = NATIONAL_DEX_ICEDEVIMON,
        .categoryName = _("Rabbit"),
        .height = 13,
        .weight = 283,
        .description = COMPOUND_STRING(
            "Mega Evolution awakens its combative\n"
            "instincts. It has shed any fur that got in\n"
            "the way of its attacks.\n"
            "crescent."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IcedevimonMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IcedevimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_IcedevimonMega,
        .shinyPalette = gMonShinyPalette_IcedevimonMega,
        .iconSprite = gMonIcon_IcedevimonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Icedevimon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_IcedevimonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IcedevimonMega,
            gShinyOverworldPalette_IcedevimonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sIcedevimonLevelUpLearnset,
        .teachableLearnset = sIcedevimonTeachableLearnset,
        .formSpeciesIdTable = sIcedevimonFormSpeciesIdTable,
        .formChangeTable = sIcedevimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HYOGAMON

#if P_FAMILY_ICEMON
    [SPECIES_ICEMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 105,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ICE_BODY, ABILITY_STURDY, ABILITY_KEEN_EYE }, // Cryomancer
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Icemon"),
        .cryId = CRY_ICEMON,
        .natDexNum = NATIONAL_DEX_ICEMON,
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 756,
        .description = COMPOUND_STRING(
            "It is widely debated if Icemon is a\n"
            "mutation or evolution of Gotsumon.\n"
            "It has the same friendly demeanor\n"
            "that lets it befriend anyone."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Icemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Icemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Icemon,
        .shinyPalette = gMonShinyPalette_Icemon,
        .iconSprite = gMonIcon_Icemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Icemon)
        OVERWORLD(
            sPicTable_Icemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Icemon,
            gShinyOverworldPalette_Icemon
        )
        .levelUpLearnset = sIcemonLevelUpLearnset,
        .teachableLearnset = sIcemonTeachableLearnset,
        .eggMoveLearnset = sIcemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_NINJAMON}),
    },

    [SPECIES_NINJAMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EMERGENCY_EXIT, ABILITY_DISGUISE, ABILITY_NEUTRALIZING_GAS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ninjamon"),
        .cryId = CRY_NINJAMON,
        .natDexNum = NATIONAL_DEX_NINJAMON,
        .categoryName = _("Ninja"),
        .height = 11,
        .weight = 438,
        .description = COMPOUND_STRING(
            "As a master of espionage, it is near\n"
            "impossible to spot when it is hiding.\n"
            "Ninjamon has a friendly rivalry with\n"
            "Deputymon despite their differences."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ninjamon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
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
        .backPic = gMonBackPic_Ninjamon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Ninjamon,
        .shinyPalette = gMonShinyPalette_Ninjamon,
        .iconSprite = gMonIcon_Ninjamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Ninjamon)
        OVERWORLD(
            sPicTable_Ninjamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ninjamon,
            gShinyOverworldPalette_Ninjamon
        )
        .levelUpLearnset = sNinjamonLevelUpLearnset,
        .teachableLearnset = sNinjamonTeachableLearnset,
    },
#endif //P_FAMILY_ICEMON

#if P_FAMILY_JUNGLEMOJYAMON
    [SPECIES_JUNGLEMOJYAMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 2,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_ANGER_POINT, ABILITY_GORILLA_TACTICS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("JungMojyamon"),
        .cryId = CRY_JUNGLEMOJYAMON,
        .natDexNum = NATIONAL_DEX_JUNGLEMOJYAMON,
        .categoryName = _("Yeti"),
        .height = 7,
        .weight = 343,
        .description = COMPOUND_STRING(
            "The land that is inhabits is considered\n"
            "holy territory that it will defend to\n"
            "its last breath. It is deeply connected\n"
            "to nature giving JungleMojyamon powers."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Junglemojyamon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Junglemojyamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Junglemojyamon,
        .shinyPalette = gMonShinyPalette_Junglemojyamon,
        .iconSprite = gMonIcon_Junglemojyamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 0, SHADOW_SIZE_M)
        FOOTPRINT(Junglemojyamon)
        OVERWORLD(
            sPicTable_Junglemojyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Junglemojyamon,
            gShinyOverworldPalette_Junglemojyamon
        )
        .levelUpLearnset = sJunglemojyamonLevelUpLearnset,
        .teachableLearnset = sJunglemojyamonTeachableLearnset,
        .eggMoveLearnset = sJunglemojyamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SHELLNUMEMON}),
    },

    [SPECIES_SHELLNUMEMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 125,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STENCH, ABILITY_SHELL_ARMOR, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("ShellNumemon"),
        .cryId = CRY_SHELLNUMEMON,
        .natDexNum = NATIONAL_DEX_SHELLNUMEMON,
        .categoryName = _("Mollusk"),
        .height = 8,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Likely one of the only Numemon species\n"
            "to display intelligence, ShellNumemon\n"
            "will find a shell to protect themself.\n"
            "In turn, it is a greater coward."),
        .pokemonScale = 305,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shellnumemon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Shellnumemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Shellnumemon,
        .shinyPalette = gMonShinyPalette_Shellnumemon,
        .iconSprite = gMonIcon_Shellnumemon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Shellnumemon)
        OVERWORLD(
            sPicTable_Shellnumemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shellnumemon,
            gShinyOverworldPalette_Shellnumemon
        )
        .levelUpLearnset = sShellnumemonLevelUpLearnset,
        .teachableLearnset = sShellnumemonTeachableLearnset,
    },
#endif //P_FAMILY_JUNGLEMOJYAMON

#if P_FAMILY_KIWIMON
    [SPECIES_KIWIMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_QUICK_FEET }, // Grounded
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kiwimon"),
        .cryId = CRY_KIWIMON,
        .natDexNum = NATIONAL_DEX_KIWIMON,
        .categoryName = _("Kiwi"),
        .height = 11,
        .weight = 381,
        .description = COMPOUND_STRING(
            "A rare digimon that was almost hunted\n"
            "to extinction with the spread of the\n"
            "internet. Although it is a flying\n"
            "type, it has no wings for flight."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kiwimon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Kiwimon,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Kiwimon,
        .shinyPalette = gMonShinyPalette_Kiwimon,
        .iconSprite = gMonIcon_Kiwimon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Kiwimon)
        OVERWORLD(
            sPicTable_Kiwimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kiwimon,
            gShinyOverworldPalette_Kiwimon
        )
        .levelUpLearnset = sKiwimonLevelUpLearnset,
        .teachableLearnset = sKiwimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_MORISHELLMON}),
    },

    [SPECIES_MORISHELLMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 95,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_GOOEY, ABILITY_ANGER_SHELL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("MoriShellmon"),
        .cryId = CRY_MORISHELLMON,
        .natDexNum = NATIONAL_DEX_MORISHELLMON,
        .categoryName = _("Hermit Crab"),
        .height = 50,
        .weight = 1953,
        .description = COMPOUND_STRING(
            "With the emergence of MoriShellmon, it\n"
            "is believe that Shellmon species change\n"
            "size and colour depending on the\n"
            "habitat that they live in."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Morishellmon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Morishellmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Morishellmon,
        .shinyPalette = gMonShinyPalette_Morishellmon,
        .iconSprite = gMonIcon_Morishellmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 12, SHADOW_SIZE_M)
        FOOTPRINT(Morishellmon)
        OVERWORLD(
            sPicTable_Morishellmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Morishellmon,
            gShinyOverworldPalette_Morishellmon
        )
        .levelUpLearnset = sMorishellmonLevelUpLearnset,
        .teachableLearnset = sMorishellmonTeachableLearnset,
    },
#endif //P_FAMILY_KIWIMON

#if P_FAMILY_MUSYAMON
    [SPECIES_MUSYAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 110,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 1,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_HYPER_CUTTER, ABILITY_DOWNLOAD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Musyamon"),
        .cryId = CRY_MUSYAMON,
        .natDexNum = NATIONAL_DEX_MUSYAMON,
        .categoryName = _("Samurai"),
        .height = 24,
        .weight = 855,
        .description = COMPOUND_STRING(
            "Musyamon was built from the data of an\n"
            "overseas video game. It lives to for\n"
            "endless battle giving its rugged\n"
            "look and rough demeanor."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Musyamon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Musyamon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Musyamon,
        .shinyPalette = gMonShinyPalette_Musyamon,
        .iconSprite = gMonIcon_Musyamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Musyamon)
        OVERWORLD(
            sPicTable_Musyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Musyamon,
            gShinyOverworldPalette_Musyamon
        )
        .levelUpLearnset = sMusyamonLevelUpLearnset,
        .teachableLearnset = sMusyamonTeachableLearnset,
        .eggMoveLearnset = sMusyamonEggMoveLearnset,
    },
#endif //P_FAMILY_MUSYAMON

#if P_FAMILY_NISEDRIMOGEMON
    [SPECIES_NISEDRIMOGEMON] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 3,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_QUEENLY_MAJESTY, ABILITY_SAND_VEIL, ABILITY_NONE }, // Power Drill
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("NiseDrimomon"),
        .cryId = CRY_NISEDRIMOGEMON,
        .natDexNum = NATIONAL_DEX_NISEDRIMOGEMON,
        .categoryName = _("Mole"),
        .height = 23,
        .weight = 913,
        .description = COMPOUND_STRING(
            "While it is a distinct Drimogemon\n"
            "species, the only discernible\n"
            "difference is the suspicious mustache\n"
            "that NiseDrimogemon sports."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nisedrimogemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Nisedrimogemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Nisedrimogemon,
        .shinyPalette = gMonShinyPalette_Nisedrimogemon,
        .iconSprite = gMonIcon_Nisedrimogemon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Nisedrimogemon)
        OVERWORLD(
            sPicTable_Nisedrimogemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nisedrimogemon,
            gShinyOverworldPalette_Nisedrimogemon
        )
        .levelUpLearnset = sNisedrimogemonLevelUpLearnset,
        .teachableLearnset = sNisedrimogemonTeachableLearnset,
        .eggMoveLearnset = sNisedrimogemonEggMoveLearnset,
    },
#endif //P_FAMILY_NISEDRIMOGEMON

#if P_FAMILY_ORCAMON
    [SPECIES_ORCAMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP = 1,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_OVERCOAT, ABILITY_WIMP_OUT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Orcamon"),
        .cryId = CRY_ORCAMON,
        .natDexNum = NATIONAL_DEX_ORCAMON,
        .categoryName = _("Sincerity"),
        .height = 19,
        .weight = 784,
        .description = COMPOUND_STRING(
            "Although Orcamon is an overly cautious\n"
            "Digimon, it is still very reliable with\n"
            "many seeking it out for advice. It is\n"
            "incredibly swift on both land and water"),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Orcamon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Orcamon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Orcamon,
        .shinyPalette = gMonShinyPalette_Orcamon,
        .iconSprite = gMonIcon_Orcamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_OrcamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_OrcamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Orcamon)
        OVERWORLD(
            sPicTable_Orcamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Orcamon,
            gShinyOverworldPalette_Orcamon
        )
        OVERWORLD_FEMALE(
            sPicTable_OrcamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sOrcamonLevelUpLearnset,
        .teachableLearnset = sOrcamonTeachableLearnset,
        .eggMoveLearnset = sOrcamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_PIDMON}),
    },

    [SPECIES_PIDMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 2,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PASTEL_VEIL, ABILITY_SERENE_GRACE, ABILITY_PURIFYING_SALT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pidmon"),
        .cryId = CRY_PIDMON,
        .natDexNum = NATIONAL_DEX_PIDMON,
        .categoryName = _("Virtous"),
        .height = 27,
        .weight = 791,
        .description = COMPOUND_STRING(
            "Although Pidmons strength is comparable\n"
            "to Angemons, it is ranked lower. It\n"
            "holds a deep-seated hatred for\n"
            "evil and will fight it at all costs."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pidmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pidmon,
        .shinyPalette = gMonShinyPalette_Pidmon,
        .iconSprite = gMonIcon_Pidmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PidmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PidmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Pidmon)
        OVERWORLD(
            sPicTable_Pidmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pidmon,
            gShinyOverworldPalette_Pidmon
        )
        OVERWORLD_FEMALE(
            sPicTable_PidmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPidmonLevelUpLearnset,
        .teachableLearnset = sPidmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_PLATINUMSUKAMON}),
    },

    [SPECIES_PLATINUMSUKAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 150,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_POISON, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STENCH, ABILITY_LIQUID_OOZE, ABILITY_ROUGH_SKIN }, // EXP Boost
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("PlatSukamon"),
        .cryId = CRY_PLATINUMSUKAMON,
        .natDexNum = NATIONAL_DEX_PLATINUMSUKAMON,
        .categoryName = _("Poop"),
        .height = 11,
        .weight = 743,
        .description = COMPOUND_STRING(
            "The absorption of data from minor\n"
            "metals is what gave PlatinumSukamon its\n"
            "luxurious appearance. Despite its ugly\n"
            "shape, it is said to bring good luck."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Platinumsukamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Platinumsukamon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Platinumsukamon,
        .shinyPalette = gMonShinyPalette_Platinumsukamon,
        .iconSprite = gMonIcon_Platinumsukamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PlatinumsukamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Platinumsukamon)
        OVERWORLD(
            sPicTable_Platinumsukamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Platinumsukamon,
            gShinyOverworldPalette_Platinumsukamon
        )
        OVERWORLD_FEMALE(
            sPicTable_PlatinumsukamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPlatinumsukamonLevelUpLearnset,
        .teachableLearnset = sPlatinumsukamonTeachableLearnset,
        .formSpeciesIdTable = sPlatinumsukamonFormSpeciesIdTable,
        .formChangeTable = sPlatinumsukamonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PLATINUMSUKAMON_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("PlatSukamon"),
        .cryId = CRY_PLATINUMSUKAMON_MEGA,
        .natDexNum = NATIONAL_DEX_PLATINUMSUKAMON,
        .categoryName = _("Poop"),
        .height = 11,
        .weight = 123,
        .description = COMPOUND_STRING(
            "Excess energy melted its arms and wings\n"
            "into giant scythes, sending it mad with\n"
            "rage. It swings its scythes wildly and\n"
            "slices the ground to pieces."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_PlatinumsukamonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PlatinumsukamonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_PlatinumsukamonMega,
        .shinyPalette = gMonShinyPalette_PlatinumsukamonMega,
        .iconSprite = gMonIcon_PlatinumsukamonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Platinumsukamon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_PlatinumsukamonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PlatinumsukamonMega,
            gShinyOverworldPalette_PlatinumsukamonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPlatinumsukamonLevelUpLearnset,
        .teachableLearnset = sPlatinumsukamonTeachableLearnset,
        .formSpeciesIdTable = sPlatinumsukamonFormSpeciesIdTable,
        .formChangeTable = sPlatinumsukamonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ORCAMON

#if P_FAMILY_REDVEGIEMON
    [SPECIES_REDVEGIEMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 90,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIRE),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HARVEST, ABILITY_FLASH_FIRE, ABILITY_PRANKSTER }, // Chili Body
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("RedVegiemon"),
        .cryId = CRY_REDVEGIEMON,
        .natDexNum = NATIONAL_DEX_REDVEGIEMON,
        .categoryName = _("Ripe"),
        .height = 10,
        .weight = 252,
        .description = COMPOUND_STRING(
            "The red body of RedVegiemon indicates\n"
            "that it is fully ripe. Rather than the\n"
            "sour taste of Vegiemon, RedVegiemons\n"
            "body is a lot spicier."),
        .pokemonScale = 365,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Redvegiemon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Redvegiemon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Redvegiemon,
        .shinyPalette = gMonShinyPalette_Redvegiemon,
        .iconSprite = gMonIcon_Redvegiemon,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Redvegiemon)
        OVERWORLD(
            sPicTable_Redvegiemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Redvegiemon,
            gShinyOverworldPalette_Redvegiemon
        )
        .levelUpLearnset = sRedvegiemonLevelUpLearnset,
        .teachableLearnset = sRedvegiemonTeachableLearnset,
        .eggMoveLearnset = sRedvegiemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SABERDRAMON, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD},{IF_NOT_TIME, TIME_NIGHT})}),
    },

    [SPECIES_SABERDRAMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DARK),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_GALE_WINGS, ABILITY_DARK_AURA },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Saberdramon"),
        .cryId = CRY_SABERDRAMON,
        .natDexNum = NATIONAL_DEX_SABERDRAMON,
        .categoryName = _("Phoenix"),
        .height = 60,
        .weight = 678,
        .description = COMPOUND_STRING(
            "The rough temperament of Saberdramon\n"
            "makes it tough to approach. It will\n"
            "continously divebomb anyone that it\n"
            "percieves as a threat."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Saberdramon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Saberdramon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Saberdramon,
        .shinyPalette = gMonShinyPalette_Saberdramon,
        .iconSprite = gMonIcon_Saberdramon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Saberdramon)
        OVERWORLD(
            sPicTable_Saberdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Saberdramon,
            gShinyOverworldPalette_Saberdramon
        )
        .levelUpLearnset = sSaberdramonLevelUpLearnset,
        .teachableLearnset = sSaberdramonTeachableLearnset,
        .formSpeciesIdTable = sSaberdramonFormSpeciesIdTable,
        .formChangeTable = sSaberdramonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SABERDRAMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 219,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Saberdramon"),
        .cryId = CRY_SABERDRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_SABERDRAMON,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "It readies itself to face its enemies by\n"
            "focusing its mental energies. Its fighting\n"
            "style can be summed up in a single word:\n"
            "heartless."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SaberdramonMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SaberdramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_SaberdramonMega,
        .shinyPalette = gMonShinyPalette_SaberdramonMega,
        .iconSprite = gMonIcon_SaberdramonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Saberdramon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SaberdramonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SaberdramonMega,
            gShinyOverworldPalette_SaberdramonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSaberdramonLevelUpLearnset,
        .teachableLearnset = sSaberdramonTeachableLearnset,
        .formSpeciesIdTable = sSaberdramonFormSpeciesIdTable,
        .formChangeTable = sSaberdramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_REDVEGIEMON

#if P_FAMILY_SANDYANMAMON
    [SPECIES_SANDYANMAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LEVITATE, ABILITY_COMPOUND_EYES, ABILITY_SAND_STREAM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("SandYanmamon"),
        .cryId = CRY_SANDYANMAMON,
        .natDexNum = NATIONAL_DEX_SANDYANMAMON,
        .categoryName = _("Dragonfly"),
        .height = 13,
        .weight = 455,
        .description = COMPOUND_STRING(
            "Unlike Yanmamon, SandYanmamon has a\n"
            "carefree personality. This doesn't stop\n"
            "it from being fiercely defensive about\n"
            "the territory it inhabits."),
        .pokemonScale = 366,
        .pokemonOffset = 11,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandyanmamon,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Sandyanmamon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sandyanmamon,
        .shinyPalette = gMonShinyPalette_Sandyanmamon,
        .iconSprite = gMonIcon_Sandyanmamon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_SandyanmamonF,
        .shinyPaletteFemale = gMonShinyPalette_SandyanmamonF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_SandyanmamonF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -1, SHADOW_SIZE_L)
        FOOTPRINT(Sandyanmamon)
        OVERWORLD(
            sPicTable_Sandyanmamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sandyanmamon,
            gShinyOverworldPalette_Sandyanmamon
        )
        OVERWORLD_FEMALE(
            sPicTable_SandyanmamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sSandyanmamonLevelUpLearnset,
        .teachableLearnset = sSandyanmamonTeachableLearnset,
        .eggMoveLearnset = sSandyanmamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SHIMAUNIMON}),
    },

    [SPECIES_SHIMAUNIMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_MOODY, ABILITY_GRIM_NEIGH },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("ShimaUnimon"),
        .cryId = CRY_SHIMAUNIMON,
        .natDexNum = NATIONAL_DEX_SHIMAUNIMON,
        .categoryName = _("Zebra"),
        .height = 42,
        .weight = 687,
        .description = COMPOUND_STRING(
            "As the unicorn data is more pronounced\n"
            "in ShimaUnimon, it lacks the wings that\n"
            "can be found on Unimon. It instead\n"
            "boasts better longs and a sharper horn."),
        .pokemonScale = 261,
        .pokemonOffset = 2,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Shimaunimon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Shimaunimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Shimaunimon,
        .shinyPalette = gMonShinyPalette_Shimaunimon,
        .iconSprite = gMonIcon_Shimaunimon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_ShimaunimonF,
        .shinyPaletteFemale = gMonShinyPalette_ShimaunimonF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_ShimaunimonF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Shimaunimon)
        OVERWORLD(
            sPicTable_Shimaunimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shimaunimon,
            gShinyOverworldPalette_Shimaunimon
        )
        OVERWORLD_PAL_FEMALE(
            gOverworldPalette_ShimaunimonF,
            gShinyOverworldPalette_ShimaunimonF
        )
        .levelUpLearnset = sShimaunimonLevelUpLearnset,
        .teachableLearnset = sShimaunimonTeachableLearnset,
    },
#endif //P_FAMILY_SANDYANMAMON

#if P_FAMILY_SNIMON
    [SPECIES_SNIMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 120,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Attack = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SHARPNESS, ABILITY_SWARM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Snimon"),
        .cryId = CRY_SNIMON,
        .natDexNum = NATIONAL_DEX_SNIMON,
        .categoryName = _("Mantodea"),
        .height = 55,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Due its unfeeling personality, Snimon\n"
            "is feared by even Vaccine and Data\n"
            "Digimon. It lacks eyes, instead having\n"
            "antennae that act as sensors."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snimon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Snimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Snimon,
        .shinyPalette = gMonShinyPalette_Snimon,
        .iconSprite = gMonIcon_Snimon,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Snimon)
        OVERWORLD(
            sPicTable_Snimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snimon,
            gShinyOverworldPalette_Snimon
        )
        .levelUpLearnset = sSnimonLevelUpLearnset,
        .teachableLearnset = sSnimonTeachableLearnset,
        .eggMoveLearnset = sSnimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_SOULMON}),
    },

    [SPECIES_SOULMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST, TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_LEVITATE, ABILITY_MAGICIAN, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Soulmon"),
        .cryId = CRY_SOULMON,
        .natDexNum = NATIONAL_DEX_SOULMON,
        .categoryName = _("Magician"),
        .height = 17,
        .weight = 115,
        .description = COMPOUND_STRING(
            "If a Bakemon takes in too much fantasy\n"
            "mage data, they will end up becoming\n"
            "Soulmon. Its magic power comes its\n"
            "hat, letting it use curses and magic."),
        .pokemonScale = 272,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Soulmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Soulmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Soulmon,
        .shinyPalette = gMonShinyPalette_Soulmon,
        .iconSprite = gMonIcon_Soulmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Soulmon)
        OVERWORLD(
            sPicTable_Soulmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Soulmon,
            gShinyOverworldPalette_Soulmon
        )
        .levelUpLearnset = sSoulmonLevelUpLearnset,
        .teachableLearnset = sSoulmonTeachableLearnset,
    },
#endif //P_FAMILY_SNIMON

#if P_FAMILY_TANKMON
    [SPECIES_TANKMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BULLETPROOF, ABILITY_DAUNTLESS_SHIELD, ABILITY_MOTOR_DRIVE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tankmon"),
        .cryId = CRY_TANKMON,
        .natDexNum = NATIONAL_DEX_TANKMON,
        .categoryName = _("Mercenary"),
        .height = 31,
        .weight = 3639,
        .description = COMPOUND_STRING(
            "Tankmon holds no allegiences except to\n"
            "the highest bidder. It has overwhelming\n"
            "firepower for a champion, often\n"
            "dominating any battlefields."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tankmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Tankmon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tankmon,
        .shinyPalette = gMonShinyPalette_Tankmon,
        .iconSprite = gMonIcon_Tankmon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TankmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_TankmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Tankmon)
        OVERWORLD(
            sPicTable_Tankmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tankmon,
            gShinyOverworldPalette_Tankmon
        )
        OVERWORLD_FEMALE(
            sPicTable_TankmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sTankmonLevelUpLearnset,
        .teachableLearnset = sTankmonTeachableLearnset,
        .eggMoveLearnset = sTankmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_THUNDERBALLMON}),
    },

    [SPECIES_THUNDERBALLMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Speed = 1,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_LIGHTNING_ROD, ABILITY_ELECTRIC_SURGE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("ThnderBllmon"),
        .cryId = CRY_THUNDERBALLMON,
        .natDexNum = NATIONAL_DEX_THUNDERBALLMON,
        .categoryName = _("Dynamo"),
        .height = 2,
        .weight = 43,
        .description = COMPOUND_STRING(
            "It is common belief that ThunderBallmon\n"
            "is a mutatation of the Mamemon-species.\n"
            "It is constantly clad in electricty and\n"
            "randomly discharges lightning."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Thunderballmon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Thunderballmon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Thunderballmon,
        .shinyPalette = gMonShinyPalette_Thunderballmon,
        .iconSprite = gMonIcon_Thunderballmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ThunderballmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_ThunderballmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Thunderballmon)
        OVERWORLD(
            sPicTable_Thunderballmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Thunderballmon,
            gShinyOverworldPalette_Thunderballmon
        )
        OVERWORLD_FEMALE(
            sPicTable_ThunderballmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sThunderballmonLevelUpLearnset,
        .teachableLearnset = sThunderballmonTeachableLearnset,
    },
#endif //P_FAMILY_TANKMON

#if P_FAMILY_MUDFRIGIMON
    [SPECIES_MUDFRIGIMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpDefense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_THICK_FAT, ABILITY_SOLID_ROCK, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("MudFrigimon"),
        .cryId = CRY_MUDFRIGIMON,
        .natDexNum = NATIONAL_DEX_MUDFRIGIMON,
        .categoryName = _("Earth"),
        .height = 20,
        .weight = 685,
        .description = COMPOUND_STRING(
            "A gentle digimon, MudFrigimon will try\n"
            "befriending anyone it happens upon. It\n"
            "will only exhibit its power when push\n"
            "comes to shove."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mudfrigimon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Mudfrigimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Mudfrigimon,
        .shinyPalette = gMonShinyPalette_Mudfrigimon,
        .iconSprite = gMonIcon_Mudfrigimon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mudfrigimon)
        OVERWORLD(
            sPicTable_Mudfrigimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mudfrigimon,
            gShinyOverworldPalette_Mudfrigimon
        )
        .levelUpLearnset = sMudfrigimonLevelUpLearnset,
        .teachableLearnset = sMudfrigimonTeachableLearnset,
        .eggMoveLearnset = sMudfrigimonEggMoveLearnset,
    },
#endif //P_FAMILY_MUDFRIGIMON

#if P_FAMILY_WIZARDMON
    [SPECIES_WIZARDMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_SpAttack = 3,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_BLAZE, ABILITY_FOREWARN, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wizardmon"),
        .cryId = CRY_WIZARDMON,
        .natDexNum = NATIONAL_DEX_WIZARDMON,
        .categoryName = _("Witchelny"),
        .height = 17,
        .weight = 462,
        .description = COMPOUND_STRING(
            "It originally comes from a different\n"
            "Digital World called Witchelny. It is a\n"
            "master of fire and earth sorcery which\n"
            "it likes to show off with its pranks."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wizardmon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
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
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Wizardmon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Wizardmon,
        .shinyPalette = gMonShinyPalette_Wizardmon,
        .iconSprite = gMonIcon_Wizardmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WizardmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 40),
        .backPicFemale = gMonBackPic_WizardmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Wizardmon)
        OVERWORLD(
            sPicTable_Wizardmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wizardmon,
            gShinyOverworldPalette_Wizardmon
        )
        OVERWORLD_FEMALE(
            sPicTable_WizardmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sWizardmonLevelUpLearnset,
        .teachableLearnset = sWizardmonTeachableLearnset,
        .eggMoveLearnset = sWizardmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_WOODMON}),
    },

    [SPECIES_WOODMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 45,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 4,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_STURDY, ABILITY_PROTOSYNTHESIS, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Woodmon"),
        .cryId = CRY_WOODMON,
        .natDexNum = NATIONAL_DEX_WOODMON,
        .categoryName = _("Trunk"),
        .height = 30,
        .weight = 1053,
        .description = COMPOUND_STRING(
            "Woodmon disguise themselves as normal\n"
            "trees so that when Digimon pass\n"
            "them, they can grab them with ease\n"
            "and drain all their life energy."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Woodmon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Woodmon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Woodmon,
        .shinyPalette = gMonShinyPalette_Woodmon,
        .iconSprite = gMonIcon_Woodmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WoodmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_WoodmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Woodmon)
        OVERWORLD(
            sPicTable_Woodmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Woodmon,
            gShinyOverworldPalette_Woodmon
        )
        OVERWORLD_FEMALE(
            sPicTable_WoodmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sWoodmonLevelUpLearnset,
        .teachableLearnset = sWoodmonTeachableLearnset,
    },
#endif //P_FAMILY_WIZARDMON

#if P_FAMILY_YANMAMON
    [SPECIES_YANMAMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 1,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_TINTED_LENS, ABILITY_COMPOUND_EYES, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Yanmamon"),
        .cryId = CRY_YANMAMON,
        .natDexNum = NATIONAL_DEX_YANMAMON,
        .categoryName = _("Dragonfly"),
        .height = 13,
        .weight = 491,
        .description = COMPOUND_STRING(
            "The body of Yanmamon is covered in a\n"
            "tough carapace which is as hard as\n"
            "Greymons head. When it is hunting, it\n"
            "will strafe side to side rapidly."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yanmamon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Yanmamon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Yanmamon,
        .shinyPalette = gMonShinyPalette_Yanmamon,
        .iconSprite = gMonIcon_Yanmamon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_YanmamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_YanmamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Yanmamon)
        OVERWORLD(
            sPicTable_Yanmamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yanmamon,
            gShinyOverworldPalette_Yanmamon
        )
        OVERWORLD_FEMALE(
            sPicTable_YanmamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sYanmamonLevelUpLearnset,
        .teachableLearnset = sYanmamonTeachableLearnset,
        .eggMoveLearnset = sYanmamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_WEEDMON}),
    },

    [SPECIES_WEEDMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 115,
        .expYield = 150,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_POISON_HEAL, ABILITY_NATURAL_CURE }, // HIGH HAZE
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Weedmon"),
        .cryId = CRY_WEEDMON,
        .natDexNum = NATIONAL_DEX_WEEDMON,
        .categoryName = _("Weed"),
        .height = 9,
        .weight = 242,
        .description = COMPOUND_STRING(
            "It is said that Weedmon has the\n"
            "vitality of a weed allowing it persist\n"
            "regardless of who tries to cut it down.\n"
            "It is highly regarded by adult tamers"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Weedmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Weedmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Weedmon,
        .shinyPalette = gMonShinyPalette_Weedmon,
        .iconSprite = gMonIcon_Weedmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WeedmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Weedmon)
        OVERWORLD(
            sPicTable_Weedmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Weedmon,
            gShinyOverworldPalette_Weedmon
        )
        OVERWORLD_FEMALE(
            sPicTable_WeedmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sWeedmonLevelUpLearnset,
        .teachableLearnset = sWeedmonTeachableLearnset,
        .formSpeciesIdTable = sWeedmonFormSpeciesIdTable,
        .formChangeTable = sWeedmonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_WEEDMON_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ICE),
        .catchRate = 60,
        .expYield = 208,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Weedmon"),
        .cryId = CRY_WEEDMON_MEGA,
        .natDexNum = NATIONAL_DEX_WEEDMON,
        .categoryName = _("Frost Tree"),
        .height = 27,
        .weight = 1850,
        .description = COMPOUND_STRING(
            "The sprouts on Weedmon's back grow into\n"
            "great shafts of ice when it Mega Evolves.\n"
            "Dislikes associating with others and\n"
            "chooses to live quietly deep in mountains."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_WeedmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WeedmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_WeedmonMega,
        .shinyPalette = gMonShinyPalette_WeedmonMega,
        .iconSprite = gMonIcon_WeedmonMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Weedmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_WeedmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WeedmonMega,
            gShinyOverworldPalette_WeedmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sWeedmonLevelUpLearnset,
        .teachableLearnset = sWeedmonTeachableLearnset,
        .formSpeciesIdTable = sWeedmonFormSpeciesIdTable,
        .formChangeTable = sWeedmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_YANMAMON

#if P_FAMILY_ROTOM
    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 132,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Its body is composed of plasma and loves\n"
            "to surprise others. One boy's invention led\n"
            "to the development of many machines that\n"
            "can use of Rotom's unique capabilities."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rotom,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Rotom,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Rotom,
        .shinyPalette = gMonShinyPalette_Rotom,
        .iconSprite = gMonIcon_Rotom,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_Rotom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rotom,
            gShinyOverworldPalette_Rotom
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ROTOM_APPLIANCE_EXP_YIELD 182
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ROTOM_APPLIANCE_EXP_YIELD 154
#else
    #define ROTOM_APPLIANCE_EXP_YIELD 132
#endif

    [SPECIES_ROTOM_HEAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIRE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "If the convection microwave oven is\n"
            "not working properly, then the Rotom\n"
            "inhabiting it will become lethargic. It\n"
            "makes mischief by turning up the heat."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomHeat,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomHeat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_RotomHeat,
        .shinyPalette = gMonShinyPalette_RotomHeat,
        .iconSprite = gMonIcon_RotomHeat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomHeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomHeat,
            gShinyOverworldPalette_RotomHeat
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_WASH] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_WATER),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It enjoys coming up with water-based\n"
            "pranks. The model of washing machine that\n"
            "Rotom can inspirit has been discontinued,\n"
            "so they are now traded at high prices."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomWash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomWash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_RotomWash,
        .shinyPalette = gMonShinyPalette_RotomWash,
        .iconSprite = gMonIcon_RotomWash,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomWash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomWash,
            gShinyOverworldPalette_RotomWash
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FROST] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_ICE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "In this form, Rotom likes to play freezing\n"
            "cold pranks. You may find it's turned the\n"
            "bath you just filled to solid ice!\n"
            "It battles by spewing cold air."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFrost,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFrost,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_RotomFrost,
        .shinyPalette = gMonShinyPalette_RotomFrost,
        .iconSprite = gMonIcon_RotomFrost,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFrost,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomFrost,
            gShinyOverworldPalette_RotomFrost
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The first appliance developed that Rotom\n"
            "coud inspirit was the electric fan. It uses\n"
            "its power over wind in its pranks, happily\n"
            "blowing any important documents it finds."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFan,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .frontAnimDelay = 7,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_RotomFan,
        .shinyPalette = gMonShinyPalette_RotomFan,
        .iconSprite = gMonIcon_RotomFan,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomFan,
            gShinyOverworldPalette_RotomFan
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_MOW] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The lawn mower is an appliance that led to\n"
            "the development of the Rotom Dex. It will\n"
            "mow down grass and flowers, then swagger\n"
            "around with pride at its accomplishments."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomMow,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomMow,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_RotomMow,
        .shinyPalette = gMonShinyPalette_RotomMow,
        .iconSprite = gMonIcon_RotomMow,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomMow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomMow,
            gShinyOverworldPalette_RotomMow
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Uxie"),
        .cryId = CRY_UXIE,
        .natDexNum = NATIONAL_DEX_UXIE,
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Known as ”The Being of Knowledge,”\n"
            "according to some sources, this Pokémon\n"
            "provided people with the intelligence\n"
            "necessary to solve various problems."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Uxie,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Uxie,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Uxie,
        .shinyPalette = gMonShinyPalette_Uxie,
        .iconSprite = gMonIcon_Uxie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Uxie)
        OVERWORLD(
            sPicTable_Uxie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Uxie,
            gShinyOverworldPalette_Uxie
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUxieLevelUpLearnset,
        .teachableLearnset = sUxieTeachableLearnset,
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mesprit"),
        .cryId = CRY_MESPRIT,
        .natDexNum = NATIONAL_DEX_MESPRIT,
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Although it slumbers at the bottom of a\n"
            "lake, its spirit is said to leave its body\n"
            "and flitter on the water surface. It\n"
            "taught humans of sorrow, pain, and joy."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mesprit,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
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
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Mesprit,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mesprit,
        .shinyPalette = gMonShinyPalette_Mesprit,
        .iconSprite = gMonIcon_Mesprit,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Mesprit)
        OVERWORLD(
            sPicTable_Mesprit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mesprit,
            gShinyOverworldPalette_Mesprit
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMespritLevelUpLearnset,
        .teachableLearnset = sMespritTeachableLearnset,
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 125,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azelf"),
        .cryId = CRY_AZELF,
        .natDexNum = NATIONAL_DEX_AZELF,
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "This Pokémon is said to have endowed\n"
            "humans with the determination needed to\n"
            "do things. It is thought that Uxie, Mesprit\n"
            "and Azelf all came from the same egg."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Azelf,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Azelf,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Azelf,
        .shinyPalette = gMonShinyPalette_Azelf,
        .iconSprite = gMonIcon_Azelf,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(Azelf)
        OVERWORLD(
            sPicTable_Azelf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Azelf,
            gShinyOverworldPalette_Azelf
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAzelfLevelUpLearnset,
        .teachableLearnset = sAzelfTeachableLearnset,
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DIALGA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DIALGA_EXP_YIELD  306
#else
    #define DIALGA_EXP_YIELD  220
#endif

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = DIALGA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .description = COMPOUND_STRING(
            "A Pokémon spoken of in legend.\n"
            "It completely controls the flow of time.\n"
            "It uses its power to travel at will\n"
            "through the past and future."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Dialga,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Dialga,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Dialga,
        .shinyPalette = gMonShinyPalette_Dialga,
        .iconSprite = gMonIcon_Dialga,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_Dialga,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dialga,
            gShinyOverworldPalette_Dialga
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDialgaLevelUpLearnset,
        .teachableLearnset = sDialgaTeachableLearnset,
        .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
        .formChangeTable = sDialgaFormChangeTable,
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = DIALGA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 70,
        .weight = 8500,
        .description = COMPOUND_STRING(
            "Radiant light caused Dialga to take on a\n"
            "form bearing a striking resemblance to the\n"
            "creator Pokémon. It wields such a colossal\n"
            "strength that this might be its true form."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_DialgaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DialgaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DialgaOrigin,
        .shinyPalette = gMonShinyPalette_DialgaOrigin,
        .iconSprite = gMonIcon_DialgaOrigin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_DialgaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DialgaOrigin,
            gShinyOverworldPalette_DialgaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDialgaLevelUpLearnset,
        .teachableLearnset = sDialgaTeachableLearnset,
        .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
        .formChangeTable = sDialgaFormChangeTable,
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define PALKIA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PALKIA_EXP_YIELD  306
#else
    #define PALKIA_EXP_YIELD  220
#endif

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = PALKIA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .description = COMPOUND_STRING(
            "Palkia has the ability to distort space.\n"
            "Its total control over the boundaries of\n"
            "space enable it to transport itself to\n"
            "faraway places and other dimensions."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
        .frontPic = gMonFrontPic_Palkia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Palkia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Palkia,
        .shinyPalette = gMonShinyPalette_Palkia,
        .iconSprite = gMonIcon_Palkia,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_Palkia,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palkia,
            gShinyOverworldPalette_Palkia
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPalkiaLevelUpLearnset,
        .teachableLearnset = sPalkiaTeachableLearnset,
        .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
        .formChangeTable = sPalkiaFormChangeTable,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = PALKIA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 63,
        .weight = 6600,
        .description = COMPOUND_STRING(
            "It soars across the sky in a form that\n"
            "resembles the creator of all things.\n"
            "Perhaps this imitation of appearance is a\n"
            "strategy for gaining Arceus's powers."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
        .frontPic = gMonFrontPic_PalkiaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PalkiaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PalkiaOrigin,
        .shinyPalette = gMonShinyPalette_PalkiaOrigin,
        .iconSprite = gMonIcon_PalkiaOrigin,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_PalkiaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_PalkiaOrigin,
            gShinyOverworldPalette_PalkiaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPalkiaLevelUpLearnset,
        .teachableLearnset = sPalkiaTeachableLearnset,
        .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
        .formChangeTable = sPalkiaFormChangeTable,
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 106,
        .baseSpeed     = 77,
        .baseSpAttack  = 130,
        .baseSpDefense = 106,
        .types = MON_TYPES(TYPE_FIRE, TYPE_STEEL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Heatran"),
        .cryId = CRY_HEATRAN,
        .natDexNum = NATIONAL_DEX_HEATRAN,
        .categoryName = _("Lava Dome"),
        .height = 17,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "Boiling blood, like magma, circulates\n"
            "through its body. It dwells in volcanic\n"
            "caves, using its cross-shaped feet\n"
            "to crawl on ceilings and walls."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Heatran,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_ORANGE,
        .backPic = gMonBackPic_Heatran,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Heatran,
        .shinyPalette = gMonShinyPalette_Heatran,
        .iconSprite = gMonIcon_Heatran,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Heatran)
        OVERWORLD(
            sPicTable_Heatran,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heatran,
            gShinyOverworldPalette_Heatran
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHeatranLevelUpLearnset,
        .teachableLearnset = sHeatranTeachableLearnset,
    },
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS] =
    {
        .baseHP        = 110,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 220,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SLOW_START, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Regigigas"),
        .cryId = CRY_REGIGIGAS,
        .natDexNum = NATIONAL_DEX_REGIGIGAS,
        .categoryName = _("Colossal"),
        .height = 37,
        .weight = 4200,
        .description = COMPOUND_STRING(
            "There is an enduring legend that\n"
            "states this Pokémon shaped Gargomon,\n"
            "Gargoylemon, and Garurumon out of clay, ice,\n"
            "and magma."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Regigigas,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Regigigas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Regigigas,
        .shinyPalette = gMonShinyPalette_Regigigas,
        .iconSprite = gMonIcon_Regigigas,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Regigigas)
        OVERWORLD(
            sPicTable_Regigigas,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regigigas,
            gShinyOverworldPalette_Regigigas
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegigigasLevelUpLearnset,
        .teachableLearnset = sRegigigasTeachableLearnset,
    },
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GIRATINA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GIRATINA_EXP_YIELD 306
#else
    #define GIRATINA_EXP_YIELD 220
#endif

    [SPECIES_GIRATINA_ALTERED] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = GIRATINA_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 45,
        .weight = 7500,
        .description = COMPOUND_STRING(
            "This Pokémon is said to live in a world\n"
            "on the reverse side of ours, where common\n"
            "knowledge is distorted and strange.\n"
            "It was banished for its violence."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GiratinaAltered,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GiratinaAltered,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_GiratinaAltered,
        .shinyPalette = gMonShinyPalette_GiratinaAltered,
        .iconSprite = gMonIcon_GiratinaAltered,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaAltered)
        OVERWORLD(
            sPicTable_GiratinaAltered,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GiratinaAltered,
            gShinyOverworldPalette_GiratinaAltered
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGiratinaLevelUpLearnset,
        .teachableLearnset = sGiratinaTeachableLearnset,
        .formSpeciesIdTable = sGiratinaFormSpeciesIdTable,
        .formChangeTable = sGiratinaFormChangeTable,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = GIRATINA_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 69,
        .weight = 6500,
        .description = COMPOUND_STRING(
            "Giratina loses its legs upon changing into\n"
            "this form. It's believed it hails from a\n"
            "world where the heavens and the earth\n"
            "are as one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GiratinaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_GiratinaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_GiratinaOrigin,
        .shinyPalette = gMonShinyPalette_GiratinaOrigin,
        .iconSprite = gMonIcon_GiratinaOrigin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaOrigin)
        OVERWORLD(
            sPicTable_GiratinaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GiratinaOrigin,
            gShinyOverworldPalette_GiratinaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGiratinaLevelUpLearnset,
        .teachableLearnset = sGiratinaTeachableLearnset,
        .formSpeciesIdTable = sGiratinaFormSpeciesIdTable,
        .formChangeTable = sGiratinaFormChangeTable,
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA] =
    {
        .baseHP        = 120,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 110 : 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cresselia"),
        .cryId = CRY_CRESSELIA,
        .natDexNum = NATIONAL_DEX_CRESSELIA,
        .categoryName = _("Lunar"),
        .height = 15,
        .weight = 856,
        .description = COMPOUND_STRING(
            "Those who sleep holding one of\n"
            "Cresselia's feathers are assured of\n"
            "joyful dreams. It is said to represent\n"
            "the crescent moon."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cresselia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cresselia,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Cresselia,
        .shinyPalette = gMonShinyPalette_Cresselia,
        .iconSprite = gMonIcon_Cresselia,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Cresselia)
        OVERWORLD(
            sPicTable_Cresselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cresselia,
            gShinyOverworldPalette_Cresselia
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCresseliaLevelUpLearnset,
        .teachableLearnset = sCresseliaTeachableLearnset,
    },
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 165,
    #endif
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYDRATION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Phione"),
        .cryId = CRY_PHIONE,
        .natDexNum = NATIONAL_DEX_PHIONE,
        .categoryName = _("Sea Drifter"),
        .height = 4,
        .weight = 31,
        .description = COMPOUND_STRING(
            "When the water warms, they inflate the\n"
            "flotation sac on their heads and drift\n"
            "languidly on the sea in packs.\n"
            "It always returns to where it was born."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phione,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Phione,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Phione,
        .shinyPalette = gMonShinyPalette_Phione,
        .iconSprite = gMonIcon_Phione,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Phione)
        OVERWORLD(
            sPicTable_Phione,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phione,
            gShinyOverworldPalette_Phione
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPhioneLevelUpLearnset,
        .teachableLearnset = sPhioneTeachableLearnset,
    },

    [SPECIES_MANAPHY] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYDRATION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Manaphy"),
        .cryId = CRY_MANAPHY,
        .natDexNum = NATIONAL_DEX_MANAPHY,
        .categoryName = _("Seafaring"),
        .height = 3,
        .weight = 14,
        .description = COMPOUND_STRING(
            "Water makes up 80% of its body.\n"
            "It starts its life with a wondrous power\n"
            "that permits it to bond with any kind\n"
            "of Pokémon."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Manaphy,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Manaphy,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Manaphy,
        .shinyPalette = gMonShinyPalette_Manaphy,
        .iconSprite = gMonIcon_Manaphy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 8, SHADOW_SIZE_S)
        FOOTPRINT(Manaphy)
        OVERWORLD(
            sPicTable_Manaphy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Manaphy,
            gShinyOverworldPalette_Manaphy
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sManaphyLevelUpLearnset,
        .teachableLearnset = sManaphyTeachableLearnset,
    },
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 125,
        .baseSpAttack  = 135,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .evYield_Speed = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BAD_DREAMS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Darkrai"),
        .cryId = CRY_DARKRAI,
        .natDexNum = NATIONAL_DEX_DARKRAI,
        .categoryName = _("Pitch-Black"),
        .height = 15,
        .weight = 505,
        .description = COMPOUND_STRING(
            "It chases people and Pokémon from its\n"
            "territory by causing them to experience\n"
            "deep, nightmarish slumbers. However,\n"
            "it means no harm."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Darkrai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_BLACK,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Darkrai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Darkrai,
        .shinyPalette = gMonShinyPalette_Darkrai,
        .iconSprite = gMonIcon_Darkrai,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Darkrai)
        OVERWORLD(
            sPicTable_Darkrai,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Darkrai,
            gShinyOverworldPalette_Darkrai
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDarkraiLevelUpLearnset,
        .teachableLearnset = sDarkraiTeachableLearnset,
    },
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define SHAYMIN_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define SHAYMIN_EXP_YIELD 270
#else
    #define SHAYMIN_EXP_YIELD 64
#endif

    [SPECIES_SHAYMIN_LAND] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = SHAYMIN_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_LAND,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .description = COMPOUND_STRING(
            "The flowers all over its body bloom if it is\n"
            "lovingly hugged and senses gratitude. It\n"
            "dissolves toxins in the air to transform\n"
            "ruined land into a lush field of flowers."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShayminLand,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ShayminLand,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_ShayminLand,
        .shinyPalette = gMonShinyPalette_ShayminLand,
        .iconSprite = gMonIcon_ShayminLand,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminLand,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShayminLand,
            gShinyOverworldPalette_ShayminLand
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sShayminLandLevelUpLearnset,
        .teachableLearnset = sShayminLandTeachableLearnset,
        .formSpeciesIdTable = sShayminFormSpeciesIdTable,
        .formChangeTable = sShayminFormChangeTable,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = SHAYMIN_EXP_YIELD,
    #if P_UPDATED_EVS >= GEN_5
        .evYield_Speed = 3,
    #else
        .evYield_HP = 3,
    #endif
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_SKY,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "Upon taking in the scent of a particular\n"
            "rare flower, Shaymin is enveloped in light\n"
            "and its tiny body transforms, confering\n"
            "the power of flight upon it."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShayminSky,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShayminSky,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_ShayminSky,
        .shinyPalette = gMonShinyPalette_ShayminSky,
        .iconSprite = gMonIcon_ShayminSky,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminSky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShayminSky,
            gShinyOverworldPalette_ShayminSky
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sShayminSkyLevelUpLearnset,
        .teachableLearnset = sShayminSkyTeachableLearnset,
        .formSpeciesIdTable = sShayminFormSpeciesIdTable,
        .formChangeTable = sShayminFormChangeTable,
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define ARCEUS_EXP_YIELD 360
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ARCEUS_EXP_YIELD 324
#else
    #define ARCEUS_EXP_YIELD 255
#endif
#if P_ARCEUS_UNIQUE_FORM_ICONS >= GEN_9
    #define ARCEUS_ICON(typeName, iconPal)        \
        .iconSprite = gMonIcon_Arceus ##typeName, \
        .iconPalIndex = iconPal,
#else
    #define ARCEUS_ICON(typeName, iconPal)   \
        .iconSprite = gMonIcon_ArceusNormal, \
        .iconPalIndex = 1,
#endif

#define ARCEUS_SPECIES_INFO(type, typeName, iconPal)                                \
    {                                                                               \
        .baseHP        = 120,                                                       \
        .baseAttack    = 120,                                                       \
        .baseDefense   = 120,                                                       \
        .baseSpeed     = 120,                                                       \
        .baseSpAttack  = 120,                                                       \
        .baseSpDefense = 120,                                                       \
        .types = MON_TYPES(type),                                                   \
        .catchRate = 3,                                                             \
        .expYield = ARCEUS_EXP_YIELD,                                               \
        .evYield_HP = 3,                                                            \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .abilities = { ABILITY_MULTITYPE, ABILITY_NONE, ABILITY_NONE },             \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .speciesName = _("Arceus"),                                                 \
        .cryId = CRY_ARCEUS,                                                        \
        .natDexNum = NATIONAL_DEX_ARCEUS,                                           \
        .categoryName = _("Alpha"),                                                 \
        .height = 32,                                                               \
        .weight = 3200,                                                             \
        .description = gArceusPokedexText,                                          \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 495,                                                        \
        .trainerOffset = 10,                                                        \
        .frontPic = gMonFrontPic_Arceus,                                            \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Arceus,                                           \
        .frontAnimId = ANIM_GROW_VIBRATE,                                           \
        .backPic = gMonBackPic_Arceus,                                              \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                     \
        .backPicYOffset = 3,                                                        \
        .backAnimId = BACK_ANIM_GROW_STUTTER,                                       \
        .palette = gMonPalette_Arceus ##typeName,                                   \
        .shinyPalette = gMonShinyPalette_Arceus ##typeName,                         \
        ARCEUS_ICON(typeName, iconPal)                                              \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                     \
        SHADOW(-1, 15, SHADOW_SIZE_XL_BATTLE_ONLY)                                  \
        FOOTPRINT(Arceus)                                                           \
        OVERWORLD(                                                                  \
            sPicTable_Arceus ##typeName,                                            \
            SIZE_64x64,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            sAnimTable_Following,                                                   \
            gOverworldPalette_Arceus ##typeName,                                    \
            gShinyOverworldPalette_Arceus ##typeName                                \
        )                                                                           \
        .levelUpLearnset = sArceusLevelUpLearnset,                                  \
        .teachableLearnset = sArceusTeachableLearnset,                              \
        .formSpeciesIdTable = sArceusFormSpeciesIdTable,                            \
        .formChangeTable = sArceusFormChangeTable,                                  \
        .isMythical = TRUE,                                                         \
        .isFrontierBanned = TRUE,                                                   \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
    }

    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_SPECIES_INFO(TYPE_NORMAL,   Normal,   1),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO(TYPE_FIGHTING, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO(TYPE_POISON,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO(TYPE_GROUND,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO(TYPE_ROCK,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO(TYPE_BUG,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO(TYPE_GRASS,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO(TYPE_ELECTRIC, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO(TYPE_PSYCHIC,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO(TYPE_DRAGON,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO(TYPE_FAIRY,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
