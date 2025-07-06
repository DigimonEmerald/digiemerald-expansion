#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_ARGOMON_F
    [SPECIES_ARGOMON_F] =
    {
        .baseHP        = 8,
        .baseAttack    = 8,
        .baseDefense   = 8,
        .baseSpeed     = 10,
        .baseSpAttack  = 9,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_F,
        .natDexNum = NATIONAL_DEX_ARGOMON_F,
        .categoryName = _("Algorithm"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Argomon has a habit of finding and \n"
            "converging at places with high data\n"
            "capacity. They generally gather up\n"
            "and become a horde quickly."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_f,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = sAnims_Argomon_f,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Argomon_f,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Argomon_f,
        .shinyPalette = gMonShinyPalette_Argomon_f,
        .iconSprite = gMonIcon_Argomon_f,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Argomon_f)
        OVERWORLD(
            sPicTable_Argomon_f,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Argomon_f,
            gShinyOverworldPalette_Argomon_f
        )
        .levelUpLearnset = sArgomon_fLevelUpLearnset,
        .teachableLearnset = sArgomon_fTeachableLearnset,
        .eggMoveLearnset = sArgomon_fEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_ARGOMON_IT}),
    },

    [SPECIES_BOMBMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 15,
        .baseDefense   = 8,
        .baseSpeed     = 8,
        .baseSpAttack  = 15,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE, 
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bombmon"),
        .cryId = CRY_BOMBMON,
        .natDexNum = NATIONAL_DEX_BOMBMON,
        .categoryName = _("Bomb"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Bombmon is a short tempered Digimon\n"
            "with a tendency to blow up on short\n"
            "notice. Although the explosions are \n"
            "particularly weak."),
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bombmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = sAnims_Bombmon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Bombmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Bombmon,
        .shinyPalette = gMonShinyPalette_Bombmon,
        .iconSprite = gMonIcon_Bombmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(-1, 3, SHADOW_SIZE_L)
        FOOTPRINT(Bombmon)
        OVERWORLD(
            sPicTable_Bombmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bombmon,
            gShinyOverworldPalette_Bombmon
        )
        .levelUpLearnset = sBombmonLevelUpLearnset,
        .teachableLearnset = sBombmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_MISSIMON}),
    },

    [SPECIES_BOMMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 13,
        .baseDefense   = 8,
        .baseSpeed     = 9,
        .baseSpAttack  = 13,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE, 
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Bomb"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Bommons tail ignites from the moment it's\n"
            "born but because of it's fast growth it\n"
            "is said that no one has ever seen what\n"
            "happens when it's tail goes out."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Bommon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Bommon,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Bommon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Bommon,
        .shinyPalette = gMonShinyPalette_Bommon,
        .iconSprite = gMonIcon_Bommon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BommonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_BommonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        OVERWORLD(
            sPicTable_Bommon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bommon,
            gShinyOverworldPalette_Bommon
        )
        OVERWORLD_FEMALE(
            sPicTable_BommonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_MISSIMON}),
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
        
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BOMMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_THICK_FAT, ABILITY_THICK_FAT, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON_MEGA,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Seed"),
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING(
            "In order to support its flower, which\n"
            "has grown larger due to Mega Evolution,\n"
            "its back and legs have become stronger."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_BommonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_BommonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BommonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_BommonMega,
        .shinyPalette = gMonShinyPalette_BommonMega,
        .iconSprite = gMonIcon_BommonMega,
        .iconPalIndex = 4,
        SHADOW(2, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BOMMON_GMAX] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Seed"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Spits big amounts of pollen like a volcano.\n"
            "Breathing too much of it causes fainting.\n"
            "In battle, it swings around two thick vines\n"
            "that can easily topple 10-story buildings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_BommonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BommonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BommonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BommonGmax,
        .shinyPalette = gMonShinyPalette_BommonGmax,
        .iconSprite = gMonIcon_BommonGmax,
        .iconPalIndex = 0,
        SHADOW(2, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ARGOMON_F

#if P_FAMILY_BOTAMON
    [SPECIES_BOTAMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 7,
        .baseDefense   = 12,
        .baseSpeed     = 9,
        .baseSpAttack  = 8,
        .baseSpDefense = 15,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SIMPLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Botamon"),
        .cryId = CRY_BOTAMON,
        .natDexNum = NATIONAL_DEX_BOTAMON,
        .categoryName = _("Fuzz"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Botamon's surface is made up of slime but\n"
            "it has also grown a thick black fuzz atop\n"
            "the slime. It is unable to battle as it's\n"
            "so freshly hatched."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Botamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Botamon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Botamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Botamon,
        .shinyPalette = gMonShinyPalette_Botamon,
        .iconSprite = gMonIcon_Botamon,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Botamon)
        OVERWORLD(
            sPicTable_Botamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Botamon,
            gShinyOverworldPalette_Botamon
        )
        .levelUpLearnset = sBotamonLevelUpLearnset,
        .teachableLearnset = sBotamonTeachableLearnset,
        .eggMoveLearnset = sBotamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_BUDMON},
                                {EVO_ATTACK, 6, SPECIES_WANYAMON},
                                {EVO_SPATTACK, 6, SPECIES_PAGUMON},
                                {EVO_SPEED, 7, SPECIES_PINAMON},
                                {EVO_LEVEL, 5, SPECIES_KOROMON}),                                
    },

    [SPECIES_CHIBICKMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 9,
        .baseDefense   = 7,
        .baseSpeed     = 9,
        .baseSpAttack  = 12,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SIMPLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Chibickmon"),
        .cryId = CRY_CHIBICKMON,
        .natDexNum = NATIONAL_DEX_CHIBICKMON,
        .categoryName = _("Social"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Chibickmon is a socialable digimon with\n"
            "a deep desire to help out. Large groups of\n"
            "them will appear to help out before knowing\n"
            "what needs to be done."),
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chibickmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = sAnims_Chibickmon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Chibickmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Chibickmon,
        .shinyPalette = gMonShinyPalette_Chibickmon,
        .iconSprite = gMonIcon_Chibickmon,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Chibickmon)
        OVERWORLD(
            sPicTable_Chibickmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chibickmon,
            gShinyOverworldPalette_Chibickmon
        )
        .levelUpLearnset = sChibickmonLevelUpLearnset,
        .teachableLearnset = sChibickmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 6, SPECIES_PICKMON_RED},
                                {EVO_DEFENSE, 5, SPECIES_PICKMON_SILVER},
                                {EVO_LEVEL, 6, SPECIES_PICKMON_WHITE}),
    },

    [SPECIES_CHIBOMON] =
    {
        .baseHP        = 14,
        .baseAttack    = 9,
        .baseDefense   = 10,
        .baseSpeed     = 7,
        .baseSpAttack  = 11,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Dragon"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Chibomon is said to have the potential to\n"
            "digivolve into every single dragon digimon.\n"
            "This make's it extremely valuable for Tamers\n"
            "and others looking to use it's talents."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Chibomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Chibomon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Chibomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Chibomon,
        .shinyPalette = gMonShinyPalette_Chibomon,
        .iconSprite = gMonIcon_Chibomon,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Chibomon)
        OVERWORLD(
            sPicTable_Chibomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chibomon,
            gShinyOverworldPalette_Chibomon
        )
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_DEMIVEEMON}),
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHIBOMON_MEGA_X] =
    {
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON_MEGA_X,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "The overwhelming power that fills its\n"
            "entire body causes it to turn black\n"
            "and creates intense blue flames."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ChibomonMegaX,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ChibomonMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChibomonMegaX,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_ChibomonMegaX,
        .shinyPalette = gMonShinyPalette_ChibomonMegaX,
        .iconSprite = gMonIcon_ChibomonMegaX,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Chibomon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },

    [SPECIES_CHIBOMON_MEGA_Y] =
    {
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON_MEGA_Y,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "Its bond with its Trainer is the source\n"
            "of its power. It boasts speed and\n"
            "maneuverability greater than that of a\n"
            "jet fighter."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ChibomonMegaY,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ChibomonMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChibomonMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_ChibomonMegaY,
        .shinyPalette = gMonShinyPalette_ChibomonMegaY,
        .iconSprite = gMonIcon_ChibomonMegaY,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Chibomon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHIBOMON_GMAX] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flame inside its body burns\n"
            "hotter than 3,700 degrees Fahrenheit.\n"
            "When Chibomon roars, that\n"
            "temperature climbs even higher."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ChibomonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ChibomonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChibomonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChibomonGmax,
        .shinyPalette = gMonShinyPalette_ChibomonGmax,
        .iconSprite = gMonIcon_ChibomonGmax,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Chibomon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BOTAMON

#if P_FAMILY_CONOMON
    [SPECIES_CONOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 11,
        .baseSpeed     = 7,
        .baseSpAttack  = 9,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Conomon"),
        .cryId = CRY_CONOMON,
        .natDexNum = NATIONAL_DEX_CONOMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Conomon is an extremely rare digimon born\n"
            "as a twin with Zerimon. Unlike the one horned\n"
            "Zerimon, the three horned conomon is\n"
            "relatively docile."),
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Conomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Conomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Conomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Conomon,
        .shinyPalette = gMonShinyPalette_Conomon,
        .iconSprite = gMonIcon_Conomon,
        .iconPalIndex = 0,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Conomon)
        OVERWORLD(
            sPicTable_Conomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Conomon,
            gShinyOverworldPalette_Conomon
        )
        .levelUpLearnset = sConomonLevelUpLearnset,
        .teachableLearnset = sConomonTeachableLearnset,
        .eggMoveLearnset = sConomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_KOKOMON}),
    },

    [SPECIES_COTSUCOMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 7,
        .baseDefense   = 14,
        .baseSpeed     = 11,
        .baseSpAttack  = 8,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cotsucomon"),
        .cryId = CRY_COTSUCOMON,
        .natDexNum = NATIONAL_DEX_COTSUCOMON,
        .categoryName = _("Armour"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Cotsucomon are born wearing a leather\n"
            "cap. Although the cap looks strong\n"
            "it is actually very weak due to the\n"
            "soft material that makes it up."),
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cotsucomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Cotsucomon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Cotsucomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Cotsucomon,
        .shinyPalette = gMonShinyPalette_Cotsucomon,
        .iconSprite = gMonIcon_Cotsucomon,
        .iconPalIndex = 2,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Cotsucomon)
        OVERWORLD(
            sPicTable_Cotsucomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cotsucomon,
            gShinyOverworldPalette_Cotsucomon
        )
        .levelUpLearnset = sCotsucomonLevelUpLearnset,
        .teachableLearnset = sCotsucomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_KAKKINMON}),
    },

    [SPECIES_CURIMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 11,
        .baseDefense   = 10,
        .baseSpeed     = 14,
        .baseSpAttack  = 7,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Energetic"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Even before hatching, Curimon is so \n"
            "energetic that it's Digi-Egg bounces.\n"
            "After hatcing, it will move around \n"
            "vigorously, making it hard to care for."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Curimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .frontAnimFrames = sAnims_Curimon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 50 : 20,
        .backPic = gMonBackPic_Curimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Curimon,
        .shinyPalette = gMonShinyPalette_Curimon,
        .iconSprite = gMonIcon_Curimon,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Curimon)
        OVERWORLD(
            sPicTable_Curimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Curimon,
            gShinyOverworldPalette_Curimon
        )
        .levelUpLearnset = sCurimonLevelUpLearnset,
        .teachableLearnset = sCurimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_GURIMON}),
        .formSpeciesIdTable = sCurimonFormSpeciesIdTable,
        .formChangeTable = sCurimonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CURIMON_MEGA] =
    {
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON_MEGA,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Shellfish"),
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING(
            "The cannon on its back is as powerful\n"
            "as a tank gun. Its tough legs and back\n"
            "enable it to withstand the recoil from\n"
            "firing the cannon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_CurimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CurimonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CurimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_CurimonMega,
        .shinyPalette = gMonShinyPalette_CurimonMega,
        .iconSprite = gMonIcon_CurimonMega,
        .iconPalIndex = 2,
        SHADOW(4, 11, SHADOW_SIZE_L)
        FOOTPRINT(Curimon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCurimonLevelUpLearnset,
        .teachableLearnset = sCurimonTeachableLearnset,
        .formSpeciesIdTable = sCurimonFormSpeciesIdTable,
        .formChangeTable = sCurimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CURIMON_GMAX] =
    {
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Shellfish"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "It's not very good at precision\n"
            "shooting. When attacking, it just fires\n"
            "its 31 cannons over and over and\n"
            "over."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_CurimonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_CurimonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CurimonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CurimonGmax,
        .shinyPalette = gMonShinyPalette_CurimonGmax,
        .iconSprite = gMonIcon_CurimonGmax,
        .iconPalIndex = 0,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Curimon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCurimonLevelUpLearnset,
        .teachableLearnset = sCurimonTeachableLearnset,
        .formSpeciesIdTable = sCurimonFormSpeciesIdTable,
        .formChangeTable = sCurimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CONOMON

#if P_FAMILY_DATIRIMON
    [SPECIES_DATIRIMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 8,
        .baseDefense   = 10,
        .baseSpeed     = 6,
        .baseSpAttack  = 10,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Datirimon"),
        .cryId = CRY_DATIRIMON,
        .natDexNum = NATIONAL_DEX_DATIRIMON,
        .categoryName = _("Fruit"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Datirimon are born from the fruit of\n"
            "large trees. Legend has it that it will\n"
            "appear to those who have lost and\n"
            "regained their hope."),
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Datirimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Datirimon,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Datirimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Datirimon,
        .shinyPalette = gMonShinyPalette_Datirimon,
        .iconSprite = gMonIcon_Datirimon,
        .iconPalIndex = 1,
        SHADOW(4, 1, SHADOW_SIZE_S)
        FOOTPRINT(Datirimon)
        OVERWORLD(
            sPicTable_Datirimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Datirimon,
            gShinyOverworldPalette_Datirimon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDatirimonLevelUpLearnset,
        .teachableLearnset = sDatirimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 18, SPECIES_YOKOMON},
                                {EVO_ATTACK, 6, SPECIES_NEGAMON},
                                {EVO_SPDEFENSE, 7, SPECIES_MINOMON},
                                {EVO_LEVEL,  6, SPECIES_BUDMON}),
    },

    [SPECIES_DODOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 15,
        .baseSpeed     = 9,
        .baseSpAttack  = 8,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dodomon"),
        .cryId = CRY_DODOMON,
        .natDexNum = NATIONAL_DEX_DODOMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Dodomon is a carrier of the X Antibody.\n"
            "It's whole fur is covered in something\n"
            "called Mithril Hair, providing it strong\n"
            "defensive capabilities from hatching."),
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dodomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 14,
        .frontAnimFrames = sAnims_Dodomon,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Dodomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dodomon,
        .shinyPalette = gMonShinyPalette_Dodomon,
        .iconSprite = gMonIcon_Dodomon,
        .iconPalIndex = 1,
        SHADOW(3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Dodomon)
        OVERWORLD(
            sPicTable_Dodomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Dodomon,
            gShinyOverworldPalette_Dodomon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDodomonLevelUpLearnset,
        .teachableLearnset = sDodomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 7, SPECIES_WANYAMON},
                                {EVO_LEVEL, 5, SPECIES_DORIMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DOKIMON_EXP_YIELD 198
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define DOKIMON_EXP_YIELD 178
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DOKIMON_EXP_YIELD 173
#else
    #define DOKIMON_EXP_YIELD 170
#endif

    [SPECIES_DOKIMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 12,
        .baseSpAttack  = 7,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dokimon"),
        .cryId = CRY_DOKIMON,
        .natDexNum = NATIONAL_DEX_DOKIMON,
        .categoryName = _("Healthy"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Dokimon is said to have been born from\n"
            "human vital data. It beats at a constant\n"
            "rhythm which seems to reflect the\n"
            "heartbeat of the person holding it."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dokimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Dokimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .backPic = gMonBackPic_Dokimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Dokimon,
        .shinyPalette = gMonShinyPalette_Dokimon,
        .iconSprite = gMonIcon_Dokimon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_DokimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_DokimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Dokimon)
        OVERWORLD(
            sPicTable_Dokimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dokimon,
            gShinyOverworldPalette_Dokimon
        )
        OVERWORLD_FEMALE(
            sPicTable_DokimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sDokimonLevelUpLearnset,
        .teachableLearnset = sDokimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL,  4, SPECIES_BIBIMON}),
        .formSpeciesIdTable = sDokimonFormSpeciesIdTable,
        .formChangeTable = sDokimonFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DOKIMON_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = DOKIMON_EXP_YIELD,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dokimon"),
        .cryId = CRY_DOKIMON,
        .natDexNum = NATIONAL_DEX_DOKIMON,
        .categoryName = _("Butterfly"),
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Once it has opponents trapped in a\n"
            "tornado that could blow away a 10-\n"
            "ton truck, it finishes them off with\n"
            "its poisonous scales."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DokimonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_DokimonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_DokimonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DokimonGmax,
        .shinyPalette = gMonShinyPalette_DokimonGmax,
        .iconSprite = gMonIcon_DokimonGmax,
        .iconPalIndex = 0,
        SHADOW(-4, 15, SHADOW_SIZE_S)
        FOOTPRINT(Dokimon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDokimonLevelUpLearnset,
        .teachableLearnset = sDokimonTeachableLearnset,
        .formSpeciesIdTable = sDokimonFormSpeciesIdTable,
        .formChangeTable = sDokimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DATIRIMON

#if P_FAMILY_FUFUMON
    [SPECIES_FUFUMON] =
    {
        .baseHP        = 7,
        .baseAttack    = 13,
        .baseDefense   = 9,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Fufumon"),
        .cryId = CRY_FUFUMON,
        .natDexNum = NATIONAL_DEX_FUFUMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Fufumon's body is so light that it floats\n"
            "through the air from birth. But due to it's\n"
            "slow floating, it is an easy target for \n"
            "attacks from predators."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fufumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = sAnims_Fufumon,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Fufumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Fufumon,
        .shinyPalette = gMonShinyPalette_Fufumon,
        .iconSprite = gMonIcon_Fufumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fufumon)
        OVERWORLD(
            sPicTable_Fufumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Fufumon,
            gShinyOverworldPalette_Fufumon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sFufumonLevelUpLearnset,
        .teachableLearnset = sFufumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL,  5, SPECIES_KYOKYOMON}),
    },

    [SPECIES_JYARIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 12,
        .baseDefense   = 9,
        .baseSpeed     = 8,
        .baseSpAttack  = 14,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_BLAZE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Jyarimon"),
        .cryId = CRY_JYARIMON,
        .natDexNum = NATIONAL_DEX_JYARIMON,
        .categoryName = _("Fire Dragon"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Jyarimon are an incredibly scarce Digimon\n"
            "with the power to evolve into a strong \n"
            "Dragon Digimon. At this stage however it\n"
            "only has tiny fangs."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jyarimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(24, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Jyarimon,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Jyarimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jyarimon,
        .shinyPalette = gMonShinyPalette_Jyarimon,
        .iconSprite = gMonIcon_Jyarimon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Jyarimon)
        OVERWORLD(
            sPicTable_Jyarimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Jyarimon,
            gShinyOverworldPalette_Jyarimon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sJyarimonLevelUpLearnset,
        .teachableLearnset = sJyarimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_GIGIMON}),
    },

#define KEEMON_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

    [SPECIES_KEEMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 7,
        .baseDefense   = 9,
        .baseSpeed     = 11,
        .baseSpAttack  = 14,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Keemon"),
        .cryId = CRY_KEEMON,
        .natDexNum = NATIONAL_DEX_KEEMON,
        .categoryName = _("Evil Eyes"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Keemon is always seen scowling even\n"
            "though it is very young. It hates being \n"
            "crowded by others and opts for living as\n"
            "a hermit."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Keemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .frontAnimFrames = sAnims_Keemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backPic = gMonBackPic_Keemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Keemon,
        .shinyPalette = gMonShinyPalette_Keemon,
        .iconSprite = gMonIcon_Keemon,
        .iconPalIndex = 2,
        SHADOW(4, 15, SHADOW_SIZE_M)
        FOOTPRINT(Keemon)
        OVERWORLD(
            sPicTable_Keemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Keemon,
            gShinyOverworldPalette_Keemon
        )
        .levelUpLearnset = sKeemonLevelUpLearnset,
        .teachableLearnset = sKeemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_YAAMON}),
        .formSpeciesIdTable = sKeemonFormSpeciesIdTable,
        .formChangeTable = sKeemonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KEEMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = KEEMON_ATTACK + 70,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 248 : 223,
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Keemon"),
        .cryId = CRY_KEEMON_MEGA,
        .natDexNum = NATIONAL_DEX_KEEMON,
        .categoryName = _("Poison Bee"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Its legs have become poison stingers.\n"
            "It stabs its prey repeatedly with the\n"
            "stingers on its limbs, dealing the final\n"
            "blow with the stinger on its rear."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KeemonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_KeemonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_KeemonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_KeemonMega,
        .shinyPalette = gMonShinyPalette_KeemonMega,
        .iconSprite = gMonIcon_KeemonMega,
        .iconPalIndex = 2,
        SHADOW(1, 14, SHADOW_SIZE_S)
        FOOTPRINT(Keemon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKeemonLevelUpLearnset,
        .teachableLearnset = sKeemonTeachableLearnset,
        .formSpeciesIdTable = sKeemonFormSpeciesIdTable,
        .formChangeTable = sKeemonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FUFUMON

#if P_FAMILY_KETOMON
    [SPECIES_KETOMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 9,
        .baseSpeed     = 10,
        .baseSpAttack  = 7,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ketomon"),
        .cryId = CRY_KETOMON,
        .natDexNum = NATIONAL_DEX_KETOMON,
        .categoryName = _("Large Eyes"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Ketomon's large eye's are its \n"
            "defining characteristic feature. They\n"
            "give it the ability to discern the\n"
            "nature of Digimon."),
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ketomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = sAnims_Ketomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 0,
        .backPic = gMonBackPic_Ketomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Ketomon,
        .shinyPalette = gMonShinyPalette_Ketomon,
        .iconSprite = gMonIcon_Ketomon,
        .iconPalIndex = 0,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Ketomon)
        OVERWORLD(
            sPicTable_Ketomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ketomon,
            gShinyOverworldPalette_Ketomon
        )
        .levelUpLearnset = sKetomonLevelUpLearnset,
        .teachableLearnset = sKetomonTeachableLearnset,
        .eggMoveLearnset = sKetomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_CHAPMON},
                                {EVO_LEVEL, 5, SPECIES_HOPMON}),
    },

    [SPECIES_KURAMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 7,
        .baseDefense   = 7,
        .baseSpeed     = 20,
        .baseSpAttack  = 8,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kuramon"),
        .cryId = CRY_KURAMON,
        .natDexNum = NATIONAL_DEX_KURAMON,
        .categoryName = _("Virus"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Kuramon is said to have been born from\n"
            "humanities malicious nature from the\n"
            "internet. It multiplies incredibly fast,\n"
            "consuming all data it finds."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kuramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = sAnims_Kuramon,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Kuramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kuramon,
        .shinyPalette = gMonShinyPalette_Kuramon,
        .iconSprite = gMonIcon_Kuramon,
        .iconPalIndex = 0,
        SHADOW(-4, 6, SHADOW_SIZE_M)
        FOOTPRINT(Kuramon)
        OVERWORLD(
            sPicTable_Kuramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kuramon,
            gShinyOverworldPalette_Kuramon
        )
        .levelUpLearnset = sKuramonLevelUpLearnset,
        .teachableLearnset = sKuramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 8, SPECIES_ARCADIAMON_IT},
                                {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                                {EVO_LEVEL, 6, SPECIES_TSUMEMON}),
    },

#define LEAFMON_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

    [SPECIES_LEAFMON] =
    {
        .baseHP        = 14,
        .baseAttack    = 8,
        .baseDefense   = 8,
        .baseSpeed     = 10,
        .baseSpAttack  = 8,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OVERGROW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafmon"),
        .cryId = CRY_LEAFMON,
        .natDexNum = NATIONAL_DEX_LEAFMON,
        .categoryName = _("Leaf"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Leafmons body is almost identical to the\n"
            "make-up of a plant. It has a leaf shaped\n"
            "tail that is use's to protect itself \n"
            "from the elements."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leafmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .frontAnimFrames = sAnims_Leafmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FRONT_FLIP : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backPic = gMonBackPic_Leafmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Leafmon,
        .shinyPalette = gMonShinyPalette_Leafmon,
        .iconSprite = gMonIcon_Leafmon,
        .iconPalIndex = 0,
        SHADOW(-7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Leafmon)
        OVERWORLD(
            sPicTable_Leafmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Leafmon,
            gShinyOverworldPalette_Leafmon
        )
        .levelUpLearnset = sLeafmonLevelUpLearnset,
        .teachableLearnset = sLeafmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_MINOMON}),
        .formSpeciesIdTable = sLeafmonFormSpeciesIdTable,
        .formChangeTable = sLeafmonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LEAFMON_MEGA] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = LEAFMON_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Leafmon"),
        .cryId = CRY_LEAFMON_MEGA,
        .natDexNum = NATIONAL_DEX_LEAFMON,
        .categoryName = _("Bird"),
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING(
            "With its muscular strength now greatly\n"
            "increased, it can fly continuously\n"
            "for two weeks without resting."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LeafmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LeafmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LeafmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_LeafmonMega,
        .shinyPalette = gMonShinyPalette_LeafmonMega,
        .iconSprite = gMonIcon_LeafmonMega,
        .iconPalIndex = 0,
        SHADOW(-7, 19, SHADOW_SIZE_M)
        FOOTPRINT(Leafmon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLeafmonLevelUpLearnset,
        .teachableLearnset = sLeafmonTeachableLearnset,
        .formSpeciesIdTable = sLeafmonFormSpeciesIdTable,
        .formChangeTable = sLeafmonFormChangeTable,
    },
#endif
#endif //P_FAMILY_KETOMON

#if P_FAMILY_CHOROMON
    [SPECIES_CHOROMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 10,
        .baseSpeed     = 12,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Choromon"),
        .cryId = CRY_CHOROMON,
        .natDexNum = NATIONAL_DEX_CHOROMON,
        .categoryName = _("Darting"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Choromon's is mistaken to be a very.\n"
            "energetic digimon however that is\n"
            "because of it's simple programming\n"
            "making it move whenever there is light."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Choromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = sAnims_Choromon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RAPID_H_HOPS : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Choromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Choromon,
        .shinyPalette = gMonShinyPalette_Choromon,
        .iconSprite = gMonIcon_Choromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ChoromonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_ChoromonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Choromon)
        OVERWORLD(
            sPicTable_Choromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Choromon,
            gShinyOverworldPalette_Choromon
        )
        OVERWORLD_FEMALE(
            sPicTable_ChoromonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sChoromonLevelUpLearnset,
        .teachableLearnset = sChoromonTeachableLearnset,
        .eggMoveLearnset = sChoromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 8, SPECIES_KOZENIMON},
                                {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                                {EVO_LEVEL, 4, SPECIES_KAPURIMON}),  
        .formSpeciesIdTable = sChoromonFormSpeciesIdTable,
    },

    [SPECIES_MOKUMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 9,
        .baseDefense   = 8,
        .baseSpeed     = 13,
        .baseSpAttack  = 12,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Smoke"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Mokumon is a unique digimon who lacks a\n"
            "wire-frame model, leaving it's core\n"
            "unprotected. It use's the smoke from\n"
            "burning it's core to obscure itself."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mokumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = sAnims_Mokumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FIGURE_8 : ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Mokumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Mokumon,
        .shinyPalette = gMonShinyPalette_Mokumon,
        .iconSprite = gMonIcon_Mokumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MokumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_MokumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Mokumon)
        OVERWORLD(
            sPicTable_Mokumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mokumon,
            gShinyOverworldPalette_Mokumon
        )
        OVERWORLD_FEMALE(
            sPicTable_MokumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sMokumonLevelUpLearnset,
        .teachableLearnset = sMokumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 17, SPECIES_YAAMON},
                                {EVO_SPEED, 7, SPECIES_KOROMON},
                                {EVO_DEFENSE, 7, SPECIES_KAPURIMON},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNMON},
                                {EVO_LEVEL, 6, SPECIES_DEMMERAMON}), 
        .formSpeciesIdTable = sMokumonFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_CHOROMON_ALOLA] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 51 : 57,
        .evYield_Speed = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Choromon"),
        .cryId = CRY_CHOROMON,
        .natDexNum = NATIONAL_DEX_CHOROMON,
        .categoryName = _("Mouse"),
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING(
            "With its incisors, it gnaws through doors\n"
            "and infiltrates people's homes.\n"
            "Then, with a twitch of its whiskers,\n"
            "it steals whatever food it finds."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChoromonAlola,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_ChoromonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChoromonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChoromonAlola,
        .shinyPalette = gMonShinyPalette_ChoromonAlola,
        .iconSprite = gMonIcon_ChoromonAlola,
        .iconPalIndex = 2,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Choromon)
        OVERWORLD(
            sPicTable_ChoromonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ChoromonAlola,
            gShinyOverworldPalette_ChoromonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sChoromonAlolaLevelUpLearnset,
        .teachableLearnset = sChoromonAlolaTeachableLearnset,
        .eggMoveLearnset = sChoromonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sChoromonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 20, SPECIES_MOKUMON_ALOLA},
                                {EVO_NONE, 0, SPECIES_MOKUMON_ALOLA_TOTEM}),
    },

    [SPECIES_MOKUMON_ALOLA] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 255,
        .description = gMokumonAlolaPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MokumonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MokumonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MokumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MokumonAlola,
        .shinyPalette = gMonShinyPalette_MokumonAlola,
        .iconSprite = gMonIcon_MokumonAlola,
        .iconPalIndex = 2,
        SHADOW(-4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Mokumon)
        OVERWORLD(
            sPicTable_MokumonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MokumonAlola,
            gShinyOverworldPalette_MokumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMokumonAlolaLevelUpLearnset,
        .teachableLearnset = sMokumonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMokumonFormSpeciesIdTable,
    },

    [SPECIES_MOKUMON_ALOLA_TOTEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Mouse"),
        .height = 14,
        .weight = 1050,
        .description = gMokumonAlolaPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MokumonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MokumonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MokumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MokumonAlola,
        .shinyPalette = gMonShinyPalette_MokumonAlola,
        .iconSprite = gMonIcon_MokumonAlola,
        .iconPalIndex = 2,
        SHADOW(-4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Mokumon)
        OVERWORLD(
            sPicTable_MokumonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MokumonAlola,
            gShinyOverworldPalette_MokumonAlola
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMokumonAlolaLevelUpLearnset,
        .teachableLearnset = sMokumonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMokumonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CHOROMON

#if P_FAMILY_NYOKIMON
    [SPECIES_NYOKIMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 7,
        .baseDefense   = 10,
        .baseSpeed     = 9,
        .baseSpAttack  = 9,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Nyokimon"),
        .cryId = CRY_NYOKIMON,
        .natDexNum = NATIONAL_DEX_NYOKIMON,
        .categoryName = _("Seed"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Nyokimon is covered in a transparent \n"
            "tissue. Inside that tissue, it has a very\n"
            "similiar body to Botamon. Many believe\n"
            "this make's it a cousin to Botamon."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nyokimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Nyokimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RISING_WOBBLE : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Nyokimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Nyokimon,
        .shinyPalette = gMonShinyPalette_Nyokimon,
        .iconSprite = gMonIcon_Nyokimon,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Nyokimon)
        OVERWORLD(
            sPicTable_Nyokimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nyokimon,
            gShinyOverworldPalette_Nyokimon
        )
        .levelUpLearnset = sNyokimonLevelUpLearnset,
        .teachableLearnset = sNyokimonTeachableLearnset,
        .eggMoveLearnset = sNyokimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 18, SPECIES_MONIMON},
                                {EVO_DEFENSE, 7, SPECIES_BUDMON},
                                {EVO_SPEED, 7, SPECIES_TANEMON},
                                {EVO_SPATTACK, 7, SPECIES_TORBALLMON},
                                {EVO_LEVEL, 7, SPECIES_YOKOMON}),
    },

    [SPECIES_PABUMON] =
    {
        .baseHP        = 5,
        .baseAttack    = 6,
        .baseDefense   = 5,
        .baseSpeed     = 10,
        .baseSpAttack  = 7,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Pabumon"),
        .cryId = CRY_PABUMON,
        .natDexNum = NATIONAL_DEX_PABUMON,
        .categoryName = _("Slime"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pabumon is well known for being a very\n"
            "expressive digimon. It's surface has not\n"
            "hardened yet giving it very little\n"
            "defensive power."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pabumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Pabumon,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Pabumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pabumon,
        .shinyPalette = gMonShinyPalette_Pabumon,
        .iconSprite = gMonIcon_Pabumon,
        .iconPalIndex = 0,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Pabumon)
        OVERWORLD(
            sPicTable_Pabumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pabumon,
            gShinyOverworldPalette_Pabumon
        )
        .levelUpLearnset = sPabumonLevelUpLearnset,
        .teachableLearnset = sPabumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_YOKOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_SPATTACK, 6, SPECIES_TANEMON},
                                {EVO_LEVEL,  6, SPECIES_MOTIMON}),
    },
#endif //P_FAMILY_NYOKIMON

#if P_FAMILY_PAFUMON
    [SPECIES_PAFUMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 7,
        .baseDefense   = 7,
        .baseSpeed     = 13,
        .baseSpAttack  = 8,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GHOST),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pafumon"),
        .cryId = CRY_PAFUMON,
        .natDexNum = NATIONAL_DEX_PAFUMON,
        .categoryName = _("Spirit"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pafumon possesses a light translucent\n"
            "body, meaning it is constantly \n"
            "drifting through the air. It dislikes\n"
            "fighting a lot."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pafumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Pafumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Pafumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pafumon,
        .shinyPalette = gMonShinyPalette_Pafumon,
        .iconSprite = gMonIcon_Pafumon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Pafumon)
        OVERWORLD(
            sPicTable_Pafumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Pafumon,
            gShinyOverworldPalette_Pafumon
        )
        .levelUpLearnset = sPafumonLevelUpLearnset,
        .teachableLearnset = sPafumonTeachableLearnset,
        .eggMoveLearnset = sPafumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_KYAROMON}),
    },

    [SPECIES_PAOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 11,
        .baseDefense   = 7,
        .baseSpeed     = 12,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Paomon"),
        .cryId = CRY_PAOMON,
        .natDexNum = NATIONAL_DEX_PAOMON,
        .categoryName = _("Artificial"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Paomon is an artificial digimon that was\n"
            "created for aesthetic reasons. Rumours \n"
            "are that it was created between groups\n"
            "from Shanghai, Taiwan and Okinawa."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Paomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = sAnims_Paomon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Paomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Paomon,
        .shinyPalette = gMonShinyPalette_Paomon,
        .iconSprite = gMonIcon_Paomon,
        .iconPalIndex = 2,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Paomon)
        OVERWORLD(
            sPicTable_Paomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Paomon,
            gShinyOverworldPalette_Paomon
        )
        .levelUpLearnset = sPaomonLevelUpLearnset,
        .teachableLearnset = sPaomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_XIAOMON}),
    },
