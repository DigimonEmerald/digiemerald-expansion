const struct Fusion *const gFusionTablePointers[NUM_SPECIES] =
{
#if P_FUSION_FORMS
#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] = sKyuremFusionTable,
#if P_FAMILY_RESHIRAM
    [SPECIES_KYUREM_WHITE] = sKyuremFusionTable,
    [SPECIES_RESHIRAM] = sKyuremFusionTable,
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
    [SPECIES_KYUREM_BLACK] = sKyuremFusionTable,
    [SPECIES_ZEKROM] = sKyuremFusionTable,
#endif //P_FAMILY_ZEKROM
#endif //P_FAMILY_KYUREM
#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] = sNecrozmaFusionTable,
#if P_FAMILY_COSMOG
    [SPECIES_NECROZMA_DAWN_WINGS] = sNecrozmaFusionTable,
    [SPECIES_SOLGALEO] = sNecrozmaFusionTable,
    [SPECIES_NECROZMA_DUSK_MANE] = sNecrozmaFusionTable,
    [SPECIES_LUNALA] = sNecrozmaFusionTable,
#endif //P_FAMILY_COSMOG
#endif //P_FAMILY_NECROZMA
#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] = sCalyrexFusionTable,
#if P_FAMILY_SPECTRIER
    [SPECIES_CALYREX_SHADOW] = sCalyrexFusionTable,
    [SPECIES_SPECTRIER] = sCalyrexFusionTable,
#endif //P_FAMILY_SPECTRIER
#if P_FAMILY_GLASTRIER
    [SPECIES_CALYREX_ICE] = sCalyrexFusionTable,
    [SPECIES_GLASTRIER] = sCalyrexFusionTable,
#endif //P_FAMILY_GLASTRIER
#endif //P_FAMILY_CALYREX
#endif //P_FUSION_FORMS
    [SPECIES_DONSHOUTMON] = sShoutmonFusionTable,
    [SPECIES_DONDOKOMON] = sShoutmonFusionTable,
    [SPECIES_SHOUTMON] = sShoutmonFusionTable,
    // [SPECIES_CUTEMON] = sShoutmonFusionTable,
    // [SPECIES_JIJIMON] = sShoutmonFusionTable,
    // [SPECIES_PAWNCHESSMON_WHITE] = sShoutmonFusionTable,
    // [SPECIES_MONITAMON] = sShoutmonFusionTable,
    // [SPECIES_DORULUMON] = sShoutmonFusionTable,
    // [SPECIES_SPARROWMON] = sShoutmonFusionTable,
    // [SPECIES_STARMON_2010] = sShoutmonFusionTable,
    // [SPECIES_CUTESHOUTMON] = sShoutmonFusionTable,
    // [SPECIES_JIJISHOUTMON] = sShoutmonFusionTable,
    // [SPECIES_PAWNSHOUTMON] = sShoutmonFusionTable,
    // [SPECIES_SHONITAMON] = sShoutmonFusionTable,
    // [SPECIES_SHOUTMON_DORULU_CANNON] = sShoutmonFusionTable,
    // [SPECIES_SHOUTMON_JET_SPARROW] = sShoutmonFusionTable,
    // [SPECIES_SHOUTMON_SH] = sShoutmonFusionTable,
    // [SPECIES_KNIGHTMON] = sShoutmonFusionTable,
    // [SPECIES_GAOSSMON] = sShoutmonFusionTable,
    // [SPECIES_BALLISTAMON] = sShoutmonFusionTable,
    // [SPECIES_MUSHROOMON] = sShoutmonFusionTable,
    // [SPECIES_BALLISTAMON_MC] = sShoutmonFusionTable,
    // [SPECIES_CANDLEMON] = sCandlemonFusionTable,
    // [SPECIES_WEDDINMON] = sCandlemonFusionTable,
    // [SPECIES_REVERSEWEDDINMON] = sCandlemonFusionTable,
    // [SPECIES_OPOSSUMMMON] = sCandlemonFusionTable,
    // [SPECIES_OPOSSUMMMON_XROS_UP] = sCandlemonFusionTable,
    // [SPECIES_MADLEOMON] = sMadLeomonFusionTable,
    // [SPECIES_CHIKURIMON] = sMadLeomonFusionTable,
    // [SPECIES_MADLEOMON_ARMED_MODE] = sMadLeomonFusionTable,
    // [SPECIES_MADLEOMON_FINAL_MODE] = sMadLeomonFusionTable,
    // [SPECIES_MADLEOMON_OROCHI_MODE] = sMadLeomonFusionTable,
    // [SPECIES_APEMON] = sMadLeomonFusionTable,
    // [SPECIES_OROCHIMON] = sMadLeomonFusionTable,
    // [SPECIES_DRACOMON] = sCyberdramon_2010FusionTable,
    // [SPECIES_CYBERDRAMON_2010] = sCyberdramon_2010FusionTable,
    // [SPECIES_METALGREYMON_2010] = sCyberdramon_2010FusionTable,
    // [SPECIES_CYBERDRAMON_2010_DRAOCMON] = sCyberdramon_2010FusionTable,
    // [SPECIES_METALGREYMON_2010_CYBER_LAUNCHER] = sCyberdramon_2010FusionTable,
    // [SPECIES_GUMDRAMON] = sGumdramonFusionTable,
    // [SPECIES_KOTEMON] = sGumdramonFusionTable,
    // [SPECIES_GUMDRAMON_XROS_UP] = sGumdramonFusionTable,
};

#if P_FUSION_FORMS
#if P_FAMILY_KYUREM
#if P_FAMILY_RESHIRAM
const u16 gKyurenWhiteSwapMoveTable[][2] =
{
    {MOVE_SCARY_FACE, MOVE_FUSION_FLARE},
    {MOVE_GLACIATE, MOVE_ICE_BURN},
};
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
const u16 gKyurenBlackSwapMoveTable[][2] =
{
    {MOVE_SCARY_FACE, MOVE_FUSION_BOLT},
    {MOVE_GLACIATE, MOVE_FREEZE_SHOCK},
};
#endif //P_FAMILY_ZEKROM
#endif //P_FAMILY_KYUREM
#endif //P_FUSION_FORMS
