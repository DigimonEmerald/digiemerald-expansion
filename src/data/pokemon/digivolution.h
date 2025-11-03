// Digivolution data structure
// Fields: HPReq, atkReq, defReq, spatkReq, spdefReq, speedReq, target species
struct Digivolution
{
    u8 HPReq;
    u8 atkReq;
    u8 defReq;
    u8 spatkReq;
    u8 spdefReq;
    u8 speedReq;
    u16 species;
};

// Sentinel value to mark the end of a digivolution table
#define DIGIVOLUTION_END {0, 0, 0, 0, 0, 0, SPECIES_NONE}

// NOTE: other files expect the symbol name `sBlastoiseDigivolveTable` (no "ution").
static const struct Digivolution sArgomon_fDigivolveTable[] = {
    {15, 5, 5, 7, 6, 7, SPECIES_ARGOMON_IT},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBombmonDigivolveTable[] = {
    {17, 7, 8, 6, 6, 6, SPECIES_MISSIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBommonDigivolveTable[] = {
    {16, 8, 7, 6, 6, 8, SPECIES_MISSIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBotamonDigivolveTable[] = {
    {20, 7, 7, 8, 7, 7, SPECIES_KOROMON},
    {20, 7, 8, 8, 8, 7, SPECIES_BUDMON},
    {20, 7, 7, 8, 7, 10, SPECIES_PINAMON},
    {20, 9, 7, 9, 7, 7, SPECIES_TOKOMON},
    {20, 7, 7, 10, 7, 7, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChibickmonDigivolveTable[] = {
    {15, 5, 5, 7, 5, 11, SPECIES_PICKMON_WHITE},
    {17, 6, 6, 8, 6, 13, SPECIES_PICKMON_RED},
    {19, 6, 6, 8, 6, 14, SPECIES_PICKMON_SILVER},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChibomonDigivolveTable[] = {
    {17, 7, 8, 8, 7, 7, SPECIES_DEMIVEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sConomonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_KOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCotsucomonDigivolveTable[] = {
    {17, 6, 9, 6, 7, 6, SPECIES_KAKKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCurimonDigivolveTable[] = {
    {19, 7, 7, 7, 7, 7, SPECIES_GURIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDatirimonDigivolveTable[] = {
    {21, 6, 8, 7, 5, 5, SPECIES_TANEMON},
    {21, 6, 9, 7, 5, 4, SPECIES_YOKOMON},
    {21, 6, 8, 7, 5, 6, SPECIES_CHAPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDodomonDigivolveTable[] = {
    {18, 8, 7, 9, 6, 6, SPECIES_DORIMON},
    {19, 9, 7, 9, 6, 6, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDokimonDigivolveTable[] = {
    {17, 6, 6, 8, 7, 11, SPECIES_BIBIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFufumonDigivolveTable[] = {
    {16, 6, 7, 8, 8, 8, SPECIES_KYOKYOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJyarimonDigivolveTable[] = {
    {17, 7, 7, 8, 8, 8, SPECIES_GIGIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKeemonDigivolveTable[] = {
    {17, 9, 6, 8, 7, 7, SPECIES_YAAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKetomonDigivolveTable[] = {
    {19, 9, 6, 6, 6, 7, SPECIES_HOPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKuramonDigivolveTable[] = {
    {19, 8, 6, 9, 5, 7, SPECIES_TSUMEMON},
    {28, 10, 7, 11, 5, 11, SPECIES_ARCADIAMON_IT},
    {19, 8, 7, 10, 5, 8, SPECIES_PAGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLeafmonDigivolveTable[] = {
    {19, 6, 6, 9, 9, 5, SPECIES_MINOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetalkoromonDigivolveTable[] = {
    {18, 7, 12, 6, 7, 7, SPECIES_KAPURIMON},
    {18, 7, 13, 7, 7, 8, SPECIES_PAGUMON},
    {19, 7, 13, 6, 7, 8, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMokumonDigivolveTable[] = {
    {16, 6, 6, 8, 11, 6, SPECIES_DEMIMERAMON},
    {16, 6, 7, 8, 11, 6, SPECIES_KAPURIMON},
    {16, 7, 5, 8, 11, 6, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNyokimonDigivolveTable[] = {
    {21, 5, 5, 7, 9, 6, SPECIES_YOKOMON},
    {21, 5, 6, 7, 9, 6, SPECIES_TANEMON},
    {21, 5, 6, 7, 8, 7, SPECIES_BUDMON},
    {21, 6, 5, 8, 9, 6, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPabumonDigivolveTable[] = {
    {19, 7, 6, 7, 6, 6, SPECIES_MOTIMON},
    {19, 7, 6, 8, 6, 6, SPECIES_NYAROMON},
    {19, 7, 7, 7, 6, 6, SPECIES_TANEMON},
    {20, 7, 7, 7, 6, 6, SPECIES_YOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPafumonDigivolveTable[] = {
    {17, 7, 7, 6, 6, 9, SPECIES_KYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPaomonDigivolveTable[] = {
    {20, 8, 6, 6, 6, 6, SPECIES_XIAOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPetitmonDigivolveTable[] = {
    {19, 8, 7, 9, 8, 7, SPECIES_BABYDMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPichimonDigivolveTable[] = {
    {18, 6, 6, 6, 9, 6, SPECIES_BUKAMON},
    {18, 7, 6, 7, 9, 6, SPECIES_TOKOMON},
    {18, 6, 6, 7, 9, 7, SPECIES_CHAPMON},
    {18, 7, 6, 6, 9, 6, SPECIES_TSUNOMON},
    {18, 6, 6, 7, 9, 6, SPECIES_NYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPopomonDigivolveTable[] = {
    {20, 6, 8, 6, 8, 6, SPECIES_FRIMON},
    {20, 6, 8, 7, 8, 6, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPoyomonDigivolveTable[] = {
    {21, 6, 5, 6, 5, 9, SPECIES_TOKOMON},
    {22, 6, 5, 6, 5, 9, SPECIES_GUMMYMON},
    {21, 5, 7, 6, 5, 9, SPECIES_YOKOMON},
    {21, 5, 6, 6, 6, 9, SPECIES_BUKAMON},
    {21, 6, 5, 7, 5, 9, SPECIES_NYAROMON},
    {21, 6, 5, 6, 5, 9, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPunimonDigivolveTable[] = {
    {19, 9, 8, 5, 5, 6, SPECIES_TSUNOMON},
    {19, 9, 8, 6, 5, 6, SPECIES_DEMIMERAMON},
    {19, 9, 8, 6, 6, 6, SPECIES_BUKAMON},
    {19, 10, 8, 6, 5, 6, SPECIES_NYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPupumonDigivolveTable[] = {
    {16, 6, 6, 8, 7, 8, SPECIES_PUROROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPururumonDigivolveTable[] = {
    {18, 8, 6, 7, 5, 10, SPECIES_POROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPusumonDigivolveTable[] = {
    {16, 6, 7, 7, 8, 8, SPECIES_PUSURIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuttimonDigivolveTable[] = {
    {18, 6, 5, 9, 7, 7, SPECIES_KYUPIMON},
    {18, 7, 6, 10, 7, 7, SPECIES_TOKOMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuwamonDigivolveTable[] = {
    {17, 8, 6, 7, 7, 8, SPECIES_PINAMON},
    {17, 8, 6, 7, 8, 8, SPECIES_KYAROMON},
    {17, 8, 6, 7, 7, 9, SPECIES_CHAPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuyomonDigivolveTable[] = {
    {16, 5, 6, 9, 11, 7, SPECIES_PUYOYOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPyonmonDigivolveTable[] = {
    {18, 8, 8, 6, 6, 6, SPECIES_BOSAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRelemonDigivolveTable[] = {
    {17, 8, 6, 8, 6, 9, SPECIES_VIXIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSakumonDigivolveTable[] = {
    {17, 11, 6, 6, 6, 6, SPECIES_SAKUTTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSandmonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_TUMBLEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTsubumonDigivolveTable[] = {
    {18, 7, 7, 7, 7, 6, SPECIES_UPAMON},
    {18, 8, 7, 8, 7, 6, SPECIES_TOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnowbotamonDigivolveTable[] = {
    {20, 6, 5, 10, 6, 5, SPECIES_HIYARIMON},
    {20, 6, 5, 11, 6, 5, SPECIES_NYAROMON},
    {20, 7, 5, 10, 6, 5, SPECIES_TSUNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sYuramonDigivolveTable[] = {
    {19, 6, 6, 7, 6, 9, SPECIES_BUDMON},
    {19, 6, 7, 7, 6, 9, SPECIES_TANEMON},
    {19, 6, 6, 8, 6, 9, SPECIES_DEMIMERAMON},
    {19, 7, 6, 8, 6, 9, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZerimonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_GUMMYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZurumonDigivolveTable[] = {
    {16, 8, 8, 8, 8, 6, SPECIES_PAGUMON},
    {16, 9, 8, 9, 8, 6, SPECIES_KOROMON},
    {16, 8, 9, 8, 8, 6, SPECIES_KAPURIMON},
    {16, 8, 9, 8, 8, 7, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTomorimonDigivolveTable[] = {
    {17, 6, 6, 8, 7, 7, SPECIES_ONIBIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArcadiamon_itDigivolveTable[] = {
    {34, 13, 14, 15, 12, 17, SPECIES_ARCADIAMON_ROOKIE},
    DIGIVOLUTION_END,
};