#endif //P_FAMILY_PAFUMON

#if P_FAMILY_PETITMON
#if P_GEN_2_CROSS_EVOS

    [SPECIES_GUILMON_X] =
    {
        .baseHP        = 62,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 53,
        .baseSpAttack  = 58,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_BLAZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Guilmon"),
        .cryId = CRY_GUILMON_X,
        .natDexNum = NATIONAL_DEX_GUILMON_X,
        .categoryName = _("X Antibody"),
        .height = 15,
        .weight = 383,
        .description = COMPOUND_STRING(
            "Guilmon X has grown and accepted and\n"
            "contained its power. This has made it less\n"
            "destructive however this realisation and\n"
            "growth makes it a much more formidable foe."),
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guilmon_x,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .frontAnimFrames = sAnims_Guilmon_x,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Guilmon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Guilmon_x,
        .shinyPalette = gMonShinyPalette_Guilmon_x,
        .iconSprite = gMonIcon_Guilmon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Guilmon_x)
        OVERWORLD(
            sPicTable_Guilmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Guilmon_x,
            gShinyOverworldPalette_Guilmon_x
        )
        .levelUpLearnset = sGuilmon_xLevelUpLearnset,
        .teachableLearnset = sGuilmon_xTeachableLearnset,
        .eggMoveLearnset = sGuilmon_xEggMoveLearnset,
        .formSpeciesIdTable = sGuilmon_xFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEXDORUMON}),
    },

    [SPECIES_GUILMON_X_SPIKY_EARED] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 15,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 41 : 42,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Guilmon"),
        .cryId = CRY_GUILMON_X,
        .natDexNum = NATIONAL_DEX_GUILMON_X,
        .categoryName = _("Tiny Mouse"),
        .height = 3,
        .weight = 20,
        .description = gGuilmon_xPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guilmon_xSpikyEared,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Guilmon_xSpikyEared,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Guilmon_xSpikyEared,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Guilmon_xSpikyEared,
        .shinyPalette = gMonShinyPalette_Guilmon_xSpikyEared,
        .iconSprite = gMonIcon_Guilmon_xSpikyEared,
        .iconPalIndex = 1,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Guilmon_x)
        OVERWORLD_SET_ANIM(
            sPicTable_Guilmon_xSpikyEared,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Guilmon_xSpikyEared,
            gShinyOverworldPalette_Guilmon_xSpikyEared
        )
        .levelUpLearnset = sGuilmon_xLevelUpLearnset,
        .teachableLearnset = sGuilmon_xTeachableLearnset,
        .eggMoveLearnset = sGuilmon_xEggMoveLearnset,
        .formSpeciesIdTable = sGuilmon_xFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_UPDATED_EXP_YIELDS >= GEN_6
    #define PETITMON_EXP_YIELD 112
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PETITMON_EXP_YIELD 105
#else
    #define PETITMON_EXP_YIELD 82
#endif

    [SPECIES_PETITMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 11,
        .baseSpeed     = 13,
        .baseSpAttack  = 12,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Tiny Dragon"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Although Petitmon is small in size, it\n"
            "can use it's fire to both defend itself\n"
            "and flee. It is also known for having\n"
            "a cheerful personality."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Petitmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Petitmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 25,
        .backPic = gMonBackPic_Petitmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Petitmon,
        .shinyPalette = gMonShinyPalette_Petitmon,
        .iconSprite = gMonIcon_Petitmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PetitmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_PetitmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PetitmonF,
        .iconPalIndexFemale = 2,
    #endif //P_CUSTOM_GENDER_DIFF_ICONS
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_Petitmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Petitmon,
            gShinyOverworldPalette_Petitmon
        )
        OVERWORLD_FEMALE(
            sPicTable_PetitmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
        .formChangeTable = sPetitmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_BABYDMON}),
    },

#if P_COSPLAY_PETITMON_FORMS
    [SPECIES_PETITMON_COSPLAY]   =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonCosplay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonCosplay,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonCosplay,
        .shinyPalette = gMonShinyPalette_PetitmonCosplay,
        .iconSprite = gMonIcon_PetitmonCosplay,
        .iconPalIndex = 2,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_ROCK_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonRockStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonRockStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonRockStar,
        .shinyPalette = gMonShinyPalette_PetitmonRockStar,
        .iconSprite = gMonIcon_PetitmonRockStar,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_BELLE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonBelle,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonBelle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonBelle,
        .shinyPalette = gMonShinyPalette_PetitmonBelle,
        .iconSprite = gMonIcon_PetitmonBelle,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_POP_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonPopStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonPopStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonPopStar,
        .shinyPalette = gMonShinyPalette_PetitmonPopStar,
        .iconSprite = gMonIcon_PetitmonPopStar,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_PHD] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonPhD,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonPhD,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonPhD,
        .shinyPalette = gMonShinyPalette_PetitmonPhD,
        .iconSprite = gMonIcon_PetitmonPhD,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_LIBRE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonLibre,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonLibre,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonLibre,
        .shinyPalette = gMonShinyPalette_PetitmonLibre,
        .iconSprite = gMonIcon_PetitmonLibre,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

#endif //P_COSPLAY_PETITMON_FORMS

#if P_CAP_PETITMON_FORMS
    [SPECIES_PETITMON_ORIGINAL] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across many different regions."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonOriginal,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonOriginal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonOriginal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonOriginal,
        .shinyPalette = gMonShinyPalette_PetitmonOriginal,
        .iconSprite = gMonIcon_PetitmonOriginal,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_HOENN] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Hoenn region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonHoenn,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonHoenn,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonHoenn,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonHoenn,
        .shinyPalette = gMonShinyPalette_PetitmonHoenn,
        .iconSprite = gMonIcon_PetitmonHoenn,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_SINNOH] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Sinnoh region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonSinnoh,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonSinnoh,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonSinnoh,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonSinnoh,
        .shinyPalette = gMonShinyPalette_PetitmonSinnoh,
        .iconSprite = gMonIcon_PetitmonSinnoh,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_UNOVA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Unova region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonUnova,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonUnova,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonUnova,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonUnova,
        .shinyPalette = gMonShinyPalette_PetitmonUnova,
        .iconSprite = gMonIcon_PetitmonUnova,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_KALOS] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Kalos region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonKalos,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonKalos,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonKalos,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonKalos,
        .shinyPalette = gMonShinyPalette_PetitmonKalos,
        .iconSprite = gMonIcon_PetitmonKalos,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_ALOLA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Alola region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonAlola,
        .shinyPalette = gMonShinyPalette_PetitmonAlola,
        .iconSprite = gMonIcon_PetitmonAlola,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_PARTNER] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed as the two overcame\n"
            "many hardships together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonPartner,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonPartner,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonPartner,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonPartner,
        .shinyPalette = gMonShinyPalette_PetitmonPartner,
        .iconSprite = gMonIcon_PetitmonPartner,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_WORLD] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the world together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonWorld,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonWorld,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonWorld,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonWorld,
        .shinyPalette = gMonShinyPalette_PetitmonWorld,
        .iconSprite = gMonIcon_PetitmonWorld,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

#endif //P_CAP_PETITMON_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PETITMON_GMAX] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 210,
        .weight = 0,
        .description = COMPOUND_STRING(
            "When it smashes its opponents with\n"
            "its bolt-shaped tail, it delivers a\n"
            "surge of electricity equivalent to a\n"
            "lightning strike."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PetitmonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonGmax,
        .shinyPalette = gMonShinyPalette_PetitmonGmax,
        .iconSprite = gMonIcon_PetitmonGmax,
        .iconPalIndex = 2,
        SHADOW(-3, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Petitmon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
        .formChangeTable = sPetitmonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_PETITMON_STARTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Petitmon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Petitmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Petitmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Petitmon,
        .shinyPalette = gMonShinyPalette_Petitmon,
        .iconSprite = gMonIcon_PetitmonStarter,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PetitmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_PetitmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PetitmonStarterF,
        .iconPalIndexFemale = 2,
    #endif
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Petitmon)
        OVERWORLD(
            sPicTable_Petitmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Petitmon,
            gShinyOverworldPalette_Petitmon
        )
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
    },

#define PICHIMON_SPEED (P_UPDATED_STATS >= GEN_6 ? 110 : 100)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define PICHIMON_EXP_YIELD 243
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define PICHIMON_EXP_YIELD 218
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PICHIMON_EXP_YIELD 214
#else
    #define PICHIMON_EXP_YIELD 122
#endif

    [SPECIES_PICHIMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 7,
        .baseDefense   = 5,
        .baseSpeed     = 15,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pichimon"),
        .cryId = CRY_PICHIMON,
        .natDexNum = NATIONAL_DEX_PICHIMON,
        .categoryName = _("Micro"),
        .height = 1,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Pichimon is considered to be a\n"
            "microorganism digimon due to it's small\n"
            "size. Due it's simplicity, it's actions\n"
            "change very frequently."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pichimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Pichimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Pichimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pichimon,
        .shinyPalette = gMonShinyPalette_Pichimon,
        .iconSprite = gMonIcon_Pichimon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PichimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Pichimon)
        OVERWORLD(
            sPicTable_Pichimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pichimon,
            gShinyOverworldPalette_Pichimon
        )
        OVERWORLD_FEMALE(
            sPicTable_PichimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sPichimonLevelUpLearnset,
        .teachableLearnset = sPichimonTeachableLearnset,
        .formSpeciesIdTable = sPichimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_TSUNOMON},
                                {EVO_HEALTH, 16, SPECIES_TOKOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_LEVEL, 6, SPECIES_BUKAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_PICHIMON_ALOLA] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = PICHIMON_SPEED,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = PICHIMON_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SURGE_SURFER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pichimon"),
        .cryId = CRY_PICHIMON,
        .natDexNum = NATIONAL_DEX_PICHIMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "It uses psychokinesis to control\n"
            "electricity. It focuses psychic energy\n"
            "into its tail and rides it like it's surfing.\n"
            "Another name for this Pokémon is 'hodad'."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PichimonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PichimonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_PichimonAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PichimonAlola,
        .shinyPalette = gMonShinyPalette_PichimonAlola,
        .iconSprite = gMonIcon_PichimonAlola,
        .iconPalIndex = 2,
        SHADOW(3, 15, SHADOW_SIZE_M)
        FOOTPRINT(Pichimon)
        OVERWORLD(
            sPicTable_PichimonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PichimonAlola,
            gShinyOverworldPalette_PichimonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sPichimonAlolaLevelUpLearnset,
        .teachableLearnset = sPichimonAlolaTeachableLearnset,
        .formSpeciesIdTable = sPichimonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PETITMON

#if P_FAMILY_POPOMON
    [SPECIES_POPOMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 11,
        .baseSpeed     = 8,
        .baseSpAttack  = 9,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Popomon"),
        .cryId = CRY_POPOMON,
        .natDexNum = NATIONAL_DEX_POPOMON,
        .categoryName = _("Plant"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Popomon looks like a plant, including its\n"
            "tail which has the characteristics of a\n"
            "leaf. It is a very shy digimon but it\n"
            "is very loyal to those it trusts."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Popomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Popomon,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Popomon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Popomon,
        .shinyPalette = gMonShinyPalette_Popomon,
        .iconSprite = gMonIcon_Popomon,
        .iconPalIndex = 2,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Popomon)
        OVERWORLD(
            sPicTable_Popomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Popomon,
            gShinyOverworldPalette_Popomon
        )
        .levelUpLearnset = sPopomonLevelUpLearnset,
        .teachableLearnset = sPopomonTeachableLearnset,
        .eggMoveLearnset = sPopomonEggMoveLearnset,
        .formSpeciesIdTable = sPopomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_WANYAMON},
                                {EVO_LEVEL, 5, SPECIES_FRIMON}),
    },

    [SPECIES_POYOMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 11,
        .baseDefense   = 5,
        .baseSpeed     = 5,
        .baseSpAttack  = 12,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_WATER_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Poyomon"),
        .cryId = CRY_POYOMON,
        .natDexNum = NATIONAL_DEX_POYOMON,
        .categoryName = _("Jellyfish"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Poyomon can commonly be found drifting\n"
            "through the net ocean like a jellyfish.\n"
            "Researchers consider it the missing\n"
            "link to solving the origin of digimon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poyomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = sAnims_Poyomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Poyomon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Poyomon,
        .shinyPalette = gMonShinyPalette_Poyomon,
        .iconSprite = gMonIcon_Poyomon,
        .iconPalIndex = 2,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Poyomon)
        OVERWORLD(
            sPicTable_Poyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poyomon,
            gShinyOverworldPalette_Poyomon
        )
        .levelUpLearnset = sPoyomonLevelUpLearnset,
        .teachableLearnset = sPoyomonTeachableLearnset,
        .formSpeciesIdTable = sPoyomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_TOKOMON},
                         {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                         {EVO_HEALTH, 18, SPECIES_BUKAMON},
                         {EVO_SPEED, 7, SPECIES_NYAROMON},
                         {EVO_SPDEFENSE, 7, SPECIES_YOKOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_POPOMON_ALOLA] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 93,
        .evYield_Defense = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Popomon"),
        .cryId = CRY_POPOMON,
        .natDexNum = NATIONAL_DEX_POPOMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Life on mountains covered with deep snow\n"
            "has granted this Pokémon a body of ice\n"
            "that's as hard as steel.\n"
            "Predators go after its soft belly."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PopomonAlola,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PopomonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PopomonAlola,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PopomonAlola,
        .shinyPalette = gMonShinyPalette_PopomonAlola,
        .iconSprite = gMonIcon_PopomonAlola,
        .iconPalIndex = 0,
        SHADOW(-2, -1, SHADOW_SIZE_M)
        FOOTPRINT(Popomon)
        OVERWORLD(
            sPicTable_PopomonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PopomonAlola,
            gShinyOverworldPalette_PopomonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sPopomonAlolaLevelUpLearnset,
        .teachableLearnset = sPopomonAlolaTeachableLearnset,
        .eggMoveLearnset = sPopomonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sPopomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_POYOMON_ALOLA}),
    },

    [SPECIES_POYOMON_ALOLA] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Poyomon"),
        .cryId = CRY_POYOMON,
        .natDexNum = NATIONAL_DEX_POYOMON,
        .categoryName = _("Mouse"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It uses large, hooked claws to cut a path\n"
            "through deep snow as it runs.\n"
            "On snowy mountains, this Poyomon\n"
            "is faster than any other Pokémon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PoyomonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_PoyomonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PoyomonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PoyomonAlola,
        .shinyPalette = gMonShinyPalette_PoyomonAlola,
        .iconSprite = gMonIcon_PoyomonAlola,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_L)
        FOOTPRINT(Poyomon)
        OVERWORLD(
            sPicTable_PoyomonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PoyomonAlola,
            gShinyOverworldPalette_PoyomonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sPoyomonAlolaLevelUpLearnset,
        .teachableLearnset = sPoyomonAlolaTeachableLearnset,
        .formSpeciesIdTable = sPoyomonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_POPOMON

#if P_FAMILY_NIDORAN
    [SPECIES_PUNIMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 10,
        .baseDefense   = 8,
        .baseSpeed     = 9,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Punimon"),
        .cryId = CRY_PUNIMON,
        .natDexNum = NATIONAL_DEX_PUNIMON,
        .categoryName = _("Acid"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Punimon is new kind of Fresh digimon.\n"
            "It's body is squishy it has three \n"
            "feeler-like things atop it's head. \n"
            "It's bubbles are very acidic."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Punimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_Punimon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        .backPic = gMonBackPic_Punimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Punimon,
        .shinyPalette = gMonShinyPalette_Punimon,
        .iconSprite = gMonIcon_Punimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Punimon)
        OVERWORLD(
            sPicTable_Punimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Punimon,
            gShinyOverworldPalette_Punimon
        )
        .levelUpLearnset = sPunimonLevelUpLearnset,
        .teachableLearnset = sPunimonTeachableLearnset,
        .eggMoveLearnset = sPunimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 7, SPECIES_BUKAMON},
                                {EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_LEVEL, 6, SPECIES_TSUNOMON}),
    },

    [SPECIES_PUPUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 13,
        .baseDefense   = 10,
        .baseSpeed     = 11,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWARM, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pupumon"),
        .cryId = CRY_PUPUMON,
        .natDexNum = NATIONAL_DEX_PUPUMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Pupumon's body is as light as a \n"
            "bubble. However it is very sensitive\n"
            "to movement and will run if detected.\n"
            "It will still counterattack though."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pupumon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Pupumon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pupumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pupumon,
        .shinyPalette = gMonShinyPalette_Pupumon,
        .iconSprite = gMonIcon_Pupumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pupumon)
        OVERWORLD(
            sPicTable_Pupumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pupumon,
            gShinyOverworldPalette_Pupumon
        )
        .levelUpLearnset = sPupumonLevelUpLearnset,
        .teachableLearnset = sPupumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_PUROROMON}),
    },

    [SPECIES_PURURUMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 8,
        .baseDefense   = 7,
        .baseSpeed     = 6,
        .baseSpAttack  = 8,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pururumon"),
        .cryId = CRY_PURURUMON,
        .natDexNum = NATIONAL_DEX_PURURUMON,
        .categoryName = _("Chick"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Although Pururumon is a flying type, it\n"
            "does not have the ability to fly and.\n"
            "instead jiggles along the floor. It \n"
            "loves the smell of grass."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pururumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = sAnims_Pururumon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Pururumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pururumon,
        .shinyPalette = gMonShinyPalette_Pururumon,
        .iconSprite = gMonIcon_Pururumon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pururumon)
        OVERWORLD(
            sPicTable_Pururumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pururumon,
            gShinyOverworldPalette_Pururumon
        )
        .levelUpLearnset = sPururumonLevelUpLearnset,
        .teachableLearnset = sPururumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 6, SPECIES_NYAROMON},
                                {EVO_LEVEL, 5, SPECIES_POROMON}),
    },

    [SPECIES_PUSUMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 14,
        .baseDefense   = 7,
        .baseSpeed     = 10,
        .baseSpAttack  = 8,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pusumon"),
        .cryId = CRY_PUSUMON,
        .natDexNum = NATIONAL_DEX_PUSUMON,
        .categoryName = _("Furry"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pusumon's body is covered in a soft fur\n"
            "however the yellow hairs on it's head are\n"
            "fairly hard. It is inconsolable when it\n"
            "loses it's pacifier."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pusumon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pusumon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Pusumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Pusumon,
        .shinyPalette = gMonShinyPalette_Pusumon,
        .iconSprite = gMonIcon_Pusumon,
        .iconPalIndex = 2,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pusumon)
        OVERWORLD(
            sPicTable_Pusumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pusumon,
            gShinyOverworldPalette_Pusumon
        )
        .levelUpLearnset = sPusumonLevelUpLearnset,
        .teachableLearnset = sPusumonTeachableLearnset,
        .eggMoveLearnset = sPusumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_PUSURIMON}),
    },

    [SPECIES_PUTTIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 6,
        .baseDefense   = 7,
        .baseSpeed     = 11,
        .baseSpAttack  = 14,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CLOUD_NINE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Puttimon"),
        .cryId = CRY_PUTTIMON,
        .natDexNum = NATIONAL_DEX_PUTTIMON,
        .categoryName = _("Angel"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Puttimon is said to be template for all\n"
            "angel like digimon. Although it is Light\n"
            "type, it has a mischievous side to it \n"
            "that is quite adorable."),
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puttimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = sAnims_Puttimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Puttimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Puttimon,
        .shinyPalette = gMonShinyPalette_Puttimon,
        .iconSprite = gMonIcon_Puttimon,
        .iconPalIndex = 2,
        SHADOW(2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Puttimon)
        OVERWORLD(
            sPicTable_Puttimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Puttimon,
            gShinyOverworldPalette_Puttimon
        )
        .levelUpLearnset = sPuttimonLevelUpLearnset,
        .teachableLearnset = sPuttimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_CALUMON},
                                {EVO_LEVEL, 5, SPECIES_KYUPIMON}),
    },

    [SPECIES_PUWAMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 13,
        .baseDefense   = 9,
        .baseSpeed     = 13,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Puwamon"),
        .cryId = CRY_PUWAMON,
        .natDexNum = NATIONAL_DEX_PUWAMON,
        .categoryName = _("Owlet"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Puwamon has incredibly strong eyesight \n"
            "despite it's tiny size. It also has a\n"
            "curious personality and lacks any\n"
            "shyness making it a tamer favourite."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puwamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Puwamon,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Puwamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Puwamon,
        .shinyPalette = gMonShinyPalette_Puwamon,
        .iconSprite = gMonIcon_Puwamon,
        .iconPalIndex = 2,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Puwamon)
        OVERWORLD(
            sPicTable_Puwamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Puwamon,
            gShinyOverworldPalette_Puwamon
        )
        .levelUpLearnset = sPuwamonLevelUpLearnset,
        .teachableLearnset = sPuwamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 7, SPECIES_KYAROMON},
                                {EVO_LEVEL, 5, SPECIES_PINAMON}),
    },
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_PUYOMON
#if P_UPDATED_TYPES >= GEN_6
    #define PUYOMON_FAMILY_TYPES { TYPE_FAIRY, TYPE_FAIRY }
#else
    #define PUYOMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_GUMDRAMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 56,
        .baseSpAttack  = 52,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Gumdramon"),
        .cryId = CRY_GUMDRAMON,
        .natDexNum = NATIONAL_DEX_GUMDRAMON,
        .categoryName = _("Hammer"),
        .height = 8,
        .weight = 291,
        .description = COMPOUND_STRING(
            "Gumdramon possesses a flexiable tail that\n"
            "is in the shape of a hammer. Combine this\n"
            "with its light and elastic body, it makes it\n"
            "hard to hit in battle as it bounces around."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gumdramon,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .frontAnimFrames = sAnims_Gumdramon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Gumdramon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Gumdramon,
        .shinyPalette = gMonShinyPalette_Gumdramon,
        .iconSprite = gMonIcon_Gumdramon,
        .iconPalIndex = 0,
        SHADOW(0, -4, SHADOW_SIZE_S)
        FOOTPRINT(Gumdramon)
        OVERWORLD(
            sPicTable_Gumdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gumdramon,
            gShinyOverworldPalette_Gumdramon
        )
        .levelUpLearnset = sGumdramonLevelUpLearnset,
        .teachableLearnset = sGumdramonTeachableLearnset,
        .eggMoveLearnset = sGumdramonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ARESDRAMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_PUYOMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 8,
        .baseDefense   = 6,
        .baseSpeed     = 5,
        .baseSpAttack  = 8,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Puyomon"),
        .cryId = CRY_PUYOMON,
        .natDexNum = NATIONAL_DEX_PUYOMON,
        .categoryName = _("Jellyfish"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Puyomon is another species of Jellyfish \n"
            "digimon found in the Net Ocean. It has\n"
            "a singular lens but it lacks any \n"
            "emotional expression."),
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puyomon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Puyomon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Puyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Puyomon,
        .shinyPalette = gMonShinyPalette_Puyomon,
        .iconSprite = gMonIcon_Puyomon,
        .iconPalIndex = 0,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Puyomon)
        OVERWORLD(
            sPicTable_Puyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Puyomon,
            gShinyOverworldPalette_Puyomon
        )
        .levelUpLearnset = sPuyomonLevelUpLearnset,
        .teachableLearnset = sPuyomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_PUYOYOMON}),
    },

    [SPECIES_PYONMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 20,
        .baseDefense   = 8,
        .baseSpeed     = 12,
        .baseSpAttack  = 9,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Pyonmon"),
        .cryId = CRY_PYONMON,
        .natDexNum = NATIONAL_DEX_PYONMON,
        .categoryName = _("Large Ear"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pyonmon is covered in tufty body hair\n"
            "and has a singular large ear. When it\n"
            "attacks, it uses its ear which has \n"
            "enough power to blow away Rookies."),
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyonmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Pyonmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pyonmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pyonmon,
        .shinyPalette = gMonShinyPalette_Pyonmon,
        .iconSprite = gMonIcon_Pyonmon,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Pyonmon)
        OVERWORLD(
            sPicTable_Pyonmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pyonmon,
            gShinyOverworldPalette_Pyonmon
        )
        .levelUpLearnset = sPyonmonLevelUpLearnset,
        .teachableLearnset = sPyonmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_BOSAMON}),
    },
#endif //P_FAMILY_PUYOMON

#if P_FAMILY_RELEMON
    [SPECIES_RELEMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 6,
        .baseDefense   = 14,
        .baseSpeed     = 12,
        .baseSpAttack  = 6,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Relemon"),
        .cryId = CRY_RELEMON,
        .natDexNum = NATIONAL_DEX_RELEMON,
        .categoryName = _("Fox"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Relemon are said to be only born on\n"
            "moonlit nights. Those born on fullmoons\n"
            "are also said to have great magical\n"
            "powers."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Relemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = sAnims_Relemon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Relemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Relemon,
        .shinyPalette = gMonShinyPalette_Relemon,
        .iconSprite = gMonIcon_Relemon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 5,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Relemon)
        OVERWORLD(
            sPicTable_Relemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Relemon,
            gShinyOverworldPalette_Relemon
        )
        .levelUpLearnset = sRelemonLevelUpLearnset,
        .teachableLearnset = sRelemonTeachableLearnset,
        .eggMoveLearnset = sRelemonEggMoveLearnset,
        .formSpeciesIdTable = sRelemonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_VIXIMON}),
    },

    [SPECIES_SAKUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 15,
        .baseDefense   = 15,
        .baseSpeed     = 8,
        .baseSpAttack  = 7,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sakumon"),
        .cryId = CRY_SAKUMON,
        .natDexNum = NATIONAL_DEX_SAKUMON,
        .categoryName = _("Gold Blade"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Sakumon's is a mischievous digimon that\n"
            "is known to cause trouble. When running\n"
            "away, it generally struggles as the\n"
            "heavy blade keeps it off balance."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sakumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Sakumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Sakumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Sakumon,
        .shinyPalette = gMonShinyPalette_Sakumon,
        .iconSprite = gMonIcon_Sakumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sakumon)
        OVERWORLD(
            sPicTable_Sakumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sakumon,
            gShinyOverworldPalette_Sakumon
        )
        .levelUpLearnset = sSakumonLevelUpLearnset,
        .teachableLearnset = sSakumonTeachableLearnset,
        .formSpeciesIdTable = sSakumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_SAKUTTOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_RELEMON_ALOLA] =
    {
        .baseHP        = 38,
        .baseAttack    = 41,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Relemon"),
        .cryId = CRY_RELEMON,
        .natDexNum = NATIONAL_DEX_RELEMON,
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 99,
        .description = COMPOUND_STRING(
            "They live together in a skulk, helping\n"
            "one another. In hot weather, this Pokémon\n"
            "makes ice shards with its six tails and\n"
            "sprays them around to cool itself off."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RelemonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_RelemonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RelemonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RelemonAlola,
        .shinyPalette = gMonShinyPalette_RelemonAlola,
        .iconSprite = gMonIcon_RelemonAlola,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Relemon)
        OVERWORLD(
            sPicTable_RelemonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RelemonAlola,
            gShinyOverworldPalette_RelemonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRelemonAlolaLevelUpLearnset,
        .teachableLearnset = sRelemonAlolaTeachableLearnset,
        .eggMoveLearnset = sRelemonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sRelemonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_SAKUMON_ALOLA}),
    },

    [SPECIES_SAKUMON_ALOLA] =
    {
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 178,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sakumon"),
        .cryId = CRY_SAKUMON,
        .natDexNum = NATIONAL_DEX_SAKUMON,
        .categoryName = _("Fox"),
        .height = 11,
        .weight = 199,
        .description = COMPOUND_STRING(
            "While it will guide travelers who get lost\n"
            "on a snowy mountain down to the\n"
            "mountain's base, it won't forgive anyone\n"
            "who harms nature."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SakumonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SakumonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SakumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SakumonAlola,
        .shinyPalette = gMonShinyPalette_SakumonAlola,
        .iconSprite = gMonIcon_SakumonAlola,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sakumon)
        OVERWORLD(
            sPicTable_SakumonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SakumonAlola,
            gShinyOverworldPalette_SakumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSakumonAlolaLevelUpLearnset,
        .teachableLearnset = sSakumonAlolaTeachableLearnset,
        .formSpeciesIdTable = sSakumonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RELEMON

#if P_FAMILY_SANDMON
#if P_UPDATED_TYPES >= GEN_6
    #define SANDMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_FAIRY}
#else
    #define SANDMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HACKMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 57,
        .baseDefense   = 55,
        .baseSpeed     = 56,
        .baseSpAttack  = 54,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Hackmon"),
        .cryId = CRY_HACKMON,
        .natDexNum = NATIONAL_DEX_HACKMON,
        .categoryName = _("Rookie"),
        .height = 11,
        .weight = 242,
        .description = COMPOUND_STRING(
            "Although Hackmon is a pretty average Digimon\n"
            "with no exceptional strengths, it is an\n"
            "incredibly hard worker with many stronger\n"
            "Digimon acknowledging it."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hackmon,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 17,
        .frontAnimFrames = sAnims_Hackmon,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Hackmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Hackmon,
        .shinyPalette = gMonShinyPalette_Hackmon,
        .iconSprite = gMonIcon_Hackmon,
        .iconPalIndex = 1,
        SHADOW(0, -3, SHADOW_SIZE_S)
        FOOTPRINT(Hackmon)
        OVERWORLD(
            sPicTable_Hackmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hackmon,
            gShinyOverworldPalette_Hackmon
        )
        .levelUpLearnset = sHackmonLevelUpLearnset,
        .teachableLearnset = sHackmonTeachableLearnset,
        .eggMoveLearnset = sHackmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BAOHUCKMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_SANDMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 8,
        .baseDefense   = 15,
        .baseSpeed     = 9,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_SAND_VEIL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Sandmon"),
        .cryId = CRY_SANDMON,
        .natDexNum = NATIONAL_DEX_SANDMON,
        .categoryName = _("Sand"),
        .height = 2,
        .weight = 30,
        .description = COMPOUND_STRING(
            "As the name implies, Sandmons body is \n"
            "completely made up of sand. It can \n"
            "harden or soften it's body at will to\n"
            "fit its needs in the moment."),
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = sAnims_Sandmon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Sandmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Sandmon,
        .shinyPalette = gMonShinyPalette_Sandmon,
        .iconSprite = gMonIcon_Sandmon,
        .iconPalIndex = 0,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Sandmon)
        OVERWORLD(
            sPicTable_Sandmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandmon,
            gShinyOverworldPalette_Sandmon
        )
        .levelUpLearnset = sSandmonLevelUpLearnset,
        .teachableLearnset = sSandmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_TUMBLEMON}),
    },

    [SPECIES_TSUBUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 7,
        .baseDefense   = 8,
        .baseSpeed     = 20,
        .baseSpAttack  = 9,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Tsubumon"),
        .cryId = CRY_TSUBUMON,
        .natDexNum = NATIONAL_DEX_TSUBUMON,
        .categoryName = _("Fake Seed"),
        .height = 4,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Tsubumon is often mistaken to be a grass\n"
            "type digimon due it's seed like appearance\n"
            "and that it is often sent flying with \n"
            "strong gusts of wind."),
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tsubumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = sAnims_Tsubumon,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Tsubumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tsubumon,
        .shinyPalette = gMonShinyPalette_Tsubumon,
        .iconSprite = gMonIcon_Tsubumon,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Tsubumon)
        OVERWORLD(
            sPicTable_Tsubumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tsubumon,
            gShinyOverworldPalette_Tsubumon
        )
        .levelUpLearnset = sTsubumonLevelUpLearnset,
        .teachableLearnset = sTsubumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 15, SPECIES_CHICCHIMON},
                                {EVO_SPEED, 7, SPECIES_TOKOMON},
                                {EVO_LEVEL, 5, SPECIES_UPAMON}),
    },
#endif //P_FAMILY_SANDMON

