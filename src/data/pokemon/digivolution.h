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
    {25, 25, 25, 25, 25, 25, SPECIES_ARGOMON_IT},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBombmonDigivolveTable[] = {
    {4, 5, 6, 7, 8, 9, SPECIES_MISSIMON},
    DIGIVOLUTION_END,
};