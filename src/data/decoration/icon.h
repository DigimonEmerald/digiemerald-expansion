const struct DecorItem gDecorIconTable[] =
{
    [DECOR_NONE]            = {gItemIcon_QuestionMark, gItemIconPalette_QuestionMark},
    [DECOR_SMALL_DESK]      = {NULL, NULL},
    [DECOR_POKEMON_DESK]    = {NULL, NULL},
    [DECOR_HEAVY_DESK]      = {gDecorIcon_HeavyDesk, gDecorIconPalette_HeavyDesk},
    [DECOR_RAGGED_DESK]     = {gDecorIcon_RaggedDesk, gDecorIconPalette_RaggedDesk},
    [DECOR_COMFORT_DESK]    = {gDecorIcon_ComfortDesk, gDecorIconPalette_ComfortDesk},
    [DECOR_PRETTY_DESK]     = {gDecorIcon_PrettyDesk, gDecorIconPalette_PrettyDesk},
    [DECOR_BRICK_DESK]      = {gDecorIcon_BrickDesk, gDecorIconPalette_BrickDesk},
    [DECOR_CAMP_DESK]       = {gDecorIcon_CampDesk, gDecorIconPalette_CampDesk},
    [DECOR_HARD_DESK]       = {gDecorIcon_HardDesk, gDecorIconPalette_HardDesk},
    [DECOR_SMALL_CHAIR]     = {NULL, NULL},
    [DECOR_POKEMON_CHAIR]   = {NULL, NULL},
    [DECOR_HEAVY_CHAIR]     = {NULL, NULL},
    [DECOR_PRETTY_CHAIR]    = {NULL, NULL},
    [DECOR_COMFORT_CHAIR]   = {NULL, NULL},
    [DECOR_RAGGED_CHAIR]    = {NULL, NULL},
    [DECOR_BRICK_CHAIR]     = {NULL, NULL},
    [DECOR_CAMP_CHAIR]      = {NULL, NULL},
    [DECOR_HARD_CHAIR]      = {NULL, NULL},
    [DECOR_RED_PLANT]       = {gDecorIcon_RedPlant, gDecorIconPalette_RedPlant},
    [DECOR_TROPICAL_PLANT]  = {gDecorIcon_TropicalPlant, gDecorIconPalette_TropicalPlant},
    [DECOR_PRETTY_FLOWERS]  = {gDecorIcon_PrettyFlowers, gDecorIconPalette_PrettyFlowers},
    [DECOR_COLORFUL_PLANT]  = {gDecorIcon_ColorfulPlant, gDecorIconPalette_ColorfulPlant},
    [DECOR_BIG_PLANT]       = {gDecorIcon_BigPlant, gDecorIconPalette_BigPlant},
    [DECOR_GORGEOUS_PLANT]  = {gDecorIcon_GorgeousPlant, gDecorIconPalette_GorgeousPlant},
    [DECOR_RED_BRICK]       = {gDecorIcon_RedBrick, gDecorIconPalette_RedBrick},
    [DECOR_YELLOW_BRICK]    = {gDecorIcon_YellowBrick, gDecorIconPalette_YellowBrick},
    [DECOR_BLUE_BRICK]      = {gDecorIcon_BlueBrick, gDecorIconPalette_BlueBrick},
    [DECOR_RED_BALLOON]     = {NULL, NULL},
    [DECOR_BLUE_BALLOON]    = {NULL, NULL},
    [DECOR_YELLOW_BALLOON]  = {NULL, NULL},
    [DECOR_RED_TENT]        = {gDecorIcon_RedTent, gDecorIconPalette_RedTent},
    [DECOR_BLUE_TENT]       = {gDecorIcon_BlueTent, gDecorIconPalette_BlueTent},
    [DECOR_SOLID_BOARD]     = {gDecorIcon_SolidBoard, gDecorIconPalette_SolidBoard},
    [DECOR_SLIDE]           = {gDecorIcon_Slide, gDecorIconPalette_Slide},
    [DECOR_FENCE_LENGTH]    = {NULL, NULL},
    [DECOR_FENCE_WIDTH]     = {NULL, NULL},
    [DECOR_TIRE]            = {gDecorIcon_Tire, gDecorIconPalette_Tire},
    [DECOR_STAND]           = {gDecorIcon_Stand, gDecorIconPalette_Stand},
    [DECOR_MUD_BALL]        = {NULL, NULL},
    [DECOR_BREAKABLE_DOOR]  = {gDecorIcon_BreakableDoor, gDecorIconPalette_BreakableDoor},
    [DECOR_SAND_ORNAMENT]   = {gDecorIcon_SandOrnament, gDecorIconPalette_SandOrnament},
    [DECOR_SILVER_SHIELD]   = {NULL, NULL},
    [DECOR_GOLD_SHIELD]     = {NULL, NULL},
    [DECOR_GLASS_ORNAMENT]  = {gDecorIcon_GlassOrnament, gDecorIconPalette_GlassOrnament},
    [DECOR_TV]              = {NULL, NULL},
    [DECOR_ROUND_TV]        = {NULL, NULL},
    [DECOR_CUTE_TV]         = {NULL, NULL},
    [DECOR_GLITTER_MAT]     = {NULL, NULL},
    [DECOR_JUMP_MAT]        = {NULL, NULL},
    [DECOR_SPIN_MAT]        = {NULL, NULL},
    [DECOR_C_LOW_NOTE_MAT]  = {NULL, NULL},
    [DECOR_D_NOTE_MAT]      = {NULL, NULL},
    [DECOR_E_NOTE_MAT]      = {NULL, NULL},
    [DECOR_F_NOTE_MAT]      = {NULL, NULL},
    [DECOR_G_NOTE_MAT]      = {NULL, NULL},
    [DECOR_A_NOTE_MAT]      = {NULL, NULL},
    [DECOR_B_NOTE_MAT]      = {NULL, NULL},
    [DECOR_C_HIGH_NOTE_MAT] = {NULL, NULL},
    [DECOR_SURF_MAT]        = {gDecorIcon_SurfMat, gDecorIconPalette_SurfMat},
    [DECOR_THUNDER_MAT]     = {gDecorIcon_ThunderMat, gDecorIconPalette_ThunderMat},
    [DECOR_FIRE_BLAST_MAT]  = {gDecorIcon_FireBlastMat, gDecorIconPalette_FireBlastMat},
    [DECOR_POWDER_SNOW_MAT] = {gDecorIcon_PowderSnowMat, gDecorIconPalette_PowderSnowMat},
    [DECOR_ATTRACT_MAT]     = {gDecorIcon_AttractMat, gDecorIconPalette_AttractMat},
    [DECOR_FISSURE_MAT]     = {gDecorIcon_FissureMat, gDecorIconPalette_FissureMat},
    [DECOR_SPIKES_MAT]      = {gDecorIcon_SpikesMat, gDecorIconPalette_SpikesMat},
    [DECOR_BALL_POSTER]     = {NULL, NULL},
    [DECOR_GREEN_POSTER]    = {NULL, NULL},
    [DECOR_RED_POSTER]      = {NULL, NULL},
    [DECOR_BLUE_POSTER]     = {NULL, NULL},
    [DECOR_CUTE_POSTER]     = {NULL, NULL},
    [DECOR_PIKA_POSTER]     = {NULL, NULL},
    [DECOR_LONG_POSTER]     = {NULL, NULL},
    [DECOR_SEA_POSTER]      = {NULL, NULL},
    [DECOR_SKY_POSTER]      = {NULL, NULL},
    [DECOR_KISS_POSTER]     = {NULL, NULL},
    [DECOR_GUILMON_X_DOLL]      = {NULL, NULL},
    [DECOR_PETITMON_DOLL]    = {NULL, NULL},
    [DECOR_JAZAMON_DOLL]     = {NULL, NULL},
    [DECOR_HAGURUMON_DOLL]     = {NULL, NULL},
    [DECOR_FLORAMON_DOLL]  = {NULL, NULL},
    [DECOR_FALCOMON_06_DOLL]  = {NULL, NULL},
    [DECOR_GAMMAMON_DOLL]   = {NULL, NULL},
    [DECOR_SANDMON_DOLL] = {NULL, NULL},
    [DECOR_CALUMON_DOLL]     = {NULL, NULL},
    [DECOR_PUYOMON_DOLL]   = {NULL, NULL},
    [DECOR_CRABMON_DOLL]      = {NULL, NULL},
    [DECOR_SANGOMON_DOLL]   = {NULL, NULL},
    [DECOR_SUNARZAMON_DOLL]    = {NULL, NULL},
    [DECOR_SYAKOMON_X_DOLL]    = {NULL, NULL},
    [DECOR_TERRIERMON_DOLL]     = {NULL, NULL},
    [DECOR_DRIMOGEMON_DOLL]    = {NULL, NULL},
    [DECOR_EXVEEMON_DOLL]     = {NULL, NULL},
    [DECOR_DEXDORUMON_DOLL]     = {NULL, NULL},
    [DECOR_DONSHOUMON_DOLL]    = {NULL, NULL},
    [DECOR_BIOSTEGMON_DOLL]    = {NULL, NULL},
    [DECOR_BIRDRAMON_DOLL]     = {NULL, NULL},
    [DECOR_DARLIZAMON_DOLL]     = {NULL, NULL},
    [DECOR_BURAIMON_DOLL]     = {NULL, NULL},
    [DECOR_ZUBAMON_DOLL]      = {NULL, NULL},
    [DECOR_AIRDRAMON_DOLL]     = {NULL, NULL},
    [DECOR_PIKA_CUSHION]    = {NULL, NULL},
    [DECOR_ROUND_CUSHION]   = {NULL, NULL},
    [DECOR_KISS_CUSHION]    = {NULL, NULL},
    [DECOR_ZIGZAG_CUSHION]  = {NULL, NULL},
    [DECOR_SPIN_CUSHION]    = {NULL, NULL},
    [DECOR_DIAMOND_CUSHION] = {NULL, NULL},
    [DECOR_BALL_CUSHION]    = {NULL, NULL},
    [DECOR_GRASS_CUSHION]   = {NULL, NULL},
    [DECOR_FIRE_CUSHION]    = {NULL, NULL},
    [DECOR_WATER_CUSHION]   = {NULL, NULL},
    [DECOR_DRACOMON_DOLL]    = {gDecorIcon_DracomonDoll, gDecorIconPalette_DracomonDoll},
    [DECOR_BAKOMON_DOLL]     = {gDecorIcon_BakomonDoll, gDecorIconPalette_BakomonDoll},
    [DECOR_CORONAMON_DOLL]     = {gDecorIcon_CoronamonDoll, gDecorIconPalette_CoronamonDoll},
    [DECOR_BOMMON_DOLL]   = {gDecorIcon_BommonDoll, gDecorIconPalette_BommonDoll},
    [DECOR_CHIBOMON_DOLL]  = {gDecorIcon_ChibomonDoll, gDecorIconPalette_ChibomonDoll},
    [DECOR_CURIMON_DOLL]  = {gDecorIcon_CurimonDoll, gDecorIconPalette_CurimonDoll},
    [DECOR_CHAMBLEMON_DOLL]    = {gDecorIcon_ChamblemonDoll, gDecorIconPalette_ChamblemonDoll},
    [DECOR_GARGOMON_DOLL]   = {gDecorIcon_GargomonDoll, gDecorIconPalette_GargomonDoll},
    [DECOR_GARGOYLMON_DOLL]     = {gDecorIcon_GargoylmonDoll, gDecorIconPalette_GargoylmonDoll},
    [DECOR_GARURUMON_DOLL]  = {gDecorIcon_GarurumonDoll, gDecorIconPalette_GarurumonDoll}
};