#if P_FAMILY_ICEBOTAMON
    [SPECIES_ICEBOTAMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 8,
        .baseDefense   = 13,
        .baseSpeed     = 10,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Icebotamon"),
        .cryId = CRY_ICEBOTAMON,
        .natDexNum = NATIONAL_DEX_ICEBOTAMON,
        .categoryName = _("Snow"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "IceBotamon is considered a species of\n"
            "Botamon that has adapted for the cold\n"
            "climate. It's breath freezes the \n"
            "moisture in the air."),
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Icebotamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 16,
        .frontAnimFrames = sAnims_Icebotamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 16,
        .backPic = gMonBackPic_Icebotamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Icebotamon,
        .shinyPalette = gMonShinyPalette_Icebotamon,
        .iconSprite = gMonIcon_Icebotamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_IcebotamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_IcebotamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 11, SHADOW_SIZE_S)
        FOOTPRINT(Icebotamon)
        OVERWORLD(
            sPicTable_Icebotamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Icebotamon,
            gShinyOverworldPalette_Icebotamon
        )
        OVERWORLD_FEMALE(
            sPicTable_IcebotamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sIceBotamonLevelUpLearnset,
        .teachableLearnset = sIcebotamonTeachableLearnset,
        .eggMoveLearnset = sIcebotamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_TSUNOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_ITEM, ITEM_MOON_STONE, SPECIES_MOONMON},
                                {EVO_LEVEL, 7, SPECIES_HIYARIMON}),
    },

    [SPECIES_YURAMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 6,
        .baseDefense   = 14,
        .baseSpeed     = 10,
        .baseSpAttack  = 6,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_CHLOROPHYLL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Yuramon"),
        .cryId = CRY_YURAMON,
        .natDexNum = NATIONAL_DEX_YURAMON,
        .categoryName = _("Seed"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Yuramon is a seed digimon, its body seems\n"
            "to be covered in long, soft hair. When\n"
            "it hatches, it will seek a suitable\n"
            "environment to grow."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yuramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 7,
        .frontAnimFrames = sAnims_Yuramon,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backPic = gMonBackPic_Yuramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Yuramon,
        .shinyPalette = gMonShinyPalette_Yuramon,
        .iconSprite = gMonIcon_Yuramon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_YuramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_YuramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Yuramon)
        OVERWORLD(
            sPicTable_Yuramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Yuramon,
            gShinyOverworldPalette_Yuramon
        )
        OVERWORLD_FEMALE(
            sPicTable_YuramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sYuramonLevelUpLearnset,
        .teachableLearnset = sYuramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                                {EVO_HEALTH, 18, SPECIES_KOROMON},
                                {EVO_SPDEFENSE, 7, SPECIES_TANEMON},
                                {EVO_LEVEL, 7, SPECIES_BUDMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_GOTSUMON] =
    {
        .baseHP        = 57,
        .baseAttack    = 55,
        .baseDefense   = 61,
        .baseSpeed     = 48,
        .baseSpAttack  = 51,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_CLOUD_NINE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gotsumon"),
        .cryId = CRY_GOTSUMON,
        .natDexNum = NATIONAL_DEX_GOTSUMON,
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 822,
        .description = COMPOUND_STRING(
            "Although it just looks like it is made up\n"
            "of rock to the naked eye, it can actually\n"
            "hide incredibly valuable ores and minerals\n"
            "in its very tough body."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gotsumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .frontAnimFrames = sAnims_Gotsumon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .backPic = gMonBackPic_Gotsumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Gotsumon,
        .shinyPalette = gMonShinyPalette_Gotsumon,
        .iconSprite = gMonIcon_Gotsumon,
        .iconPalIndex = 2,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gotsumon)
        OVERWORLD(
            sPicTable_Gotsumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Gotsumon,
            gShinyOverworldPalette_Gotsumon
        )
        .levelUpLearnset = sGotsumonLevelUpLearnset,
        .teachableLearnset = sGotsumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GOTSUMON_X},
                                {EVO_LEVEL, 33, SPECIES_BIOSTEGMON}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ICEBOTAMON

#if P_FAMILY_ZERIMON
    [SPECIES_ZERIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 7,
        .baseDefense   = 11,
        .baseSpeed     = 15,
        .baseSpAttack  = 9,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Zerimon"),
        .cryId = CRY_ZERIMON,
        .natDexNum = NATIONAL_DEX_ZERIMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Zerimon is an extremely rare digimon born\n"
            "as a twin with Conomon. Unlike the three\n"
            "horned Conomon, the one horned Zerimon\n"
            "is very energetic."),
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zerimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Zerimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Zerimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Zerimon,
        .shinyPalette = gMonShinyPalette_Zerimon,
        .iconSprite = gMonIcon_Zerimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Zerimon)
        OVERWORLD(
            sPicTable_Zerimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zerimon,
            gShinyOverworldPalette_Zerimon
        )
        .levelUpLearnset = sZerimonLevelUpLearnset,
        .teachableLearnset = sZerimonTeachableLearnset,
        .eggMoveLearnset = sZerimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_GUMMYMON}),
    },

    [SPECIES_ZURUMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 10,
        .baseDefense   = 8,
        .baseSpeed     = 12,
        .baseSpAttack  = 9,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_POISON_POINT, ABILITY_LIQUID_OOZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zurumon"),
        .cryId = CRY_ZURUMON,
        .natDexNum = NATIONAL_DEX_ZURUMON,
        .categoryName = _("Toxic Virus"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Zurumon was produced by hackers with\n"
            "evil desires. It's body is made up of \n"
            "a toxic slime substance. It has skillful\n"
            "control of it's body."),
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zurumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Zurumon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Zurumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Zurumon,
        .shinyPalette = gMonShinyPalette_Zurumon,
        .iconSprite = gMonIcon_Zurumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ZurumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_ZurumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Zurumon)
        OVERWORLD(
            sPicTable_Zurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zurumon,
            gShinyOverworldPalette_Zurumon
        )
        OVERWORLD_FEMALE(
            sPicTable_ZurumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sZurumonLevelUpLearnset,
        .teachableLearnset = sZurumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_KAPURIMON},
                                {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                                {EVO_HEALTH, 17, SPECIES_KOROMON},
                                {EVO_LEVEL, 6, SPECIES_PAGUMON}),
    },

    [SPECIES_ARCADIAMON_IT] =
    {
        .baseHP        = 25,
        .baseAttack    = 33,
        .baseDefense   = 30,
        .baseSpeed     = 35,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_IT,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_IT,
        .categoryName = _("Ultimate"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Arcadiamon is an artificial digimon \n"
            "that was created to make the ultimate\n"
            "digimon. Despite only being In-Training,\n"
            "it has incredible physical abilities."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arcadiamon_it,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = sAnims_Arcadiamon_it,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Arcadiamon_it,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Arcadiamon_it,
        .shinyPalette = gMonShinyPalette_Arcadiamon_it,
        .iconSprite = gMonIcon_Arcadiamon_it,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Arcadiamon_itF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_Arcadiamon_itF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Arcadiamon_it)
        OVERWORLD(
            sPicTable_Arcadiamon_it,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arcadiamon_it,
            gShinyOverworldPalette_Arcadiamon_it
        )
        OVERWORLD_FEMALE(
            sPicTable_Arcadiamon_itF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sArcadiamon_itLevelUpLearnset,
        .teachableLearnset = sArcadiamon_itTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_ARCADIAMON_ROOKIE}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IMPMON_X] =
    {
        .baseHP        = 53,
        .baseAttack    = 56,
        .baseDefense   = 51,
        .baseSpeed     = 52,
        .baseSpAttack  = 67,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Impmon"),
        .cryId = CRY_IMPMON_X,
        .natDexNum = NATIONAL_DEX_IMPMON_X,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Although not much changes physically with\n"
            "Impmon X, it is still a stronger opponent\n"
            "due to have more confidence in itself. The\n"
            "eyepatch is because of its chuuni persona."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Impmon_x,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = sAnims_Impmon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Impmon_x,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Impmon_x,
        .shinyPalette = gMonShinyPalette_Impmon_x,
        .iconSprite = gMonIcon_Impmon_x,
        .iconPalIndex = 1,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Impmon_x)
        OVERWORLD(
            sPicTable_Impmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Impmon_x,
            gShinyOverworldPalette_Impmon_x
        )
        .levelUpLearnset = sImpmon_xLevelUpLearnset,
        .teachableLearnset = sImpmon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ALLOMON_X}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZERIMON

#if P_FAMILY_ARGOMON_IT
    [SPECIES_ARGOMON_IT] =
    {
        .baseHP        = 19,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 35,
        .baseSpAttack  = 21,
        .baseSpDefense = 16,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_IT,
        .natDexNum = NATIONAL_DEX_ARGOMON_IT,
        .categoryName = _("Algorithm"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Argomon is often seen attached to places \n"
            "where large volumes of data flow. They \n"
            "use the mouth on it's underside to \n"
            "consume that data."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_it,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Argomon_it,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Argomon_it,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Argomon_it,
        .shinyPalette = gMonShinyPalette_Argomon_it,
        .iconSprite = gMonIcon_Argomon_it,
        .iconPalIndex = 0,
        SHADOW(7, -11, SHADOW_SIZE_M)
        FOOTPRINT(Argomon_it)
        OVERWORLD(
            sPicTable_Argomon_it,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Argomon_it,
            gShinyOverworldPalette_Argomon_it
        )
        .levelUpLearnset = sArgomon_itLevelUpLearnset,
        .teachableLearnset = sArgomon_itTeachableLearnset,
        .eggMoveLearnset = sArgomon_itEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_AGUMON},
                                {EVO_SPEED, 11, SPECIES_LABRAMON},
                                {EVO_SPDEFENSE, 10, SPECIES_GHOSTMON},
                                {EVO_HEALTH, 25, SPECIES_WORMMON},
                                {EVO_LEVEL, 11, SPECIES_ARGOMON_ROOKIE}),
    },

    [SPECIES_BABYDMON] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 29,
        .baseSpAttack  = 33,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Babydmon"),
        .cryId = CRY_BABYDMON,
        .natDexNum = NATIONAL_DEX_BABYDMON,
        .categoryName = _("Baby Dragon"),
        .height = 7,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Only discovered recently, Babydmon is\n"
            "likely to contain's evolutionairy ties\n"
            "ancient and long lost Digimon. It is\n"
            "very ferocious despite it's size."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Babydmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Babydmon,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Babydmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Babydmon,
        .shinyPalette = gMonShinyPalette_Babydmon,
        .iconSprite = gMonIcon_Babydmon,
        .iconPalIndex = 0,
        SHADOW(5, 2, SHADOW_SIZE_L)
        FOOTPRINT(Babydmon)
        OVERWORLD(
            sPicTable_Babydmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Babydmon,
            gShinyOverworldPalette_Babydmon
        )
        .levelUpLearnset = sBabydmonLevelUpLearnset,
        .teachableLearnset = sBabydmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 19, SPECIES_AGUMON_EXPERT},
                                {EVO_ATTACK, 15, SPECIES_HACKMON},
                                {EVO_SPEED, 16, SPECIES_GUMDRAMON},
                                {EVO_HEALTH, 33, SPECIES_AGUMON_06},
                                {EVO_LEVEL, 14, SPECIES_DRACOMON}),
    },
#endif //P_FAMILY_ARGOMON_IT

#if P_FAMILY_BIBIMON
    [SPECIES_BIBIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 28,
        .baseDefense   = 26,
        .baseSpeed     = 20,
        .baseSpAttack  = 24,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Bibimon"),
        .cryId = CRY_BIBIMON,
        .natDexNum = NATIONAL_DEX_BIBIMON,
        .categoryName = _("Heart Rate"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Bibimon lacks composure and is often \n"
            "seen stumbling around. This is because\n"
            "it is not yet used to having four \n"
            "limbs yet."),
        .pokemonScale = 370,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Bibimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Bibimon,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Bibimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bibimon,
        .shinyPalette = gMonShinyPalette_Bibimon,
        .iconSprite = gMonIcon_Bibimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Bibimon)
        OVERWORLD(
            sPicTable_Bibimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bibimon,
            gShinyOverworldPalette_Bibimon
        )
        .levelUpLearnset = sBibimonLevelUpLearnset,
        .teachableLearnset = sBibimonTeachableLearnset,
        .eggMoveLearnset = sBibimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 14, SPECIES_KUDAMON},
                                {EVO_SPATTACK, 13, SPECIES_SHOUTMON},
                                {EVO_LEVEL, 12, SPECIES_PULSEMON}),
    },

    [SPECIES_BOSAMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 29,
        .baseDefense   = 28,
        .baseSpeed     = 24,
        .baseSpAttack  = 23,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bosamon"),
        .cryId = CRY_BOSAMON,
        .natDexNum = NATIONAL_DEX_BOSAMON,
        .categoryName = _("Big Ear"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Unlike it's younger self, Bosamon has\n"
            "grown out it's bangs and it's shy \n"
            "personality has become calm instead.\n"
            "It's now has even greater hearing."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Bosamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 9,
        .frontAnimFrames = sAnims_Bosamon,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 16,
        .backPic = gMonBackPic_Bosamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bosamon,
        .shinyPalette = gMonShinyPalette_Bosamon,
        .iconSprite = gMonIcon_Bosamon,
        .iconPalIndex = 2,
        SHADOW(-5, 18, SHADOW_SIZE_M)
        FOOTPRINT(Bosamon)
        OVERWORLD(
            sPicTable_Bosamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bosamon,
            gShinyOverworldPalette_Bosamon
        )
        .levelUpLearnset = sBosamonLevelUpLearnset,
        .teachableLearnset = sBosamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_DRACMON},
                                {EVO_LEVEL, 12, SPECIES_ANGORAMON}),
    },
#endif //P_FAMILY_BIBIMON

#if P_FAMILY_BUDMON

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define BUKAMON_EXP_YIELD 149
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define BUKAMON_EXP_YIELD 142
#else
    #define BUKAMON_EXP_YIELD 153
#endif

#define BUKAMON_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

    [SPECIES_BUDMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 28,
        .baseDefense   = 24,
        .baseSpeed     = 21,
        .baseSpAttack  = 27,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Budmon"),
        .cryId = CRY_BUDMON,
        .natDexNum = NATIONAL_DEX_BUDMON,
        .categoryName = _("Poison Seed"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Budmon is made up of the data from \n"
            "various poisonous plants from the\n"
            "digital world. It usually drifts \n"
            "through the air by its leaf."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Budmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 17,
        .frontAnimFrames = sAnims_Budmon,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Budmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Budmon,
        .shinyPalette = gMonShinyPalette_Budmon,
        .iconSprite = gMonIcon_Budmon,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Budmon)
        OVERWORLD(
            sPicTable_Budmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Budmon,
            gShinyOverworldPalette_Budmon
        )
        .levelUpLearnset = sBudmonLevelUpLearnset,
        .teachableLearnset = sBudmonTeachableLearnset,
        .eggMoveLearnset = sBudmonEggMoveLearnset,
        .formSpeciesIdTable = sBudmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPEED, 14, SPECIES_TOYAGUMON},
                                {EVO_SPATTACK, 16, SPECIES_DOKUNEMON},
                                {EVO_ATTACK, 16, SPECIES_PALMON},
                                {EVO_HEALTH, 32, SPECIES_MUSHROOMON},
                                {EVO_LEVEL, 14, SPECIES_LALAMON}),
    },

    [SPECIES_BUKAMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 24,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 27,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bukamon"),
        .cryId = CRY_BUKAMON,
        .natDexNum = NATIONAL_DEX_BUKAMON,
        .categoryName = _("Seal"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although Bukamon looks like an aquatic\n"
            "dinosaur, it currently does not have\n"
            "any relation to Dinosaur Digimon. It\n"
            "is also a very shy Digimon."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bukamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Bukamon,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        .backPic = gMonBackPic_Bukamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bukamon,
        .shinyPalette = gMonShinyPalette_Bukamon,
        .iconSprite = gMonIcon_Bukamon,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Bukamon)
        OVERWORLD(
            sPicTable_Bukamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Bukamon,
            gShinyOverworldPalette_Bukamon
        )
        .levelUpLearnset = sBukamonLevelUpLearnset,
        .teachableLearnset = sBukamonTeachableLearnset,
        .formSpeciesIdTable = sBukamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_YUKIAGUMON},
                                {EVO_DEFENSE, 14, SPECIES_CRABMON},
                                {EVO_SPDEFENSE, 14, SPECIES_OTAMAMON},
                                {EVO_SPEED, 15, SPECIES_BETAMON},
                                {EVO_LEVEL, 13, SPECIES_GOMAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_BUDMON_ALOLA] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 81,
        .evYield_Speed = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Budmon"),
        .cryId = CRY_BUDMON,
        .natDexNum = NATIONAL_DEX_BUDMON,
        .categoryName = _("Mole"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "The metal-rich geology of its habitat\n"
            "caused it to develop steel whiskers on its\n"
            "head that change shape depending on its\n"
            "mood and when communicating with others."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BudmonAlola,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_BudmonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BudmonAlola,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BudmonAlola,
        .shinyPalette = gMonShinyPalette_BudmonAlola,
        .iconSprite = gMonIcon_BudmonAlola,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Budmon)
        OVERWORLD(
            sPicTable_BudmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BudmonAlola,
            gShinyOverworldPalette_BudmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sBudmonAlolaLevelUpLearnset,
        .teachableLearnset = sBudmonAlolaTeachableLearnset,
        .eggMoveLearnset = sBudmonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sBudmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BUKAMON_ALOLA}),
    },

    [SPECIES_BUKAMON_ALOLA] =
    {
        .baseHP        = 35,
        .baseAttack    = BUKAMON_ATTACK,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 50,
        .expYield = BUKAMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Bukamon"),
        .cryId = CRY_BUKAMON,
        .natDexNum = NATIONAL_DEX_BUKAMON,
        .categoryName = _("Mole"),
        .height = 7,
        .weight = 666,
        .description = COMPOUND_STRING(
            "Their beautiful, metallic whiskers create\n"
            "a sort of protective helmet on\n"
            "heir heads, and they also function\n"
            "as highly precise sensors."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BukamonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_BukamonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BukamonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BukamonAlola,
        .shinyPalette = gMonShinyPalette_BukamonAlola,
        .iconSprite = gMonIcon_BukamonAlola,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Bukamon)
        OVERWORLD(
            sPicTable_BukamonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BukamonAlola,
            gShinyOverworldPalette_BukamonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sBukamonAlolaLevelUpLearnset,
        .teachableLearnset = sBukamonAlolaTeachableLearnset,
        .formSpeciesIdTable = sBukamonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_BUDMON

#if P_FAMILY_CALUMON
    [SPECIES_CALUMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 16,
        .baseSpeed     = 28,
        .baseSpAttack  = 33,
        .baseSpDefense = 32,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_UKNOWN,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE }, // DIGI-ENTELECHEIA
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Evolution"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Calumon is a digimon shrouded in \n"
            "mystery. Current research points to\n"
            "the possibility that it is \n"
            "digivolution given form."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Calumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Calumon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Calumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Calumon,
        .shinyPalette = gMonShinyPalette_Calumon,
        .iconSprite = gMonIcon_Calumon,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_Calumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Calumon,
            gShinyOverworldPalette_Calumon
        )
        .levelUpLearnset = sCalumonLevelUpLearnset,
        .teachableLearnset = sCalumonTeachableLearnset,
        .eggMoveLearnset = sCalumonEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .formChangeTable = sCalumonFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 11, SPECIES_SALAMON}),
    },

    [SPECIES_CHAPMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 26,
        .baseSpAttack  = 25,
        .baseSpDefense = 27,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chapmon"),
        .cryId = CRY_CHAPMON,
        .natDexNum = NATIONAL_DEX_CHAPMON,
        .categoryName = _("Kappa"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Chapmon refuses to live in water that\n"
            "isn't clear, this makes it a very rare\n"
            "digimon. When it sleeps, it will only \n"
            "poke it's face out of the water surface."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chapmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .frontAnimFrames = sAnims_Chapmon,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Chapmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Chapmon,
        .shinyPalette = gMonShinyPalette_Chapmon,
        .iconSprite = gMonIcon_Chapmon,
        .iconPalIndex = 1,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Chapmon)
        OVERWORLD(
            sPicTable_Chapmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chapmon,
            gShinyOverworldPalette_Chapmon
        )
        .levelUpLearnset = sChapmonLevelUpLearnset,
        .teachableLearnset = sChapmonTeachableLearnset,
        .formSpeciesIdTable = sChapmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 17, SPECIES_KUDAMON_06},
                                {EVO_ATTACK, 15, SPECIES_ELECMON},
                                {EVO_SPEED, 16, SPECIES_FALCOMON_06},
                                {EVO_SPATTACK, 16, SPECIES_BETAMON},
                                {EVO_LEVEL, 15, SPECIES_KAMEMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_CALUMON_ALOLA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It's accustomed to luxury because it used\n"
            "to live with Alolan royalty. Highly smart\n"
            "and proud, it's famously difficult to\n"
            "handle, but that also makes it popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_CalumonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonAlola,
        .shinyPalette = gMonShinyPalette_CalumonAlola,
        .iconSprite = gMonIcon_CalumonAlola,
        .iconPalIndex = 2,
        SHADOW(-2, 5, SHADOW_SIZE_M)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_CalumonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CalumonAlola,
            gShinyOverworldPalette_CalumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sCalumonAlolaLevelUpLearnset,
        .teachableLearnset = sCalumonAlolaTeachableLearnset,
        .eggMoveLearnset = sCalumonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CHAPMON_ALOLA}),
    },

    [SPECIES_CHAPMON_ALOLA] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 148,
        .evYield_Speed = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Chapmon"),
        .cryId = CRY_CHAPMON,
        .natDexNum = NATIONAL_DEX_CHAPMON,
        .categoryName = _("Classy Cat"),
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING(
            "It looks down on everyone other than\n"
            "itself. In contrast to its lovely face, it\n"
            "is so brutal that it tortures its weakened\n"
            "prey rather than finishing them off."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChapmonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_ChapmonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChapmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChapmonAlola,
        .shinyPalette = gMonShinyPalette_ChapmonAlola,
        .iconSprite = gMonIcon_ChapmonAlola,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Chapmon)
        OVERWORLD(
            sPicTable_ChapmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ChapmonAlola,
            gShinyOverworldPalette_ChapmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sChapmonAlolaLevelUpLearnset,
        .teachableLearnset = sChapmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sChapmonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_CALUMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Living with a savage, seafaring people has\n"
            "hardened its body so much that parts of it\n"
            "turned to iron. Darker coins are harder\n"
            "and garner more respect among Calumon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_CalumonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonGalar,
        .shinyPalette = gMonShinyPalette_CalumonGalar,
        .iconSprite = gMonIcon_CalumonGalar,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_CalumonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CalumonGalar,
            gShinyOverworldPalette_CalumonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sCalumonGalarLevelUpLearnset,
        .teachableLearnset = sCalumonGalarTeachableLearnset,
        .eggMoveLearnset = sCalumonGalarEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Perrserker"),
        .cryId = CRY_PERRSERKER,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = COMPOUND_STRING(
            "What appears to be an iron helmet is\n"
            "actually hardened hair. This Pokémon\n"
            "lives for the thrill of battle."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Perrserker,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Perrserker,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Perrserker,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Perrserker,
        .shinyPalette = gMonShinyPalette_Perrserker,
        .iconSprite = gMonIcon_Perrserker,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Perrserker)
        OVERWORLD(
            sPicTable_Perrserker,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Perrserker,
            gShinyOverworldPalette_Perrserker
        )
        .levelUpLearnset = sPerrserkerLevelUpLearnset,
        .teachableLearnset = sPerrserkerTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CALUMON_GMAX] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The pattern that has appeared on\n"
            "its giant coin is thought to be the\n"
            "key to unlocking the secrets of the\n"
            "Dynamax phenomenon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_CalumonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonGmax,
        .shinyPalette = gMonShinyPalette_CalumonGmax,
        .iconSprite = gMonIcon_CalumonGmax,
        .iconPalIndex = 1,
        SHADOW(4, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Calumon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCalumonLevelUpLearnset,
        .teachableLearnset = sCalumonTeachableLearnset,
        .eggMoveLearnset = sCalumonEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .formChangeTable = sCalumonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CALUMON

#if P_FAMILY_CHICCHIMON
    [SPECIES_CHICCHIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 23,
        .baseDefense   = 22,
        .baseSpeed     = 29,
        .baseSpAttack  = 22,
        .baseSpDefense = 21,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chicchimon"),
        .cryId = CRY_CHICCHIMON,
        .natDexNum = NATIONAL_DEX_CHICCHIMON,
        .categoryName = _("Chick"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Due to Chicchimon's small wing size, it\n"
            "is not yet able to take flight. It can\n"
            "however jump extra high and float down\n"
            "to the ground."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chicchimon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = sAnims_Chicchimon,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Chicchimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Chicchimon,
        .shinyPalette = gMonShinyPalette_Chicchimon,
        .iconSprite = gMonIcon_Chicchimon,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Chicchimon)
        OVERWORLD(
            sPicTable_Chicchimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chicchimon,
            gShinyOverworldPalette_Chicchimon
        )
        .levelUpLearnset = sChicchimonLevelUpLearnset,
        .teachableLearnset = sChicchimonTeachableLearnset,
        .eggMoveLearnset = sChicchimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 30, SPECIES_DOTFALCMON},
                                {EVO_SPATTACK, 14, SPECIES_MUCHOMON},
                                {EVO_ATTACK, 14, SPECIES_PENGUINMON},
                                {EVO_SPEED, 16, SPECIES_FALCOMON},
                                {EVO_LEVEL, 13, SPECIES_HYOKOMON}),
    },

    [SPECIES_DEMMERAMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 23,
        .baseDefense   = 23,
        .baseSpeed     = 27,
        .baseSpAttack  = 31,
        .baseSpDefense = 29,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Demmeramon"),
        .cryId = CRY_DEMMERAMON,
        .natDexNum = NATIONAL_DEX_DEMMERAMON,
        .categoryName = _("Flaming"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Demimeramon's whole body is ablaze\n"
            "at all times. It has a wild temperament\n"
            "and will attack anything in sight\n"
            "despite it's small body size."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Demmeramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = sAnims_Demmeramon,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Demmeramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Demmeramon,
        .shinyPalette = gMonShinyPalette_Demmeramon,
        .iconSprite = gMonIcon_Demmeramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Demmeramon)
        OVERWORLD(
            sPicTable_Demmeramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Demmeramon,
            gShinyOverworldPalette_Demmeramon
        )
        .levelUpLearnset = sDemmeramonLevelUpLearnset,
        .teachableLearnset = sDemmeramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 16, SPECIES_GOTSUMON},
                                {EVO_SPATTACK, 19, SPECIES_CORONAMON},
                                {EVO_ATTACK, 16, SPECIES_FLAMEMON},
                                {EVO_SPEED, 18, SPECIES_VORVOMON},
                                {EVO_LEVEL, 16, SPECIES_CANDLEMON}),
    },
#endif //P_FAMILY_CHICCHIMON

#if P_FAMILY_DEMIVEEMON
    [SPECIES_DEMIVEEMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 25,
        .baseDefense   = 24,
        .baseSpeed     = 29,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Demiveemon"),
        .cryId = CRY_DEMIVEEMON,
        .natDexNum = NATIONAL_DEX_DEMIVEEMON,
        .categoryName = _("Hopping"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Unlike most other In-Training Digimon,\n"
            "DemiVeemon has great control of it's \n"
            "whole body letting it grip objects\n"
            "and hop about without worry."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Demiveemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Demiveemon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Demiveemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Demiveemon,
        .shinyPalette = gMonShinyPalette_Demiveemon,
        .iconSprite = gMonIcon_Demiveemon,
        .iconPalIndex = 1,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Demiveemon)
        OVERWORLD(
            sPicTable_Demiveemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Demiveemon,
            gShinyOverworldPalette_Demiveemon
        )
        .levelUpLearnset = sDemiveemonLevelUpLearnset,
        .teachableLearnset = sDemiveemonTeachableLearnset,
        .eggMoveLearnset = sDemiveemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_VEEMON}),
    },

    [SPECIES_DORIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 28,
        .baseDefense   = 25,
        .baseSpeed     = 31,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dorimon"),
        .cryId = CRY_DORIMON,
        .natDexNum = NATIONAL_DEX_DORIMON,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despites it's small size, Dorimon can\n"
            "quickly build up lots of speed. If \n"
            "it hits something while charging, it\n"
            "can deal considerable damage."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dorimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = sAnims_Dorimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Dorimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Dorimon,
        .shinyPalette = gMonShinyPalette_Dorimon,
        .iconSprite = gMonIcon_Dorimon,
        .iconPalIndex = 2,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Dorimon)
        OVERWORLD(
            sPicTable_Dorimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dorimon,
            gShinyOverworldPalette_Dorimon
        )
        .levelUpLearnset = sDorimonLevelUpLearnset,
        .teachableLearnset = sDorimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 30, SPECIES_BLKAGUMON},
                                {EVO_SPATTACK, 14, SPECIES_SHAMANMON},
                                {EVO_ATTACK, 15, SPECIES_MONODRAMON},
                                {EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                                {EVO_LEVEL, 13, SPECIES_DORUMON}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Annihilape"),
        .cryId = CRY_ANNIHILAPE,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Rage Monkey"),
        .height = 12,
        .weight = 570,
        .description = COMPOUND_STRING(
            "When its anger rose beyond a\n"
            "critical point, this Pokémon gained power\n"
            "that is unfettered by the limits of\n"
            "its physical body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Annihilape,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Annihilape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Annihilape,
        .shinyPalette = gMonShinyPalette_Annihilape,
        .iconSprite = gMonIcon_Annihilape,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Annihilape)
        OVERWORLD(
            sPicTable_Annihilape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Annihilape,
            gShinyOverworldPalette_Annihilape
        )
        .levelUpLearnset = sAnnihilapeLevelUpLearnset,
        .teachableLearnset = sAnnihilapeTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DEMIVEEMON

#if P_FAMILY_FRIMON
    [SPECIES_FRIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 28,
        .baseDefense   = 30,
        .baseSpeed     = 26,
        .baseSpAttack  = 23,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ROCK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_SWIFT_SWIM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Frimon"),
        .cryId = CRY_FRIMON,
        .natDexNum = NATIONAL_DEX_FRIMON,
        .categoryName = _("Frill"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Frimon possesses a frill on its neck\n"
            "that's hardness can be changed at will.\n"
            "It can be seen chasing it's own tail\n"
            "when it get's bored."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frimon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = sAnims_Frimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BACK_AND_LUNGE : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Frimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Frimon,
        .shinyPalette = gMonShinyPalette_Frimon,
        .iconSprite = gMonIcon_Frimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Frimon)
        OVERWORLD(
            sPicTable_Frimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Frimon,
            gShinyOverworldPalette_Frimon
        )
        .levelUpLearnset = sFrimonLevelUpLearnset,
        .teachableLearnset = sFrimonTeachableLearnset,
        .eggMoveLearnset = sFrimonEggMoveLearnset,
        .formSpeciesIdTable = sFrimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_KOKABUIMON},
                                {EVO_DEFENSE, 15, SPECIES_BEARMON},
                                {EVO_SPEED, 14, SPECIES_GAZIMON},
                                {EVO_ATTACK, 14, SPECIES_ELECMON_VIOLET},
                                {EVO_LEVEL, 12, SPECIES_LIOLLMON}),
    },

    [SPECIES_GIGIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 30,
        .baseDefense   = 21,
        .baseSpeed     = 26,
        .baseSpAttack  = 24,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gigimon"),
        .cryId = CRY_GIGIMON,
        .natDexNum = NATIONAL_DEX_GIGIMON,
        .categoryName = _("Fire Dragon"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despite it's deceptively small appearance,\n"
            "Gigimon packs a ferocious bite that can\n"
            "leave burn scars. It is said to evolve\n"
            "into a noble and powerful dragon Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Gigimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gigimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 40 : 8,
        .backPic = gMonBackPic_Gigimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gigimon,
        .shinyPalette = gMonShinyPalette_Gigimon,
        .iconSprite = gMonIcon_Gigimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigimon)
        OVERWORLD(
            sPicTable_Gigimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gigimon,
            gShinyOverworldPalette_Gigimon
        )
        .levelUpLearnset = sGigimonLevelUpLearnset,
        .teachableLearnset = sGigimonTeachableLearnset,
        .formSpeciesIdTable = sGigimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 35, SPECIES_SHOUTMON},
                                {EVO_DEFENSE, 16, SPECIES_HAGURUMON},
                                {EVO_ATTACK, 18, SPECIES_GOBLIMON},
                                {EVO_SPATTACK, 17, SPECIES_SOLARMON},
                                {EVO_LEVEL, 16, SPECIES_GUILMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_FRIMON_HISUI] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 91,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Frimon"),
        .cryId = CRY_FRIMON,
        .natDexNum = NATIONAL_DEX_FRIMON,
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING(
            "They patrol their territory in pairs.\n"
            "It's believed the igneous rock components\n"
            "in the fur of this species are the result\n"
            "of volcanic activity in its habitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FrimonHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_FrimonHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FrimonHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FrimonHisui,
        .shinyPalette = gMonShinyPalette_FrimonHisui,
        .iconSprite = gMonIcon_FrimonHisui,
        .iconPalIndex = 0,
        SHADOW(2, -2, SHADOW_SIZE_M)
        FOOTPRINT(Frimon)
        OVERWORLD(
            sPicTable_FrimonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_FrimonHisui,
            gShinyOverworldPalette_FrimonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sFrimonHisuiLevelUpLearnset,
        .teachableLearnset = sFrimonHisuiTeachableLearnset,
        .formSpeciesIdTable = sFrimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_GIGIMON_HISUI}),
    },

    [SPECIES_GIGIMON_HISUI] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 194 : 213,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gigimon"),
        .cryId = CRY_GIGIMON,
        .natDexNum = NATIONAL_DEX_GIGIMON,
        .categoryName = _("Legendary"),
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "Snaps at its foes with fangs cloaked in\n"
            "blazing flame. Despite its bulk, it deftly\n"
            "feints every which way, leading opponents\n"
            "on a deceptively merry chase."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GigimonHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GigimonHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GigimonHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GigimonHisui,
        .shinyPalette = gMonShinyPalette_GigimonHisui,
        .iconSprite = gMonIcon_GigimonHisui,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigimon)
        OVERWORLD(
            sPicTable_GigimonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GigimonHisui,
            gShinyOverworldPalette_GigimonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGigimonHisuiLevelUpLearnset,
        .teachableLearnset = sGigimonHisuiTeachableLearnset,
        .formSpeciesIdTable = sGigimonFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FRIMON

#if P_FAMILY_GUMMYMON
    [SPECIES_GUMMYMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 29,
        .baseDefense   = 20,
        .baseSpeed     = 30,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Gummymon"),
        .cryId = CRY_GUMMYMON,
        .natDexNum = NATIONAL_DEX_GUMMYMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Gummymon always has an energetic\n"
            "personality. It's body tissue is still\n"
            "unstable however it's horn is hardened.\n"
            "providing some option for offense."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gummymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 13,
        .frontAnimFrames = sAnims_Gummymon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gummymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gummymon,
        .shinyPalette = gMonShinyPalette_Gummymon,
        .iconSprite = gMonIcon_Gummymon,
        .iconPalIndex = 0,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Gummymon)
        OVERWORLD(
            sPicTable_Gummymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gummymon,
            gShinyOverworldPalette_Gummymon
        )
        .levelUpLearnset = sGummymonLevelUpLearnset,
        .teachableLearnset = sGummymonTeachableLearnset,
        .eggMoveLearnset = sGummymonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 14, SPECIES_HAZYAGUMON},
                                {EVO_SPATTACK, 15, SPECIES_TAPIRMON},
                                {EVO_ATTACK, 16, SPECIES_GAOMON},
                                {EVO_SPEED, 17, SPECIES_JAZAMON},
                                {EVO_LEVEL, 14, SPECIES_TERRIERMON}),
    },

    [SPECIES_GURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 29,
        .baseDefense   = 25,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_PICKUP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Gurimon"),
        .cryId = CRY_GURIMON,
        .natDexNum = NATIONAL_DEX_GURIMON,
        .categoryName = _("Horn"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Gurimon can be seen often bouncing around\n"
            "energetically. It loves large, hard rocks\n"
            "and will strike them with it's horns. It\n"
            "also has a hard frill to protect it's body."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = sAnims_Gurimon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Gurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gurimon,
        .shinyPalette = gMonShinyPalette_Gurimon,
        .iconSprite = gMonIcon_Gurimon,
        .iconPalIndex = 0,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gurimon)
        OVERWORLD(
            sPicTable_Gurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gurimon,
            gShinyOverworldPalette_Gurimon
        )
        .levelUpLearnset = sGurimonLevelUpLearnset,
        .teachableLearnset = sGurimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_BOKOMON},
                                {EVO_SPEED, 13, SPECIES_MONMON},
                                {EVO_LEVEL, 12, SPECIES_GAMMAMON}),
    },

    [SPECIES_HIYARIMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 26,
        .baseSpAttack  = 26,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Hiyarimon"),
        .cryId = CRY_HIYARIMON,
        .natDexNum = NATIONAL_DEX_HIYARIMON,
        .categoryName = _("Ice Penguin"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Hiyarimon's body is constantly covered \n"
            "in snow. It is likely that the bigger \n"
            "icicle on the tip of its beak, the more\n"
            "energy it has."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hiyarimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Hiyarimon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Hiyarimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hiyarimon,
        .shinyPalette = gMonShinyPalette_Hiyarimon,
        .iconSprite = gMonIcon_Hiyarimon,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Hiyarimon)
        OVERWORLD(
            sPicTable_Hiyarimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hiyarimon,
            gShinyOverworldPalette_Hiyarimon
        )
        .levelUpLearnset = sHiyarimonLevelUpLearnset,
        .teachableLearnset = sHiyarimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 15, SPECIES_BEARMON},
                                {EVO_ATTACK, 15, SPECIES_BULUCOMON},
                                {EVO_LEVEL, 14, SPECIES_ICEGOBIMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KAMEMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 63,
        .baseSpeed     = 49,
        .baseSpAttack  = 55,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_DAMP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Kamemon"),
        .cryId = CRY_KAMEMON,
        .natDexNum = NATIONAL_DEX_KAMEMON,
        .categoryName = _("Kappa"),
        .height = 11,
        .weight = 231,
        .description = COMPOUND_STRING(
            "Kamemon are a very reliable Digimon but\n"
            "aren't popular picks with Tamers as they\n"
            "don't like to talk much. The shell on\n"
            "its back resembles a computer mouse."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kamemon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Kamemon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Kamemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Kamemon,
        .shinyPalette = gMonShinyPalette_Kamemon,
        .iconSprite = gMonIcon_Kamemon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KamemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_KamemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Kamemon)
        OVERWORLD(
            sPicTable_Kamemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kamemon,
            gShinyOverworldPalette_Kamemon
        )
        OVERWORLD_FEMALE(
            sPicTable_KamemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sKamemonLevelUpLearnset,
        .teachableLearnset = sKamemonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_GUMMYMON

#if P_FAMILY_HOPMON
    [SPECIES_HOPMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 25,
        .baseSpAttack  = 24,
        .baseSpDefense = 27,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hopmon"),
        .cryId = CRY_HOPMON,
        .natDexNum = NATIONAL_DEX_HOPMON,
        .categoryName = _("Baby Dragon"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Hopmon's entire body is covered in\n"
            "tiny scales that are invisible to the\n"
            "naked eye. It also has a strong\n"
            "sense of justice."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hopmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .frontAnimFrames = sAnims_Hopmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Hopmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Hopmon,
        .shinyPalette = gMonShinyPalette_Hopmon,
        .iconSprite = gMonIcon_Hopmon,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Hopmon)
        OVERWORLD(
            sPicTable_Hopmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Hopmon,
            gShinyOverworldPalette_Hopmon
        )
        .levelUpLearnset = sHopmonLevelUpLearnset,
        .teachableLearnset = sHopmonTeachableLearnset,
        .eggMoveLearnset = sHopmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_VEEMON},
                                {EVO_SPDEFENSE, 18, SPECIES_GABUMON},
                                {EVO_SPATTACK, 17, SPECIES_JUNKMON},
                                {EVO_SPEED, 17, SPECIES_JAZAMON},
                                {EVO_LEVEL, 16, SPECIES_MONODRAMON}),
    },

    [SPECIES_KAKKINMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 23,
        .baseDefense   = 35,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 34,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Kakkinmon"),
        .cryId = CRY_KAKKINMON,
        .natDexNum = NATIONAL_DEX_KAKKINMON,
        .categoryName = _("Armour"),
        .height = 3,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Kakkinmon's hat is actually a copper \n"
            "shield that provides moderate protection.\n"
            "However Kakkinmon has been known to\n"
            "trust its hats strength in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kakkinmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kakkinmon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kakkinmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kakkinmon,
        .shinyPalette = gMonShinyPalette_Kakkinmon,
        .iconSprite = gMonIcon_Kakkinmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KakkinmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_KakkinmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Kakkinmon)
        OVERWORLD(
            sPicTable_Kakkinmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kakkinmon,
            gShinyOverworldPalette_Kakkinmon
        )
        OVERWORLD_FEMALE(
            sPicTable_KakkinmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sKakkinmonLevelUpLearnset,
        .teachableLearnset = sKakkinmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 14, SPECIES_ESPIMON},
                                {EVO_LEVEL, 13, SPECIES_LUDOMON}),
    },

    [SPECIES_KAPURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 35,
        .baseSpeed     = 22,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kapurimon"),
        .cryId = CRY_KAPURIMON,
        .natDexNum = NATIONAL_DEX_KAPURIMON,
        .categoryName = _("Metal Cap"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Kapurimon's has a metallic helmet and\n"
            "its two horns have antennae. Kapurimon\n"
            "has many bat-like features like weak\n"
            "eyesight or the use of ultrasonic waves."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kapurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = sAnims_Kapurimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kapurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Kapurimon,
        .shinyPalette = gMonShinyPalette_Kapurimon,
        .iconSprite = gMonIcon_Kapurimon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KapurimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_KapurimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Kapurimon)
        OVERWORLD(
            sPicTable_Kapurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kapurimon,
            gShinyOverworldPalette_Kapurimon
        )
        OVERWORLD_FEMALE(
            sPicTable_KapurimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sKapurimonLevelUpLearnset,
        .teachableLearnset = sKapurimonTeachableLearnset,
        .formSpeciesIdTable = sKapurimonFormSpeciesIdTable,
        .formChangeTable = sKapurimonFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 16, SPECIES_PHASCOMON},
                                {EVO_HEALTH, 34, SPECIES_PAWNMON_WHITE},
                                {EVO_DEFENSE, 19, SPECIES_HAGURUMON},
                                {EVO_ATTACK, 15, SPECIES_KOTEMON},
                                {EVO_LEVEL, 15, SPECIES_KOKUWAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KAPURIMON_MEGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kapurimon"),
        .cryId = CRY_KAPURIMON_MEGA,
        .natDexNum = NATIONAL_DEX_KAPURIMON,
        .categoryName = _("Psi"),
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Having traded away its muscles, Kapurimon's\n"
            "true power has been unleashed. With its\n"
            "psychic powers, it can foresee all things."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KapurimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KapurimonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_KapurimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_KapurimonMega,
        .shinyPalette = gMonShinyPalette_KapurimonMega,
        .iconSprite = gMonIcon_KapurimonMega,
        .iconPalIndex = 2,
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(Kapurimon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKapurimonLevelUpLearnset,
        .teachableLearnset = sKapurimonTeachableLearnset,
        .formSpeciesIdTable = sKapurimonFormSpeciesIdTable,
        .formChangeTable = sKapurimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOPMON

#if P_FAMILY_KOKOMON
    [SPECIES_KOKOMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 29,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kokomon"),
        .cryId = CRY_KOKOMON,
        .natDexNum = NATIONAL_DEX_KOKOMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kokomon get's along very well with \n"
            "Gummymon. It gets along so well that\n"
            "it gets considerably weaker when\n"
            "seperated due to loneliness."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Kokomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kokomon,
        .shinyPalette = gMonShinyPalette_Kokomon,
        .iconSprite = gMonIcon_Kokomon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Kokomon)
        OVERWORLD(
            sPicTable_Kokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kokomon,
            gShinyOverworldPalette_Kokomon
        )
        .levelUpLearnset = sKokomonLevelUpLearnset,
        .teachableLearnset = sKokomonTeachableLearnset,
        .eggMoveLearnset = sKokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 15, SPECIES_BLKTOYAMON},
                                {EVO_SPDEFENSE, 16, SPECIES_WORMMON},
                                {EVO_DEFENSE, 16, SPECIES_RYUDAMON},
                                {EVO_SPATTACK, 15, SPECIES_DEMIDEVMON},
                                {EVO_LEVEL, 14, SPECIES_LOPMON}),
    },

    [SPECIES_KOROMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 23,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Koromon"),
        .cryId = CRY_KOROMON,
        .natDexNum = NATIONAL_DEX_KOROMON,
        .categoryName = _("Round"),
        .height = 3,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Koromon is a digimon that shed the \n"
            "fuzz that was covering it's skin. \n"
            "Although it is now larger, it is still\n"
            "very weak in battle."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Koromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Koromon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Koromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Koromon,
        .shinyPalette = gMonShinyPalette_Koromon,
        .iconSprite = gMonIcon_Koromon,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Koromon)
        OVERWORLD(
            sPicTable_Koromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Koromon,
            gShinyOverworldPalette_Koromon
        )
        .levelUpLearnset = sKoromonLevelUpLearnset,
        .teachableLearnset = sKoromonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 16, SPECIES_SHOUTMON},
                                {EVO_HEALTH, 36, SPECIES_SAMUAGUMON},
                                {EVO_SPDEFENSE, 16, SPECIES_DOTAGUMON},
                                {EVO_ATTACK, 16, SPECIES_AGUMON_06},
                                {EVO_LEVEL, 16, SPECIES_AGUMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define KOZENIMON_EXP_YIELD 253
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define KOZENIMON_EXP_YIELD 227
#else
    #define KOZENIMON_EXP_YIELD 193
#endif

    [SPECIES_KOZENIMON] =
    {
        .baseHP        = 29,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 24,
        .baseSpAttack  = 21,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kozenimon"),
        .cryId = CRY_KOZENIMON,
        .natDexNum = NATIONAL_DEX_KOZENIMON,
        .categoryName = _("One Yen"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Kozenimon is in the shape of the one yen\n"
            "coin. It is not known why it shares an\n"
            "appearence with japanese currency. It's\n"
            "only strength is it's willpower."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Kozenimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Kozenimon,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kozenimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kozenimon,
        .shinyPalette = gMonShinyPalette_Kozenimon,
        .iconSprite = gMonIcon_Kozenimon,
        .iconPalIndex = 0,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Kozenimon)
        OVERWORLD(
            sPicTable_Kozenimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kozenimon,
            gShinyOverworldPalette_Kozenimon
        )
        .levelUpLearnset = sKozenimonLevelUpLearnset,
        .teachableLearnset = sKozenimonTeachableLearnset,
        .formSpeciesIdTable = sKozenimonFormSpeciesIdTable,
        .formChangeTable = sKozenimonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_ZENIMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KOZENIMON_GMAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = KOZENIMON_EXP_YIELD,
        .evYield_Attack = 3,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kozenimon"),
        .cryId = CRY_KOZENIMON,
        .natDexNum = NATIONAL_DEX_KOZENIMON,
        .categoryName = _("Superpower"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "One of these Pokémon once used\n"
            "its immeasurable strength to lift a\n"
            "large ship that was in trouble. It\n"
            "then carried the ship to port."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_KozenimonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KozenimonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KozenimonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_KozenimonGmax,
        .shinyPalette = gMonShinyPalette_KozenimonGmax,
        .iconSprite = gMonIcon_KozenimonGmax,
        .iconPalIndex = 0,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Kozenimon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sKozenimonLevelUpLearnset,
        .teachableLearnset = sKozenimonTeachableLearnset,
        .formSpeciesIdTable = sKozenimonFormSpeciesIdTable,
        .formChangeTable = sKozenimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KOKOMON

#if P_FAMILY_KYAROMON
    [SPECIES_KYAROMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 33,
        .baseDefense   = 28,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kyaromon"),
        .cryId = CRY_KYAROMON,
        .natDexNum = NATIONAL_DEX_KYAROMON,
        .categoryName = _("Rubber Ball"),
        .height = 5,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Kyaromon are very active digimon that\n"
            "will often bounce between interests. It\n"
            "has been observed that they are mostly\n"
            "ampty inside and bounce like rubber balls."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyaromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Kyaromon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kyaromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyaromon,
        .shinyPalette = gMonShinyPalette_Kyaromon,
        .iconSprite = gMonIcon_Kyaromon,
        .iconPalIndex = 1,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Kyaromon)
        OVERWORLD(
            sPicTable_Kyaromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kyaromon,
            gShinyOverworldPalette_Kyaromon
        )
        .levelUpLearnset = sKyaromonLevelUpLearnset,
        .teachableLearnset = sKyaromonTeachableLearnset,
        .eggMoveLearnset = sKyaromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 15, SPECIES_KUDAMON_06},
                                {EVO_SPATTACK, 15, SPECIES_IMPMON},
                                {EVO_ATTACK, 18, SPECIES_ELECMON_VIOLET},
                                {EVO_DEFENSE, 17, SPECIES_KAMEMON},
                                {EVO_LEVEL, 15, SPECIES_KUDAMON}),
    },

    [SPECIES_KYOKYOMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 25,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 22,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kyokyomon"),
        .cryId = CRY_KYOKYOMON,
        .natDexNum = NATIONAL_DEX_KYOKYOMON,
        .categoryName = _("X Antibody"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kyokyomon has a long body that it can\n"
            "stretch at will. When angry, it can\n"
            "stretch upto nine times its body length.\n"
            "It is a popular digimon for shogi players."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyokyomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kyokyomon,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        .backPic = gMonBackPic_Kyokyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyokyomon,
        .shinyPalette = gMonShinyPalette_Kyokyomon,
        .iconSprite = gMonIcon_Kyokyomon,
        .iconPalIndex = 1,
        SHADOW(-3, 3, SHADOW_SIZE_M)
        FOOTPRINT(Kyokyomon)
        OVERWORLD(
            sPicTable_Kyokyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kyokyomon,
            gShinyOverworldPalette_Kyokyomon
        )
        .levelUpLearnset = sKyokyomonLevelUpLearnset,
        .teachableLearnset = sKyokyomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_COMMDRAMON},
                                {EVO_LEVEL, 13, SPECIES_RYUDAMON}),
    },

    [SPECIES_KYUPIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 19,
        .baseDefense   = 19,
        .baseSpeed     = 28,
        .baseSpAttack  = 31,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kyupimon"),
        .cryId = CRY_KYUPIMON,
        .natDexNum = NATIONAL_DEX_KYUPIMON,
        .categoryName = _("Charity"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kyupimon love's good deeds, it loves them\n"
            "so much that is is called the 'angel of\n"
            "charity'. It is said that it's love can\n"
            "stop any digimon from fighting it."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Kyupimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = sAnims_Kyupimon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Kyupimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyupimon,
        .shinyPalette = gMonShinyPalette_Kyupimon,
        .iconSprite = gMonIcon_Kyupimon,
        .iconPalIndex = 1,
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Kyupimon)
        OVERWORLD(
            sPicTable_Kyupimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kyupimon,
            gShinyOverworldPalette_Kyupimon
        )
        .levelUpLearnset = sKyupimonLevelUpLearnset,
        .teachableLearnset = sKyupimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 24, SPECIES_IMPMON},
                                {EVO_ATTACK, 19, SPECIES_TERRIERMON},
                                {EVO_SPDEFENSE, 25, SPECIES_SALAMON},
                                {EVO_SPEED, 25, SPECIES_PATAMON},
                                {EVO_LEVEL, 22, SPECIES_LUCEMON}),
    },
#endif //P_FAMILY_KYAROMON

#if P_FAMILY_MINOMON
    [SPECIES_MINOMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 22,
        .baseDefense   = 29,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OVERGROW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Minomon"),
        .cryId = CRY_MINOMON,
        .natDexNum = NATIONAL_DEX_MINOMON,
        .categoryName = _("Larva"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "On good days, Minomon will stick its\n"
            "face out of its shell and vegetate. Due\n"
            "to it's personality, it does not show \n"
            "its emotions very well."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = sAnims_Minomon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Minomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Minomon,
        .shinyPalette = gMonShinyPalette_Minomon,
        .iconSprite = gMonIcon_Minomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Minomon)
        OVERWORLD(
            sPicTable_Minomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Minomon,
            gShinyOverworldPalette_Minomon
        )
        .levelUpLearnset = sMinomonLevelUpLearnset,
        .teachableLearnset = sMinomonTeachableLearnset,
        .eggMoveLearnset = sMinomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 14, SPECIES_KOKUWAMON},
                                {EVO_HEALTH, 32, SPECIES_KUNEMON},
                                {EVO_SPATTACK, 16, SPECIES_TENTOMON},
                                {EVO_LEVEL, 14, SPECIES_WORMMON}),
    },

    [SPECIES_MISSIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 28,
        .baseDefense   = 23,
        .baseSpeed     = 38,
        .baseSpAttack  = 28,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Missimon"),
        .cryId = CRY_MISSIMON,
        .natDexNum = NATIONAL_DEX_MISSIMON,
        .categoryName = _("Missile"),
        .height = 5,
        .weight = 70,
        .description = COMPOUND_STRING(
            "From the moment it digivolves, Missimon\n"
            "will fly non-stop. When it attacks, it\n"
            "has extremely bad accuracy and often\n"
            "misses most attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Missimon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Missimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Missimon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Missimon,
        .shinyPalette = gMonShinyPalette_Missimon,
        .iconSprite = gMonIcon_Missimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Missimon)
        OVERWORLD(
            sPicTable_Missimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Missimon,
            gShinyOverworldPalette_Missimon
        )
        .levelUpLearnset = sMissimonLevelUpLearnset,
        .teachableLearnset = sMissimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 17, SPECIES_GIZAMON},
                                {EVO_HEALTH, 36, SPECIES_CHIKURIMON},
                                {EVO_SPATTACK, 19, SPECIES_DRACMON},
                                {EVO_DEFENSE, 17, SPECIES_HAGURUMON},
                                {EVO_LEVEL, 17, SPECIES_COMMDRAMON}),
    },
#endif //P_FAMILY_MINOMON

#if P_FAMILY_MONIMON

#if P_UPDATED_EXP_YIELDS >= GEN_5
    #define MONIMON_EXP_YIELD 70
#elif P_UPDATED_EXP_YIELDS >= GEN_4
    #define MONIMON_EXP_YIELD 73
#else
    #define MONIMON_EXP_YIELD 86
#endif

#define MOTIMON_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define MOTIMON_EXP_YIELD 248
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define MOTIMON_EXP_YIELD 223
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define MOTIMON_EXP_YIELD 218
#else
    #define MOTIMON_EXP_YIELD 177
#endif

    [SPECIES_MONIMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 28,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 21,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_SOUNDPROOF, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Monimon"),
        .cryId = CRY_MONIMON,
        .natDexNum = NATIONAL_DEX_MONIMON,
        .categoryName = _("Television"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Monimon is a low ranking ninja digimon \n"
            "that operates in a group. It's emotions\n"
            "generally project onto it's face in\n"
            "the shape of emoticons."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 19,
        .frontAnimFrames = sAnims_Monimon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 10,
        .backPic = gMonBackPic_Monimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Monimon,
        .shinyPalette = gMonShinyPalette_Monimon,
        .iconSprite = gMonIcon_Monimon,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Monimon)
        OVERWORLD(
            sPicTable_Monimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Monimon,
            gShinyOverworldPalette_Monimon
        )
        .levelUpLearnset = sMonimonLevelUpLearnset,
        .teachableLearnset = sMonimonTeachableLearnset,
        .eggMoveLearnset = sMonimonEggMoveLearnset,
        .formSpeciesIdTable = sMonimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_MONITAMON}),
    },

    [SPECIES_MOONMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 23,
        .baseDefense   = 25,
        .baseSpeed     = 25,
        .baseSpAttack  = 27,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_AIR_LOCK, ABILITY_STURDY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Moonmon"),
        .cryId = CRY_MOONMON,
        .natDexNum = NATIONAL_DEX_MOONMON,
        .categoryName = _("Moon Drop"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Moonmon's is made up of a transparent\n"
            "body and has a pure heart. Moonmon \n"
            "who are raised by tamers often share the\n"
            "the same personality as their tamer."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Moonmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = sAnims_Moonmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Moonmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Moonmon,
        .shinyPalette = gMonShinyPalette_Moonmon,
        .iconSprite = gMonIcon_Moonmon,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Moonmon)
        OVERWORLD(
            sPicTable_Moonmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Moonmon,
            gShinyOverworldPalette_Moonmon
        )
        .levelUpLearnset = sMoonmonLevelUpLearnset,
        .teachableLearnset = sMoonmonTeachableLearnset,
        .formSpeciesIdTable = sMoonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 35, SPECIES_BLKAGUMON},
                                {EVO_ATTACK, 16, SPECIES_GAZIMON},
                                {EVO_SPATTACK, 17, SPECIES_LOPMON},
                                {EVO_LEVEL, 15, SPECIES_LUNAMON}),
    },

    [SPECIES_MOTIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 22,
        .baseDefense   = 28,
        .baseSpeed     = 22,
        .baseSpAttack  = 24,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Motimon"),
        .cryId = CRY_MOTIMON,
        .natDexNum = NATIONAL_DEX_MOTIMON,
        .categoryName = _("Mochi"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Motimon is a surprisingly intelligent\n"
            "digimon. It is theorised that Motimon\n"
            "was produced from the data of \n"
            "dictionary software."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Motimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = sAnims_Motimon,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Motimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Motimon,
        .shinyPalette = gMonShinyPalette_Motimon,
        .iconSprite = gMonIcon_Motimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(3, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Motimon)
        OVERWORLD(
            sPicTable_Motimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Motimon,
            gShinyOverworldPalette_Motimon
        )
        .levelUpLearnset = sMotimonLevelUpLearnset,
        .teachableLearnset = sMotimonTeachableLearnset,
        .formSpeciesIdTable = sMotimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_TENTOMON},
                                {EVO_SPEED, 15, SPECIES_BIYOMON},
                                {EVO_ATTACK, 15, SPECIES_FANBEEMON},
                                {EVO_SPATTACK, 16, SPECIES_MORPHOMON},
                                {EVO_LEVEL, 15, SPECIES_TENTOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MONIMON_ALOLA] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = MONIMON_EXP_YIELD,
        .evYield_Defense = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Monimon"),
        .cryId = CRY_MONIMON,
        .natDexNum = NATIONAL_DEX_MONIMON,
        .categoryName = _("Rock"),
        .height = 4,
        .weight = 203,
        .description = COMPOUND_STRING(
            "Its body is a magnetic stone. Iron sand\n"
            "attach to parts of its body with stronger\n"
            "magnetism. If you carelessly step on one,\n"
            "it will headbutt and shock you in anger."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MonimonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_MonimonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_MonimonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MonimonAlola,
        .shinyPalette = gMonShinyPalette_MonimonAlola,
        .iconSprite = gMonIcon_MonimonAlola,
        .iconPalIndex = 2,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Monimon)
        OVERWORLD(
            sPicTable_MonimonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MonimonAlola,
            gShinyOverworldPalette_MonimonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMonimonAlolaLevelUpLearnset,
        .teachableLearnset = sMonimonAlolaTeachableLearnset,
        .eggMoveLearnset = sMonimonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sMonimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MOONMON_ALOLA}),
    },

    [SPECIES_MOONMON_ALOLA] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_Defense = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Moonmon"),
        .cryId = CRY_MOONMON,
        .natDexNum = NATIONAL_DEX_MOONMON,
        .categoryName = _("Rock"),
        .height = 10,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "When two Moonmon smash each other over\n"
            "dravite, their favorite food, they cause\n"
            "flashes of light and booming noises.\n"
            "People call them “fireworks of the earth.”"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MoonmonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MoonmonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MoonmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MoonmonAlola,
        .shinyPalette = gMonShinyPalette_MoonmonAlola,
        .iconSprite = gMonIcon_MoonmonAlola,
        .iconPalIndex = 0,
        SHADOW(1, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Moonmon)
        OVERWORLD(
            sPicTable_MoonmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MoonmonAlola,
            gShinyOverworldPalette_MoonmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMoonmonAlolaLevelUpLearnset,
        .teachableLearnset = sMoonmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMoonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MOTIMON_ALOLA},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MOTIMON_ALOLA}),
    },

    [SPECIES_MOTIMON_ALOLA] =
    {
        .baseHP        = 80,
        .baseAttack    = MOTIMON_ATTACK,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = MOTIMON_EXP_YIELD,
        .evYield_Defense = 3,
        .itemCommon = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Motimon"),
        .cryId = CRY_MOTIMON,
        .natDexNum = NATIONAL_DEX_MOTIMON,
        .categoryName = _("Megaton"),
        .height = 17,
        .weight = 3170,
        .description = COMPOUND_STRING(
            "It fires rocks charged with electricity.\n"
            "Even if the rock isn't fired that\n"
            "accurately, just grazing an opponent\n"
            "will cause numbness and fainting."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_MotimonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MotimonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MotimonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MotimonAlola,
        .shinyPalette = gMonShinyPalette_MotimonAlola,
        .iconSprite = gMonIcon_MotimonAlola,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Motimon)
        OVERWORLD(
            sPicTable_MotimonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MotimonAlola,
            gShinyOverworldPalette_MotimonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMotimonAlolaLevelUpLearnset,
        .teachableLearnset = sMotimonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMotimonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_MONIMON

#if P_FAMILY_NEGAMON
    [SPECIES_NEGAMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 21,
        .baseSpeed     = 27,
        .baseSpAttack  = 30,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_SUCTION_CUPS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Negamon"),
        .cryId = CRY_NEGAMON,
        .natDexNum = NATIONAL_DEX_NEGAMON,
        .categoryName = _("Negative"),
        .height = 15,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Negamon grow up immersed in negative\n"
            "data from the Network. It will constantly\n"
            "wish for it's destruction and lives a\n"
            "quiet life in darkness."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Negamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Negamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_ORANGE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 10,
        .backPic = gMonBackPic_Negamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Negamon,
        .shinyPalette = gMonShinyPalette_Negamon,
        .iconSprite = gMonIcon_Negamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Negamon)
        OVERWORLD(
            sPicTable_Negamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Negamon,
            gShinyOverworldPalette_Negamon
        )
        .levelUpLearnset = sNegamonLevelUpLearnset,
        .teachableLearnset = sNegamonTeachableLearnset,
        .eggMoveLearnset = sNegamonEggMoveLearnset,
        .formSpeciesIdTable = sNegamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NYAROMON}),
    },

    [SPECIES_NYAROMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 29,
        .baseDefense   = 22,
        .baseSpeed     = 31,
        .baseSpAttack  = 20,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Nyaromon"),
        .cryId = CRY_NYAROMON,
        .natDexNum = NATIONAL_DEX_NYAROMON,
        .categoryName = _("Cat"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Nyaromon is a small digimon with a\n"
            "cat-like appearance. They are known for \n"
            "having a very curious personality but\n"
            "can also have a lonely side."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Nyaromon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Nyaromon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_VIBRATE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Nyaromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Nyaromon,
        .shinyPalette = gMonShinyPalette_Nyaromon,
        .iconSprite = gMonIcon_Nyaromon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nyaromon)
        OVERWORLD(
            sPicTable_Nyaromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nyaromon,
            gShinyOverworldPalette_Nyaromon
        )
        .levelUpLearnset = sNyaromonLevelUpLearnset,
        .teachableLearnset = sNyaromonTeachableLearnset,
        .formSpeciesIdTable = sNyaromonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                                {EVO_SPATTACK, 14, SPECIES_TINKERMON},
                                {EVO_ATTACK, 17, SPECIES_RENAMON},
                                {EVO_SPEED, 17, SPECIES_HAWKMON},
                                {EVO_LEVEL, 14, SPECIES_SALAMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_NEGAMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 82 : 152,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Negamon"),
        .cryId = CRY_NEGAMON,
        .natDexNum = NATIONAL_DEX_NEGAMON,
        .categoryName = _("Unique Horn"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Its small horn hides a healing power.\n"
            "This Pokémon will look into your eyes and\n"
            "read the contents of your heart. If it\n"
            "finds evil there, it promptly hides away."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NegamonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_NegamonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NegamonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NegamonGalar,
        .shinyPalette = gMonShinyPalette_NegamonGalar,
        .iconSprite = gMonIcon_NegamonGalar,
        .iconPalIndex = 2,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Negamon)
        OVERWORLD(
            sPicTable_NegamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NegamonGalar,
            gShinyOverworldPalette_NegamonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sNegamonGalarLevelUpLearnset,
        .teachableLearnset = sNegamonGalarTeachableLearnset,
        .eggMoveLearnset = sNegamonGalarEggMoveLearnset,
        .formSpeciesIdTable = sNegamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NYAROMON_GALAR}),
    },

    [SPECIES_NYAROMON_GALAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 192,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Nyaromon"),
        .cryId = CRY_NYAROMON,
        .natDexNum = NATIONAL_DEX_NYAROMON,
        .categoryName = _("Unique Horn"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Little can stand up to its psycho cut.\n"
            "Unleashed from this Pokémon's horn,\n"
            "the move will punch a hole right\n"
            "through a thick metal sheet."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_NyaromonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_NyaromonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NyaromonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NyaromonGalar,
        .shinyPalette = gMonShinyPalette_NyaromonGalar,
        .iconSprite = gMonIcon_NyaromonGalar,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nyaromon)
        OVERWORLD(
            sPicTable_NyaromonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NyaromonGalar,
            gShinyOverworldPalette_NyaromonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sNyaromonGalarLevelUpLearnset,
        .teachableLearnset = sNyaromonGalarTeachableLearnset,
        .formSpeciesIdTable = sNyaromonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_NEGAMON

#if P_FAMILY_PAGUMON
    [SPECIES_PAGUMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 22,
        .baseDefense   = 28,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pagumon"),
        .cryId = CRY_PAGUMON,
        .natDexNum = NATIONAL_DEX_PAGUMON,
        .categoryName = _("Smug"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pagumon are known for having a malicious\n"
            "personality, often chasing after weaker\n"
            "digimon. It will use it's hand like ears\n"
            "to taunt other digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 16,
        .frontAnimFrames = sAnims_Pagumon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Pagumon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pagumon,
        .shinyPalette = gMonShinyPalette_Pagumon,
        .iconSprite = gMonIcon_Pagumon,
        .iconPalIndex = 0,
        SHADOW(1, -5, SHADOW_SIZE_L)
        FOOTPRINT(Pagumon)
        OVERWORLD(
            sPicTable_Pagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pagumon,
            gShinyOverworldPalette_Pagumon
        )
        .levelUpLearnset = sPagumonLevelUpLearnset,
        .teachableLearnset = sPagumonTeachableLearnset,
        .eggMoveLearnset = sPagumonEggMoveLearnset,
        .formSpeciesIdTable = sPagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 31, SPECIES_CHUUMON},
                                {EVO_SPEED, 15, SPECIES_TSUKAIMON},
                                {EVO_ATTACK, 14, SPECIES_GIZAMON},
                                {EVO_SPATTACK, 14, SPECIES_IMPMON},
                                {EVO_LEVEL, 13, SPECIES_DEMIDEVMON}),
    },

    [SPECIES_PICKMON_SILVER] =
    {
        .baseHP        = 23,
        .baseAttack    = 26,
        .baseDefense   = 27,
        .baseSpeed     = 22,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 60,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Silver Pick"),
        .height = 2,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. Silver\n"
            "pickmon are known to wear shades and\n"
            "one of the highest in the Starmon Corps\n"
            "heirarchy for a pickmon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silver,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = sAnims_Pickmon_silver,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pickmon_silver,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silver,
        .shinyPalette = gMonShinyPalette_Pickmon_silver,
        .iconSprite = gMonIcon_Pickmon_silver,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
        OVERWORLD(
            sPicTable_Pickmon_silver,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pickmon_silver,
            gShinyOverworldPalette_Pickmon_silver
        )
        .levelUpLearnset = sPickmon_silverLevelUpLearnset,
        .teachableLearnset = sPickmon_silverTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
        .formChangeTable = sPickmon_silverFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_STARMON_2010}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_LIOLLMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 62,
        .baseSpAttack  = 47,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Liollmon"),
        .cryId = CRY_LIOLLMON,
        .natDexNum = NATIONAL_DEX_LIOLLMON,
        .categoryName = _("Tiger"),
        .height = 10,
        .weight = 209,
        .description = COMPOUND_STRING(
            "Until recently, its existence had never\n"
            "been confirmed as it has a very small.\n"
            "population. It is a very territorial\n"
            "Digimon making it hard to study."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Liollmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Liollmon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Liollmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Liollmon,
        .shinyPalette = gMonShinyPalette_Liollmon,
        .iconSprite = gMonIcon_Liollmon,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Liollmon)
        OVERWORLD(
            sPicTable_Liollmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Liollmon,
            gShinyOverworldPalette_Liollmon
        )
        .levelUpLearnset = sLiollmonLevelUpLearnset,
        .teachableLearnset = sLiollmonTeachableLearnset,
        .formSpeciesIdTable = sLiollmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 56, SPECIES_EYESMON},
                                {EVO_LEVEL, 36, SPECIES_BOARMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_PICKMON_SILVER_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 207,
        .evYield_Defense = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Hermit Crab"),
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When bathed in the energy of Mega\n"
            "Evolution, Tanemon converts into\n"
            "impregnable armor. There is virtually no\n"
            "change in Pagumon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silverMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Pickmon_silverMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pickmon_silverMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silverMega,
        .shinyPalette = gMonShinyPalette_Pickmon_silverMega,
        .iconSprite = gMonIcon_Pickmon_silverMega,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPickmon_silverLevelUpLearnset,
        .teachableLearnset = sPickmon_silverTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
        .formChangeTable = sPickmon_silverFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_PAGUMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 99,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pagumon"),
        .natDexNum = NATIONAL_DEX_PAGUMON,
        .categoryName = _("Dopey"),
        .height = 12,
        .weight = 370,
        .description = COMPOUND_STRING(
            "Although it is normally zoned out, its\n"
            "expression abruptly sharpens on occasion.\n"
            "The cause seems to lie in Pagumon's diet,\n"
            "which also give their tails a spicy flavor."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PagumonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_PagumonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PagumonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PagumonGalar,
        .shinyPalette = gMonShinyPalette_PagumonGalar,
        .iconSprite = gMonIcon_PagumonGalar,
        .iconPalIndex = 0,
        SHADOW(-3, -8, SHADOW_SIZE_L)
        FOOTPRINT(Pagumon)
        OVERWORLD(
            sPicTable_PagumonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PagumonGalar,
            gShinyOverworldPalette_PagumonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPagumonGalarLevelUpLearnset,
        .teachableLearnset = sPagumonGalarTeachableLearnset,
        .eggMoveLearnset = sPagumonGalarEggMoveLearnset,
        .formSpeciesIdTable = sPagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_PICKMON_SILVER_GALAR},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_LIOLLMON_GALAR}),
    },

    [SPECIES_PICKMON_SILVER_GALAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Hermit Crab"),
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A Tanemon bite set off a chemical reaction\n"
            "with the spices inside Pickmon_silver's body,\n"
            "causing Pickmon_silver to become a\n"
            "Poison-type Pokémon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silverGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Pickmon_silverGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pickmon_silverGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pickmon_silverGalar,
        .shinyPalette = gMonShinyPalette_Pickmon_silverGalar,
        .iconSprite = gMonIcon_Pickmon_silverGalar,
        .iconPalIndex = 0,
        SHADOW(-5, 9, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
        OVERWORLD_SET_ANIM(
            sPicTable_Pickmon_silverGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Pickmon_silverGalar,
            gShinyOverworldPalette_Pickmon_silverGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPickmon_silverGalarLevelUpLearnset,
        .teachableLearnset = sPickmon_silverGalarTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_LIOLLMON_GALAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Liollmon"),
        .cryId = CRY_LIOLLMON,
        .natDexNum = NATIONAL_DEX_LIOLLMON,
        .categoryName = _("Hexpert"),
        .height = 18,
        .weight = 795,
        .description = COMPOUND_STRING(
            "A combination of toxins and the shock of\n"
            "evolving has increased Tanemon's\n"
            "intelligence to the point that Tanemon\n"
            "now controls Liollmon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_LiollmonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LiollmonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LiollmonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LiollmonGalar,
        .shinyPalette = gMonShinyPalette_LiollmonGalar,
        .iconSprite = gMonIcon_LiollmonGalar,
        .iconPalIndex = 0,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Liollmon)
        OVERWORLD(
            sPicTable_LiollmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_LiollmonGalar,
            gShinyOverworldPalette_LiollmonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sLiollmonGalarLevelUpLearnset,
        .teachableLearnset = sLiollmonGalarTeachableLearnset,
        .formSpeciesIdTable = sLiollmonFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PAGUMON

#if P_FAMILY_PICKMON_WHITE
    [SPECIES_PICKMON_WHITE] =
    {
        .baseHP        = 23,
        .baseAttack    = 23,
        .baseDefense   = 22,
        .baseSpeed     = 27,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 60,
        .evYield_Speed = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_WHITE,
        .natDexNum = NATIONAL_DEX_PICKMON_WHITE,
        .categoryName = _("White Pick"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. White\n"
            "pickmon are particularly weak and low\n"
            "in the Starmon Corps however they are\n"
            "incredibly loyal and have a strong will."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pickmon_white,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 20,
        .frontAnimFrames = sAnims_Pickmon_white,
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 17,
        .backPic = gMonBackPic_Pickmon_white,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_white,
        .shinyPalette = gMonShinyPalette_Pickmon_white,
        .iconSprite = gMonIcon_Pickmon_white,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Pickmon_white)
        OVERWORLD(
            sPicTable_Pickmon_white,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Pickmon_white,
            gShinyOverworldPalette_Pickmon_white
        )
        .levelUpLearnset = sPickmon_whiteLevelUpLearnset,
        .teachableLearnset = sPickmon_whiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_STARMON_2010}),
    },

    [SPECIES_PICKMON_RED] =
    {
        .baseHP        = 23,
        .baseAttack    = 26,
        .baseDefense   = 22,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 21,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_RED,
        .natDexNum = NATIONAL_DEX_PICKMON_RED,
        .categoryName = _("Red Pick"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. Red\n"
            "pickmon, while weak, are very aggressive\n"
            "and loud. Despite this, they are a\n"
            "favourite for 'obnoxious' tamers."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pickmon_red,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Pickmon_red,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backPic = gMonBackPic_Pickmon_red,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_red,
        .shinyPalette = gMonShinyPalette_Pickmon_red,
        .iconSprite = gMonIcon_Pickmon_red,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Pickmon_red)
        OVERWORLD(
            sPicTable_Pickmon_red,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Pickmon_red,
            gShinyOverworldPalette_Pickmon_red
        )
        .levelUpLearnset = sPickmon_redLevelUpLearnset,
        .teachableLearnset = sPickmon_redTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_STARMON_2010}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 211,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnezone"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "As it zooms through the sky, this\n"
            "Pokémon seems to be receiving signals\n"
            "of unknown origin, while transmitting its\n"
            "own signals of unknown purpose."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnezone,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magnezone,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Magnezone,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magnezone,
        .shinyPalette = gMonShinyPalette_Magnezone,
        .iconSprite = gMonIcon_Magnezone,
        .iconPalIndex = 0,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magnezone)
        OVERWORLD(
            sPicTable_Magnezone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magnezone,
            gShinyOverworldPalette_Magnezone
        )
        .levelUpLearnset = sMagnezoneLevelUpLearnset,
        .teachableLearnset = sMagnezoneTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PICKMON_WHITE

#if P_FAMILY_PINAMON
#define PINAMON_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define PINAMON_EXP_YIELD 132
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PINAMON_EXP_YIELD 123
#else
    #define PINAMON_EXP_YIELD 94
#endif

    [SPECIES_PINAMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 26,
        .baseDefense   = 20,
        .baseSpeed     = 33,
        .baseSpAttack  = 23,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SPEED_BOOST, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinamon"),
        .cryId = CRY_PINAMON,
        .natDexNum = NATIONAL_DEX_PINAMON,
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Pinamon are always seen running around\n"
            "restlessly. The only time's it is still\n"
            "is when it's bored or sleeping. Many\n"
            "tamers struggle to bond with this digimon."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pinamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = sAnims_Pinamon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Pinamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pinamon,
        .shinyPalette = gMonShinyPalette_Pinamon,
        .iconSprite = gMonIcon_Pinamon,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pinamon)
        OVERWORLD_SET_ANIM(
            sPicTable_Pinamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Pinamon,
            gShinyOverworldPalette_Pinamon
        )
        .levelUpLearnset = sPinamonLevelUpLearnset,
        .teachableLearnset = sPinamonTeachableLearnset,
        .eggMoveLearnset = sPinamonEggMoveLearnset,
        .formSpeciesIdTable = sPinamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_GOBLIMON},
                                {EVO_SPATTACK, 16, SPECIES_KUDAMON_06},
                                {EVO_SPEED, 18, SPECIES_SWIMMON},
                                {EVO_SPDEFENSE, 16, SPECIES_YUKIAGUMON_06},
                                {EVO_LEVEL, 15, SPECIES_FALCOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_PINAMON_GALAR] =
    {
        .baseHP        = 52,
        .baseAttack    = PINAMON_ATTACK + 5,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = PINAMON_EXP_YIELD,
        .evYield_Attack = 1,
        .itemCommon = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinamon"),
        .cryId = CRY_PINAMON,
        .natDexNum = NATIONAL_DEX_PINAMON,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 420,
        .description = COMPOUND_STRING(
            "The stalks of leeks are thicker and longer\n"
            "in the Galar region. Brave Pinamon\n"
            "warriors that adapted to these stalks\n"
            "took on a unique form."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_PinamonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PinamonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PinamonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PinamonGalar,
        .shinyPalette = gMonShinyPalette_PinamonGalar,
        .iconSprite = gMonIcon_PinamonGalar,
        .iconPalIndex = 1,
        SHADOW(-7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Pinamon)
        OVERWORLD(
            sPicTable_PinamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PinamonGalar,
            gShinyOverworldPalette_PinamonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPinamonGalarLevelUpLearnset,
        .teachableLearnset = sPinamonGalarTeachableLearnset,
        .eggMoveLearnset = sPinamonGalarEggMoveLearnset,
        .formSpeciesIdTable = sPinamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_CRITICAL_HITS, 3, SPECIES_SIRFETCHD}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sirfetch'd"),
        .cryId = CRY_SIRFETCHD,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Only Pinamon that have survived many\n"
            "battles can attain this evolution. When\n"
            "this Pokémon's leek withers, it will\n"
            "retire from combat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sirfetchd,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sirfetchd,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sirfetchd,
        .shinyPalette = gMonShinyPalette_Sirfetchd,
        .iconSprite = gMonIcon_Sirfetchd,
        .iconPalIndex = 1,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sirfetchd)
        OVERWORLD(
            sPicTable_Sirfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sirfetchd,
            gShinyOverworldPalette_Sirfetchd
        )
        .levelUpLearnset = sSirfetchdLevelUpLearnset,
        .teachableLearnset = sSirfetchdTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PINAMON

#if P_FAMILY_POROMON
    [SPECIES_POROMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 24,
        .baseDefense   = 23,
        .baseSpeed     = 27,
        .baseSpAttack  = 25,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Poromon"),
        .cryId = CRY_POROMON,
        .natDexNum = NATIONAL_DEX_POROMON,
        .categoryName = _("Small Bird"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despire having functioning wings, Poromon\n"
            "can only fly at low altitudes. They are\n"
            "a very tide digimon, sometime's causing \n"
            "fights over their need for tidiness."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Poromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = sAnims_Poromon,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Poromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Poromon,
        .shinyPalette = gMonShinyPalette_Poromon,
        .iconSprite = gMonIcon_Poromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PoromonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_PoromonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(6, 5, SHADOW_SIZE_M)
        FOOTPRINT(Poromon)
        OVERWORLD(
            sPicTable_Poromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poromon,
            gShinyOverworldPalette_Poromon
        )
        OVERWORLD_FEMALE(
            sPicTable_PoromonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sPoromonLevelUpLearnset,
        .teachableLearnset = sPoromonTeachableLearnset,
        .eggMoveLearnset = sPoromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 31, SPECIES_POMUMON}, // Add Ukkomon
                                {EVO_SPATTACK, 15, SPECIES_TINKERMON},
                                {EVO_SPEED, 15, SPECIES_FALCOMON_06},
                                {EVO_LEVEL, 13, SPECIES_HAWKMON}),
    },

    [SPECIES_PUROROMON] =
    {
        .baseHP        = 19,
        .baseAttack    = 24,
        .baseDefense   = 20,
        .baseSpeed     = 30,
        .baseSpAttack  = 23,
        .baseSpDefense = 18,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Puroromon"),
        .cryId = CRY_PUROROMON,
        .natDexNum = NATIONAL_DEX_PUROROMON,
        .categoryName = _("X Antibody"),
        .height = 4,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Although it is tiny in size, it is very\n"
            "hard to catch due it's fast and irratic\n"
            "flying. It is very weak in battle, only\n"
            "being a nuisance for it's opponents."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puroromon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Puroromon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_LUNGE_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Puroromon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Puroromon,
        .shinyPalette = gMonShinyPalette_Puroromon,
        .iconSprite = gMonIcon_Puroromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PuroromonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PuroromonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Puroromon)
        OVERWORLD(
            sPicTable_Puroromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Puroromon,
            gShinyOverworldPalette_Puroromon
        )
        OVERWORLD_FEMALE(
            sPicTable_PuroromonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sPuroromonLevelUpLearnset,
        .teachableLearnset = sPuroromonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 12, SPECIES_RYUDAMON},
                                {EVO_ATTACK, 13, SPECIES_DORUMON},
                                {EVO_LEVEL, 11, SPECIES_FANBEEMON}),
    },
#endif //P_FAMILY_POROMON

#if P_FAMILY_PUSURIMON
    [SPECIES_PUSURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 28,
        .baseDefense   = 26,
        .baseSpeed     = 28,
        .baseSpAttack  = 23,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pusurimon"),
        .cryId = CRY_PUSURIMON,
        .natDexNum = NATIONAL_DEX_PUSURIMON,
        .categoryName = _("Prickly"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pusurimon is almost aways seen running\n"
            "around energetically. Sometimes when\n"
            "it stops, it has just fallen asleep\n"
            "on the spot."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pusurimon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = sAnims_Pusurimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Pusurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pusurimon,
        .shinyPalette = gMonShinyPalette_Pusurimon,
        .iconSprite = gMonIcon_Pusurimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Pusurimon)
        OVERWORLD(
            sPicTable_Pusurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Pusurimon,
            gShinyOverworldPalette_Pusurimon
        )
        .levelUpLearnset = sPusurimonLevelUpLearnset,
        .teachableLearnset = sPusurimonTeachableLearnset,
        .eggMoveLearnset = sPusurimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_HERISSMON}),
    },

    [SPECIES_PUYOYOMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 21,
        .baseDefense   = 18,
        .baseSpeed     = 23,
        .baseSpAttack  = 29,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Puyoyomon"),
        .cryId = CRY_PUYOYOMON,
        .natDexNum = NATIONAL_DEX_PUYOYOMON,
        .categoryName = _("Jellyfish"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Puyoyomon are always brimming with\n"
            "curiosity. Once it finds something it\n"
            "likes, it will stick to it until it\n"
            "is bored."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puyoyomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .frontAnimFrames = sAnims_Puyoyomon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Puyoyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Puyoyomon,
        .shinyPalette = gMonShinyPalette_Puyoyomon,
        .iconSprite = gMonIcon_Puyoyomon,
        .iconPalIndex = 2,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Puyoyomon)
        OVERWORLD(
            sPicTable_Puyoyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Puyoyomon,
            gShinyOverworldPalette_Puyoyomon
        )
        .levelUpLearnset = sPuyoyomonLevelUpLearnset,
        .teachableLearnset = sPuyoyomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 14, SPECIES_KODOKGUMON},
                                {EVO_LEVEL, 13, SPECIES_JELLYMON}),
    },
#endif //P_FAMILY_PUSURIMON

#if P_FAMILY_SAKUTTOMON
    [SPECIES_SAKUTTOMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 21,
        .baseSpAttack  = 20,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sakuttomon"),
        .cryId = CRY_SAKUTTOMON,
        .natDexNum = NATIONAL_DEX_SAKUTTOMON,
        .categoryName = _("Horn Blade"),
        .height = 4,
        .weight = 90,
        .description = COMPOUND_STRING(
            "Unlike it's younger self, Sakuttomon has\n"
            "finally stabillised itself with two\n"
            "blades. Adorably enough, it is sometimes\n"
            "found stuck in walls and ceilings."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sakuttomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 9,
        .frontAnimFrames = sAnims_Sakuttomon,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Sakuttomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Sakuttomon,
        .shinyPalette = gMonShinyPalette_Sakuttomon,
        .iconSprite = gMonIcon_Sakuttomon,
        .iconPalIndex = 2,
        SHADOW(2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Sakuttomon)
        OVERWORLD(
            sPicTable_Sakuttomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Sakuttomon,
            gShinyOverworldPalette_Sakuttomon
        )
        .levelUpLearnset = sSakuttomonLevelUpLearnset,
        .teachableLearnset = sSakuttomonTeachableLearnset,
        .eggMoveLearnset = sSakuttomonEggMoveLearnset,
        .formSpeciesIdTable = sSakuttomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_DEFENSE, 19, SPECIES_RYUDAMON},
                                {EVO_ATTACK, 22, SPECIES_HACKMON},
                                {EVO_LEVEL, 17, SPECIES_ZUBAMON}),
    },

    [SPECIES_SUNMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 29,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DROUGHT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Sunmon"),
        .cryId = CRY_SUNMON,
        .natDexNum = NATIONAL_DEX_SUNMON,
        .categoryName = _("Sun"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Sunmon have very bright personalities \n"
            "and just general joys to be around. The\n"
            "flame on it's head have been known to\n"
            "burn down tamer homes and forests."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sunmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .frontAnimFrames = sAnims_Sunmon,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Sunmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Sunmon,
        .shinyPalette = gMonShinyPalette_Sunmon,
        .iconSprite = gMonIcon_Sunmon,
        .iconPalIndex = 2,
        SHADOW(-1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sunmon)
        OVERWORLD(
            sPicTable_Sunmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Sunmon,
            gShinyOverworldPalette_Sunmon
        )
        .levelUpLearnset = sSunmonLevelUpLearnset,
        .teachableLearnset = sSunmonTeachableLearnset,
        .formSpeciesIdTable = sSunmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_SALAMON},
                                {EVO_HEALTH, 34, SPECIES_KUDAMON_06},
                                {EVO_ATTACK, 19, SPECIES_GUILMON},
                                {EVO_LEVEL, 15, SPECIES_CORONAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_SAKUTTOMON_ALOLA] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sakuttomon"),
        .cryId = CRY_SAKUTTOMON,
        .natDexNum = NATIONAL_DEX_SAKUTTOMON,
        .categoryName = _("Sludge"),
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING(
            "There are a hundred or so of them living\n"
            "in Alola's waste-disposal site. They're all\n"
            "hard workers who eat a lot of trash. Sakuttomon\n"
            "seems to relish any and all kinds of trash."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SakuttomonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SakuttomonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SakuttomonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SakuttomonAlola,
        .shinyPalette = gMonShinyPalette_SakuttomonAlola,
        .iconSprite = gMonIcon_SakuttomonAlola,
        .iconPalIndex = 1,
        SHADOW(2, 1, SHADOW_SIZE_M)
        FOOTPRINT(Sakuttomon)
        OVERWORLD(
            sPicTable_SakuttomonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SakuttomonAlola,
            gShinyOverworldPalette_SakuttomonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSakuttomonAlolaLevelUpLearnset,
        .teachableLearnset = sSakuttomonAlolaTeachableLearnset,
        .eggMoveLearnset = sSakuttomonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sSakuttomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_SUNMON_ALOLA}),
    },

    [SPECIES_SUNMON_ALOLA] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 157,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Sunmon"),
        .cryId = CRY_SUNMON,
        .natDexNum = NATIONAL_DEX_SUNMON,
        .categoryName = _("Sludge"),
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING(
            "While it's unexpectedly quiet and friendly,\n"
            "if it's not fed any trash for a while,,\n"
            "it will smash its Trainer's furnishings,\n"
            "and eat up the fragments."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SunmonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SunmonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SunmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SunmonAlola,
        .shinyPalette = gMonShinyPalette_SunmonAlola,
        .iconSprite = gMonIcon_SunmonAlola,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sunmon)
        OVERWORLD(
            sPicTable_SunmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SunmonAlola,
            gShinyOverworldPalette_SunmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSunmonAlolaLevelUpLearnset,
        .teachableLearnset = sSunmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sSunmonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SAKUTTOMON

#if P_FAMILY_TANEMON
    [SPECIES_TANEMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 28,
        .baseSpeed     = 23,
        .baseSpAttack  = 25,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OVERGROW, ABILITY_CHLOROPHYLL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tanemon"),
        .cryId = CRY_TANEMON,
        .natDexNum = NATIONAL_DEX_TANEMON,
        .categoryName = _("Foliage"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tanemon have incredibly good hiding \n"
            "capabilites, with it disguising well in\n"
            "surrounding foliage. However it\n"
            "struggles against herbivore digimon."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tanemon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = sAnims_Tanemon,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Tanemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 24),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tanemon,
        .shinyPalette = gMonShinyPalette_Tanemon,
        .iconSprite = gMonIcon_Tanemon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_S)
        FOOTPRINT(Tanemon)
        OVERWORLD(
            sPicTable_Tanemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Tanemon,
            gShinyOverworldPalette_Tanemon
        )
        .levelUpLearnset = sTanemonLevelUpLearnset,
        .teachableLearnset = sTanemonTeachableLearnset,
        .eggMoveLearnset = sTanemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 32, SPECIES_MUSHROOMON},
                                {EVO_SPDEFENSE, 15, SPECIES_ARURAUMON},
                                {EVO_ATTACK, 15, SPECIES_LALAMON},
                                {EVO_SPATTACK, 16, SPECIES_FLORAMON},
                                {EVO_LEVEL, 14, SPECIES_PALMON}),
    },

    [SPECIES_TOKOMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 30,
        .baseDefense   = 24,
        .baseSpeed     = 26,
        .baseSpAttack  = 25,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tokomon"),
        .cryId = CRY_TOKOMON,
        .natDexNum = NATIONAL_DEX_TOKOMON,
        .categoryName = _("Biting"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "While Tokomon is very cute, tamers \n"
            "should be wary as it can suddenly snap\n"
            "at you with it's fangs which are very\n"
            "sharp and closely packed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Tokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .frontAnimFrames = sAnims_Tokomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Tokomon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Tokomon,
        .shinyPalette = gMonShinyPalette_Tokomon,
        .iconSprite = gMonIcon_Tokomon,
        .iconPalIndex = 2,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Tokomon)
        OVERWORLD(
            sPicTable_Tokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Tokomon,
            gShinyOverworldPalette_Tokomon
        )
        .levelUpLearnset = sTokomonLevelUpLearnset,
        .teachableLearnset = sTokomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_DEMIDEVMON},
                                {EVO_SPATTACK, 16, SPECIES_TSUKAIMON},
                                {EVO_HEALTH, 32, SPECIES_DOTFALCMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_TOKOMON_X},
                                {EVO_LEVEL, 14, SPECIES_PATAMON}),
    },
#endif //P_FAMILY_TANEMON

#if P_FAMILY_TOKOMON_X
    [SPECIES_TOKOMON_X] =
    {
        .baseHP        = 24,
        .baseAttack    = 30,
        .baseDefense   = 26,
        .baseSpeed     = 28,
        .baseSpAttack  = 24,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tokomon"),
        .cryId = CRY_TOKOMON_X,
        .natDexNum = NATIONAL_DEX_TOKOMON_X,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tokomon X is even more valiant than\n"
            "its normal counterpart. No matter the\n"
            "setbacks, it will not be discouraged\n"
            "in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tokomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 13,
        .frontAnimFrames = sAnims_Tokomon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLACK : ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 13,
        .backPic = gMonBackPic_Tokomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Tokomon_x,
        .shinyPalette = gMonShinyPalette_Tokomon_x,
        .iconSprite = gMonIcon_Tokomon_x,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Tokomon_x)
        OVERWORLD(
            sPicTable_Tokomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Tokomon_x,
            gShinyOverworldPalette_Tokomon_x
        )
        .levelUpLearnset = sTokomon_xLevelUpLearnset,
        .teachableLearnset = sTokomon_xTeachableLearnset,
        .eggMoveLearnset = sTokomon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 18, SPECIES_HERISSMON},
                                {EVO_SPDEFENSE, 17, SPECIES_GABUMON_X},
                                {EVO_ATTACK, 19, SPECIES_DRACOMON_X},
                                {EVO_SPATTACK, 18, SPECIES_AGUMON_X},
                                {EVO_LEVEL, 17, SPECIES_RENAMON_X}),
    },

    [SPECIES_TORBALLMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 27,
        .baseSpAttack  = 28,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STENCH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Torballmon"),
        .cryId = CRY_TORBALLMON,
        .natDexNum = NATIONAL_DEX_TORBALLMON,
        .categoryName = _("Deep Fried"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "TorikaBallmon is digimon that was likely\n"
            "born from a deep-fried food recipe. Its\n"
            "scent is often used by tamers to either\n"
            "weaken or lure digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Torballmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 13,
        .frontAnimFrames = sAnims_Torballmon,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 14,
        .backPic = gMonBackPic_Torballmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Torballmon,
        .shinyPalette = gMonShinyPalette_Torballmon,
        .iconSprite = gMonIcon_Torballmon,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Torballmon)
        OVERWORLD(
            sPicTable_Torballmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Torballmon,
            gShinyOverworldPalette_Torballmon
        )
        .levelUpLearnset = sTorBallmonLevelUpLearnset,
        .teachableLearnset = sTorballmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 15, SPECIES_EBIBURGMON},
                                {EVO_LEVEL, 13, SPECIES_BURGERMON}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define TSUMEMON_ABILITIES {ABILITY_CURSED_BODY, ABILITY_NONE}
#else
#define TSUMEMON_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE}
#endif

    [SPECIES_TSUMEMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 28,
        .baseDefense   = 21,
        .baseSpeed     = 30,
        .baseSpAttack  = 24,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Virus"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tsumemon is very ferocious digimon that\n"
            "uses the claws on the tips of its feelers.\n"
            "to corrode data. They are rarely tamed as\n"
            "it's too fast for tamers or digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Tsumemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = sAnims_Tsumemon,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Tsumemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Tsumemon,
        .shinyPalette = gMonShinyPalette_Tsumemon,
        .iconSprite = gMonIcon_Tsumemon,
        .iconPalIndex = 2,
        SHADOW(3, 5, SHADOW_SIZE_L)
        FOOTPRINT(Tsumemon)
        OVERWORLD(
            sPicTable_Tsumemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tsumemon,
            gShinyOverworldPalette_Tsumemon
        )
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_BLKGUILMON},
                                {EVO_SPEED, 17, SPECIES_DEMIDEVMON},
                                {EVO_SPDEFENSE, 14, SPECIES_BLKGABUMON},
                                {EVO_SPATTACK, 15, SPECIES_BLKAGUMON},
                                {EVO_LEVEL, 14, SPECIES_KERAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TSUMEMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 200,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON_MEGA,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Shadow"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Tsumemon's relationships are warped. It\n"
            "tries to take the lives of anyone and\n"
            "everyone. It will even try to curse the\n"
            "Trainer who is its master!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_TsumemonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_TsumemonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsumemonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_TsumemonMega,
        .shinyPalette = gMonShinyPalette_TsumemonMega,
        .iconSprite = gMonIcon_TsumemonMega,
        .iconPalIndex = 2,
        SHADOW(6, 1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tsumemon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_TSUMEMON_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = TSUMEMON_ABILITIES,
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Shadow"),
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rumor has it that its gigantic\n"
            "mouth leads not into its body, filled\n"
            "with cursed energy, but instead\n"
            "directly to the afterlife."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_TsumemonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_TsumemonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsumemonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TsumemonGmax,
        .shinyPalette = gMonShinyPalette_TsumemonGmax,
        .iconSprite = gMonIcon_TsumemonGmax,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Tsumemon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOKOMON_X

#if P_FAMILY_TSUNOMON
    [SPECIES_TSUNOMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 31,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tsunomon"),
        .cryId = CRY_TSUNOMON,
        .natDexNum = NATIONAL_DEX_TSUNOMON,
        .categoryName = _("Horn"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tsunomon has a playful personality and\n"
            "loves pulling pranks on other digimon.\n"
            "Unlike many In-Training digimon, it has\n"
            "good battle sense as well."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Tsunomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = sAnims_Tsunomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RAPID_H_HOPS : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Tsunomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Tsunomon,
        .shinyPalette = gMonShinyPalette_Tsunomon,
        .iconSprite = gMonIcon_Tsunomon,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tsunomon)
        OVERWORLD(
            sPicTable_Tsunomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Tsunomon,
            gShinyOverworldPalette_Tsunomon
        )
        .levelUpLearnset = sTsunomonLevelUpLearnset,
        .teachableLearnset = sTsunomonTeachableLearnset,
        .eggMoveLearnset = sTsunomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 17, SPECIES_MONMON},
                                {EVO_DEFENSE, 16, SPECIES_SYAKOMON},
                                {EVO_HEALTH, 36, SPECIES_PSYCHEMON},
                                {EVO_ATTACK, 19, SPECIES_ELECMON},
                                {EVO_LEVEL, 16, SPECIES_GABUMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KODEKACMON] =
    {
        .baseHP        = 42,
        .baseAttack    = 46,
        .baseDefense   = 45,
        .baseSpeed     = 49,
        .baseSpAttack  = 44,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kodekacmon"),
        .cryId = CRY_KODEKACMON,
        .natDexNum = NATIONAL_DEX_KODEKACMON,
        .categoryName = _("Bossy"),
        .height = 8,
        .weight = 273,
        .description = COMPOUND_STRING(
            "Often mistaken for In-Training Digimon, \n"
            "Minidekachimon is actually just a small\n"
            "Rookie Digimon. It spends its time bossing\n"
            "Atamadekachimon around."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Kodekacmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kodekacmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SHAKE : ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Kodekacmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kodekacmon,
        .shinyPalette = gMonShinyPalette_Kodekacmon,
        .iconSprite = gMonIcon_Kodekacmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KodekacmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_KodekacmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kodekacmon)
        OVERWORLD(
            sPicTable_Kodekacmon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Kodekacmon,
            gShinyOverworldPalette_Kodekacmon
        )
        OVERWORLD_FEMALE(
            sPicTable_KodekacmonF,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sKodekacmonLevelUpLearnset,
        .teachableLearnset = sKodekacmonTeachableLearnset,
        .formSpeciesIdTable = sKodekacmonFormSpeciesIdTable,
        .formChangeTable = sKodekacmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_ATAMADEMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KODEKACMON_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GROUND),
        .catchRate = 25,
        .expYield = 214,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kodekacmon"),
        .cryId = CRY_KODEKACMON_MEGA,
        .natDexNum = NATIONAL_DEX_KODEKACMON,
        .categoryName = _("Iron Snake"),
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING(
            "The cells within its body, crystallized by\n"
            "the energy produced from Mega Evolution,\n"
            "are stronger than any mineral and able\n"
            "to withstand any temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_KodekacmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KodekacmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KodekacmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_KodekacmonMega,
        .shinyPalette = gMonShinyPalette_KodekacmonMega,
        .iconSprite = gMonIcon_KodekacmonMega,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kodekacmon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKodekacmonLevelUpLearnset,
        .teachableLearnset = sKodekacmonTeachableLearnset,
        .formSpeciesIdTable = sKodekacmonFormSpeciesIdTable,
        .formChangeTable = sKodekacmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_TSUNOMON

#if P_FAMILY_TUMBLEMON
    [SPECIES_TUMBLEMON] =
    {
        .baseHP        = 30,
        .baseAttack    = 28,
        .baseDefense   = 27,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_ROCK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tumblemon"),
        .cryId = CRY_TUMBLEMON,
        .natDexNum = NATIONAL_DEX_TUMBLEMON,
        .categoryName = _("Ore"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Tumblemon grows by eating rocks. It stores\n"
            "a small bit of ore in it's body for \n"
            "nourishment. When it eats, it turns blind\n"
            "as it's eye is in its mouth."),
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tumblemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tumblemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCLE_C_CLOCKWISE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        .backPic = gMonBackPic_Tumblemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tumblemon,
        .shinyPalette = gMonShinyPalette_Tumblemon,
        .iconSprite = gMonIcon_Tumblemon,
        .iconPalIndex = 2,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Tumblemon)
        OVERWORLD(
            sPicTable_Tumblemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tumblemon,
            gShinyOverworldPalette_Tumblemon
        )
        .levelUpLearnset = sTumblemonLevelUpLearnset,
        .teachableLearnset = sTumblemonTeachableLearnset,
        .eggMoveLearnset = sTumblemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_EKAKIMON},
                                {EVO_HEALTH, 36, SPECIES_BAKOMON},
                                {EVO_DEFENSE, 17, SPECIES_GOTSUMON},
                                {EVO_ATTACK, 17, SPECIES_STRABIMON},
                                {EVO_LEVEL, 15, SPECIES_SUNARZAMON}),
    },

    [SPECIES_UPAMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 19,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Upamon"),
        .cryId = CRY_UPAMON,
        .natDexNum = NATIONAL_DEX_UPAMON,
        .categoryName = _("Axolotl"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although Upamon can live on both land and\n"
            "water, it prefer's to stick to land. It\n"
            "is often bullied by other digimon however\n"
            "it mistakes it for being played with."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Upamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Upamon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Upamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Upamon,
        .shinyPalette = gMonShinyPalette_Upamon,
        .iconSprite = gMonIcon_Upamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_UpamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_UpamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Upamon)
        OVERWORLD(
            sPicTable_Upamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Upamon,
            gShinyOverworldPalette_Upamon
        )
        OVERWORLD_FEMALE(
            sPicTable_UpamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sUpamonLevelUpLearnset,
        .teachableLearnset = sUpamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 15, SPECIES_PILLOMON},
                                {EVO_SPEED, 16, SPECIES_DAMEMON},
                                {EVO_SPATTACK, 15, SPECIES_BOKOMON},
                                {EVO_HEALTH, 34, SPECIES_SANGOMON},
                                {EVO_LEVEL, 15, SPECIES_ARMADILMON}),
    },
#endif //P_FAMILY_TUMBLEMON

#if P_FAMILY_VIXIMON
    [SPECIES_VIXIMON] =
    {
        .baseHP        = 28,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 29,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Viximon"),
        .cryId = CRY_VIXIMON,
        .natDexNum = NATIONAL_DEX_VIXIMON,
        .categoryName = _("Fox"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although erratic and hard to catch, \n"
            "Viximon can be easily lured by the its\n"
            "favourite food. They only act in the\n"
            "evening and moonlit nights."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Viximon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .frontAnimFrames = sAnims_Viximon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Viximon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Viximon,
        .shinyPalette = gMonShinyPalette_Viximon,
        .iconSprite = gMonIcon_Viximon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Viximon)
        OVERWORLD(
            sPicTable_Viximon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Viximon,
            gShinyOverworldPalette_Viximon
        )
        .levelUpLearnset = sViximonLevelUpLearnset,
        .teachableLearnset = sViximonTeachableLearnset,
        .eggMoveLearnset = sViximonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 17, SPECIES_NEEMON},
                                {EVO_SPDEFENSE, 16, SPECIES_TERRIERMON_ASSISTANT},
                                {EVO_HEALTH, 39, SPECIES_CUTEMON},
                                {EVO_SPATTACK, 18, SPECIES_TYUTYUMON},
                                {EVO_LEVEL, 18, SPECIES_RENAMON}),
    },

    [SPECIES_WANYAMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 26,
        .baseDefense   = 23,
        .baseSpeed     = 31,
        .baseSpAttack  = 21,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Wanyamon"),
        .cryId = CRY_WANYAMON,
        .natDexNum = NATIONAL_DEX_WANYAMON,
        .categoryName = _("Dog"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Wanyamon is very standoffish digimon\n"
            "when found in the wild however once\n"
            "show affection, it becomes attached\n"
            "like a pet."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wanyamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 8,
        .frontAnimFrames = sAnims_Wanyamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_ZIGZAG_SLOW : ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backPic = gMonBackPic_Wanyamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Wanyamon,
        .shinyPalette = gMonShinyPalette_Wanyamon,
        .iconSprite = gMonIcon_Wanyamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-2, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wanyamon)
        OVERWORLD(
            sPicTable_Wanyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wanyamon,
            gShinyOverworldPalette_Wanyamon
        )
        .levelUpLearnset = sWanyamonLevelUpLearnset,
        .teachableLearnset = sWanyamonTeachableLearnset,
        .formSpeciesIdTable = sWanyamonFormSpeciesIdTable,
        .formChangeTable = sWanyamonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_PAWNMON_WHITE},
                                {EVO_DEFENSE, 16, SPECIES_KODEKACMON},
                                {EVO_SPATTACK, 15, SPECIES_LUXMON},
                                {EVO_SPEED, 18, SPECIES_DONDOKOMON},
                                {EVO_LEVEL, 15, SPECIES_GAOMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_WANYAMON_GMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 206,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Wanyamon"),
        .cryId = CRY_WANYAMON,
        .natDexNum = NATIONAL_DEX_WANYAMON,
        .categoryName = _("Pincer"),
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flow of Gigantamax energy has\n"
            "spurred this Pokémon's left pincer\n"
            "to grow to an enormous size. That\n"
            "claw can pulverize anything."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WanyamonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WanyamonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WanyamonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WanyamonGmax,
        .shinyPalette = gMonShinyPalette_WanyamonGmax,
        .iconSprite = gMonIcon_WanyamonGmax,
        .iconPalIndex = 0,
        SHADOW(-3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wanyamon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sWanyamonLevelUpLearnset,
        .teachableLearnset = sWanyamonTeachableLearnset,
        .formSpeciesIdTable = sWanyamonFormSpeciesIdTable,
        .formChangeTable = sWanyamonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_VIXIMON

#if P_FAMILY_XIAOMON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define YAAMON_EXP_YIELD 172
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define YAAMON_EXP_YIELD 168
#else
    #define YAAMON_EXP_YIELD 150
#endif

    [SPECIES_XIAOMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 26,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 24,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Xiaomon"),
        .cryId = CRY_XIAOMON,
        .natDexNum = NATIONAL_DEX_XIAOMON,
        .categoryName = _("Artificial"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Xiaomon is one of the most commonly \n"
            "created artificial digimon. It forms very\n"
            "strong attachments to people and is \n"
            "considered one of the easiest to train."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Xiaomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 15,
        .frontAnimFrames = sAnims_Xiaomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SWING_CONCAVE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backPic = gMonBackPic_Xiaomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Xiaomon,
        .shinyPalette = gMonShinyPalette_Xiaomon,
        .iconSprite = gMonIcon_Xiaomon,
        .iconPalIndex = 0,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Xiaomon)
        OVERWORLD(
            sPicTable_Xiaomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Xiaomon,
            gShinyOverworldPalette_Xiaomon
        )
        .levelUpLearnset = sXiaomonLevelUpLearnset,
        .teachableLearnset = sXiaomonTeachableLearnset,
        .formSpeciesIdTable = sXiaomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 13, SPECIES_VEMMON},
                                {EVO_ATTACK, 14, SPECIES_IGNITEMON},
                                {EVO_SPATTACK, 14, SPECIES_AGUMON_FAKE_EXPERT},
                                {EVO_LEVEL, 12, SPECIES_LABRAMON}),
    },

    [SPECIES_YAAMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 22,
        .baseDefense   = 21,
        .baseSpeed     = 26,
        .baseSpAttack  = 30,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Yaamon"),
        .cryId = CRY_YAAMON,
        .natDexNum = NATIONAL_DEX_YAAMON,
        .categoryName = _("Twisted"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Yaamon is twisted digimon that will do\n"
            "anything to have it's own fun including\n"
            "tormenting digimon. It will then mock\n"
            "the stunned digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yaamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Yaamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Yaamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Yaamon,
        .shinyPalette = gMonShinyPalette_Yaamon,
        .iconSprite = gMonIcon_Yaamon,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Yaamon)
        OVERWORLD(
            sPicTable_Yaamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Yaamon,
            gShinyOverworldPalette_Yaamon
        )
        .levelUpLearnset = sYaamonLevelUpLearnset,
        .teachableLearnset = sYaamonTeachableLearnset,
        .formSpeciesIdTable = sYaamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPEED, 16, SPECIES_SOUNBRDMON},
                                {EVO_SPATTACK, 18, SPECIES_PETITMAMON},
                                {EVO_DEFENSE, 15, SPECIES_GIZUMON},
                                {EVO_ATTACK, 15, SPECIES_GAOSSMON},
                                {EVO_LEVEL, 15, SPECIES_IMPMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_XIAOMON_HISUI] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Xiaomon"),
        .cryId = CRY_XIAOMON,
        .natDexNum = NATIONAL_DEX_XIAOMON,
        .categoryName = _("Sphere"),
        .height = 5,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It esembles an ancient Poké Ball design.\n"
            "When excited, it discharges the electric\n"
            "current it has stored in its belly, then\n"
            "lets out a great, uproarious laugh."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XiaomonHisui,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_XiaomonHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_XiaomonHisui,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_XiaomonHisui,
        .shinyPalette = gMonShinyPalette_XiaomonHisui,
        .iconSprite = gMonIcon_XiaomonHisui,
        .iconPalIndex = 0,
        SHADOW(1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Xiaomon)
        OVERWORLD(
            sPicTable_XiaomonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_XiaomonHisui,
            gShinyOverworldPalette_XiaomonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sXiaomonHisuiLevelUpLearnset,
        .teachableLearnset = sXiaomonHisuiTeachableLearnset,
        .formSpeciesIdTable = sXiaomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_YAAMON_HISUI}),
    },

    [SPECIES_YAAMON_HISUI] =
    {
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 70,
        .expYield = YAAMON_EXP_YIELD,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yaamon"),
        .cryId = CRY_YAAMON,
        .natDexNum = NATIONAL_DEX_YAAMON,
        .categoryName = _("Sphere"),
        .height = 12,
        .weight = 710,
        .description = COMPOUND_STRING(
            "The tissue on the surface of its body is\n"
            "similar in composition to an Apricorn.\n"
            "When irritated, it lets loose an electric\n"
            "current equal to 20 lightning bolts."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_YaamonHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_YaamonHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_YaamonHisui,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_YaamonHisui,
        .shinyPalette = gMonShinyPalette_YaamonHisui,
        .iconSprite = gMonIcon_YaamonHisui,
        .iconPalIndex = 1,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Yaamon)
        OVERWORLD(
            sPicTable_YaamonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_YaamonHisui,
            gShinyOverworldPalette_YaamonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sYaamonHisuiLevelUpLearnset,
        .teachableLearnset = sYaamonHisuiTeachableLearnset,
        .formSpeciesIdTable = sYaamonFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_XIAOMON

#if P_FAMILY_YOKOMON
    [SPECIES_YOKOMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 25,
        .baseSpAttack  = 23,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Yokomon"),
        .cryId = CRY_YOKOMON,
        .natDexNum = NATIONAL_DEX_YOKOMON,
        .categoryName = _("Bulb"),
        .height = 3,
        .weight = 45,
        .description = COMPOUND_STRING(
            "Yokomon is able to move skillfully by \n"
            "using it's root-like tentacles. They like\n"
            "to live in flocks, the flocks are known\n"
            "to grow up to a few hundred quickly."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = sAnims_Yokomon,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Yokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Yokomon,
        .shinyPalette = gMonShinyPalette_Yokomon,
        .iconSprite = gMonIcon_Yokomon,
        .iconPalIndex = 0,
        SHADOW(0, -5, SHADOW_SIZE_L)
        FOOTPRINT(Yokomon)
        OVERWORLD(
            sPicTable_Yokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Yokomon,
            gShinyOverworldPalette_Yokomon
        )
        .levelUpLearnset = sYokomonLevelUpLearnset,
        .teachableLearnset = sYokomonTeachableLearnset,
        .eggMoveLearnset = sYokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 15, SPECIES_SANTAAGUMON},
                                {EVO_SPATTACK, 15, SPECIES_OTAMAMON_RED},
                                {EVO_HEALTH, 32, SPECIES_MODBETAMON},
                                {EVO_DEFENSE, 15, SPECIES_SPARROWMON},
                                {EVO_LEVEL, 14, SPECIES_BIYOMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define AGUMON_EXP_YIELD 186
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define AGUMON_EXP_YIELD 182
#else
    #define AGUMON_EXP_YIELD 212
#endif

#define AGUMON_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

    [SPECIES_AGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_BATTLE_BOND },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON,
        .natDexNum = NATIONAL_DEX_AGUMON,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Agumon are thought to be very arrogant\n"
            "digimon due to their frequency of fighting\n"
            "stronger digimon but it's actually because\n"
            "they lack any understanding of fear."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Agumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Agumon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Agumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agumon,
        .shinyPalette = gMonShinyPalette_Agumon,
        .iconSprite = gMonIcon_Agumon,
        .iconPalIndex = 1,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Agumon)
        OVERWORLD(
            sPicTable_Agumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon,
            gShinyOverworldPalette_Agumon
        )
        .levelUpLearnset = sAgumonLevelUpLearnset,
        .teachableLearnset = sAgumonTeachableLearnset,
        .formSpeciesIdTable = sAgumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKAGUMON}, // DARK DIGITRON
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_AGUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 30, SPECIES_CENTARUMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_AGUMON_ALOLA] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = AGUMON_SP_DEF,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = AGUMON_EXP_YIELD,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON,
        .natDexNum = NATIONAL_DEX_AGUMON,
        .categoryName = _("Coconut"),
        .height = 109,
        .weight = 4156,
        .description = COMPOUND_STRING(
            "Alola is the best environment for\n"
            "this Pokémon. Local people take pride\n"
            "in its appearance, saying this is how\n"
            "Agumon ought to look."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_AgumonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_AgumonAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AgumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AgumonAlola,
        .shinyPalette = gMonShinyPalette_AgumonAlola,
        .iconSprite = gMonIcon_AgumonAlola,
        .iconPalIndex = 1,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Agumon)
        OVERWORLD(
            sPicTable_AgumonAlola,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_AgumonAlola,
            gShinyOverworldPalette_AgumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sAgumonAlolaLevelUpLearnset,
        .teachableLearnset = sAgumonAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_YOKOMON

#if P_FAMILY_AGUMON_06
    [SPECIES_AGUMON_06] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_HUSTLE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_06,
        .natDexNum = NATIONAL_DEX_AGUMON_06,
        .categoryName = _("T-Rex"),
        .height = 13,
        .weight = 220,
        .description = COMPOUND_STRING(
            "This Agumon is exactly the same in nearly\n"
            "every way as a normal Agumon however the\n"
            "red straps on its hands seem to unlock\n"
            "the potential for a new digivolution."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_06,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_Agumon_06,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 30,
        .backPic = gMonBackPic_Agumon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Agumon_06,
        .shinyPalette = gMonShinyPalette_Agumon_06,
        .iconSprite = gMonIcon_Agumon_06,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Agumon_06)
        OVERWORLD(
            sPicTable_Agumon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_06,
            gShinyOverworldPalette_Agumon_06
        )
        .levelUpLearnset = sAgumon_06LevelUpLearnset,
        .teachableLearnset = sAgumon_06TeachableLearnset,
        .eggMoveLearnset = sAgumon_06EggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

    [SPECIES_AGUMON_EXPERT] =
    {
        .baseHP        = 46,
        .baseAttack    = 59,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 59,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("T-Rex"),
        .height = 12,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Many mistake Agumon Expert as just a\n"
            "normal Agumon having a laugh, it is \n"
            "actually a very smart digimon, having its\n"
            "own Doctorate from Digital World Academy."),
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expert,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Agumon_expert,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Agumon_expert,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agumon_expert,
        .shinyPalette = gMonShinyPalette_Agumon_expert,
        .iconSprite = gMonIcon_Agumon_expert,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(6, 6, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_expert,
            gShinyOverworldPalette_Agumon_expert
        )
        .levelUpLearnset = sAgumon_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_COREDRAMON_GREEN}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_AGUMON_EXPERT_ALOLA] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 124,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("Bone Keeper"),
        .height = 10,
        .weight = 340,
        .description = gAgumon_expertAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expertAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Agumon_expertAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_expertAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Agumon_expertAlola,
        .shinyPalette = gMonShinyPalette_Agumon_expertAlola,
        .iconSprite = gMonIcon_Agumon_expertAlola,
        .iconPalIndex = 1,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expertAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_expertAlola,
            gShinyOverworldPalette_Agumon_expertAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sAgumon_expertAlolaLevelUpLearnset,
        .teachableLearnset = sAgumon_expertAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
    },

    [SPECIES_AGUMON_EXPERT_ALOLA_TOTEM] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("Bone Keeper"),
        .height = 17,
        .weight = 980,
        .description = gAgumon_expertAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expertAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Agumon_expertAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_expertAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Agumon_expertAlola,
        .shinyPalette = gMonShinyPalette_Agumon_expertAlola,
        .iconSprite = gMonIcon_Agumon_expertAlola,
        .iconPalIndex = 1,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expertAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_expertAlola,
            gShinyOverworldPalette_Agumon_expertAlola
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_expertAlolaLevelUpLearnset,
        .teachableLearnset = sAgumon_expertAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_AGUMON_06

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SALAMON] =
    {
        .baseHP        = 46,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 54,
        .baseSpAttack  = 45,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Salamon"),
        .cryId = CRY_SALAMON,
        .natDexNum = NATIONAL_DEX_SALAMON,
        .categoryName = _("Holy"),
        .height = 3,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Technically it is a holy Digimon however\n"
            "it is so young that it can't manifest its\n"
            "holy power. It is a very anxious Digimon\n"
            "that is easily bullied by others."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Salamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Salamon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Salamon,
        .shinyPalette = gMonShinyPalette_Salamon,
        .iconSprite = gMonIcon_Salamon,
        .iconPalIndex = 2,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Salamon)
        OVERWORLD(
            sPicTable_Salamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salamon,
            gShinyOverworldPalette_Salamon
        )
        .levelUpLearnset = sSalamonLevelUpLearnset,
        .teachableLearnset = sSalamonTeachableLearnset,
        .eggMoveLearnset = sSalamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKGATOMON}, // DARK DIGITRON
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_SALAMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 30, SPECIES_GATOMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_AGUMON_X] =
    {
        .baseHP        = 57,
        .baseAttack    = 76,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 63,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_X,
        .natDexNum = NATIONAL_DEX_AGUMON_X,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 230,
        .description = COMPOUND_STRING(
            "This Agumon has developed unique blue lines\n"
            "across it's body, making it more akin to\n"
            "its common digivolution, Greymon. Its\n"
            "claws are now longer and sharper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Agumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Agumon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Agumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Agumon_x,
        .shinyPalette = gMonShinyPalette_Agumon_x,
        .iconSprite = gMonIcon_Agumon_x,
        .iconPalIndex = 2,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_x)
        OVERWORLD(
            sPicTable_Agumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_x,
            gShinyOverworldPalette_Agumon_x
        )
        .levelUpLearnset = sAgumon_XLevelUpLearnset,
        .teachableLearnset = sAgumon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_BLKAGUMON_X}, //DARK DIGITRON
                                {EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

    [SPECIES_ANGORAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 48,
        .baseDefense   = 55,
        .baseSpeed     = 53,
        .baseSpAttack  = 50,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Angoramon"),
        .cryId = CRY_ANGORAMON,
        .natDexNum = NATIONAL_DEX_ANGORAMON,
        .categoryName = _("Rabbit"),
        .height = 22,
        .weight = 420,
        .description = COMPOUND_STRING(
            "Although it wouldn't like it, Angoramon\n"
            "has good capabilities to fly using its\n"
            "large ears that spin. Those same ears also\n"
            "have great hearing capabilities."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Angoramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Angoramon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Angoramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Angoramon,
        .shinyPalette = gMonShinyPalette_Angoramon,
        .iconSprite = gMonIcon_Angoramon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Angoramon)
        OVERWORLD(
            sPicTable_Angoramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Angoramon,
            gShinyOverworldPalette_Angoramon
        )
        .levelUpLearnset = sAngoramonLevelUpLearnset,
        .teachableLearnset = sAngoramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_DOGGYMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SALAMON_X] =
    {
        .baseHP        = 45,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 54,
        .baseSpAttack  = 51,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_EPIPHANY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Salamon"),
        .cryId = CRY_SALAMON_X,
        .natDexNum = NATIONAL_DEX_SALAMON_X,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Unlike normal Salamon, Salamon X will\n"
            "have much stronger holy power. It still\n"
            "can't manifest it on its own however\n"
            "it can subconsciously use it."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = sAnims_Salamon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Salamon_x,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Salamon_x,
        .shinyPalette = gMonShinyPalette_Salamon_x,
        .iconSprite = gMonIcon_Salamon_x,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Salamon_x)
        OVERWORLD(
            sPicTable_Salamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salamon_x,
            gShinyOverworldPalette_Salamon_x
        )
        .levelUpLearnset = sSalamon_xLevelUpLearnset,
        .teachableLearnset = sSalamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_GATOMON_X}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_ARCADIAMON_ROOKIE
    [SPECIES_ARCADIAMON_ROOKIE] =
    {
        .baseHP        = 52,
        .baseAttack    = 71,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 71,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 135,
        .expYield = 120,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_ROOKIE,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_ROOKIE,
        .categoryName = _("Ultimate"),
        .height = 9,
        .weight = 265,
        .description = COMPOUND_STRING(
            "Unlike other Digimon, Arcadiamon can\n"
            "only evolve by absorbing other digimon\n"
            "data. It is also not clear if Arcadiamon\n"
            "has a sense of self."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arcadiamon_rookie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Arcadiamon_rookie,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Arcadiamon_rookie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Arcadiamon_rookie,
        .shinyPalette = gMonShinyPalette_Arcadiamon_rookie,
        .iconSprite = gMonIcon_Arcadiamon_rookie,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Arcadiamon_rookie)
        OVERWORLD(
            sPicTable_Arcadiamon_rookie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arcadiamon_rookie,
            gShinyOverworldPalette_Arcadiamon_rookie
        )
        .levelUpLearnset = sArcadiamon_rookieLevelUpLearnset,
        .teachableLearnset = sArcadiamon_rookieTeachableLearnset,
        .eggMoveLearnset = sArcadiamon_rookieEggMoveLearnset,
        
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 193,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickilicky"),
        .cryId = CRY_LICKILICKY,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .description = COMPOUND_STRING(
            "The long tongue is always soggy with\n"
            "slobber. The saliva contains a solvent\n"
            "that causes numbness. Getting too close\n"
            "to it will leave you soaked with drool."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Lickilicky,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lickilicky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lickilicky,
        .shinyPalette = gMonShinyPalette_Lickilicky,
        .iconSprite = gMonIcon_Lickilicky,
        .iconPalIndex = 1,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lickilicky)
        OVERWORLD(
            sPicTable_Lickilicky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickilicky,
            gShinyOverworldPalette_Lickilicky
        )
        .levelUpLearnset = sLickilickyLevelUpLearnset,
        .teachableLearnset = sLickilickyTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARCADIAMON_ROOKIE

#if P_FAMILY_ARGOMON_ROOKIE
    [SPECIES_ARGOMON_ROOKIE] =
    {
        .baseHP        = 43,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 80,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_VIRUS,
        .catchRate = 180,
        .expYield = 85,
        .evYield_Speed     = 3,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_ROOKIE,
        .natDexNum = NATIONAL_DEX_ARGOMON_ROOKIE,
        .categoryName = _("Algorithm"),
        .height = 7,
        .weight = 290,
        .description = COMPOUND_STRING(
            "Rookie Argomon are seen often protecting\n"
            "younger Argomon while they are feeding on\n"
            "data. There tendacy to protect means \n"
            "they sometimes attack inanimate objects."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_rookie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = sAnims_Argomon_rookie,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 14,
        .backPic = gMonBackPic_Argomon_rookie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Argomon_rookie,
        .shinyPalette = gMonShinyPalette_Argomon_rookie,
        .iconSprite = gMonIcon_Argomon_rookie,
        .iconPalIndex = 2,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Argomon_rookie)
        OVERWORLD(
            sPicTable_Argomon_rookie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Argomon_rookie,
            gShinyOverworldPalette_Argomon_rookie
        )
        .levelUpLearnset = sArgomon_rookieLevelUpLearnset,
        .teachableLearnset = sArgomon_rookieTeachableLearnset,
        .eggMoveLearnset = sArgomon_rookieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARGOMON_CHAMPION}),
    },

    [SPECIES_ARMADILMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 53,
        .baseDefense   = 75,
        .baseSpeed     = 49,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 3,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Armadilmon"),
        .cryId = CRY_ARMADILMON,
        .natDexNum = NATIONAL_DEX_ARMADILMON,
        .categoryName = _("Armadillo"),
        .height = 6,
        .weight = 395,
        .description = COMPOUND_STRING(
            "Armadillomon is an ancient species of \n"
            "digimon that can access rarer digivolutions.\n"
            "They have a very carefree personality\n"
            "and quickly charms any tamer it likes."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Armadilmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .frontAnimFrames = sAnims_Armadilmon,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 3,
        .backPic = gMonBackPic_Armadilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Armadilmon,
        .shinyPalette = gMonShinyPalette_Armadilmon,
        .iconSprite = gMonIcon_Armadilmon,
        .iconPalIndex = 2,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Armadilmon)
        OVERWORLD(
            sPicTable_Armadilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Armadilmon,
            gShinyOverworldPalette_Armadilmon
        )
        .levelUpLearnset = sArmadilmonLevelUpLearnset,
        .teachableLearnset = sArmadilmonTeachableLearnset,
        .formSpeciesIdTable = sArmadilmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_KINDNESS_EGG, SPECIES_CHAMELEMON},
                                {EVO_ITEM, ITEM_MIRACLES_EGG, SPECIES_ELEPHANMON},
                                {EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_DIGMON},
                                {EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_BOARMON},
                                {EVO_LEVEL, 32, SPECIES_ANKYLOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARMADILMON_GALAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 173,
        .evYield_Defense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Armadilmon"),
        .cryId = CRY_ARMADILMON,
        .natDexNum = NATIONAL_DEX_ARMADILMON,
        .categoryName = _("Poison Gas"),
        .height = 30,
        .weight = 170,
        .description = COMPOUND_STRING(
            "Long ago, when droves of factories fouled\n"
            "the air with pollution, it changed into this\n"
            "form for some reason. It consumes air\n"
            "pollutant particles, expelling clean air."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ArmadilmonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArmadilmonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_ArmadilmonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArmadilmonGalar,
        .shinyPalette = gMonShinyPalette_ArmadilmonGalar,
        .iconSprite = gMonIcon_ArmadilmonGalar,
        .iconPalIndex = 1,
        SHADOW(7, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Armadilmon)
        OVERWORLD(
            sPicTable_ArmadilmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArmadilmonGalar,
            gShinyOverworldPalette_ArmadilmonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sArmadilmonGalarLevelUpLearnset,
        .teachableLearnset = sArmadilmonGalarTeachableLearnset,
        .formSpeciesIdTable = sArmadilmonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARGOMON_ROOKIE

#if P_FAMILY_ARURAUMON
    [SPECIES_ARURAUMON] =
    {
        .baseHP        = 58,
        .baseAttack    = 54,
        .baseDefense   = 54,
        .baseSpeed     = 50,
        .baseSpAttack  = 63,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Aruraumon"),
        .cryId = CRY_ARURAUMON,
        .natDexNum = NATIONAL_DEX_ARURAUMON,
        .categoryName = _("Mandragora"),
        .height = 8,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Often mistaken as a Palmon, Aruraumon is\n"
            "believed to have accomplished a similiar\n"
            "digivolution. It's flower gives a foul\n"
            "stench that can waft off predators."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aruraumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 12,
        .frontAnimFrames = sAnims_Aruraumon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Aruraumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Aruraumon,
        .shinyPalette = gMonShinyPalette_Aruraumon,
        .iconSprite = gMonIcon_Aruraumon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AruraumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicFemale = gMonBackPic_AruraumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Aruraumon)
        OVERWORLD(
            sPicTable_Aruraumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aruraumon,
            gShinyOverworldPalette_Aruraumon
        )
        OVERWORLD_FEMALE(
            sPicTable_AruraumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sAruraumonLevelUpLearnset,
        .teachableLearnset = sAruraumonTeachableLearnset,
        .eggMoveLearnset = sAruraumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GEREMON}),
    },

    [SPECIES_BAKOMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 50,
        .baseDefense   = 48,
        .baseSpeed     = 60,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GHOST),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bakomon"),
        .cryId = CRY_BAKOMON,
        .natDexNum = NATIONAL_DEX_BAKOMON,
        .categoryName = _("Cardboard"),
        .height = 9,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Although it may look innocent at first\n"
            "glance, Bakomon is actually an fearsome\n"
            "Digimon to encounter. Anyone who peeks\n"
            "inside one of it's boxes will be trapped."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Bakomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = sAnims_Bakomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Bakomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bakomon,
        .shinyPalette = gMonShinyPalette_Bakomon,
        .iconSprite = gMonIcon_Bakomon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BakomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_BakomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bakomon)
        OVERWORLD(
            sPicTable_Bakomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bakomon,
            gShinyOverworldPalette_Bakomon
        )
        OVERWORLD_FEMALE(
            sPicTable_BakomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBakomonLevelUpLearnset,
        .teachableLearnset = sBakomonTeachableLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 217,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyperior"),
        .cryId = CRY_RHYPERIOR,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .description = COMPOUND_STRING(
            "It can launch a rock held in its hand\n"
            "like a missile by tightening and then\n"
            "expanding its muscles instantaneously.\n"
            "Monimon are shot at rare times."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Rhyperior,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Rhyperior,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rhyperior,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Rhyperior,
        .shinyPalette = gMonShinyPalette_Rhyperior,
        .iconSprite = gMonIcon_Rhyperior,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RhyperiorF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_RhyperiorF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rhyperior)
        OVERWORLD(
            sPicTable_Rhyperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyperior,
            gShinyOverworldPalette_Rhyperior
        )
        OVERWORLD_FEMALE(
            sPicTable_RhyperiorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRhyperiorLevelUpLearnset,
        .teachableLearnset = sRhyperiorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARURAUMON

#if P_FAMILY_BEARMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 110 : 255,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Happiny"),
        .cryId = CRY_HAPPINY,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("Playhouse"),
        .height = 6,
        .weight = 244,
        .description = COMPOUND_STRING(
            "It carries a round white rock in its\n"
            "belly pouch. If it gets along well with\n"
            "someone, it will sometimes give that\n"
            "person the rock."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Happiny,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Happiny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Happiny,
        .shinyPalette = gMonShinyPalette_Happiny,
        .iconSprite = gMonIcon_Happiny,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Happiny)
        OVERWORLD(
            sPicTable_Happiny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Happiny,
            gShinyOverworldPalette_Happiny
        )
        .levelUpLearnset = sHappinyLevelUpLearnset,
        .teachableLearnset = sHappinyTeachableLearnset,
        .eggMoveLearnset = sHappinyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_BEARMON},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_BEARMON}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BEARMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 56,
        .baseDefense   = 51,
        .baseSpeed     = 55,
        .baseSpAttack  = 49,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Bearmon"),
        .cryId = CRY_BEARMON,
        .natDexNum = NATIONAL_DEX_BEARMON,
        .categoryName = _("Bear"),
        .height = 9,
        .weight = 310,
        .description = COMPOUND_STRING(
            "Despite being a bear Digimon, Bearmon is\n"
            "actually very friendly. However this\n"
            "friendliness should not be mistaken for being\n"
            "weak as Bearmon has incredible strength."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bearmon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Bearmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bearmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Bearmon,
        .shinyPalette = gMonShinyPalette_Bearmon,
        .iconSprite = gMonIcon_Bearmon,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Bearmon)
        OVERWORLD(
            sPicTable_Bearmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bearmon,
            gShinyOverworldPalette_Bearmon
        )
        .levelUpLearnset = sBearmonLevelUpLearnset,
        .teachableLearnset = sBearmonTeachableLearnset,
        .eggMoveLearnset = sBearmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DOBERMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SHOUTMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 53,
        .baseDefense   = 52,
        .baseSpeed     = 61,
        .baseSpAttack  = 57,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Speed     = 1,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shoutmon"),
        .cryId = CRY_SHOUTMON,
        .natDexNum = NATIONAL_DEX_SHOUTMON,
        .categoryName = _("Rockstar"),
        .height = 9,
        .weight = 368,
        .description = COMPOUND_STRING(
            "The passion that Shoutman has is converted\n"
            "into energy. This energy gives it the\n"
            "tenacity to get up no matter what in a \n"
            "fight. Without its mic, it will wither away"),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Shoutmon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = sAnims_Shoutmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shoutmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Shoutmon,
        .shinyPalette = gMonShinyPalette_Shoutmon,
        .iconSprite = gMonIcon_Shoutmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Shoutmon)
        OVERWORLD(
            sPicTable_Shoutmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shoutmon,
            gShinyOverworldPalette_Shoutmon
        )
        .levelUpLearnset = sShoutmonLevelUpLearnset,
        .teachableLearnset = sShoutmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DONSHOUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BEARMON

#if P_FAMILY_BETAMON
    [SPECIES_BETAMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 57,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_STATIC, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON,
        .natDexNum = NATIONAL_DEX_BETAMON,
        .categoryName = _("Amphibian"),
        .height = 7,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Betamon is an amphibious Digimon that walks\n"
            "on four legs. It is a gentle Digimon that\n"
            "often be seen floating in the water however\n"
            "it is not a weak Digimon."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Betamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = sAnims_Betamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Betamon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Betamon,
        .shinyPalette = gMonShinyPalette_Betamon,
        .iconSprite = gMonIcon_Betamon,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Betamon)
        OVERWORLD(
            sPicTable_Betamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Betamon,
            gShinyOverworldPalette_Betamon
        )
        .levelUpLearnset = sBetamonLevelUpLearnset,
        .teachableLearnset = sBetamonTeachableLearnset,
        .eggMoveLearnset = sBetamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 56, SPECIES_DRIMOGEMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_BETAMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 34, SPECIES_DINOHYUMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 211,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangrowth"),
        .cryId = CRY_TANGROWTH,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = COMPOUND_STRING(
            "It ensnares prey by extending arms made\n"
            "of vines. Even if one of its arms is eaten,\n"
            "it's fine. The Pokémon regenerates quickly\n"
            "and will go right back to normal."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Tangrowth,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Tangrowth,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Tangrowth,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tangrowth,
        .shinyPalette = gMonShinyPalette_Tangrowth,
        .iconSprite = gMonIcon_Tangrowth,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TangrowthF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tangrowth)
        OVERWORLD(
            sPicTable_Tangrowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangrowth,
            gShinyOverworldPalette_Tangrowth
        )
        OVERWORLD_FEMALE(
            sPicTable_TangrowthF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sTangrowthLevelUpLearnset,
        .teachableLearnset = sTangrowthTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BETAMON

#if P_FAMILY_BETAMON_X
    [SPECIES_BETAMON_X] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 52,
        .baseSpeed     = 53,
        .baseSpAttack  = 59,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_TRANSISTOR, ABILITY_STORM_DRAIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON_X,
        .natDexNum = NATIONAL_DEX_BETAMON_X,
        .categoryName = _("X Antibody"),
        .height = 7,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Although stronger than it's normal form,\n"
            "Betamon X is an endangered species often\n"
            "overhunted for it's looks. This in spite of\n"
            "its longer claws and stronger attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Betamon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = sAnims_Betamon_x,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Betamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Betamon_x,
        .shinyPalette = gMonShinyPalette_Betamon_x,
        .iconSprite = gMonIcon_Betamon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Betamon_x)
        OVERWORLD(
            sPicTable_Betamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Betamon_x,
            gShinyOverworldPalette_Betamon_x
        )
        .levelUpLearnset = sBetamon_xLevelUpLearnset,
        .teachableLearnset = sBetamon_xTeachableLearnset,
        .eggMoveLearnset = sBetamon_xEggMoveLearnset,
        .formSpeciesIdTable = sBetamon_xFormSpeciesIdTable,
        .formChangeTable = sBetamon_xFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_GARURUMON_X}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BETAMON_X_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 207,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON_X_MEGA,
        .natDexNum = NATIONAL_DEX_BETAMON_X,
        .categoryName = _("Parent"),
        .height = 22,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When the mother sees the back of her\n"
            "Mega-Evolved child, it makes her think\n"
            "of the day when her child will inevitably\n"
            "leave her."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Betamon_xMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Betamon_xMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Betamon_xMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Betamon_xMega,
        .shinyPalette = gMonShinyPalette_Betamon_xMega,
        .iconSprite = gMonIcon_Betamon_xMega,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Betamon_x)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBetamon_xLevelUpLearnset,
        .teachableLearnset = sBetamon_xTeachableLearnset,
        .eggMoveLearnset = sBetamon_xEggMoveLearnset,
        .formSpeciesIdTable = sBetamon_xFormSpeciesIdTable,
        .formChangeTable = sBetamon_xFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BETAMON_X

#if P_FAMILY_BIYOMON
    [SPECIES_BIYOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 58,
        .baseDefense   = 49,
        .baseSpeed     = 53,
        .baseSpAttack  = 56,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_BIG_PECKS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Biyomon"),
        .cryId = CRY_BIYOMON,
        .natDexNum = NATIONAL_DEX_BIYOMON,
        .categoryName = _("Pink Bird"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Despite being a flying Digimon, Biyomon\n"
            "has poor flying capabilities. It's for\n"
            "this reason that it often has rilvaries\n"
            "with Patamon as they are similiar."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biyomon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = sAnims_Biyomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_TWIST : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Biyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Biyomon,
        .shinyPalette = gMonShinyPalette_Biyomon,
        .iconSprite = gMonIcon_Biyomon,
        .iconPalIndex = 0,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Biyomon)
        OVERWORLD(
            sPicTable_Biyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Biyomon,
            gShinyOverworldPalette_Biyomon
        )
        .levelUpLearnset = sBiyomonLevelUpLearnset,
        .teachableLearnset = sBiyomonTeachableLearnset,
        .eggMoveLearnset = sBiyomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 48, SPECIES_AQUILAMON},
                                {EVO_LEVEL, 30, SPECIES_BIRDRAMON}),
    },

    [SPECIES_BLKAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkagumon"),
        .cryId = CRY_BLKAGUMON,
        .natDexNum = NATIONAL_DEX_BLKAGUMON,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 150,
        .description = COMPOUND_STRING(
            "BlackAgumon are a much more ferocious\n"
            "digimon that seeks out fights for the sake\n"
            "of fighting. However it is not stronger\n"
            "than Agumon so it often loses."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = sAnims_Blkagumon,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Blkagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon,
        .shinyPalette = gMonShinyPalette_Blkagumon,
        .iconSprite = gMonIcon_Blkagumon,
        .iconPalIndex = 0,
        SHADOW(-2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Blkagumon)
        OVERWORLD(
            sPicTable_Blkagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Blkagumon,
            gShinyOverworldPalette_Blkagumon
        )
        .levelUpLearnset = sBlkagumonLevelUpLearnset,
        .teachableLearnset = sBlkagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_BLKAGUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 40, SPECIES_DARKTYRMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PSYCHEMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 50,
        .baseDefense   = 53,
        .baseSpeed     = 50,
        .baseSpAttack  = 58,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_ICE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Psychemon"),
        .cryId = CRY_PSYCHEMON,
        .natDexNum = NATIONAL_DEX_PSYCHEMON,
        .categoryName = _("Psychedelia"),
        .height = 12,
        .weight = 312,
        .description = COMPOUND_STRING(
            "Psychemon is almost completely identical\n"
            "to Gabumon to the extent that some mistake\n"
            "the two however it actually has psychic\n"
            "abilities giving it an edge in fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Psychemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .frontAnimFrames = sAnims_Psychemon,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Psychemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Psychemon,
        .shinyPalette = gMonShinyPalette_Psychemon,
        .iconSprite = gMonIcon_Psychemon,
        .iconPalIndex = 0,
        SHADOW(3, 12, SHADOW_SIZE_M)
        FOOTPRINT(Psychemon)
        OVERWORLD(
            sPicTable_Psychemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Psychemon,
            gShinyOverworldPalette_Psychemon
        )
        .levelUpLearnset = sPsychemonLevelUpLearnset,
        .teachableLearnset = sPsychemonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BIYOMON

#if P_FAMILY_BLKAGUMON_X
    [SPECIES_BLKAGUMON_X] =
    {
        .baseHP        = 47,
        .baseAttack    = 80,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 75,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkagumon"),
        .cryId = CRY_BLKAGUMON_X,
        .natDexNum = NATIONAL_DEX_BLKAGUMON_X,
        .categoryName = _("X Antibody"),
        .height = 10,
        .weight = 150,
        .description = COMPOUND_STRING(
            "A BlackAgumon X is even more violent\n"
            "than it's normal counterpart. It foregoes\n"
            "all strategy and defense for a full on\n"
            "barrage of offensive attacks."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkagumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .frontAnimFrames = sAnims_Blkagumon_x,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Blkagumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon_x,
        .shinyPalette = gMonShinyPalette_Blkagumon_x,
        .iconSprite = gMonIcon_Blkagumon_x,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Blkagumon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .backPicFemale = gMonBackPic_Blkagumon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-6, 0, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blkagumon_x)
        OVERWORLD(
            sPicTable_Blkagumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Blkagumon_x,
            gShinyOverworldPalette_Blkagumon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Blkagumon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .levelUpLearnset = sBlkagumon_xLevelUpLearnset,
        .teachableLearnset = sBlkagumon_xTeachableLearnset,
        .eggMoveLearnset = sBlkagumon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DARKTYRMON_X}),
    },

    [SPECIES_BLKGABUMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 56,
        .baseDefense   = 60,
        .baseSpeed     = 52,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ICE),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkgabumon"),
        .cryId = CRY_BLKGABUMON,
        .natDexNum = NATIONAL_DEX_BLKGABUMON,
        .categoryName = _("Pelt"),
        .height = 13,
        .weight = 310,
        .description = COMPOUND_STRING(
            "It's pelt is made up of Garurumon data\n"
            "that it has collected. If you remove its\n"
            "pelt, it becomes very bashful unlike its\n"
            "usual hooligan self."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkgabumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Blkgabumon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Blkgabumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkgabumon,
        .shinyPalette = gMonShinyPalette_Blkgabumon,
        .iconSprite = gMonIcon_Blkgabumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BlkgabumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_BlkgabumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blkgabumon)
        OVERWORLD(
            sPicTable_Blkgabumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Blkgabumon,
            gShinyOverworldPalette_Blkgabumon
        )
        OVERWORLD_FEMALE(
            sPicTable_BlkgabumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .levelUpLearnset = sBlkgabumonLevelUpLearnset,
        .teachableLearnset = sBlkgabumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 60, SPECIES_DARLIZAMON},
                                {EVO_LEVEL, 36, SPECIES_BLGARURMON}),
    },
#endif //P_FAMILY_BLKAGUMON_X

#if P_FAMILY_BLKGUILMON
    [SPECIES_BLKGUILMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 58,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 62,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 106,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Blkguilmon"),
        .cryId = CRY_BLKGUILMON,
        .natDexNum = NATIONAL_DEX_BLKGUILMON,
        .categoryName = _("Dark Hazard"),
        .height = 14,
        .weight = 300,
        .description = COMPOUND_STRING(
            "BlackGuilmon is a very confident fighter,\n"
            "often using a mixture of explosive and\n"
            "breath attacks. It is unknown why it\n"
            "has hazard and zero unit symbols on it."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkguilmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Blkguilmon,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Blkguilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blkguilmon,
        .shinyPalette = gMonShinyPalette_Blkguilmon,
        .iconSprite = gMonIcon_Blkguilmon,
        .iconPalIndex = 2,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Blkguilmon)
        OVERWORLD(
            sPicTable_Blkguilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blkguilmon,
            gShinyOverworldPalette_Blkguilmon
        )
        .levelUpLearnset = sBlkguilmonLevelUpLearnset,
        .teachableLearnset = sBlkguilmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_BLGROWLMON}),
    },

    [SPECIES_BOKOMON] =
    {
       .baseHP        = 42,
        .baseAttack    = 39,
        .baseDefense   = 40,
        .baseSpeed     = 47,
        .baseSpAttack  = 40,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 2,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_ANALYTIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bokomon"),
        .cryId = CRY_BOKOMON,
        .natDexNum = NATIONAL_DEX_BOKOMON,
        .categoryName = _("Haramaki"),
        .height = 8,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Bokomon has many tendancies like an old\n"
            "man and is well respected by younger\n"
            "Digimon. It is very bad at fighting \n"
            "and will avoid it as much as possible."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bokomon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Bokomon,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Bokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Bokomon,
        .shinyPalette = gMonShinyPalette_Bokomon,
        .iconSprite = gMonIcon_Bokomon,
        .iconPalIndex = 2,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Bokomon)
        OVERWORLD(
            sPicTable_Bokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bokomon,
            gShinyOverworldPalette_Bokomon
        )
        .levelUpLearnset = sBokomonLevelUpLearnset,
        .teachableLearnset = sBokomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_FLAWIZAMON}),
    },
#endif //P_FAMILY_BLKGUILMON

#if P_FAMILY_BULUCOMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_PSYCHIC),
    #endif
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 78,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
    #else
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_TECHNICIAN },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mime Jr."),
        .cryId = CRY_MIME_JR,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "In an attempt to confuse its enemy,\n"
            "it mimics the enemy's movements.\n"
            "Once mimicked, the foe cannot take\n"
            "its eyes off this Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimeJr,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MimeJr,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MimeJr,
        .shinyPalette = gMonShinyPalette_MimeJr,
        .iconSprite = gMonIcon_MimeJr,
        .iconPalIndex = 0,
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(MimeJr)
        OVERWORLD(
            sPicTable_MimeJr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimeJr,
            gShinyOverworldPalette_MimeJr
        )
        .levelUpLearnset = sMimeJrLevelUpLearnset,
        .teachableLearnset = sMimeJrTeachableLearnset,
        .eggMoveLearnset = sMimeJrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_BULUCOMON},
                                {EVO_NONE, 0, SPECIES_BULUCOMON_GALAR}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BULUCOMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 58,
        .baseDefense   = 54,
        .baseSpeed     = 53,
        .baseSpAttack  = 57,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_ICE, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bulucomon"),
        .cryId = CRY_BULUCOMON,
        .natDexNum = NATIONAL_DEX_BULUCOMON,
        .categoryName = _("Ice Dragon"),
        .height = 14,
        .weight = 545,
        .description = COMPOUND_STRING(
            "The average Bulucomon is incredibly strong\n"
            "as it's natural habitat is a cold, hard \n"
            "environment. However due to being made\n"
            "of ice, it is weak to high temperatures."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bulucomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Bulucomon,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bulucomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Bulucomon,
        .shinyPalette = gMonShinyPalette_Bulucomon,
        .iconSprite = gMonIcon_Bulucomon,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bulucomon)
        OVERWORLD(
            sPicTable_Bulucomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bulucomon,
            gShinyOverworldPalette_Bulucomon
        )
        .levelUpLearnset = sBulucomonLevelUpLearnset,
        .teachableLearnset = sBulucomonTeachableLearnset,
        .eggMoveLearnset = sBulucomonEggMoveLearnset,
        .formSpeciesIdTable = sBulucomonFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_BULUCOMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 136,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bulucomon"),
        .cryId = CRY_BULUCOMON,
        .natDexNum = NATIONAL_DEX_BULUCOMON,
        .categoryName = _("Dancing"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING(
            "Its talent is tap-dancing. It can radiate\n"
            "chilliness from the bottoms of its feet to\n"
            "to create a floor of ice, which this\n"
            "Pokémon can kick up to use as a barrier."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BulucomonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_BulucomonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BulucomonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BulucomonGalar,
        .shinyPalette = gMonShinyPalette_BulucomonGalar,
        .iconSprite = gMonIcon_BulucomonGalar,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Bulucomon)
        OVERWORLD(
            sPicTable_BulucomonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BulucomonGalar,
            gShinyOverworldPalette_BulucomonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sBulucomonGalarLevelUpLearnset,
        .teachableLearnset = sBulucomonGalarTeachableLearnset,
        .eggMoveLearnset = sBulucomonGalarEggMoveLearnset,
        .formSpeciesIdTable = sBulucomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mr. Rime"),
        .cryId = CRY_MR_RIME,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "It's highly skilled at tap-dancing. It\n"
            "waves its cane of ice in time with its\n"
            "graceful movements."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MrRime,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrRime,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrRime,
        .shinyPalette = gMonShinyPalette_MrRime,
        .iconSprite = gMonIcon_MrRime,
        .iconPalIndex = 0,
        SHADOW(3, 9, SHADOW_SIZE_L)
        FOOTPRINT(MrRime)
        OVERWORLD(
            sPicTable_MrRime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrRime,
            gShinyOverworldPalette_MrRime
        )
        .levelUpLearnset = sMrRimeLevelUpLearnset,
        .teachableLearnset = sMrRimeTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_BULUCOMON

#if P_FAMILY_BURGERMON
    [SPECIES_BURGERMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 34,
        .baseDefense   = 52,
        .baseSpeed     = 48,
        .baseSpAttack  = 32,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Burgermon"),
        .cryId = CRY_BURGERMON,
        .natDexNum = NATIONAL_DEX_BURGERMON,
        .categoryName = _("Burger"),
        .height = 7,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Unlike most Digimon, Burgerman shares no\n"
            "interest in fighting, rather it prefers\n"
            "to spend all its time learning to make\n"
            "the perfect hamburger for other Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Burgermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = sAnims_Burgermon,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Burgermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Burgermon,
        .shinyPalette = gMonShinyPalette_Burgermon,
        .iconSprite = gMonIcon_Burgermon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BurgermonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Burgermon)
        OVERWORLD(
            sPicTable_Burgermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Burgermon,
            gShinyOverworldPalette_Burgermon
        )
        OVERWORLD_FEMALE(
            sPicTable_BurgermonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBurgermonLevelUpLearnset,
        .teachableLearnset = sBurgermonTeachableLearnset,
        .eggMoveLearnset = sBurgermonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BURGERMON_CHAMPION}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_MONODRAMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 52,
        .baseSpAttack  = 55,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Monodramon"),
        .cryId = CRY_MONODRAMON,
        .natDexNum = NATIONAL_DEX_MONODRAMON,
        .categoryName = _("Dragon"),
        .height = 11,
        .weight = 637,
        .description = COMPOUND_STRING(
            "Despite being a Vaccine Digimon, Monodramon\n"
            "is a very rough Digimon that constantly\n"
            "likes to fight. Even an Ogremon will grow\n"
            "tired of its tenacity for fighting."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monodramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = sAnims_Monodramon,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        .backPic = gMonBackPic_Monodramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Monodramon,
        .shinyPalette = gMonShinyPalette_Monodramon,
        .iconSprite = gMonIcon_Monodramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MonodramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Monodramon)
        OVERWORLD(
            sPicTable_Monodramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Monodramon,
            gShinyOverworldPalette_Monodramon
        )
        OVERWORLD_FEMALE(
            sPicTable_MonodramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sMonodramonLevelUpLearnset,
        .teachableLearnset = sMonodramonTeachableLearnset,
        .formSpeciesIdTable = sMonodramonFormSpeciesIdTable,
        .formChangeTable = sMonodramonFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 69, SPECIES_DEVIDRAMON},
                                {EVO_ITEM, ITEM_SINCERITY_EGG, SPECIES_DEPTHMON}, // SINCERITY EGG
                                {EVO_LEVEL, 40, SPECIES_AIRDRAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MONODRAMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Monodramon"),
        .cryId = CRY_MONODRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_MONODRAMON,
        .categoryName = _("Pincer"),
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "The excess energy that bathes this\n"
            "Pokémon keeps it in constant danger of\n"
            "overflow. It can't sustain a battle over\n"
            "long periods of time."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MonodramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MonodramonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MonodramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_MonodramonMega,
        .shinyPalette = gMonShinyPalette_MonodramonMega,
        .iconSprite = gMonIcon_MonodramonMega,
        .iconPalIndex = 0,
        SHADOW(5, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Monodramon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMonodramonLevelUpLearnset,
        .teachableLearnset = sMonodramonTeachableLearnset,
        .formSpeciesIdTable = sMonodramonFormSpeciesIdTable,
        .formChangeTable = sMonodramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kleavor"),
        .cryId = CRY_KLEAVOR,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Axe"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING(
            "A violent creature that fells trees with\n"
            "its crude axes and shields itself with hard\n"
            "stone. Should one encounter this Pokémon\n"
            "in the wild, one's only recourse is to flee."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Kleavor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kleavor,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kleavor,
        .shinyPalette = gMonShinyPalette_Kleavor,
        .iconSprite = gMonIcon_Kleavor,
        .iconPalIndex = 2,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kleavor)
        OVERWORLD(
            sPicTable_Kleavor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kleavor,
            gShinyOverworldPalette_Kleavor
        )
        .levelUpLearnset = sKleavorLevelUpLearnset,
        .teachableLearnset = sKleavorTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_BURGERMON

#if P_FAMILY_SAMUAGUMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SANGOMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 45,
        .baseSpAttack  = 54,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TORRENT, ABILITY_DAMP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Sangomon"),
        .cryId = CRY_SANGOMON,
        .natDexNum = NATIONAL_DEX_SANGOMON,
        .categoryName = _("Coral"),
        .height = 7,
        .weight = 209,
        .description = COMPOUND_STRING(
            "Sangomon is a very gentle Digimon that likes\n"
            "to live in the shallow areas of the Net\n"
            "Ocean. It can sometimes be seen resting on\n"
            "the backs of Shellmon.."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sangomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(24, 40) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_Sangomon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Sangomon,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sangomon,
        .shinyPalette = gMonShinyPalette_Sangomon,
        .iconSprite = gMonIcon_Sangomon,
        .iconPalIndex = 1,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Sangomon)
        OVERWORLD(
            sPicTable_Sangomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sangomon,
            gShinyOverworldPalette_Sangomon
        )
        .levelUpLearnset = sSangomonLevelUpLearnset,
        .teachableLearnset = sSangomonTeachableLearnset,
        .eggMoveLearnset = sSangomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SAMUAGUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_SAMUAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 56,
        .baseSpAttack  = 56,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_BLAZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Samuagumon"),
        .cryId = CRY_SAMUAGUMON,
        .natDexNum = NATIONAL_DEX_SAMUAGUMON,
        .categoryName = _("Samurai"),
        .height = 10,
        .weight = 306,
        .description = COMPOUND_STRING(
            "Although the school it says it is a part\n"
            "of does not exist, BushiAgumons\n"
            "swordsmanship is first-rate with very\n"
            "few digimon being able to compete."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Samuagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = sAnims_Samuagumon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Samuagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Samuagumon,
        .shinyPalette = gMonShinyPalette_Samuagumon,
        .iconSprite = gMonIcon_Samuagumon,
        .iconPalIndex = 2,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Samuagumon)
        OVERWORLD(
            sPicTable_Samuagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Samuagumon,
            gShinyOverworldPalette_Samuagumon
        )
        .levelUpLearnset = sSamuAgumonLevelUpLearnset,
        .teachableLearnset = sSamuagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ARESDRAMON}),
    },
#endif //P_FAMILY_SAMUAGUMON

#if P_FAMILY_CANDLEMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SANTAAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Agumon"),
        .cryId = CRY_SANTAAGUMON,
        .natDexNum = NATIONAL_DEX_SANTAAGUMON,
        .categoryName = _("Christmas"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This Agumon is almost indistinguishable from\n"
            "a normal Agumon except for its hat. Some\n"
            "are so dedicated to it that they will live\n"
            "and train in ice-covered regions."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Santaagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = sAnims_Santaagumon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Santaagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Santaagumon,
        .shinyPalette = gMonShinyPalette_Santaagumon,
        .iconSprite = gMonIcon_Santaagumon,
        .iconPalIndex = 1,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Santaagumon)
        OVERWORLD(
            sPicTable_Santaagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Santaagumon,
            gShinyOverworldPalette_Santaagumon
        )
        .levelUpLearnset = sSantaAgumonLevelUpLearnset,
        .teachableLearnset = sSantaagumonTeachableLearnset,
        .eggMoveLearnset = sSantaagumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CENTARUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CANDLEMON] =
    {
        .baseHP        = 42,
        .baseAttack    = 49,
        .baseDefense   = 48,
        .baseSpeed     = 59,
        .baseSpAttack  = 66,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_FLAME_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Candlemon"),
        .cryId = CRY_CANDLEMON,
        .natDexNum = NATIONAL_DEX_CANDLEMON,
        .categoryName = _("Candle"),
        .height = 20,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It is unknown which part of its body is the\n"
            "actual body. It was widely believed that\n"
            "wax was however it is recently been\n"
            "suggested that the flame is the body."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Candlemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = sAnims_Candlemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Candlemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Candlemon,
        .shinyPalette = gMonShinyPalette_Candlemon,
        .iconSprite = gMonIcon_Candlemon,
        .iconPalIndex = 1,
        SHADOW(-2, 9, SHADOW_SIZE_L)
        FOOTPRINT(Candlemon)
        OVERWORLD(
            sPicTable_Candlemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Candlemon,
            gShinyOverworldPalette_Candlemon
        )
        .levelUpLearnset = sCandlemonLevelUpLearnset,
        .teachableLearnset = sCandlemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BAKEMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Electivire"),
        .cryId = CRY_ELECTIVIRE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .description = COMPOUND_STRING(
            "When it gets excited, it thumps its chest.\n"
            "With every thud, thunder roars, electric\n"
            "sparks shower all around and blue sparks\n"
            "begin to crackle between its horns."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Electivire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Electivire,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Electivire,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Electivire,
        .shinyPalette = gMonShinyPalette_Electivire,
        .iconSprite = gMonIcon_Electivire,
        .iconPalIndex = 1,
        SHADOW(-3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Electivire)
        OVERWORLD(
            sPicTable_Electivire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electivire,
            gShinyOverworldPalette_Electivire
        )
        .levelUpLearnset = sElectivireLevelUpLearnset,
        .teachableLearnset = sElectivireTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CANDLEMON

#if P_FAMILY_CHIKURIMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLKTOYAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 58,
        .baseSpeed     = 49,
        .baseSpAttack  = 49,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CHIKURIMONIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Blktoyamon"),
        .cryId = CRY_BLKTOYAMON,
        .natDexNum = NATIONAL_DEX_BLKTOYAMON,
        .categoryName = _("Toy"),
        .height = 11,
        .weight = 54,
        .description = COMPOUND_STRING(
            "BlkToyAgumon is very unsavoury Digimon that\n"
            "will bully children instead of playing with\n"
            "them. Although its attacks also look like\n"
            "toys, they are still very dangerous."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blktoyamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Blktoyamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blktoyamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Blktoyamon,
        .shinyPalette = gMonShinyPalette_Blktoyamon,
        .iconSprite = gMonIcon_Blktoyamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Blktoyamon)
        OVERWORLD(
            sPicTable_Blktoyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blktoyamon,
            gShinyOverworldPalette_Blktoyamon
        )
        .levelUpLearnset = sBlktoyamonLevelUpLearnset,
        .teachableLearnset = sBlktoyamonTeachableLearnset,
        .eggMoveLearnset = sBlktoyamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_DELTAMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CHIKURIMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 75,
        .baseDefense   = 31,
        .baseSpeed     = 39,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_CHIKURIMONIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Chikurimon"),
        .cryId = CRY_CHIKURIMON,
        .natDexNum = NATIONAL_DEX_CHIKURIMON,
        .categoryName = _("Mine"),
        .height = 4,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Chikurimon can often be found lurking in\n"
            "water or under rocks. Anyone that finds\n"
            "a Chikurimon should avoid eye contact and\n"
            "back away slowly as they will explode."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chikurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Chikurimon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Chikurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Chikurimon,
        .shinyPalette = gMonShinyPalette_Chikurimon,
        .iconSprite = gMonIcon_Chikurimon,
        .iconPalIndex = 0,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Chikurimon)
        OVERWORLD(
            sPicTable_Chikurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chikurimon,
            gShinyOverworldPalette_Chikurimon
        )
        .levelUpLearnset = sChikurimonLevelUpLearnset,
        .teachableLearnset = sChikurimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_CHIKURIMONIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_CHIKURIMONIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_CHIKURIMONIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magmortar"),
        .cryId = CRY_MAGMORTAR,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("Blast"),
        .height = 16,
        .weight = 680,
        .description = COMPOUND_STRING(
            "According to what is known, a single pair\n"
            "of male and female Magmortar lives in\n"
            "one volcano. From its arm, it launches\n"
            "fireballs hotter than 3,700ºF."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Magmortar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magmortar,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magmortar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magmortar,
        .shinyPalette = gMonShinyPalette_Magmortar,
        .iconSprite = gMonIcon_Magmortar,
        .iconPalIndex = 0,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magmortar)
        OVERWORLD(
            sPicTable_Magmortar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmortar,
            gShinyOverworldPalette_Magmortar
        )
        .levelUpLearnset = sMagmortarLevelUpLearnset,
        .teachableLearnset = sMagmortarTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CHIKURIMON

#if P_FAMILY_TYUTYUMON
    [SPECIES_TYUTYUMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 50,
        .baseDefense   = 30,
        .baseSpeed     = 57,
        .baseSpAttack  = 60,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tyutyumon"),
        .cryId = CRY_TYUTYUMON,
        .natDexNum = NATIONAL_DEX_TYUTYUMON,
        .categoryName = _("Tactician"),
        .height = 2,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Despite its small size, TyuTyumon is a very\n"
            "smart and shrewd Digimon. When it makes a\n"
            "plan, it almost always goes off without\n"
            "a single unplanned deviation."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyutyumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Tyutyumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GROW_VIBRATE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tyutyumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tyutyumon,
        .shinyPalette = gMonShinyPalette_Tyutyumon,
        .iconSprite = gMonIcon_Tyutyumon,
        .iconPalIndex = 2,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tyutyumon)
        OVERWORLD(
            sPicTable_Tyutyumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tyutyumon,
            gShinyOverworldPalette_Tyutyumon
        )
        .levelUpLearnset = sTyutyumonLevelUpLearnset,
        .teachableLearnset = sTyutyumonTeachableLearnset,
        .eggMoveLearnset = sTyutyumonEggMoveLearnset,
        .formSpeciesIdTable = sTyutyumonFormSpeciesIdTable,
        .formChangeTable = sTyutyumonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYUTYUMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tyutyumon"),
        .cryId = CRY_TYUTYUMON_MEGA,
        .natDexNum = NATIONAL_DEX_TYUTYUMON,
        .categoryName = _("Stag Beetle"),
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING(
            "The influence of Mega Evolution leaves it\n"
            "in a state of constant excitement.\n"
            "It pierces enemies with its two large\n"
            "horns before shredding them."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TyutyumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_TyutyumonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_TyutyumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TyutyumonMega,
        .shinyPalette = gMonShinyPalette_TyutyumonMega,
        .iconSprite = gMonIcon_TyutyumonMega,
        .iconPalIndex = 2,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Tyutyumon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTyutyumonLevelUpLearnset,
        .teachableLearnset = sTyutyumonTeachableLearnset,
        .eggMoveLearnset = sTyutyumonEggMoveLearnset,
        .formSpeciesIdTable = sTyutyumonFormSpeciesIdTable,
        .formChangeTable = sTyutyumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYUTYUMON

#if P_FAMILY_CHUUMON
    [SPECIES_CHUUMON] =
    {
        .baseHP        = 34,
        .baseAttack    = 32,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 32,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_WIMP_OUT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Rat"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Chuumon can often be found with a Sukamon,\n"
            "this partnership is usually a unruly one\n"
            "where trouble is rife. Chuumon does not.\n"
            "fight, instead coaxing Sukamon into it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chuumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .frontAnimFrames = sAnims_Chuumon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Chuumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chuumon,
        .shinyPalette = gMonShinyPalette_Chuumon,
        .iconSprite = gMonIcon_Chuumon,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_Chuumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chuumon,
            gShinyOverworldPalette_Chuumon
        )
        .levelUpLearnset = sChuumonLevelUpLearnset,
        .teachableLearnset = sChuumonTeachableLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

#if P_PALDEAN_FORMS
    [SPECIES_CHUUMON_PALDEA_COMBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 1150,
        .description = COMPOUND_STRING(
            "This Pokémon has a muscular body\n"
            "and excels at close-quarters combat.\n"
            "It uses its short horns to strike\n"
            "the opponent’s weak spots."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaCombat,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_ChuumonPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaCombat,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaCombat,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaCombat,
        .iconSprite = gMonIcon_ChuumonPaldeaCombat,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaCombat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ChuumonPaldeaCombat,
            gShinyOverworldPalette_ChuumonPaldeaCombat
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaCombatLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaCombatTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaCombatEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

    [SPECIES_CHUUMON_PALDEA_BLAZE] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 850,
        .description = COMPOUND_STRING(
            "When heated by fire energy, its horns can\n"
            "get hotter than 1,800 degrees Fahrenheit.\n"
            "Those gored by them will suffer\n"
            "both wounds and burns."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaBlaze,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_ChuumonPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaBlaze,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaBlaze,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaBlaze,
        .iconSprite = gMonIcon_ChuumonPaldeaBlaze,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaBlaze,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ChuumonPaldeaBlaze,
            gShinyOverworldPalette_ChuumonPaldeaBlaze
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaBlazeLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaBlazeTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaBlazeEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

    [SPECIES_CHUUMON_PALDEA_AQUA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "This Pokémon blasts water from holes on\n"
            "the tips of its horns--the high-pressure\n"
            "jets pierce right through\n"
            "Chuumon’s enemies."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaAqua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_ChuumonPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaAqua,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaAqua,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaAqua,
        .iconSprite = gMonIcon_ChuumonPaldeaAqua,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaAqua,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ChuumonPaldeaAqua,
            gShinyOverworldPalette_ChuumonPaldeaAqua
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaAquaLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaAquaTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaAquaEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_CHUUMON

#if P_FAMILY_HAZYAGUMON
    [SPECIES_HAZYAGUMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 46,
        .baseSpAttack  = 51,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_CLEAR_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Hazyagumon"),
        .cryId = CRY_HAZYAGUMON,
        .natDexNum = NATIONAL_DEX_HAZYAGUMON,
        .categoryName = _("Clear Toy"),
        .height = 10,
        .weight = 100,
        .description = COMPOUND_STRING(
            "HazyAgumon is an incredibly rare digimon\n"
            "that most will not see ever in their lives.\n"
            "Despite it's cowardly nature, it possesses\n"
            "a heart of justice and will fight."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hazyagumon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Hazyagumon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Hazyagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Hazyagumon,
        .shinyPalette = gMonShinyPalette_Hazyagumon,
        .iconSprite = gMonIcon_Hazyagumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_HazyagumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_HazyagumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Hazyagumon)
        OVERWORLD(
            sPicTable_Hazyagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Hazyagumon,
            gShinyOverworldPalette_Hazyagumon
        )
        OVERWORLD_FEMALE(
            sPicTable_HazyagumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sHazyAgumonLevelUpLearnset,
        .teachableLearnset = sHazyagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MIRACLES_EGG, SPECIES_ELEPHANMON}, // Miracles Egg
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKTOYAMON}, // Dark Digitron
                                {EVO_LEVEL, 31, SPECIES_CLOCKMON}),
    },

    [SPECIES_COMMDRAMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 62,
        .baseDefense   = 70,
        .baseSpeed     = 52,
        .baseSpAttack  = 50,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SNIPER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Commdramon"),
        .cryId = CRY_COMMDRAMON,
        .natDexNum = NATIONAL_DEX_COMMDRAMON,
        .categoryName = _("Commando"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Commdramon are an infantry digimon that\n"
            "will often partake in organised missions.\n"
            "Their skin is modified to detect the \n"
            "surrounding colors and camouflage."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Commdramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 2,
        .frontAnimFrames = sAnims_Commdramon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Commdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Commdramon,
        .shinyPalette = gMonShinyPalette_Commdramon,
        .iconSprite = gMonIcon_Commdramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CommdramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CommdramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(5, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Commdramon)
        OVERWORLD(
            sPicTable_Commdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Commdramon,
            gShinyOverworldPalette_Commdramon
        )
        OVERWORLD_FEMALE(
            sPicTable_CommdramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sCommdramonLevelUpLearnset,
        .teachableLearnset = sCommdramonTeachableLearnset,
        .formSpeciesIdTable = sCommdramonFormSpeciesIdTable,
        .formChangeTable = sCommdramonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_COMMDRAMON_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = 224,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Commdramon"),
        .cryId = CRY_COMMDRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_COMMDRAMON,
        .categoryName = _("Atrocious"),
        .height = 65,
        .weight = 3050,
        .description = COMPOUND_STRING(
            "Although it obeys its instinctive drive to\n"
            "destroy everything within its reach, it\n"
            "will respond to orders from a Trainer it\n"
            "truly trusts."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_CommdramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CommdramonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_CommdramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_CommdramonMega,
        .shinyPalette = gMonShinyPalette_CommdramonMega,
        .iconSprite = gMonIcon_CommdramonMega,
        .iconPalIndex = 0,
        SHADOW(3, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Commdramon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCommdramonLevelUpLearnset,
        .teachableLearnset = sCommdramonTeachableLearnset,
        .formSpeciesIdTable = sCommdramonFormSpeciesIdTable,
        .formChangeTable = sCommdramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAZYAGUMON

#if P_FAMILY_CORONAMON
    [SPECIES_CORONAMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 48,
        .baseDefense   = 53,
        .baseSpeed     = 53,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Coronamon"),
        .cryId = CRY_CORONAMON,
        .natDexNum = NATIONAL_DEX_CORONAMON,
        .categoryName = _("Sun"),
        .height = 8,
        .weight = 225,
        .description = COMPOUND_STRING(
            "Often seen with first time tamers,\n"
            "Coronamon is a very innocent digimon that\n"
            "likes to play a lot. It's sense of justice\n"
            "is also powerfully sincere."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Coronamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 2,
        .frontAnimFrames = sAnims_Coronamon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Coronamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Coronamon,
        .shinyPalette = gMonShinyPalette_Coronamon,
        .iconSprite = gMonIcon_Coronamon,
        .iconPalIndex = 2,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coronamon)
        OVERWORLD(
            sPicTable_Coronamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Coronamon,
            gShinyOverworldPalette_Coronamon
        )
        .levelUpLearnset = sCoronamonLevelUpLearnset,
        .teachableLearnset = sCoronamonTeachableLearnset,
        .eggMoveLearnset = sCoronamonEggMoveLearnset,
        .formSpeciesIdTable = sCoronamonFormSpeciesIdTable,
        .formChangeTable = sCoronamonFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORONAMON_GMAX] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 219,
        .evYield_HP = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Coronamon"),
        .cryId = CRY_CORONAMON,
        .natDexNum = NATIONAL_DEX_CORONAMON,
        .categoryName = _("Transport"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Over 5,000 people can ride on its\n"
            "shell at once. And it's a very\n"
            "comfortable ride, without the slightest\n"
            "shaking or swaying."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_CoronamonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CoronamonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CoronamonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CoronamonGmax,
        .shinyPalette = gMonShinyPalette_CoronamonGmax,
        .iconSprite = gMonIcon_CoronamonGmax,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coronamon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCoronamonLevelUpLearnset,
        .teachableLearnset = sCoronamonTeachableLearnset,
        .eggMoveLearnset = sCoronamonEggMoveLearnset,
        .formSpeciesIdTable = sCoronamonFormSpeciesIdTable,
        .formChangeTable = sCoronamonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CORONAMON

#if P_FAMILY_CRABMON
    [SPECIES_CRABMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 61,
        .baseDefense   = 66,
        .baseSpeed     = 50,
        .baseSpAttack  = 46,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_CRABMON),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_HYPER_CUTTER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON,
        .natDexNum = NATIONAL_DEX_CRABMON,
        .categoryName = _("Crab"),
        .height = 6,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Crabmon are a fast growing species of\n"
            "Digimon that will quickly grow stronger\n"
            "over time. This strength gives it lots of\n"
            "confidence in battle."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .frontAnimFrames = sAnims_Crabmon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Crabmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Crabmon,
        .shinyPalette = gMonShinyPalette_Crabmon,
        .iconSprite = gMonIcon_Crabmon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Crabmon)
        OVERWORLD(
            sPicTable_Crabmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Crabmon,
            gShinyOverworldPalette_Crabmon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCrabmonLevelUpLearnset,
        .teachableLearnset = sCrabmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_CRABMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 32, SPECIES_COELAMON}),
    },
#endif //P_FAMILY_CRABMON

#if P_FAMILY_CRABMON_X
    [SPECIES_CRABMON_X] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 45,
        .baseSpAttack  = 44,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),

        .abilities = { ABILITY_WATER_VEIL, ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("X Antibody"),
        .height = 7,
        .weight = 265,
        .description = COMPOUND_STRING(
            "Crabmon X has gained the ability to\n"
            "instantly restore parts of it's body. Its\n"
            "claw has also grown in size letting it\n"
            "quickly overpower digimon of larger size."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = sAnims_Crabmon_x,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Crabmon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_x,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Crabmon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_Crabmon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Crabmon_x)
        OVERWORLD(
            sPicTable_Crabmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crabmon_x,
            gShinyOverworldPalette_Crabmon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Crabmon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
        .formChangeTable = sCrabmon_xFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_DAMEMON},
                                {EVO_ITEM, ITEM_WATER_STONE, SPECIES_CUTEMON},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_DEMIDEVMON},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_KUNEMON},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_LABRAMON},
                                {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                                {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_GLACEON},
                                {EVO_FRIENDSHIP_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CRABMON_X_GMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("Evolution"),
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Having gotten even friendlier and\n"
            "more innocent, Crabmon_x tries to play\n"
            "with anyone around, only to end up\n"
            "crushing them with its immense body."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_xGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Crabmon_xGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Crabmon_xGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Crabmon_xGmax,
        .shinyPalette = gMonShinyPalette_Crabmon_xGmax,
        .iconSprite = gMonIcon_Crabmon_xGmax,
        .iconPalIndex = 2,
        SHADOW(0, 4, SHADOW_SIZE_L)
        FOOTPRINT(Crabmon_x)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
        .formChangeTable = sCrabmon_xFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_CRABMON_X_STARTER] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("Evolution"),
        .height = 3,
        .weight = 65,
        .description = gCrabmon_xPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Crabmon_x,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Crabmon_x,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_xPartner,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Crabmon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_Crabmon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_Crabmon_xPartnerF,
        .iconPalIndexFemale = 2,
    #endif
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Crabmon_x)
        OVERWORLD(
            sPicTable_Crabmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crabmon_x,
            gShinyOverworldPalette_Crabmon_x
        )
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
    },

    [SPECIES_CUTEMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 44,
        .baseDefense   = 51,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_SOUNDPROOF, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cutemon"),
        .cryId = CRY_CUTEMON,
        .natDexNum = NATIONAL_DEX_CUTEMON,
        .categoryName = _("Cute"),
        .height = 6,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Despite its adorable looks, Cutemon is\n"
            "often a mischievious Digimon. If you see\n"
            "one, be wary as it may be leading you to\n"
            "a trap. Its ears are actually a sense organ"),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cutemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = sAnims_Cutemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GLOW_BLUE,
        .backPic = gMonBackPic_Cutemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Cutemon,
        .shinyPalette = gMonShinyPalette_Cutemon,
        .iconSprite = gMonIcon_Cutemon,
        .iconPalIndex = 0,
        SHADOW(-4, 3, SHADOW_SIZE_M)
        FOOTPRINT(Cutemon)
        OVERWORLD(
            sPicTable_Cutemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cutemon,
            gShinyOverworldPalette_Cutemon
        )
        .levelUpLearnset = sCutemonLevelUpLearnset,
        .teachableLearnset = sCutemonTeachableLearnset,
    },

    [SPECIES_DAMEMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 51,
        .baseSpeed     = 46,
        .baseSpAttack  = 58,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Damemon"),
        .cryId = CRY_DAMEMON,
        .natDexNum = NATIONAL_DEX_DAMEMON,
        .categoryName = _("No Good"),
        .height = 8,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Damemon is a glitch digimon that should\n"
            "not exist. Scientists theorise that it is\n"
            "an unnatural fusion of Koromon and Agumon\n"
            "data making it a very rare digimon."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Damemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Damemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Damemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Damemon,
        .shinyPalette = gMonShinyPalette_Damemon,
        .iconSprite = gMonIcon_Damemon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Damemon)
        OVERWORLD(
            sPicTable_Damemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Damemon,
            gShinyOverworldPalette_Damemon
        )
        .levelUpLearnset = sDamemonLevelUpLearnset,
        .teachableLearnset = sDamemonTeachableLearnset,
    },

    [SPECIES_DEMIDEVMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 63,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IMMUNITY, ABILITY_TOXIC_BOOST, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Demidevmon"),
        .cryId = CRY_DEMIDEVMON,
        .natDexNum = NATIONAL_DEX_DEMIDEVMON,
        .categoryName = _("Tiny Devil"),
        .height = 4,
        .weight = 150,
        .description = COMPOUND_STRING(
            "DemiDevimon is a tiny familiar digimon that\n"
            "serves under stronger digimon like Devimon\n"
            "and Myotismon. It is not a strong digimon\n"
            "however it is cunning and quickwitted."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Demidevmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Demidevmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Demidevmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Demidevmon,
        .shinyPalette = gMonShinyPalette_Demidevmon,
        .iconSprite = gMonIcon_Demidevmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Demidevmon)
        OVERWORLD(
            sPicTable_Demidevmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Demidevmon,
            gShinyOverworldPalette_Demidevmon
        )
        .levelUpLearnset = sDemidevmonLevelUpLearnset,
        .teachableLearnset = sDemidevmonTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KUNEMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 51,
        .baseSpeed     = 56,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_SWARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kunemon"),
        .cryId = CRY_KUNEMON,
        .natDexNum = NATIONAL_DEX_KUNEMON,
        .categoryName = _("Bee-Fly"),
        .height = 7,
        .weight = 151,
        .description = COMPOUND_STRING(
            "Originally thought to be completely blind,\n"
            "Kunemon seems to actually see through the\n"
            "lightning pattern on its head as they\n"
            "seem to change shape with emotion."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kunemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = sAnims_Kunemon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kunemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kunemon,
        .shinyPalette = gMonShinyPalette_Kunemon,
        .iconSprite = gMonIcon_Kunemon,
        .iconPalIndex = 2,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Kunemon)
        OVERWORLD(
            sPicTable_Kunemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kunemon,
            gShinyOverworldPalette_Kunemon
        )
        .levelUpLearnset = sKunemonLevelUpLearnset,
        .teachableLearnset = sKunemonTeachableLearnset,
    },

    [SPECIES_LABRAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 56,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 52,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Labramon"),
        .cryId = CRY_LABRAMON,
        .natDexNum = NATIONAL_DEX_LABRAMON,
        .categoryName = _("Labrador"),
        .height = 16,
        .weight = 311,
        .description = COMPOUND_STRING(
            "Many believe that Rookie Digimon like\n"
            "Labramon are the highest level an\n"
            "artificial Digimon can reach however their\n"
            "is growing evidence on the contrary."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Labramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = sAnims_Labramon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Labramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Labramon,
        .shinyPalette = gMonShinyPalette_Labramon,
        .iconSprite = gMonIcon_Labramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Labramon)
        OVERWORLD(
            sPicTable_Labramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Labramon,
            gShinyOverworldPalette_Labramon
        )
        .levelUpLearnset = sLabramonLevelUpLearnset,
        .teachableLearnset = sLabramonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafeon"),
        .cryId = CRY_LEAFEON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "Its cellular composition is closer to\n"
            "that of a plant than an animal. It uses\n"
            "photosynthesis to produce its energy\n"
            "supply without eating food."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leafeon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Leafeon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Leafeon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Leafeon,
        .shinyPalette = gMonShinyPalette_Leafeon,
        .iconSprite = gMonIcon_Leafeon,
        .iconPalIndex = 1,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Leafeon)
        OVERWORLD(
            sPicTable_Leafeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Leafeon,
            gShinyOverworldPalette_Leafeon
        )
        .levelUpLearnset = sLeafeonLevelUpLearnset,
        .teachableLearnset = sLeafeonTeachableLearnset,
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glaceon"),
        .cryId = CRY_GLACEON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = COMPOUND_STRING(
            "It can control its body temperature\n"
            "at will. This enables it to freeze the\n"
            "moisture in the atmosphere, creating\n"
            "flurries of diamond dust."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glaceon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Glaceon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Glaceon,
        .shinyPalette = gMonShinyPalette_Glaceon,
        .iconSprite = gMonIcon_Glaceon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Glaceon)
        OVERWORLD(
            sPicTable_Glaceon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glaceon,
            gShinyOverworldPalette_Glaceon
        )
        .levelUpLearnset = sGlaceonLevelUpLearnset,
        .teachableLearnset = sGlaceonTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Sylveon"),
        .cryId = CRY_SYLVEON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its ribbonlike feelers give off an aura\n"
            "that weakens hostility in its prey, causing\n"
            "them to let down their guard. A moment\n"
            "later, it pounces."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sylveon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Sylveon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Sylveon,
        .shinyPalette = gMonShinyPalette_Sylveon,
        .iconSprite = gMonIcon_Sylveon,
        .iconPalIndex = 0,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Sylveon)
        OVERWORLD(
            sPicTable_Sylveon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sylveon,
            gShinyOverworldPalette_Sylveon
        )
        .levelUpLearnset = sSylveonLevelUpLearnset,
        .teachableLearnset = sSylveonTeachableLearnset,
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_CRABMON_X

#if P_FAMILY_DOKUNEMON
    [SPECIES_DOKUNEMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 51,
        .baseSpeed     = 56,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_POISON, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dokunemon"),
        .cryId = CRY_DOKUNEMON,
        .natDexNum = NATIONAL_DEX_DOKUNEMON,
        .categoryName = _("Bee-Fly"),
        .height = 7,
        .weight = 104,
        .description = COMPOUND_STRING(
            "Scientists theorize that Dokunemon could\n"
            "be the key to understanding the mystery\n"
            "of insect Digimon. Unlike Kunemon, \n"
            "Dokunemon has a timid personality."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dokunemon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .frontAnimFrames = sAnims_Dokunemon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Dokunemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dokunemon,
        .shinyPalette = gMonShinyPalette_Dokunemon,
        .iconSprite = gMonIcon_Dokunemon,
        .iconPalIndex = 0,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dokunemon)
        OVERWORLD(
            sPicTable_Dokunemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dokunemon,
            gShinyOverworldPalette_Dokunemon
        )
        .levelUpLearnset = sDokunemonLevelUpLearnset,
        .teachableLearnset = sDokunemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_RENAMON_X},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_RENAMON_X}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_RENAMON_X] =
    {
        .baseHP        = 51,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 54,
        .baseSpAttack  = 69,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Renamon"),
        .cryId = CRY_RENAMON_X,
        .natDexNum = NATIONAL_DEX_RENAMON_X,
        .categoryName = _("X Antibody"),
        .height = 20,
        .weight = 414,
        .description = COMPOUND_STRING(
            "Renamon X are more well-versed in the\n"
            "dark arts making them a terrifying\n"
            "opponent. It will cover itself in red\n"
            "markings to symbolise its new strength."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Renamon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Renamon_x,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 9,
        .backPic = gMonBackPic_Renamon_x,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Renamon_x,
        .shinyPalette = gMonShinyPalette_Renamon_x,
        .iconSprite = gMonIcon_Renamon_x,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Renamon_x)
        OVERWORLD(
            sPicTable_Renamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Renamon_x,
            gShinyOverworldPalette_Renamon_x
        )
        .levelUpLearnset = sRenamon_xLevelUpLearnset,
        .teachableLearnset = sRenamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 185,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygonz"),
        .cryId = CRY_PORYGON_Z,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING(
            "In order to create a more advanced\n"
            "Pokémon, an additional program was\n"
            "installed, but apparently it contained a\n"
            "defect that made it move oddly."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Porygonz,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Porygon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Porygonz,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Porygonz,
        .shinyPalette = gMonShinyPalette_Porygonz,
        .iconSprite = gMonIcon_Porygonz,
        .iconPalIndex = 0,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(Porygonz)
        OVERWORLD(
            sPicTable_Porygonz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Porygonz,
            gShinyOverworldPalette_Porygonz
        )
        .levelUpLearnset = sPorygonZLevelUpLearnset,
        .teachableLearnset = sPorygonzTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_DOKUNEMON

#if P_FAMILY_DONDOKOMON
    [SPECIES_DONDOKOMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 56,
        .baseDefense   = 58,
        .baseSpeed     = 52,
        .baseSpAttack  = 58,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_INSOMNIA, ABILITY_SOUNDPROOF }, // SOUND BOOST
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dondokomon"),
        .cryId = CRY_DONDOKOMON,
        .natDexNum = NATIONAL_DEX_DONDOKOMON,
        .categoryName = _("Matsuri Ji"),
        .height = 5,
        .weight = 253,
        .description = COMPOUND_STRING(
            "When a festival is around, you can almost\n"
            "guarantee that a Dondokomon will be nearby.\n"
            "They love to pound out a rhythm that gets\n"
            "people stimulated and in a groove."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dondokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = sAnims_Dondokomon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Dondokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dondokomon,
        .shinyPalette = gMonShinyPalette_Dondokomon,
        .iconSprite = gMonIcon_Dondokomon,
        .iconPalIndex = 0,
        SHADOW(-2, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dondokomon)
        OVERWORLD(
            sPicTable_Dondokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Dondokomon,
            gShinyOverworldPalette_Dondokomon
        )
        .levelUpLearnset = sDondokomonLevelUpLearnset,
        .teachableLearnset = sDondokomonTeachableLearnset,
        .eggMoveLearnset = sDondokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DORUMON}),
    },

    [SPECIES_DORUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_STEELWORKER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dorumon"),
        .cryId = CRY_DORUMON,
        .natDexNum = NATIONAL_DEX_DORUMON,
        .categoryName = _("X Antibody"),
        .height = 12,
        .weight = 400,
        .description = COMPOUND_STRING(
            "The current leading theory on Dorumons\n"
            "origin is that was a 'Prototype Digimon'\n"
            "from a long time ago. It has an\n"
            "incredible combat sense and instinct."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dorumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = sAnims_Dorumon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Dorumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dorumon,
        .shinyPalette = gMonShinyPalette_Dorumon,
        .iconSprite = gMonIcon_Dorumon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dorumon)
        OVERWORLD(
            sPicTable_Dorumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dorumon,
            gShinyOverworldPalette_Dorumon
        )
        .levelUpLearnset = sDorumonLevelUpLearnset,
        .teachableLearnset = sDorumonTeachableLearnset,
    },
#endif //P_FAMILY_DONDOKOMON

#if P_FAMILY_DOTAGUMON
    [SPECIES_DOTAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dotagumon"),
        .cryId = CRY_DOTAGUMON,
        .natDexNum = NATIONAL_DEX_DOTAGUMON,
        .categoryName = _("8 Bit"),
        .height = 10,
        .weight = 8,
        .description = COMPOUND_STRING(
            "DotAgumon is rare form of Agumon that happens\n"
            "when an Agumon takes in too much data from\n"
            "keychain games. It's power is the exact\n"
            "same as Agumon but its potential is unknown."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dotagumon,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 16,
        .frontAnimFrames = sAnims_Dotagumon,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Dotagumon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dotagumon,
        .shinyPalette = gMonShinyPalette_Dotagumon,
        .iconSprite = gMonIcon_Dotagumon,
        .iconPalIndex = 2,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Dotagumon)
        OVERWORLD(
            sPicTable_Dotagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Dotagumon,
            gShinyOverworldPalette_Dotagumon
        )
        .levelUpLearnset = sDotagumonLevelUpLearnset,
        .teachableLearnset = sDotagumonTeachableLearnset,
        .eggMoveLearnset = sDotagumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_EBIDRAMON}),
    },

    [SPECIES_DOTFALCMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 56,
        .baseDefense   = 48,
        .baseSpeed     = 67,
        .baseSpAttack  = 55,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dotfalcmon"),
        .cryId = CRY_DOTFALCMON,
        .natDexNum = NATIONAL_DEX_DOTFALCMON,
        .categoryName = _("8 Bit"),
        .height = 10,
        .weight = 8,
        .description = COMPOUND_STRING(
            "In a similiar fashion to DotAgumon,\n"
            "DotFalcomon is caused when a Falcomon takes\n"
            "in too much data from a keychain game. It's\n"
            "unknown if it can actually evolve or not."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dotfalcmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = sAnims_Dotfalcmon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Dotfalcmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dotfalcmon,
        .shinyPalette = gMonShinyPalette_Dotfalcmon,
        .iconSprite = gMonIcon_Dotfalcmon,
        .iconPalIndex = 2,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dotfalcmon)
        OVERWORLD(
            sPicTable_Dotfalcmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dotfalcmon,
            gShinyOverworldPalette_Dotfalcmon
        )
        .levelUpLearnset = sDotfalcmonLevelUpLearnset,
        .teachableLearnset = sDotfalcmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DIATRYMON}),
    },
#endif //P_FAMILY_DOTAGUMON

#if P_FAMILY_DRACMON
    [SPECIES_DRACMON] =
    {
        .baseHP        = 58,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS, 
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dracmon"),
        .cryId = CRY_DRACMON,
        .natDexNum = NATIONAL_DEX_DRACMON,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 237,
        .description = COMPOUND_STRING(
            "If you want a prank to be done, Dracmon\n"
            "is the perfect Digimon for the job. It\n"
            "will do any prank from graffitiing the\n"
            "soveriegns to scaring fresh born Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Dracmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = sAnims_Dracmon,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backPic = gMonBackPic_Dracmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dracmon,
        .shinyPalette = gMonShinyPalette_Dracmon,
        .iconSprite = gMonIcon_Dracmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Dracmon)
        OVERWORLD(
            sPicTable_Dracmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dracmon,
            gShinyOverworldPalette_Dracmon
        )
        .levelUpLearnset = sDracmonLevelUpLearnset,
        .teachableLearnset = sDracmonTeachableLearnset,
        .eggMoveLearnset = sDracmonEggMoveLearnset,
        .formSpeciesIdTable = sDracmonFormSpeciesIdTable,
        .formChangeTable = sDracmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DARMAILMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DRACMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 215,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dracmon"),
        .cryId = CRY_DRACMON_MEGA,
        .natDexNum = NATIONAL_DEX_DRACMON,
        .categoryName = _("Fossil"),
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution has\n"
            "completely restored its genes. The rocks\n"
            "on its body are harder than diamond."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_DracmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_DracmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_DracmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_DracmonMega,
        .shinyPalette = gMonShinyPalette_DracmonMega,
        .iconSprite = gMonIcon_DracmonMega,
        .iconPalIndex = 2,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Dracmon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDracmonLevelUpLearnset,
        .teachableLearnset = sDracmonTeachableLearnset,
        .eggMoveLearnset = sDracmonEggMoveLearnset,
        .formSpeciesIdTable = sDracmonFormSpeciesIdTable,
        .formChangeTable = sDracmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRACMON

#if P_FAMILY_DRACOMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 94,
        .evYield_HP = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Munchlax"),
        .cryId = CRY_MUNCHLAX,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("Big Eater"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "When it finds something that looks like\n"
            "it might be edible, it goes right ahead\n"
            "and swallows it whole. That's why it gets\n"
            "fatter day by day."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Munchlax,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Munchlax,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Munchlax,
        .shinyPalette = gMonShinyPalette_Munchlax,
        .iconSprite = gMonIcon_Munchlax,
        .iconPalIndex = 3,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Munchlax)
        OVERWORLD(
            sPicTable_Munchlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Munchlax,
            gShinyOverworldPalette_Munchlax
        )
        .levelUpLearnset = sMunchlaxLevelUpLearnset,
        .teachableLearnset = sMunchlaxTeachableLearnset,
        .eggMoveLearnset = sMunchlaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_DRACOMON}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_DRACOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 60,
        .baseDefense   = 58,
        .baseSpeed     = 51,
        .baseSpAttack  = 55,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON,
        .natDexNum = NATIONAL_DEX_DRACOMON,
        .categoryName = _("Dramon"),
        .height = 9,
        .weight = 374,
        .description = COMPOUND_STRING(
            "Dracomon is an ancient, pure-blooded Digimon\n"
            "that is thought to be the progenitor of\n"
            "all Dramon-type Digimon. It's body is also\n"
            "packed with incredible power for its size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_Dracomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .frontAnimFrames = sAnims_Dracomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dracomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dracomon,
        .shinyPalette = gMonShinyPalette_Dracomon,
        .iconSprite = gMonIcon_Dracomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dracomon)
        OVERWORLD(
            sPicTable_Dracomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dracomon,
            gShinyOverworldPalette_Dracomon
        )
        .levelUpLearnset = sDracomonLevelUpLearnset,
        .teachableLearnset = sDracomonTeachableLearnset,
        .eggMoveLearnset = sDracomonEggMoveLearnset,
        .formSpeciesIdTable = sDracomonFormSpeciesIdTable,
        .formChangeTable = sDracomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 90, SPECIES_DEXDORUMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DRACOMON_X},
                                {EVO_LEVEL, 34, SPECIES_COREDRAMON_BLUE}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DRACOMON_GMAX] =
    {
        .baseHP        = 170,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 154,
        .evYield_HP = 2,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON,
        .natDexNum = NATIONAL_DEX_DRACOMON,
        .categoryName = _("Sleeping"),
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax energy has affected\n"
            "stray seeds and even pebbles that\n"
            "got stuck to Dracomon, making them grow\n"
            "to a huge size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_DracomonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DracomonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DracomonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DracomonGmax,
        .shinyPalette = gMonShinyPalette_DracomonGmax,
        .iconSprite = gMonIcon_DracomonGmax,
        .iconPalIndex = 3,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dracomon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDracomonLevelUpLearnset,
        .teachableLearnset = sDracomonTeachableLearnset,
        .eggMoveLearnset = sDracomonEggMoveLearnset,
        .formSpeciesIdTable = sDracomonFormSpeciesIdTable,
        .formChangeTable = sDracomonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DRACOMON

#if P_FAMILY_DRACOMON_X
    [SPECIES_DRACOMON_X] =
    {
        .baseHP        = 52,
        .baseAttack    = 66,
        .baseDefense   = 56,
        .baseSpeed     = 55,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON_X,
        .natDexNum = NATIONAL_DEX_DRACOMON_X,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 441,
        .description = COMPOUND_STRING(
            "Dracomon X is a formidable foe with it now\n"
            "gaining the ability of flight for a short\n"
            "time and its wings now serving as weapons.\n"
            "It can now also use wind based attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Dracomon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = sAnims_Dracomon_x,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Dracomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Dracomon_x,
        .shinyPalette = gMonShinyPalette_Dracomon_x,
        .iconSprite = gMonIcon_Dracomon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Dracomon_x)
        OVERWORLD(
            sPicTable_Dracomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dracomon_x,
            gShinyOverworldPalette_Dracomon_x
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDracomon_xLevelUpLearnset,
        .teachableLearnset = sDracomon_xTeachableLearnset,
        .formSpeciesIdTable = sDracomon_xFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DAMEMON_FUSION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_DRACOMON_X_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON_X,
        .natDexNum = NATIONAL_DEX_DRACOMON_X,
        .categoryName = _("Cruel"),
        .height = 17,
        .weight = 509,
        .description = COMPOUND_STRING(
            "It fires beams that immobilize opponents\n"
            "as if they had been frozen solid.\n"
            "Its feather-like blades of psychic energy\n"
            "rip through thick iron sheets like paper."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Dracomon_xGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Dracomon_xGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Dracomon_xGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dracomon_xGalar,
        .shinyPalette = gMonShinyPalette_Dracomon_xGalar,
        .iconSprite = gMonIcon_Dracomon_xGalar,
        .iconPalIndex = 2,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dracomon_x)
        OVERWORLD(
            sPicTable_Dracomon_xGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dracomon_xGalar,
            gShinyOverworldPalette_Dracomon_xGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDracomon_xGalarLevelUpLearnset,
        .teachableLearnset = sDracomon_xGalarTeachableLearnset,
        .formSpeciesIdTable = sDracomon_xFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DRACOMON_X

#if P_FAMILY_EBIBURGMON
    [SPECIES_EBIBURGMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 34,
        .baseDefense   = 52,
        .baseSpeed     = 48,
        .baseSpAttack  = 32,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Ebiburgmon"),
        .cryId = CRY_EBIBURGMON,
        .natDexNum = NATIONAL_DEX_EBIBURGMON,
        .categoryName = _("Burger"),
        .height = 10,
        .weight = 126,
        .description = COMPOUND_STRING(
            "Although Burgermon are usually good cooks,\n"
            "EbiBurgamons food is generally disgusting\n"
            "as it will try to mix seafood into dishes\n"
            "that do not need seafood."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Ebiburgmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Ebiburgmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Ebiburgmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Ebiburgmon,
        .shinyPalette = gMonShinyPalette_Ebiburgmon,
        .iconSprite = gMonIcon_Ebiburgmon,
        .iconPalIndex = 0,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Ebiburgmon)
        OVERWORLD(
            sPicTable_Ebiburgmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Ebiburgmon,
            gShinyOverworldPalette_Ebiburgmon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEbiburgmonLevelUpLearnset,
        .teachableLearnset = sEbiburgmonTeachableLearnset,
        .formSpeciesIdTable = sEbiburgmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BURGERMON_CHAMPION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_EBIBURGMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ebiburgmon"),
        .cryId = CRY_EBIBURGMON,
        .natDexNum = NATIONAL_DEX_EBIBURGMON,
        .categoryName = _("Strong Legs"),
        .height = 16,
        .weight = 582,
        .description = COMPOUND_STRING(
            "When its feathers rub together, they\n"
            "produce a crackling sound like the\n"
            "zapping of electricity. Apparently, it runs\n"
            "through the mountains at over 180 mph."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_EbiburgmonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_EbiburgmonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EbiburgmonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EbiburgmonGalar,
        .shinyPalette = gMonShinyPalette_EbiburgmonGalar,
        .iconSprite = gMonIcon_EbiburgmonGalar,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Ebiburgmon)
        OVERWORLD(
            sPicTable_EbiburgmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_EbiburgmonGalar,
            gShinyOverworldPalette_EbiburgmonGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEbiburgmonGalarLevelUpLearnset,
        .teachableLearnset = sEbiburgmonGalarTeachableLearnset,
        .formSpeciesIdTable = sEbiburgmonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EBIBURGMON

#if P_FAMILY_EKAKIMON
    [SPECIES_EKAKIMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 73,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ekakimon"),
        .cryId = CRY_EKAKIMON,
        .natDexNum = NATIONAL_DEX_EKAKIMON,
        .categoryName = _("Pencil"),
        .height = 7,
        .weight = 114,
        .description = COMPOUND_STRING(
            "Many people do not trust Ekakimon as it has\n"
            "a sinister smile on its face at all times\n"
            "but thats just because it is so happy for\n"
            "the pictures it is usually drawing."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Ekakimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = sAnims_Ekakimon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backPic = gMonBackPic_Ekakimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Ekakimon,
        .shinyPalette = gMonShinyPalette_Ekakimon,
        .iconSprite = gMonIcon_Ekakimon,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Ekakimon)
        OVERWORLD(
            sPicTable_Ekakimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Ekakimon,
            gShinyOverworldPalette_Ekakimon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEkakimonLevelUpLearnset,
        .teachableLearnset = sEkakimonTeachableLearnset,
        .formSpeciesIdTable = sEkakimonFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_EKAKIMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ekakimon"),
        .cryId = CRY_EKAKIMON,
        .natDexNum = NATIONAL_DEX_EKAKIMON,
        .categoryName = _("Malevolent"),
        .height = 20,
        .weight = 670,
        .description = COMPOUND_STRING(
            "This Pokémon's sinister, flame-like aura\n"
            "will consume the spirit of any creature\n"
            "it hits. Victims become burned-out\n"
            "shadows of themselves."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_EkakimonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_EkakimonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EkakimonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EkakimonGalar,
        .shinyPalette = gMonShinyPalette_EkakimonGalar,
        .iconSprite = gMonIcon_EkakimonGalar,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Ekakimon)
        OVERWORLD(
            sPicTable_EkakimonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_EkakimonGalar,
            gShinyOverworldPalette_EkakimonGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEkakimonGalarLevelUpLearnset,
        .teachableLearnset = sEkakimonGalarTeachableLearnset,
        .formSpeciesIdTable = sEkakimonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EKAKIMON

#if P_FAMILY_ELECMON
    [SPECIES_ELECMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 55,
        .baseSpAttack  = 59,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Elecmon"),
        .cryId = CRY_ELECMON,
        .natDexNum = NATIONAL_DEX_ELECMON,
        .categoryName = _("Electricity"),
        .height = 9,
        .weight = 226,
        .description = COMPOUND_STRING(
            "Elecmon is a very curious and lively\n"
            "Digimon. It's nine tails are likely caused\n"
            "by taking in peacock data at one point as it\n"
            "is used in similiar way to a peacocks tail."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Elecmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .frontAnimFrames = sAnims_Elecmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Elecmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Elecmon,
        .shinyPalette = gMonShinyPalette_Elecmon,
        .iconSprite = gMonIcon_Elecmon,
        .iconPalIndex = 0,
        SHADOW(3, 3, SHADOW_SIZE_L)
        FOOTPRINT(Elecmon)
        OVERWORLD(
            sPicTable_Elecmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Elecmon,
            gShinyOverworldPalette_Elecmon
        )
        .levelUpLearnset = sElecmonLevelUpLearnset,
        .teachableLearnset = sElecmonTeachableLearnset,
        .eggMoveLearnset = sElecmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 58, SPECIES_BLGARURMON},
                                {EVO_LEVEL, 33, SPECIES_AEGIOMON}),
    },

    [SPECIES_ELECMON_VIOLET] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 52,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STATIC, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elecmon"),
        .cryId = CRY_ELECMON_VIOLET,
        .natDexNum = NATIONAL_DEX_ELECMON_VIOLET,
        .categoryName = _("Electricity"),
        .height = 7,
        .weight = 287,
        .description = COMPOUND_STRING(
            "This Elecmon is a much more violent Elecmon\n"
            "as it has gained the Virus typing. It will\n"
            "indiscriminately attack anyone who it sees\n"
            "however it can be easily handled as it's weak."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Elecmon_violet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .frontAnimFrames = sAnims_Elecmon_violet,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Elecmon_violet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(40, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Elecmon_violet,
        .shinyPalette = gMonShinyPalette_Elecmon_violet,
        .iconSprite = gMonIcon_Elecmon_violet,
        .iconPalIndex = 0,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Elecmon_violet)
        OVERWORLD(
            sPicTable_Elecmon_violet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Elecmon_violet,
            gShinyOverworldPalette_Elecmon_violet
        )
        .levelUpLearnset = sElecmon_violetLevelUpLearnset,
        .teachableLearnset = sElecmon_violetTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_BOARMON}),
    },

    [SPECIES_ESPIMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 49,
        .baseDefense   = 50,
        .baseSpeed     = 64,
        .baseSpAttack  = 71,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INFILTRATOR, ABILITY_MAGNET_PULL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Espimon"),
        .cryId = CRY_ESPIMON,
        .natDexNum = NATIONAL_DEX_ESPIMON,
        .categoryName = _("Espionage"),
        .height = 7,
        .weight = 412,
        .description = COMPOUND_STRING(
            "Despite it's small and dumb looks, Espimon\n"
            "is actually an incredibly smart Digimon\n"
            "with the ability to swiftly infiltrate\n"
            "any location it so desires."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Espimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Espimon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_SHAKE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Espimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Espimon,
        .shinyPalette = gMonShinyPalette_Espimon,
        .iconSprite = gMonIcon_Espimon,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Espimon)
        OVERWORLD(
            sPicTable_Espimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Espimon,
            gShinyOverworldPalette_Espimon
        )
        .levelUpLearnset = sEspimonLevelUpLearnset,
        .teachableLearnset = sEspimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_BLKGATOMON_UVER}),
    },
#endif //P_FAMILY_ELECMON

#if P_FAMILY_AGUMON_FAKE_EXPERT
    [SPECIES_AGUMON_FAKE_EXPERT] =
    {
        .baseHP        = 51,
        .baseAttack    = 60,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 56,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ANALYTIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Plagiarist"),
        .height = 11,
        .weight = 213,
        .description = COMPOUND_STRING(
            "Even though it is a very smart Digimon,\n"
            "NiseAgumon, it still plagiarises other\n"
            "Digimon works. Many question if its own\n"
            "title is legitimate or just a fake."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expert,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Agumon_fake_expert,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Agumon_fake_expert,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expert,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expert,
        .iconSprite = gMonIcon_Agumon_fake_expert,
        .iconPalIndex = 2,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Agumon_fake_expert)
        OVERWORLD(
            sPicTable_Agumon_fake_expert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Agumon_fake_expert,
            gShinyOverworldPalette_Agumon_fake_expert
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGUMON_FAKE_EXPERT_MEGA_X] =
    {
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT_MEGA_X,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Genetic"),
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING(
            "Psychic power has augmented its muscles.\n"
            "It has a grip strength of one ton and can\n"
            "sprint a hundred meters in two seconds\n"
            "flat!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expertMegaX,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Agumon_fake_expertMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_fake_expertMegaX,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expertMegaX,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expertMegaX,
        .iconSprite = gMonIcon_Agumon_fake_expertMegaX,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_fake_expert)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
    },

    [SPECIES_AGUMON_FAKE_EXPERT_MEGA_Y] =
    {
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT_MEGA_Y,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Genetic"),
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Despite its diminished size, its mental\n"
            "power has grown phenomenally. With a mere\n"
            "thought, it can smash a skyscraper to\n"
            "smithereens."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expertMegaY,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Agumon_fake_expertMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Agumon_fake_expertMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expertMegaY,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expertMegaY,
        .iconSprite = gMonIcon_Agumon_fake_expertMegaY,
        .iconPalIndex = 2,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Agumon_fake_expert)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AGUMON_FAKE_EXPERT

#if P_FAMILY_FALCOMON
    [SPECIES_FALCOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 58,
        .baseDefense   = 51,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_EARLY_BIRD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Falcomon"),
        .cryId = CRY_FALCOMON,
        .natDexNum = NATIONAL_DEX_FALCOMON,
        .categoryName = _("Falcon"),
        .height = 9,
        .weight = 263,
        .description = COMPOUND_STRING(
            "Despite the fact that it loves on tall\n"
            "mountains and is full of Falcon Data, \n"
            "Falcomon can barely fly and instead has\n"
            "incredibly strong legs for movement."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Falcomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .frontAnimFrames = sAnims_Falcomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backPic = gMonBackPic_Falcomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Falcomon,
        .shinyPalette = gMonShinyPalette_Falcomon,
        .iconSprite = gMonIcon_Falcomon,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Falcomon)
        OVERWORLD(
            sPicTable_Falcomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Falcomon,
            gShinyOverworldPalette_Falcomon
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sFalcomonLevelUpLearnset,
        .teachableLearnset = sFalcomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DIATRYMON}),
    },
#endif //P_FAMILY_FALCOMON

#ifdef __INTELLISENSE__
};
#endif

