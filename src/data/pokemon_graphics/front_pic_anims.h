#define PLACEHOLDER_ANIM_SINGLE_FRAME(name)     \
static const union AnimCmd sAnim_##name##_1[] = \
{                                               \
    ANIMCMD_FRAME(0, 1),                        \
    ANIMCMD_END,                                \
}

#define PLACEHOLDER_ANIM_TWO_FRAMES(name)       \
static const union AnimCmd sAnim_##name##_1[] = \
{                                               \
    ANIMCMD_FRAME(0, 30),                       \
    ANIMCMD_FRAME(1, 30),                       \
    ANIMCMD_FRAME(0, 1),                        \
    ANIMCMD_END,                                \
}

static const union AnimCmd sAnim_None_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_FAMILY_ARGOMON_F
static const union AnimCmd sAnim_Argomon_f_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bombmon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bommon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BommonMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BommonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ARGOMON_F

#if P_FAMILY_BOTAMON
static const union AnimCmd sAnim_Botamon_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chibickmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chibomon_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(ChibomonMegaX);
#endif //P_MEGA_EVOLUTIONS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(ChibomonMegaY);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ChibomonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BOTAMON

#if P_FAMILY_CONOMON
static const union AnimCmd sAnim_Conomon_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cotsucomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Curimon_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CurimonMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CurimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CONOMON

#if P_FAMILY_DATIRIMON
static const union AnimCmd sAnim_Datirimon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dodomon_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dokimon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DokimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DATIRIMON

#if P_FAMILY_FUFUMON
static const union AnimCmd sAnim_Fufumon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jyarimon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Keemon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KeemonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FUFUMON

#if P_FAMILY_KETOMON
static const union AnimCmd sAnim_Ketomon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kuramon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leafmon_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LeafmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KETOMON

#if P_FAMILY_CHOROMON
static const union AnimCmd sAnim_Choromon_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mokumon_1[] =
{
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
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ChoromonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(MokumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CHOROMON

#if P_FAMILY_NYOKIMON
static const union AnimCmd sAnim_Nyokimon_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pabumon_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_NYOKIMON

#if P_FAMILY_PAFUMON
static const union AnimCmd sAnim_Pafumon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Paomon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PAFUMON

#if P_FAMILY_PETITMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Guilmon_x_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(Guilmon_xSpikyEared);
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Petitmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_COSPLAY_PETITMON_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonCosplay);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonRockStar);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonBelle);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonPopStar);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonPhD);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonLibre);
#endif //P_COSPLAY_PETITMON_FORMS
#if P_CAP_PETITMON_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonOriginalCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonHoennCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonSinnohCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonUnovaCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonKalosCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonAlolaCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonPartnerCap);
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonWorldCap);
#endif //P_CAP_PETITMON_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PetitmonGigantamax);
#endif //P_GIGANTAMAX_FORMS

static const union AnimCmd sAnim_Pichimon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PichimonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PETITMON

#if P_FAMILY_POPOMON
static const union AnimCmd sAnim_Popomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poyomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PopomonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(PoyomonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_POPOMON

#if P_FAMILY_NIDORAN
static const union AnimCmd sAnim_Punimon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pupumon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pururumon_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pusumon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Puttimon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Puwamon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_PUYOMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Gumdramon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Puyomon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyonmon_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PUYOMON

#if P_FAMILY_RELEMON
static const union AnimCmd sAnim_Relemon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sakumon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(RelemonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(SakumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RELEMON

#if P_FAMILY_SANDMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Hackmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Sandmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tsubumon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SANDMON

#if P_FAMILY_ICEBOTAMON
static const union AnimCmd sAnim_Icebotamon_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yuramon_1[] =
{
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
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Gotsumon_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ICEBOTAMON

#if P_FAMILY_ZERIMON
static const union AnimCmd sAnim_Zerimon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zurumon_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arcadiamon_it_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Impmon_x_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZERIMON

#if P_FAMILY_ARGOMON_IT
static const union AnimCmd sAnim_Argomon_it_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Babydmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARGOMON_IT

#if P_FAMILY_BIBIMON
static const union AnimCmd sAnim_Bibimon_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bosamon_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_BIBIMON

#if P_FAMILY_BUDMON
static const union AnimCmd sAnim_Budmon_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bukamon_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BudmonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(BukamonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_BUDMON

#if P_FAMILY_CALUMON
static const union AnimCmd sAnim_Calumon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chapmon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CalumonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(ChapmonAlolan);
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CalumonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Perrserker);
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CalumonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CALUMON

#if P_FAMILY_CHICCHIMON
static const union AnimCmd sAnim_Chicchimon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Demmeramon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHICCHIMON

#if P_FAMILY_DEMIVEEMON
static const union AnimCmd sAnim_Demiveemon_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dorimon_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Annihilape);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DEMIVEEMON

#if P_FAMILY_FRIMON
static const union AnimCmd sAnim_Frimon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gigimon_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(FrimonHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(GigimonHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FRIMON

#if P_FAMILY_GUMMYMON
static const union AnimCmd sAnim_Gummymon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gurimon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hiyarimon_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Kamemon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_GUMMYMON

#if P_FAMILY_HOPMON
static const union AnimCmd sAnim_Hopmon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kakkinmon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kapurimon_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KapurimonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOPMON

#if P_FAMILY_KOKOMON
static const union AnimCmd sAnim_Kokomon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Koromon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kozenimon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(KozenimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KOKOMON

#if P_FAMILY_KYAROMON
static const union AnimCmd sAnim_Kyaromon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyokyomon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyupimon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KYAROMON

#if P_FAMILY_MINOMON
static const union AnimCmd sAnim_Minomon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Missimon_1[] =
{
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 19),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINOMON

#if P_FAMILY_MONIMON
static const union AnimCmd sAnim_Monimon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Moonmon_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Motimon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MonimonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(MoonmonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(MotimonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_MONIMON

#if P_FAMILY_NEGAMON
static const union AnimCmd sAnim_Negamon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nyaromon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(NegamonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(NyaromonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_NEGAMON

#if P_FAMILY_PAGUMON
static const union AnimCmd sAnim_Pagumon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pickmon_silver_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Liollmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Pickmon_silverMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PagumonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Pickmon_silverGalarian);
#if P_GEN_2_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(LiollmonGalarian);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PAGUMON

#if P_FAMILY_PICKMON_WHITE
static const union AnimCmd sAnim_Pickmon_white_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pickmon_red_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magnezone_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PICKMON_WHITE

#if P_FAMILY_PINAMON
static const union AnimCmd sAnim_Pinamon_1[] =
{
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
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PinamonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sirfetchd);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PINAMON

#if P_FAMILY_POROMON
static const union AnimCmd sAnim_Poromon_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Puroromon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_POROMON

#if P_FAMILY_PUSURIMON
static const union AnimCmd sAnim_Pusurimon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Puyoyomon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_PUSURIMON

#if P_FAMILY_SAKUTTOMON
static const union AnimCmd sAnim_Sakuttomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sunmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SakuttomonAlolan);
PLACEHOLDER_ANIM_SINGLE_FRAME(SunmonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SAKUTTOMON

#if P_FAMILY_TANEMON
static const union AnimCmd sAnim_Tanemon_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tokomon_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TANEMON

#if P_FAMILY_TOKOMON_X
static const union AnimCmd sAnim_Tokomon_x_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torballmon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tsumemon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(TsumemonMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(TsumemonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOKOMON_X

#if P_FAMILY_TSUNOMON
static const union AnimCmd sAnim_Tsunomon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Kodekacmon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KodekacmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_TSUNOMON

#if P_FAMILY_TUMBLEMON
static const union AnimCmd sAnim_Tumblemon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Upamon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TUMBLEMON

#if P_FAMILY_VIXIMON
static const union AnimCmd sAnim_Viximon_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wanyamon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(WanyamonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_VIXIMON

#if P_FAMILY_XIAOMON
static const union AnimCmd sAnim_Xiaomon_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yaamon_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(XiaomonHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(YaamonHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_XIAOMON

#if P_FAMILY_YOKOMON
static const union AnimCmd sAnim_Yokomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Agumon_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_TWO_FRAMES(AgumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_YOKOMON

#if P_FAMILY_AGUMON_06
static const union AnimCmd sAnim_Agumon_06_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Agumon_expert_1[] =
{
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_ALOLAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Agumon_expertAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_AGUMON_06

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Salamon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Agumon_x_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Angoramon_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Salamon_x_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_ARCADIAMON_ROOKIE
static const union AnimCmd sAnim_Arcadiamon_rookie_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Lickilicky_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARCADIAMON_ROOKIE

#if P_FAMILY_ARGOMON_ROOKIE
static const union AnimCmd sAnim_Argomon_rookie_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Armadilmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ArmadilmonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARGOMON_ROOKIE

#if P_FAMILY_ARURAUMON
static const union AnimCmd sAnim_Aruraumon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bakomon_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Rhyperior_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ARURAUMON

#if P_FAMILY_BEARMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Happiny_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Bearmon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Shoutmon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BEARMON

#if P_FAMILY_BETAMON
static const union AnimCmd sAnim_Betamon_1[] =
{
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Tangrowth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BETAMON

#if P_FAMILY_BETAMON_X
static const union AnimCmd sAnim_Betamon_x_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Betamon_xMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BETAMON_X

#if P_FAMILY_BIYOMON
static const union AnimCmd sAnim_Biyomon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blkagumon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Psychemon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BIYOMON

#if P_FAMILY_BLKAGUMON_X
static const union AnimCmd sAnim_Blkagumon_x_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blkgabumon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BLKAGUMON_X

#if P_FAMILY_BLKGUILMON
static const union AnimCmd sAnim_Blkguilmon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bokomon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BLKGUILMON

#if P_FAMILY_BULUCOMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_MimeJr_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Bulucomon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BulucomonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(MrRime);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_BULUCOMON

#if P_FAMILY_BURGERMON
static const union AnimCmd sAnim_Burgermon_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Monodramon_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MonodramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Kleavor);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_BURGERMON

#if P_FAMILY_SAMUAGUMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Sangomon_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Samuagumon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SAMUAGUMON

#if P_FAMILY_CANDLEMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Santaagumon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Candlemon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Electivire_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CANDLEMON

#if P_FAMILY_CHIKURIMON
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Blktoyamon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Chikurimon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magmortar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CHIKURIMON

#if P_FAMILY_TYUTYUMON
static const union AnimCmd sAnim_Tyutyumon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(TyutyumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYUTYUMON

#if P_FAMILY_CHUUMON
static const union AnimCmd sAnim_Chuumon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_PALDEAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ChuumonPaldean);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_CHUUMON

#if P_FAMILY_HAZYAGUMON
static const union AnimCmd sAnim_Hazyagumon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Commdramon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CommdramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAZYAGUMON

#if P_FAMILY_CORONAMON
static const union AnimCmd sAnim_Coronamon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CoronamonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CORONAMON

#if P_FAMILY_CRABMON
static const union AnimCmd sAnim_Crabmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRABMON

#if P_FAMILY_CRABMON_X
static const union AnimCmd sAnim_Crabmon_x_1[] =
{
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Crabmon_xGigantamax);
#endif //P_GIGANTAMAX_FORMS

static const union AnimCmd sAnim_Cutemon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Damemon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Demidevmon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Kunemon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Labramon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Leafeon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glaceon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
static const union AnimCmd sAnim_Sylveon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_CRABMON_X

#if P_FAMILY_DOKUNEMON
static const union AnimCmd sAnim_Dokunemon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Renamon_x_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Dokunemon_Z_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_DOKUNEMON

#if P_FAMILY_DONDOKOMON
static const union AnimCmd sAnim_Dondokomon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dorumon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DONDOKOMON

#if P_FAMILY_DOTAGUMON
static const union AnimCmd sAnim_Dotagumon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dotfalcmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DOTAGUMON

#if P_FAMILY_DRACMON
static const union AnimCmd sAnim_Dracmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(DracmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRACMON

#if P_FAMILY_DRACOMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Munchlax_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Dracomon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DracomonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DRACOMON

#if P_FAMILY_DRACOMON_X
static const union AnimCmd sAnim_Dracomon_x_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Dracomon_xGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DRACOMON_X

#if P_FAMILY_EBIBURGMON
static const union AnimCmd sAnim_Ebiburgmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(EbiburgmonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EBIBURGMON

#if P_FAMILY_EKAKIMON
static const union AnimCmd sAnim_Ekakimon_1[] =
{
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
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(EkakimonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EKAKIMON

#if P_FAMILY_ELECMON
static const union AnimCmd sAnim_Elecmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Elecmon_violet_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Espimon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ELECMON

#if P_FAMILY_AGUMON_FAKE_EXPERT
static const union AnimCmd sAnim_Agumon_fake_expert_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Agumon_fake_expertMegaX);
#endif //P_MEGA_EVOLUTIONS

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Agumon_fake_expertMegaY);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AGUMON_FAKE_EXPERT

#if P_FAMILY_FALCOMON
static const union AnimCmd sAnim_Falcomon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FALCOMON

#if P_FAMILY_FALCOMON_06
static const union AnimCmd sAnim_Falcomon_06_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fanbeemon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flamemon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FALCOMON_06

#if P_FAMILY_FLORAMON
static const union AnimCmd sAnim_Floramon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabumon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabumon_x_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Gabumon_xHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FLORAMON

#if P_FAMILY_GAMMAMON
static const union AnimCmd sAnim_Gammamon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gaomon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gaossmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_GAMMAMON

#if P_FAMILY_GAZIMON
static const union AnimCmd sAnim_Gazimon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gazimon_x_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_GAZIMON

#if P_FAMILY_GHOSTMON
static const union AnimCmd sAnim_Ghostmon_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gizamon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_GHOSTMON

#if P_FAMILY_GIZUMON
static const union AnimCmd sAnim_Gizumon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goblimon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIZUMON

#if P_FAMILY_GOMAMON
static const union AnimCmd sAnim_Gomamon_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gomamon_x_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOMAMON

#if P_FAMILY_GOTSUMON_X
static const union AnimCmd sAnim_Gotsumon_x_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Guilmon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOTSUMON_X

#if P_FAMILY_HAGURUMON
static const union AnimCmd sAnim_Hagurumon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hagurumon_x_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Togekiss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_HAGURUMON

#if P_FAMILY_HAWKMON
static const union AnimCmd sAnim_Hawkmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Herissmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_NATU

#if P_FAMILY_HYOKOMON
static const union AnimCmd sAnim_Hyokomon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ignitemon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Impmon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(ImpmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HYOKOMON

#if P_FAMILY_JAZAMON
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Biostegmon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Jazamon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellymon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_JAZAMON

#if P_FAMILY_JUNKMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Bonsly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Junkmon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_JUNKMON

#if P_FAMILY_KERAMON
static const union AnimCmd sAnim_Keramon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Keramon_x_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kodokgumon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_KERAMON

#if P_FAMILY_KOKABUIMON
static const union AnimCmd sAnim_Kokabuimon_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Ambipom_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOKABUIMON

#if P_FAMILY_KOKUWAMON
static const union AnimCmd sAnim_Kokuwamon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kokuwamon_x_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_KOKUWAMON

#if P_FAMILY_KOTEMON
static const union AnimCmd sAnim_Kotemon_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Yanmega_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOTEMON

#if P_FAMILY_KUDAMON
static const union AnimCmd sAnim_Kudamon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kudamon_06_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_PALDEAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(KudamonPaldean);
PLACEHOLDER_ANIM_SINGLE_FRAME(Clodsire);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_KUDAMON

#if P_FAMILY_LALAMON
static const union AnimCmd sAnim_Lalamon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Honchkrow_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LALAMON

#if P_FAMILY_LOOGAMON
static const union AnimCmd sAnim_Loogamon_1[] =
{
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
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mismagius_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LOOGAMON

#if P_FAMILY_LOPMON
static const union AnimCmd sAnim_Lopmon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LOPMON

#if P_FAMILY_LOPMONX
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Wynaut_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Lopmonx_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LOPMONX

#if P_FAMILY_LUCEMON
static const union AnimCmd sAnim_Lucemon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Farigiraf);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUCEMON

#if P_FAMILY_PINECO
static const union AnimCmd sAnim_Pineco_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Forretress_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PINECO

#if P_FAMILY_LUXMON
static const union AnimCmd sAnim_Luxmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Dudunsparce);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUXMON

#if P_FAMILY_METABEE
static const union AnimCmd sAnim_Metabee_1[] =
{
    ANIMCMD_FRAME(1, 17),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gliscor_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_METABEE

#if P_FAMILY_MODBETAMON
static const union AnimCmd sAnim_Modbetamon_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Monitamon_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_MODBETAMON

#if P_FAMILY_MONMON
static const union AnimCmd sAnim_Monmon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MonmonHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Overqwil);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MONMON

#if P_FAMILY_MORPHOMON
static const union AnimCmd sAnim_Morphomon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_MORPHOMON

#if P_FAMILY_MUCHOMON
static const union AnimCmd sAnim_Muchomon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MuchomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUCHOMON

#if P_FAMILY_MUSHROOMON
static const union AnimCmd sAnim_Mushroomon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Weavile_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MushroomonHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sneasler);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MUSHROOMON

#if P_FAMILY_NEEMON
static const union AnimCmd sAnim_Neemon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Otamamon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Ursaluna);
PLACEHOLDER_ANIM_SINGLE_FRAME(UrsalunaBloodmoon);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_NEEMON

#if P_FAMILY_OTAMAMON_RED
static const union AnimCmd sAnim_Otamamon_red_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Otamamon_x_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_OTAMAMON_RED

#if P_FAMILY_PALMON
static const union AnimCmd sAnim_Palmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palmon_x_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mamoswine_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PALMON

#if P_FAMILY_PATAMON
static const union AnimCmd sAnim_Patamon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(PatamonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cursola);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PATAMON

#if P_FAMILY_PAWNMON_BLACK
static const union AnimCmd sAnim_Pawnmon_black_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pawnmon_white_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PAWNMON_BLACK

#if P_FAMILY_PENGUINMON
static const union AnimCmd sAnim_Penguinmon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PENGUINMON

#if P_FAMILY_PETITMAMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mantyke_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Petitmamon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_PETITMAMON

#if P_FAMILY_PHASCOMON
static const union AnimCmd sAnim_Phascomon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHASCOMON

#if P_FAMILY_PILLOMON
static const union AnimCmd sAnim_Pillomon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pomumon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(PomumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PILLOMON

#if P_FAMILY_PULSEMON
static const union AnimCmd sAnim_Pulsemon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Renamon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PULSEMON

#if P_FAMILY_ROKUSHO
static const union AnimCmd sAnim_Rokusho_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_8_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Wyrdeer);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_ROKUSHO

#if P_FAMILY_RYUDAMON
static const union AnimCmd sAnim_Ryudamon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_RYUDAMON

#if P_FAMILY_SHAMANMON
static const union AnimCmd sAnim_Shamanmon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHAMANMON

#if P_FAMILY_YUKIAGUMON
static const union AnimCmd sAnim_Yukiagumon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_YUKIAGUMON

#if P_FAMILY_YUKIAGUMON_06
static const union AnimCmd sAnim_Yukiagumon_06_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_YUKIAGUMON_06

#if P_FAMILY_ICEGOBIMON
static const union AnimCmd sAnim_Icegobimon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ICEGOBIMON

#if P_FAMILY_SOLARMON
static const union AnimCmd sAnim_Solarmon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sounbrdmon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spadamon_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SpadamonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SOLARMON

#if P_FAMILY_SPARROWMON
static const union AnimCmd sAnim_Sparrowmon_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPARROWMON

#if P_FAMILY_STARMON_2010
static const union AnimCmd sAnim_Starmon_2010_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARMON_2010

#if P_FAMILY_STRABIMON
static const union AnimCmd sAnim_Strabimon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_STRABIMON

#if P_FAMILY_SUNARZAMON
static const union AnimCmd sAnim_Sunarzamon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swimmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Syakomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SyakomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SUNARZAMON

#if P_FAMILY_SYAKOMON_X
static const union AnimCmd sAnim_Syakomon_x_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tapirmon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tentomon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(TentomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SYAKOMON_X

#if P_FAMILY_TERRIERMON
static const union AnimCmd sAnim_Terriermon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Terriermon_assistant_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Terriermon_x_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Terriermon_xMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TERRIERMON

#if P_FAMILY_TINKERMON
static const union AnimCmd sAnim_Tinkermon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tinpet_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_TINKERMON

#if P_FAMILY_TOYAGUMON
static const union AnimCmd sAnim_Toyagumon_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tsukaimon_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ToyagumonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(TsukaimonGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Obstagoon);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_TOYAGUMON

#if P_FAMILY_VEEMON
static const union AnimCmd sAnim_Veemon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vemmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vorvomon_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wormmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zenimon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_VEEMON

#if P_FAMILY_ZUBAMON
static const union AnimCmd sAnim_Zubamon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aegiomon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ludicolo_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZUBAMON

#if P_FAMILY_AIRDRAMON
static const union AnimCmd sAnim_Airdramon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Akatorimon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Allomon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AIRDRAMON

#if P_FAMILY_ALLOMON_X
static const union AnimCmd sAnim_Allomon_x_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Angelamon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_ALLOMON_X

#if P_FAMILY_ANGEMON
static const union AnimCmd sAnim_Angemon_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ankylomon_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ANGEMON

#if P_FAMILY_APEMON
static const union AnimCmd sAnim_Apemon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aquilamon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arcadiamon_champion_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(Arcadiamon_championMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gallade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GalladeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_APEMON

#if P_FAMILY_ARCHELOMON
static const union AnimCmd sAnim_Archelomon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Argomon_champion_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCHELOMON

#if P_FAMILY_ARESDRAMON
static const union AnimCmd sAnim_Aresdramon_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Atamademon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARESDRAMON

#if P_FAMILY_AURUMON
static const union AnimCmd sAnim_Aurumon_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Axemon_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Baboonmon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_AURUMON

#if P_FAMILY_BAKEMON
static const union AnimCmd sAnim_Bakemon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Balistamon_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Baluchimon_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_BAKEMON

#if P_FAMILY_BAOHUCKMON
static const union AnimCmd sAnim_Baohuckmon_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Baromon_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trailmon_battle_armament_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};
#endif //P_FAMILY_BAOHUCKMON

#if P_FAMILY_BETGAMAMON
static const union AnimCmd sAnim_Betgamamon_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bioquetmon_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_BETGAMAMON

#if P_FAMILY_BIOTHUNMON
static const union AnimCmd sAnim_Biothunmon_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Probopass_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BIOTHUNMON

#if P_FAMILY_BIRDRAMON
static const union AnimCmd sAnim_Birdramon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blgaogamon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BIRDRAMON

#if P_FAMILY_BLGARGOMON
static const union AnimCmd sAnim_Blgargomon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlgargomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARGOMON

#if P_FAMILY_BLGARURMON
static const union AnimCmd sAnim_Blgarurmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlgarurmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARURMON

#if P_FAMILY_BLKGATOMON
static const union AnimCmd sAnim_Blkgatomon_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blkgatomon_uver_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blgrowlmon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlgrowlmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLKGATOMON

#if P_FAMILY_SAWKUWAMON
static const union AnimCmd sAnim_Sawkuwamon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blimpmon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BlimpmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SAWKUWAMON

#if P_FAMILY_BOARMON
static const union AnimCmd sAnim_Boarmon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bomnanimon_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BomnanimonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BOARMON

#if P_FAMILY_BOOGIEMON
static const union AnimCmd sAnim_Boogiemon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BOOGIEMON

#if P_FAMILY_BUCCHIEMON_RED
static const union AnimCmd sAnim_Bucchiemon_red_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUCCHIEMON_RED

#if P_FAMILY_BUCCHIEMON_GREEN_BULKMON
static const union AnimCmd sAnim_Bucchiemon_green_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bulkmon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUCCHIEMON_GREEN_BULKMON

#if P_FAMILY_BULLMON
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Budew_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Bullmon_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Roserade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BULLMON

#if P_FAMILY_BURAIMON
static const union AnimCmd sAnim_Buraimon_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Burgermon_champion_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_BURAIMON

#if P_FAMILY_CHOUMON
static const union AnimCmd sAnim_Choumon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Centarumon_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CentarumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHOUMON

#if P_FAMILY_CHAMBLEMON
static const union AnimCmd sAnim_Chamblemon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chamelemon_1[] =
{
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHAMBLEMON

#if P_FAMILY_CHRYSALMON
static const union AnimCmd sAnim_Chrysalmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Citramon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(CitramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHRYSALMON

#if P_FAMILY_CLOCKMON
static const union AnimCmd sAnim_Clockmon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLOCKMON

#if P_FAMILY_CLOCKMON_FUSION
static const union AnimCmd sAnim_Clockmon_fusion_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Coelamon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLOCKMON_FUSION

#if P_FAMILY_COREDRAMON_BLUE
static const union AnimCmd sAnim_Coredramon_blue_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};
#endif //P_FAMILY_COREDRAMON_BLUE

#if P_FAMILY_TRAPINCH
static const union AnimCmd sAnim_Trapinch_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vibrava_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flygon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
static const union AnimCmd sAnim_Cacnea_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cacturne_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
static const union AnimCmd sAnim_Swablu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Altaria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AltariaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
static const union AnimCmd sAnim_Zangoose_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
static const union AnimCmd sAnim_Seviper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
static const union AnimCmd sAnim_Lunatone_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
static const union AnimCmd sAnim_Solrock_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
static const union AnimCmd sAnim_Barboach_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whiscash_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
static const union AnimCmd sAnim_Corphish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawdaunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
static const union AnimCmd sAnim_Baltoy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Claydol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
static const union AnimCmd sAnim_Lileep_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cradily_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
static const union AnimCmd sAnim_Anorith_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Armaldo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
static const union AnimCmd sAnim_Feebas_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Milotic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
static const union AnimCmd sAnim_CastformNormal_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSunny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformRainy_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSnowy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
static const union AnimCmd sAnim_Kecleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
static const union AnimCmd sAnim_Shuppet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Banette_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(BanetteMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
static const union AnimCmd sAnim_Duskull_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dusclops_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Dusknoir_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
static const union AnimCmd sAnim_Tropius_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Chingling_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Chimecho_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
static const union AnimCmd sAnim_Absol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AbsolMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
static const union AnimCmd sAnim_Snorunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glalie_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GlalieMega);
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Froslass_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
static const union AnimCmd sAnim_Spheal_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sealeo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Walrein_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
static const union AnimCmd sAnim_Clamperl_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Huntail_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorebyss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
static const union AnimCmd sAnim_Relicanth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
static const union AnimCmd sAnim_Luvdisc_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
static const union AnimCmd sAnim_Bagon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shelgon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamence_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(SalamenceMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
static const union AnimCmd sAnim_Beldum_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metang_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metagross_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(MetagrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
static const union AnimCmd sAnim_Regirock_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
static const union AnimCmd sAnim_Regice_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
static const union AnimCmd sAnim_Registeel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
static const union AnimCmd sAnim_Latias_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LatiasMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
static const union AnimCmd sAnim_Latios_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LatiosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
static const union AnimCmd sAnim_Kyogre_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_PRIMAL_REVERSIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(KyogrePrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
static const union AnimCmd sAnim_Groudon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_PRIMAL_REVERSIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GroudonPrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
static const union AnimCmd sAnim_Rayquaza_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(RayquazaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
static const union AnimCmd sAnim_Jirachi_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
static const union AnimCmd sAnim_DeoxysNormal_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysAttack_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysDefense_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysSpeed_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEOXYS

#if P_FAMILY_TURTWIG
static const union AnimCmd sAnim_Turtwig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grotle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torterra_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
static const union AnimCmd sAnim_Chimchar_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Monferno_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Infernape_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
static const union AnimCmd sAnim_Piplup_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Prinplup_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Empoleon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
static const union AnimCmd sAnim_Starly_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staravia_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staraptor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
static const union AnimCmd sAnim_Bidoof_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bibarel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
static const union AnimCmd sAnim_Kricketot_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kricketune_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
static const union AnimCmd sAnim_Shinx_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxio_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxray_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
static const union AnimCmd sAnim_Cranidos_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rampardos_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
static const union AnimCmd sAnim_Shieldon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bastiodon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
static const union AnimCmd sAnim_Burmy_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wormadam_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mothim_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
static const union AnimCmd sAnim_Combee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vespiquen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
static const union AnimCmd sAnim_Pachirisu_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
static const union AnimCmd sAnim_Buizel_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floatzel_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
static const union AnimCmd sAnim_Cherubi_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimOvercast_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimSunshine_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
static const union AnimCmd sAnim_Shellos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gastrodon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
static const union AnimCmd sAnim_Drifloon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drifblim_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
static const union AnimCmd sAnim_Buneary_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lopunny_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LopunnyMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
static const union AnimCmd sAnim_Glameow_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Purugly_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
static const union AnimCmd sAnim_Stunky_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skuntank_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
static const union AnimCmd sAnim_Bronzor_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzong_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
static const union AnimCmd sAnim_Chatot_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
static const union AnimCmd sAnim_Spiritomb_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
static const union AnimCmd sAnim_Gible_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garchomp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(GarchompMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
static const union AnimCmd sAnim_Riolu_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lucario_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(LucarioMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
static const union AnimCmd sAnim_Hippopotas_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hippowdon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
static const union AnimCmd sAnim_Skorupi_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drapion_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
static const union AnimCmd sAnim_Croagunk_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxicroak_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
static const union AnimCmd sAnim_Carnivine_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
static const union AnimCmd sAnim_Finneon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lumineon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
static const union AnimCmd sAnim_Snover_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Abomasnow_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AbomasnowMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
static const union AnimCmd sAnim_Rotom_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomHeat_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomWash_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFrost_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFan_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomMow_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
static const union AnimCmd sAnim_Uxie_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
static const union AnimCmd sAnim_Mesprit_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
static const union AnimCmd sAnim_Azelf_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
static const union AnimCmd sAnim_Dialga_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(DialgaOrigin);
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
static const union AnimCmd sAnim_Palkia_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

PLACEHOLDER_ANIM_SINGLE_FRAME(PalkiaOrigin);
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
static const union AnimCmd sAnim_Heatran_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
static const union AnimCmd sAnim_Regigigas_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
static const union AnimCmd sAnim_GiratinaAltered_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GiratinaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
static const union AnimCmd sAnim_Cresselia_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
static const union AnimCmd sAnim_Phione_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manaphy_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
static const union AnimCmd sAnim_Darkrai_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
static const union AnimCmd sAnim_ShayminLand_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ShayminSky_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
static const union AnimCmd sAnim_Arceus_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCEUS

#if P_FAMILY_VICTINI
static const union AnimCmd sAnim_Victini_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
static const union AnimCmd sAnim_Snivy_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Servine_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Serperior_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
static const union AnimCmd sAnim_Tepig_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pignite_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Emboar_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
static const union AnimCmd sAnim_Oshawott_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewott_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Samurott_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SamurottHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
static const union AnimCmd sAnim_Patrat_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Watchog_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0 , 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
static const union AnimCmd sAnim_Lillipup_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Herdier_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stoutland_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
static const union AnimCmd sAnim_Purrloin_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Liepard_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
static const union AnimCmd sAnim_Pansage_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisage_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
static const union AnimCmd sAnim_Pansear_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisear_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
static const union AnimCmd sAnim_Panpour_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simipour_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
static const union AnimCmd sAnim_Munna_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Musharna_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
static const union AnimCmd sAnim_Pidove_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tranquill_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Unfezant_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
static const union AnimCmd sAnim_Blitzle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zebstrika_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
static const union AnimCmd sAnim_Roggenrola_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Boldore_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gigalith_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
static const union AnimCmd sAnim_Woobat_1[] =
{
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
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swoobat_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
static const union AnimCmd sAnim_Drilbur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Excadrill_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
static const union AnimCmd sAnim_Audino_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(AudinoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
static const union AnimCmd sAnim_Timburr_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gurdurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Conkeldurr_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
static const union AnimCmd sAnim_Tympole_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palpitoad_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seismitoad_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
static const union AnimCmd sAnim_Throh_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
static const union AnimCmd sAnim_Sawk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
static const union AnimCmd sAnim_Sewaddle_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swadloon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leavanny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
static const union AnimCmd sAnim_Venipede_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whirlipede_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scolipede_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
static const union AnimCmd sAnim_Cottonee_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whimsicott_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
static const union AnimCmd sAnim_Petilil_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lilligant_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(LilligantHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
static const union AnimCmd sAnim_Basculin_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(Basculegion);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
static const union AnimCmd sAnim_Sandile_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krokorok_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krookodile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
static const union AnimCmd sAnim_Darumaka_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanStandardMode_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanZenMode_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DarumakaGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(DarmanitanGalarianStandardMode);
PLACEHOLDER_ANIM_SINGLE_FRAME(DarmanitanGalarianZenMode);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
static const union AnimCmd sAnim_Maractus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
static const union AnimCmd sAnim_Dwebble_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crustle_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
static const union AnimCmd sAnim_Scraggy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scrafty_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
static const union AnimCmd sAnim_Sigilyph_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
static const union AnimCmd sAnim_Yamask_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cofagrigus_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(YamaskGalarian);
PLACEHOLDER_ANIM_SINGLE_FRAME(Runerigus);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
static const union AnimCmd sAnim_Tirtouga_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carracosta_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
static const union AnimCmd sAnim_Archen_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Archeops_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
static const union AnimCmd sAnim_Trubbish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garbodor_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GarbodorGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
static const union AnimCmd sAnim_Zorua_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zoroark_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ZoruaHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(ZoroarkHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
static const union AnimCmd sAnim_Minccino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cinccino_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
static const union AnimCmd sAnim_Gothita_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothorita_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothitelle_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
static const union AnimCmd sAnim_Solosis_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duosion_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Reuniclus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
static const union AnimCmd sAnim_Ducklett_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swanna_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
static const union AnimCmd sAnim_Vanillite_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanillish_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanilluxe_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
static const union AnimCmd sAnim_Deerling_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sawsbuck_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
static const union AnimCmd sAnim_Emolga_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
static const union AnimCmd sAnim_Karrablast_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Escavalier_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
static const union AnimCmd sAnim_Foongus_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Amoonguss_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
static const union AnimCmd sAnim_Frillish_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellicent_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
static const union AnimCmd sAnim_Alomomola_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
static const union AnimCmd sAnim_Joltik_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Galvantula_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
static const union AnimCmd sAnim_Ferroseed_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferrothorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
static const union AnimCmd sAnim_Klink_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klinklang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
static const union AnimCmd sAnim_Tynamo_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektrik_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektross_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
static const union AnimCmd sAnim_Elgyem_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beheeyem_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
static const union AnimCmd sAnim_Litwick_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lampent_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chandelure_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
static const union AnimCmd sAnim_Axew_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fraxure_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haxorus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
static const union AnimCmd sAnim_Cubchoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beartic_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
static const union AnimCmd sAnim_Cryogonal_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
static const union AnimCmd sAnim_Shelmet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Accelgor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
static const union AnimCmd sAnim_Stunfisk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GALARIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(StunfiskGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
static const union AnimCmd sAnim_Mienfoo_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mienshao_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
static const union AnimCmd sAnim_Druddigon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
static const union AnimCmd sAnim_Golett_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golurk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
static const union AnimCmd sAnim_Pawniard_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bisharp_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Kingambit);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
static const union AnimCmd sAnim_Bouffalant_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
static const union AnimCmd sAnim_Rufflet_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braviary_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(BraviaryHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
static const union AnimCmd sAnim_Vullaby_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mandibuzz_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
static const union AnimCmd sAnim_Heatmor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
static const union AnimCmd sAnim_Durant_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
static const union AnimCmd sAnim_Deino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zweilous_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hydreigon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
static const union AnimCmd sAnim_Larvesta_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volcarona_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
static const union AnimCmd sAnim_Cobalion_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
static const union AnimCmd sAnim_Terrakion_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
static const union AnimCmd sAnim_Virizion_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
static const union AnimCmd sAnim_TornadusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TornadusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
static const union AnimCmd sAnim_ThundurusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ThundurusTherian_1[] =
{
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
    ANIMCMD_END,
};
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
static const union AnimCmd sAnim_Reshiram_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
static const union AnimCmd sAnim_Zekrom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
static const union AnimCmd sAnim_LandorusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LandorusTherian_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
static const union AnimCmd sAnim_Kyurem_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremWhite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremBlack_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
static const union AnimCmd sAnim_KeldeoOrdinary_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KeldeoResolute_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
static const union AnimCmd sAnim_MeloettaAria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeloettaPirouette_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
static const union AnimCmd sAnim_Genesect_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_GENESECT

#if P_FAMILY_CHESPIN
static const union AnimCmd sAnim_Chespin_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilladin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chesnaught_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
static const union AnimCmd sAnim_Fennekin_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braixen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delphox_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
static const union AnimCmd sAnim_Froakie_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogadier_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Greninja_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GreninjaAsh_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
static const union AnimCmd sAnim_Bunnelby_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diggersby_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
static const union AnimCmd sAnim_Fletchling_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_Fletchinder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonflame_1[] =
{
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
static const union AnimCmd sAnim_Scatterbug_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spewpa_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vivillon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
static const union AnimCmd sAnim_Litleo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyroar_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
static const union AnimCmd sAnim_Flabebe_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floette_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Florges_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
static const union AnimCmd sAnim_Skiddo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gogoat_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
static const union AnimCmd sAnim_Pancham_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pangoro_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
static const union AnimCmd sAnim_Furfrou_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
static const union AnimCmd sAnim_Espurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meowstic_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
static const union AnimCmd sAnim_Honedge_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doublade_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashShield_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashBlade_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
static const union AnimCmd sAnim_Spritzee_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aromatisse_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
static const union AnimCmd sAnim_Swirlix_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slurpuff_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
static const union AnimCmd sAnim_Inkay_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Malamar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
static const union AnimCmd sAnim_Binacle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barbaracle_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
static const union AnimCmd sAnim_Skrelp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragalge_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
static const union AnimCmd sAnim_Clauncher_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clawitzer_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
static const union AnimCmd sAnim_Helioptile_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heliolisk_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
static const union AnimCmd sAnim_Tyrunt_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrantrum_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
static const union AnimCmd sAnim_Amaura_1[] =
{
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
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aurorus_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
static const union AnimCmd sAnim_Hawlucha_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
static const union AnimCmd sAnim_Dedenne_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
static const union AnimCmd sAnim_Carbink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
static const union AnimCmd sAnim_Goomy_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sliggoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goodra_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SliggooHisuian);
PLACEHOLDER_ANIM_SINGLE_FRAME(GoodraHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
static const union AnimCmd sAnim_Klefki_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
static const union AnimCmd sAnim_Phantump_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trevenant_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
static const union AnimCmd sAnim_Pumpkaboo_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gourgeist_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
static const union AnimCmd sAnim_Bergmite_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Avalugg_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AvaluggHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
static const union AnimCmd sAnim_Noibat_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noivern_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
static const union AnimCmd sAnim_Xerneas_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
static const union AnimCmd sAnim_Yveltal_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
static const union AnimCmd sAnim_Zygarde50_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygarde10_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZygardeComplete_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
static const union AnimCmd sAnim_Diancie_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_MEGA_EVOLUTIONS
PLACEHOLDER_ANIM_SINGLE_FRAME(DiancieMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
static const union AnimCmd sAnim_HoopaConfined_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoopaUnbound_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
static const union AnimCmd sAnim_Volcanion_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLCANION

#if P_FAMILY_ROWLET
static const union AnimCmd sAnim_Rowlet_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dartrix_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Decidueye_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_HISUIAN_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DecidueyeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
PLACEHOLDER_ANIM_SINGLE_FRAME(Litten);
PLACEHOLDER_ANIM_SINGLE_FRAME(Torracat);
PLACEHOLDER_ANIM_SINGLE_FRAME(Incineroar);
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
PLACEHOLDER_ANIM_SINGLE_FRAME(Popplio);
PLACEHOLDER_ANIM_SINGLE_FRAME(Brionne);
PLACEHOLDER_ANIM_SINGLE_FRAME(Primarina);
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
static const union AnimCmd sAnim_Pikipek_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trumbeak_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucannon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Yungoos);
PLACEHOLDER_ANIM_SINGLE_FRAME(Gumshoos);
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
static const union AnimCmd sAnim_Grubbin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charjabug_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vikavolt_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
PLACEHOLDER_ANIM_SINGLE_FRAME(Crabrawler);
PLACEHOLDER_ANIM_SINGLE_FRAME(Crabominable);
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
PLACEHOLDER_ANIM_SINGLE_FRAME(Oricorio);
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
static const union AnimCmd sAnim_Cutiefly_1[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ribombee_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
static const union AnimCmd sAnim_Rockruff_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidday_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidnight_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocDusk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
PLACEHOLDER_ANIM_SINGLE_FRAME(WishiwashiSolo);
PLACEHOLDER_ANIM_SINGLE_FRAME(WishiwashiSchool);
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
PLACEHOLDER_ANIM_SINGLE_FRAME(Mareanie);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxapex);
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
PLACEHOLDER_ANIM_SINGLE_FRAME(Mudbray);
PLACEHOLDER_ANIM_SINGLE_FRAME(Mudsdale);
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
static const union AnimCmd sAnim_Dewpider_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Araquanid_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
PLACEHOLDER_ANIM_SINGLE_FRAME(Fomantis);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lurantis);
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
PLACEHOLDER_ANIM_SINGLE_FRAME(Morelull);
PLACEHOLDER_ANIM_SINGLE_FRAME(Shiinotic);
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
static const union AnimCmd sAnim_Salandit_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salazzle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
static const union AnimCmd sAnim_Stufful_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bewear_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
PLACEHOLDER_ANIM_SINGLE_FRAME(Bounsweet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Steenee);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tsareena);
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
PLACEHOLDER_ANIM_SINGLE_FRAME(Comfey);
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
static const union AnimCmd sAnim_Oranguru_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
static const union AnimCmd sAnim_Passimian_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
static const union AnimCmd sAnim_Wimpod_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golisopod_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
PLACEHOLDER_ANIM_SINGLE_FRAME(Sandygast);
PLACEHOLDER_ANIM_SINGLE_FRAME(Palossand);
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
static const union AnimCmd sAnim_Pyukumuku_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
PLACEHOLDER_ANIM_SINGLE_FRAME(TypeNull);
PLACEHOLDER_ANIM_SINGLE_FRAME(Silvally);
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_MINIOR
PLACEHOLDER_ANIM_SINGLE_FRAME(MiniorMeteor);
PLACEHOLDER_ANIM_SINGLE_FRAME(MiniorCore);
#endif //P_FAMILY_MINIOR

#if P_FAMILY_KOMALA
PLACEHOLDER_ANIM_SINGLE_FRAME(Komala);
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
static const union AnimCmd sAnim_Turtonator_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
static const union AnimCmd sAnim_Togedemaru_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
PLACEHOLDER_ANIM_SINGLE_FRAME(MimikyuDisguised);
PLACEHOLDER_ANIM_SINGLE_FRAME(MimikyuBusted);
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Bruxish);
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
static const union AnimCmd sAnim_Drampa_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
PLACEHOLDER_ANIM_SINGLE_FRAME(Dhelmise);
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
static const union AnimCmd sAnim_Jangmo_O_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hakamo_O_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kommo_O_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
static const union AnimCmd sAnim_TapuKoko_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
static const union AnimCmd sAnim_TapuLele_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
static const union AnimCmd sAnim_TapuBulu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
static const union AnimCmd sAnim_TapuFini_1[] =
{
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
PLACEHOLDER_ANIM_SINGLE_FRAME(Cosmog);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cosmoem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Solgaleo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lunala);
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Nihilego);
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Buzzwole);
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
PLACEHOLDER_ANIM_SINGLE_FRAME(Pheromosa);
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
PLACEHOLDER_ANIM_SINGLE_FRAME(Xurkitree);
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
PLACEHOLDER_ANIM_SINGLE_FRAME(Celesteela);
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
PLACEHOLDER_ANIM_SINGLE_FRAME(Kartana);
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
PLACEHOLDER_ANIM_SINGLE_FRAME(Guzzlord);
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
PLACEHOLDER_ANIM_SINGLE_FRAME(Necrozma);
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
PLACEHOLDER_ANIM_SINGLE_FRAME(Magearna);
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
static const union AnimCmd sAnim_Marshadow_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Poipole);
PLACEHOLDER_ANIM_SINGLE_FRAME(Naganadel);
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
PLACEHOLDER_ANIM_SINGLE_FRAME(Stakataka);
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
PLACEHOLDER_ANIM_SINGLE_FRAME(Blacephalon);
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
PLACEHOLDER_ANIM_SINGLE_FRAME(Zeraora);
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
PLACEHOLDER_ANIM_SINGLE_FRAME(Meltan);
PLACEHOLDER_ANIM_SINGLE_FRAME(Melmetal);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(MelmetalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#if P_FAMILY_GROOKEY
PLACEHOLDER_ANIM_SINGLE_FRAME(Grookey);
PLACEHOLDER_ANIM_SINGLE_FRAME(Thwackey);
PLACEHOLDER_ANIM_SINGLE_FRAME(Rillaboom);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(RillaboomGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
PLACEHOLDER_ANIM_SINGLE_FRAME(Scorbunny);
PLACEHOLDER_ANIM_SINGLE_FRAME(Raboot);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cinderace);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CinderaceGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Sobble);
PLACEHOLDER_ANIM_SINGLE_FRAME(Drizzile);
PLACEHOLDER_ANIM_SINGLE_FRAME(Inteleon);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(InteleonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
PLACEHOLDER_ANIM_SINGLE_FRAME(Skwovet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Greedent);
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
static const union AnimCmd sAnim_Rookidee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corvisquire_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corviknight_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CorviknightGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
PLACEHOLDER_ANIM_SINGLE_FRAME(Blipbug);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dottler);
PLACEHOLDER_ANIM_SINGLE_FRAME(Orbeetle);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(OrbeetleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
PLACEHOLDER_ANIM_SINGLE_FRAME(Nickit);
PLACEHOLDER_ANIM_SINGLE_FRAME(Thievul);
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
PLACEHOLDER_ANIM_SINGLE_FRAME(Gossifleur);
PLACEHOLDER_ANIM_SINGLE_FRAME(Eldegoss);
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
PLACEHOLDER_ANIM_SINGLE_FRAME(Wooloo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dubwool);
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
static const union AnimCmd sAnim_Chewtle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drednaw_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DrednawGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
PLACEHOLDER_ANIM_SINGLE_FRAME(Yamper);
PLACEHOLDER_ANIM_SINGLE_FRAME(Boltund);
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
PLACEHOLDER_ANIM_TWO_FRAMES(Rolycoly);
PLACEHOLDER_ANIM_TWO_FRAMES(Carkol);
PLACEHOLDER_ANIM_TWO_FRAMES(Coalossal);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CoalossalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
PLACEHOLDER_ANIM_TWO_FRAMES(Applin);
PLACEHOLDER_ANIM_TWO_FRAMES(Flapple);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(FlappleGigantamax);
#endif //P_GIGANTAMAX_FORMS

PLACEHOLDER_ANIM_TWO_FRAMES(Appletun);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AppletunGigantamax);
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Dipplin);
PLACEHOLDER_ANIM_SINGLE_FRAME(Hydrapple);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
PLACEHOLDER_ANIM_SINGLE_FRAME(Silicobra);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sandaconda);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(SandacondaGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
PLACEHOLDER_ANIM_SINGLE_FRAME(Cramorant);
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
PLACEHOLDER_ANIM_SINGLE_FRAME(Arrokuda);
PLACEHOLDER_ANIM_SINGLE_FRAME(Barraskewda);
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxel);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toxtricity);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(ToxtricityGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
static const union AnimCmd sAnim_Sizzlipede_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Centiskorch_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CentiskorchGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Clobbopus);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grapploct);
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
PLACEHOLDER_ANIM_SINGLE_FRAME(Sinistea);
PLACEHOLDER_ANIM_SINGLE_FRAME(Polteageist);
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
PLACEHOLDER_ANIM_SINGLE_FRAME(Hatenna);
PLACEHOLDER_ANIM_SINGLE_FRAME(Hattrem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Hatterene);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(HattereneGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
PLACEHOLDER_ANIM_SINGLE_FRAME(Impidimp);
PLACEHOLDER_ANIM_SINGLE_FRAME(Morgrem);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grimmsnarl);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(GrimmsnarlGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
PLACEHOLDER_ANIM_SINGLE_FRAME(Milcery);
PLACEHOLDER_ANIM_SINGLE_FRAME(Alcremie);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(AlcremieGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
PLACEHOLDER_ANIM_SINGLE_FRAME(Falinks);
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
PLACEHOLDER_ANIM_TWO_FRAMES(Pincurchin);
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
PLACEHOLDER_ANIM_SINGLE_FRAME(Snom);
PLACEHOLDER_ANIM_SINGLE_FRAME(Frosmoth);
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
PLACEHOLDER_ANIM_SINGLE_FRAME(Stonjourner);
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
PLACEHOLDER_ANIM_SINGLE_FRAME(Eiscue);
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
PLACEHOLDER_ANIM_SINGLE_FRAME(Indeedee);
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
PLACEHOLDER_ANIM_SINGLE_FRAME(Morpeko);
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
PLACEHOLDER_ANIM_SINGLE_FRAME(Cufant);
PLACEHOLDER_ANIM_SINGLE_FRAME(Copperajah);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(CopperajahGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
PLACEHOLDER_ANIM_SINGLE_FRAME(Dracozolt);
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctozolt);
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Dracovish);
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctovish);
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Duraludon);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(DuraludonGigantamax);
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
PLACEHOLDER_ANIM_SINGLE_FRAME(Archaludon);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
PLACEHOLDER_ANIM_SINGLE_FRAME(Dreepy);
PLACEHOLDER_ANIM_SINGLE_FRAME(Drakloak);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dragapult);
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
PLACEHOLDER_ANIM_SINGLE_FRAME(Zacian);
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
PLACEHOLDER_ANIM_SINGLE_FRAME(Zamazenta);
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Eternatus);
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
PLACEHOLDER_ANIM_SINGLE_FRAME(Kubfu);
PLACEHOLDER_ANIM_SINGLE_FRAME(Urshifu);

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(UrshifuSingleStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS

#if P_GIGANTAMAX_FORMS
PLACEHOLDER_ANIM_SINGLE_FRAME(UrshifuRapidStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU

#if P_FAMILY_ZARUDE
PLACEHOLDER_ANIM_SINGLE_FRAME(Zarude);
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
PLACEHOLDER_ANIM_SINGLE_FRAME(Regieleki);
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Regidrago);
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Glastrier);
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Spectrier);
#endif //P_FAMILY_SPECTRIER

#if P_FAMILY_CALYREX
PLACEHOLDER_ANIM_SINGLE_FRAME(Calyrex);
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
PLACEHOLDER_ANIM_SINGLE_FRAME(EnamorusIncarnate);
PLACEHOLDER_ANIM_SINGLE_FRAME(EnamorusTherian);
#endif //P_FAMILY_ENAMORUS

#if P_FAMILY_SPRIGATITO
PLACEHOLDER_ANIM_SINGLE_FRAME(Sprigatito);
PLACEHOLDER_ANIM_SINGLE_FRAME(Floragato);
PLACEHOLDER_ANIM_SINGLE_FRAME(Meowscarada);
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
PLACEHOLDER_ANIM_SINGLE_FRAME(Fuecoco);
PLACEHOLDER_ANIM_SINGLE_FRAME(Crocalor);
PLACEHOLDER_ANIM_SINGLE_FRAME(Skeledirge);
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaxly);
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaxwell);
PLACEHOLDER_ANIM_SINGLE_FRAME(Quaquaval);
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
PLACEHOLDER_ANIM_SINGLE_FRAME(Lechonk);
PLACEHOLDER_ANIM_SINGLE_FRAME(Oinkologne);
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
PLACEHOLDER_ANIM_SINGLE_FRAME(Tarountula);
PLACEHOLDER_ANIM_SINGLE_FRAME(Spidops);
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Nymble);
PLACEHOLDER_ANIM_SINGLE_FRAME(Lokix);
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmi);
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmo);
PLACEHOLDER_ANIM_SINGLE_FRAME(Pawmot);
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
PLACEHOLDER_ANIM_SINGLE_FRAME(Tandemaus);
PLACEHOLDER_ANIM_SINGLE_FRAME(Maushold);
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
PLACEHOLDER_ANIM_SINGLE_FRAME(Fidough);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dachsbun);
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
PLACEHOLDER_ANIM_SINGLE_FRAME(Smoliv);
PLACEHOLDER_ANIM_SINGLE_FRAME(Dolliv);
PLACEHOLDER_ANIM_SINGLE_FRAME(Arboliva);
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
PLACEHOLDER_ANIM_SINGLE_FRAME(Squawkabilly);
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
PLACEHOLDER_ANIM_SINGLE_FRAME(Nacli);
PLACEHOLDER_ANIM_SINGLE_FRAME(Naclstack);
PLACEHOLDER_ANIM_SINGLE_FRAME(Garganacl);
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
PLACEHOLDER_ANIM_SINGLE_FRAME(Charcadet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Armarouge);
PLACEHOLDER_ANIM_SINGLE_FRAME(Ceruledge);
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
PLACEHOLDER_ANIM_SINGLE_FRAME(Tadbulb);
PLACEHOLDER_ANIM_SINGLE_FRAME(Bellibolt);
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
PLACEHOLDER_ANIM_SINGLE_FRAME(Wattrel);
PLACEHOLDER_ANIM_SINGLE_FRAME(Kilowattrel);
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
PLACEHOLDER_ANIM_SINGLE_FRAME(Maschiff);
PLACEHOLDER_ANIM_SINGLE_FRAME(Mabosstiff);
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Shroodle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Grafaiai);
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
PLACEHOLDER_ANIM_SINGLE_FRAME(Bramblin);
PLACEHOLDER_ANIM_SINGLE_FRAME(Brambleghast);
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
PLACEHOLDER_ANIM_SINGLE_FRAME(Toedscool);
PLACEHOLDER_ANIM_SINGLE_FRAME(Toedscruel);
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
PLACEHOLDER_ANIM_SINGLE_FRAME(Klawf);
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
PLACEHOLDER_ANIM_SINGLE_FRAME(Capsakid);
PLACEHOLDER_ANIM_SINGLE_FRAME(Scovillain);
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
PLACEHOLDER_ANIM_SINGLE_FRAME(Rellor);
PLACEHOLDER_ANIM_SINGLE_FRAME(Rabsca);
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Flittle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Espathra);
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkatink);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkatuff);
PLACEHOLDER_ANIM_SINGLE_FRAME(Tinkaton);
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
PLACEHOLDER_ANIM_SINGLE_FRAME(Wiglett);
PLACEHOLDER_ANIM_SINGLE_FRAME(Wugtrio);
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
PLACEHOLDER_ANIM_SINGLE_FRAME(Bombirdier);
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
PLACEHOLDER_ANIM_SINGLE_FRAME(Finizen);
PLACEHOLDER_ANIM_SINGLE_FRAME(Palafin);
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
PLACEHOLDER_ANIM_SINGLE_FRAME(Varoom);
PLACEHOLDER_ANIM_SINGLE_FRAME(Revavroom);
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
PLACEHOLDER_ANIM_SINGLE_FRAME(Cyclizar);
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
PLACEHOLDER_ANIM_SINGLE_FRAME(Orthworm);
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
PLACEHOLDER_ANIM_SINGLE_FRAME(Glimmet);
PLACEHOLDER_ANIM_SINGLE_FRAME(Glimmora);
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
PLACEHOLDER_ANIM_SINGLE_FRAME(Greavard);
PLACEHOLDER_ANIM_SINGLE_FRAME(Houndstone);
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
PLACEHOLDER_ANIM_SINGLE_FRAME(Flamigo);
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
PLACEHOLDER_ANIM_SINGLE_FRAME(Cetoddle);
PLACEHOLDER_ANIM_SINGLE_FRAME(Cetitan);
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
PLACEHOLDER_ANIM_SINGLE_FRAME(Veluza);
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
PLACEHOLDER_ANIM_SINGLE_FRAME(Dondozo);
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
PLACEHOLDER_ANIM_SINGLE_FRAME(Tatsugiri);
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_GREAT_TUSK
PLACEHOLDER_ANIM_TWO_FRAMES(GreatTusk);
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
PLACEHOLDER_ANIM_SINGLE_FRAME(ScreamTail);
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_BRUTE_BONNET
PLACEHOLDER_ANIM_SINGLE_FRAME(BruteBonnet);
#endif //P_FAMILY_BRUTE_BONNET

#if P_FAMILY_FLUTTER_MANE
PLACEHOLDER_ANIM_SINGLE_FRAME(FlutterMane);
#endif //P_FAMILY_FLUTTER_MANE

#if P_FAMILY_SLITHER_WING
PLACEHOLDER_ANIM_SINGLE_FRAME(SlitherWing);
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
PLACEHOLDER_ANIM_SINGLE_FRAME(SandyShocks);
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_TREADS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronTreads);
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_BUNDLE
PLACEHOLDER_ANIM_SINGLE_FRAME(IronBundle);
#endif //P_FAMILY_IRON_BUNDLE

#if P_FAMILY_IRON_HANDS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronHands);
#endif //P_FAMILY_IRON_HANDS

#if P_FAMILY_IRON_JUGULIS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronJugulis);
#endif //P_FAMILY_IRON_JUGULIS

#if P_FAMILY_IRON_MOTH
PLACEHOLDER_ANIM_SINGLE_FRAME(IronMoth);
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
PLACEHOLDER_ANIM_SINGLE_FRAME(IronThorns);
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_FRIGIBAX
PLACEHOLDER_ANIM_TWO_FRAMES(Frigibax);
PLACEHOLDER_ANIM_SINGLE_FRAME(Arctibax);
PLACEHOLDER_ANIM_SINGLE_FRAME(Baxcalibur);
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_GIMMIGHOUL
PLACEHOLDER_ANIM_SINGLE_FRAME(Gimmighoul);
PLACEHOLDER_ANIM_SINGLE_FRAME(Gholdengo);
#endif //P_FAMILY_GIMMIGHOUL

#if P_FAMILY_WO_CHIEN
PLACEHOLDER_ANIM_SINGLE_FRAME(WoChien);
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
PLACEHOLDER_ANIM_SINGLE_FRAME(ChienPao);
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_TING_LU
PLACEHOLDER_ANIM_SINGLE_FRAME(TingLu);
#endif //P_FAMILY_TING_LU

#if P_FAMILY_CHI_YU
PLACEHOLDER_ANIM_SINGLE_FRAME(ChiYu);
#endif //P_FAMILY_CHI_YU

#if P_FAMILY_ROARING_MOON
PLACEHOLDER_ANIM_SINGLE_FRAME(RoaringMoon);
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_VALIANT
PLACEHOLDER_ANIM_SINGLE_FRAME(IronValiant);
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Koraidon);
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
PLACEHOLDER_ANIM_SINGLE_FRAME(Miraidon);
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
PLACEHOLDER_ANIM_SINGLE_FRAME(WalkingWake);
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
PLACEHOLDER_ANIM_SINGLE_FRAME(IronLeaves);
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_POLTCHAGEIST
PLACEHOLDER_ANIM_SINGLE_FRAME(Poltchageist);
PLACEHOLDER_ANIM_SINGLE_FRAME(Sinistcha);
#endif //P_FAMILY_POLTCHAGEIST

#if P_FAMILY_OKIDOGI
PLACEHOLDER_ANIM_SINGLE_FRAME(Okidogi);
#endif //P_FAMILY_OKIDOGI

#if P_FAMILY_MUNKIDORI
PLACEHOLDER_ANIM_SINGLE_FRAME(Munkidori);
#endif //P_FAMILY_MUNKIDORI

#if P_FAMILY_FEZANDIPITI
PLACEHOLDER_ANIM_SINGLE_FRAME(Fezandipiti);
#endif //P_FAMILY_FEZANDIPITI

#if P_FAMILY_OGERPON
PLACEHOLDER_ANIM_SINGLE_FRAME(Ogerpon);
#endif //P_FAMILY_OGERPON

#if P_FAMILY_GOUGING_FIRE
PLACEHOLDER_ANIM_SINGLE_FRAME(GougingFire);
#endif //P_FAMILY_GOUGING_FIRE

#if P_FAMILY_RAGING_BOLT
PLACEHOLDER_ANIM_SINGLE_FRAME(RagingBolt);
#endif //P_FAMILY_RAGING_BOLT

#if P_FAMILY_IRON_BOULDER
PLACEHOLDER_ANIM_SINGLE_FRAME(IronBoulder);
#endif //P_FAMILY_IRON_BOULDER

#if P_FAMILY_IRON_CROWN
PLACEHOLDER_ANIM_SINGLE_FRAME(IronCrown);
#endif //P_FAMILY_IRON_CROWN

#if P_FAMILY_TERAPAGOS
PLACEHOLDER_ANIM_SINGLE_FRAME(TerapagosNormal);
PLACEHOLDER_ANIM_SINGLE_FRAME(TerapagosTerastal);
PLACEHOLDER_ANIM_SINGLE_FRAME(TerapagosStellar);
#endif //P_FAMILY_TERAPAGOS

#if P_FAMILY_PECHARUNT
PLACEHOLDER_ANIM_SINGLE_FRAME(Pecharunt);
#endif //P_FAMILY_PECHARUNT

static const union AnimCmd sAnim_Egg_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

#define SINGLE_ANIMATION(name)                      \
static const union AnimCmd *const sAnims_##name[] = \
{                                                   \
    sAnim_GeneralFrame0,                            \
    sAnim_##name##_1,                               \
}


SINGLE_ANIMATION(None);
#if P_FAMILY_ARGOMON_F
SINGLE_ANIMATION(Argomon_f);
SINGLE_ANIMATION(Bombmon);
SINGLE_ANIMATION(Bommon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BommonMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(BommonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ARGOMON_F
#if P_FAMILY_BOTAMON
SINGLE_ANIMATION(Botamon);
SINGLE_ANIMATION(Chibickmon);
SINGLE_ANIMATION(Chibomon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(ChibomonMegaX);
SINGLE_ANIMATION(ChibomonMegaY);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(ChibomonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BOTAMON
#if P_FAMILY_CONOMON
SINGLE_ANIMATION(Conomon);
SINGLE_ANIMATION(Cotsucomon);
SINGLE_ANIMATION(Curimon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CurimonMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CurimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CONOMON
#if P_FAMILY_DATIRIMON
SINGLE_ANIMATION(Datirimon);
SINGLE_ANIMATION(Dodomon);
SINGLE_ANIMATION(Dokimon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DokimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DATIRIMON
#if P_FAMILY_FUFUMON
SINGLE_ANIMATION(Fufumon);
SINGLE_ANIMATION(Jyarimon);
SINGLE_ANIMATION(Keemon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(KeemonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FUFUMON
#if P_FAMILY_KETOMON
SINGLE_ANIMATION(Ketomon);
SINGLE_ANIMATION(Kuramon);
SINGLE_ANIMATION(Leafmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LeafmonMega);
#endif
#endif //P_FAMILY_KETOMON
#if P_FAMILY_CHOROMON
SINGLE_ANIMATION(Choromon);
SINGLE_ANIMATION(Mokumon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(ChoromonAlolan);
SINGLE_ANIMATION(MokumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CHOROMON
#if P_FAMILY_NYOKIMON
SINGLE_ANIMATION(Nyokimon);
SINGLE_ANIMATION(Pabumon);
#endif //P_FAMILY_NYOKIMON
#if P_FAMILY_PAFUMON
SINGLE_ANIMATION(Pafumon);
SINGLE_ANIMATION(Paomon);
#endif //P_FAMILY_PAFUMON
#if P_FAMILY_PETITMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Guilmon_x);
SINGLE_ANIMATION(Guilmon_xSpikyEared);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Petitmon);
#if P_COSPLAY_PETITMON_FORMS
SINGLE_ANIMATION(PetitmonCosplay);
SINGLE_ANIMATION(PetitmonRockStar);
SINGLE_ANIMATION(PetitmonBelle);
SINGLE_ANIMATION(PetitmonPopStar);
SINGLE_ANIMATION(PetitmonPhD);
SINGLE_ANIMATION(PetitmonLibre);
#endif //P_COSPLAY_PETITMON_FORMS
#if P_CAP_PETITMON_FORMS
SINGLE_ANIMATION(PetitmonOriginalCap);
SINGLE_ANIMATION(PetitmonHoennCap);
SINGLE_ANIMATION(PetitmonSinnohCap);
SINGLE_ANIMATION(PetitmonUnovaCap);
SINGLE_ANIMATION(PetitmonKalosCap);
SINGLE_ANIMATION(PetitmonAlolaCap);
SINGLE_ANIMATION(PetitmonPartnerCap);
SINGLE_ANIMATION(PetitmonWorldCap);
#endif //P_CAP_PETITMON_FORMS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(PetitmonGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Pichimon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(PichimonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PETITMON
#if P_FAMILY_POPOMON
SINGLE_ANIMATION(Popomon);
SINGLE_ANIMATION(Poyomon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(PopomonAlolan);
SINGLE_ANIMATION(PoyomonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_POPOMON
#if P_FAMILY_NIDORAN
SINGLE_ANIMATION(Punimon);
SINGLE_ANIMATION(Pupumon);
SINGLE_ANIMATION(Pururumon);
SINGLE_ANIMATION(Pusumon);
SINGLE_ANIMATION(Puttimon);
SINGLE_ANIMATION(Puwamon);
#endif //P_FAMILY_NIDORAN
#if P_FAMILY_PUYOMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Gumdramon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Puyomon);
SINGLE_ANIMATION(Pyonmon);
#endif //P_FAMILY_PUYOMON
#if P_FAMILY_RELEMON
SINGLE_ANIMATION(Relemon);
SINGLE_ANIMATION(Sakumon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(RelemonAlolan);
SINGLE_ANIMATION(SakumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RELEMON
#if P_FAMILY_SANDMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Hackmon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Sandmon);
SINGLE_ANIMATION(Tsubumon);
#endif //P_FAMILY_SANDMON
#if P_FAMILY_ICEBOTAMON
SINGLE_ANIMATION(Icebotamon);
SINGLE_ANIMATION(Yuramon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Gotsumon);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ICEBOTAMON
#if P_FAMILY_ZERIMON
SINGLE_ANIMATION(Zerimon);
SINGLE_ANIMATION(Zurumon);
SINGLE_ANIMATION(Arcadiamon_it);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Impmon_x);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZERIMON
#if P_FAMILY_ARGOMON_IT
SINGLE_ANIMATION(Argomon_it);
SINGLE_ANIMATION(Babydmon);
#endif //P_FAMILY_ARGOMON_IT
#if P_FAMILY_BIBIMON
SINGLE_ANIMATION(Bibimon);
SINGLE_ANIMATION(Bosamon);
#endif //P_FAMILY_BIBIMON
#if P_FAMILY_BUDMON
SINGLE_ANIMATION(Budmon);
SINGLE_ANIMATION(Bukamon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(BudmonAlolan);
SINGLE_ANIMATION(BukamonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_BUDMON
#if P_FAMILY_CALUMON
SINGLE_ANIMATION(Calumon);
SINGLE_ANIMATION(Chapmon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(CalumonAlolan);
SINGLE_ANIMATION(ChapmonAlolan);
#endif //P_ALOLAN_FORMS
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(CalumonGalarian);
SINGLE_ANIMATION(Perrserker);
#endif //P_GALARIAN_FORMS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CalumonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CALUMON
#if P_FAMILY_CHICCHIMON
SINGLE_ANIMATION(Chicchimon);
SINGLE_ANIMATION(Demmeramon);
#endif //P_FAMILY_CHICCHIMON
#if P_FAMILY_DEMIVEEMON
SINGLE_ANIMATION(Demiveemon);
SINGLE_ANIMATION(Dorimon);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Annihilape);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DEMIVEEMON
#if P_FAMILY_FRIMON
SINGLE_ANIMATION(Frimon);
SINGLE_ANIMATION(Gigimon);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(FrimonHisuian);
SINGLE_ANIMATION(GigimonHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FRIMON
#if P_FAMILY_GUMMYMON
SINGLE_ANIMATION(Gummymon);
SINGLE_ANIMATION(Gurimon);
SINGLE_ANIMATION(Hiyarimon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Kamemon);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_GUMMYMON
#if P_FAMILY_HOPMON
SINGLE_ANIMATION(Hopmon);
SINGLE_ANIMATION(Kakkinmon);
SINGLE_ANIMATION(Kapurimon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(KapurimonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOPMON
#if P_FAMILY_KOKOMON
SINGLE_ANIMATION(Kokomon);
SINGLE_ANIMATION(Koromon);
SINGLE_ANIMATION(Kozenimon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(KozenimonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KOKOMON
#if P_FAMILY_KYAROMON
SINGLE_ANIMATION(Kyaromon);
SINGLE_ANIMATION(Kyokyomon);
SINGLE_ANIMATION(Kyupimon);
#endif //P_FAMILY_KYAROMON
#if P_FAMILY_MINOMON
SINGLE_ANIMATION(Minomon);
SINGLE_ANIMATION(Missimon);
#endif //P_FAMILY_MINOMON
#if P_FAMILY_MONIMON
SINGLE_ANIMATION(Monimon);
SINGLE_ANIMATION(Moonmon);
SINGLE_ANIMATION(Motimon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(MonimonAlolan);
SINGLE_ANIMATION(MoonmonAlolan);
SINGLE_ANIMATION(MotimonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_MONIMON
#if P_FAMILY_NEGAMON
SINGLE_ANIMATION(Negamon);
SINGLE_ANIMATION(Nyaromon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(NegamonGalarian);
SINGLE_ANIMATION(NyaromonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_NEGAMON
#if P_FAMILY_PAGUMON
SINGLE_ANIMATION(Pagumon);
SINGLE_ANIMATION(Pickmon_silver);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Liollmon);
#endif //P_GEN_2_CROSS_EVOS
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(Pickmon_silverMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(PagumonGalarian);
SINGLE_ANIMATION(Pickmon_silverGalarian);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(LiollmonGalarian);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PAGUMON
#if P_FAMILY_PICKMON_WHITE
SINGLE_ANIMATION(Pickmon_white);
SINGLE_ANIMATION(Pickmon_red);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magnezone);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PICKMON_WHITE
#if P_FAMILY_PINAMON
SINGLE_ANIMATION(Pinamon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(PinamonGalarian);
SINGLE_ANIMATION(Sirfetchd);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PINAMON
#if P_FAMILY_POROMON
SINGLE_ANIMATION(Poromon);
SINGLE_ANIMATION(Puroromon);
#endif //P_FAMILY_POROMON
#if P_FAMILY_PUSURIMON
SINGLE_ANIMATION(Pusurimon);
SINGLE_ANIMATION(Puyoyomon);
#endif //P_FAMILY_PUSURIMON
#if P_FAMILY_SAKUTTOMON
SINGLE_ANIMATION(Sakuttomon);
SINGLE_ANIMATION(Sunmon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(SakuttomonAlolan);
SINGLE_ANIMATION(SunmonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SAKUTTOMON
#if P_FAMILY_TANEMON
SINGLE_ANIMATION(Tanemon);
SINGLE_ANIMATION(Tokomon);
#endif //P_FAMILY_TANEMON
#if P_FAMILY_TOKOMON_X
SINGLE_ANIMATION(Tokomon_x);
SINGLE_ANIMATION(Torballmon);
SINGLE_ANIMATION(Tsumemon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(TsumemonMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(TsumemonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOKOMON_X
#if P_FAMILY_TSUNOMON
SINGLE_ANIMATION(Tsunomon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Kodekacmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(KodekacmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_TSUNOMON
#if P_FAMILY_TUMBLEMON
SINGLE_ANIMATION(Tumblemon);
SINGLE_ANIMATION(Upamon);
#endif //P_FAMILY_TUMBLEMON
#if P_FAMILY_VIXIMON
SINGLE_ANIMATION(Viximon);
SINGLE_ANIMATION(Wanyamon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(WanyamonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_VIXIMON
#if P_FAMILY_XIAOMON
SINGLE_ANIMATION(Xiaomon);
SINGLE_ANIMATION(Yaamon);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(XiaomonHisuian);
SINGLE_ANIMATION(YaamonHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_XIAOMON
#if P_FAMILY_YOKOMON
SINGLE_ANIMATION(Yokomon);
SINGLE_ANIMATION(Agumon);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(AgumonAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_YOKOMON
#if P_FAMILY_AGUMON_06
SINGLE_ANIMATION(Agumon_06);
SINGLE_ANIMATION(Agumon_expert);
#if P_ALOLAN_FORMS
SINGLE_ANIMATION(Agumon_expertAlolan);
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_AGUMON_06
#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Salamon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Agumon_x);
SINGLE_ANIMATION(Angoramon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Salamon_x);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS
#if P_FAMILY_ARCADIAMON_ROOKIE
SINGLE_ANIMATION(Arcadiamon_rookie);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Lickilicky);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARCADIAMON_ROOKIE
#if P_FAMILY_ARGOMON_ROOKIE
SINGLE_ANIMATION(Argomon_rookie);
SINGLE_ANIMATION(Armadilmon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(ArmadilmonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARGOMON_ROOKIE
#if P_FAMILY_ARURAUMON
SINGLE_ANIMATION(Aruraumon);
SINGLE_ANIMATION(Bakomon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Rhyperior);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARURAUMON
#if P_FAMILY_BEARMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Happiny);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bearmon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Shoutmon);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BEARMON
#if P_FAMILY_BETAMON
SINGLE_ANIMATION(Betamon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Tangrowth);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BETAMON
#if P_FAMILY_BETAMON_X
SINGLE_ANIMATION(Betamon_x);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(Betamon_xMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BETAMON_X
#if P_FAMILY_BIYOMON
SINGLE_ANIMATION(Biyomon);
SINGLE_ANIMATION(Blkagumon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Psychemon);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BIYOMON
#if P_FAMILY_BLKAGUMON_X
SINGLE_ANIMATION(Blkagumon_x);
SINGLE_ANIMATION(Blkgabumon);
#endif //P_FAMILY_BLKAGUMON_X
#if P_FAMILY_BLKGUILMON
SINGLE_ANIMATION(Blkguilmon);
SINGLE_ANIMATION(Bokomon);
#endif //P_FAMILY_BLKGUILMON
#if P_FAMILY_BULUCOMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(MimeJr);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bulucomon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(BulucomonGalarian);
SINGLE_ANIMATION(MrRime);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_BULUCOMON
#if P_FAMILY_BURGERMON
SINGLE_ANIMATION(Burgermon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Monodramon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MonodramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Kleavor);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_BURGERMON
#if P_FAMILY_SAMUAGUMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Sangomon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Samuagumon);
#endif //P_FAMILY_SAMUAGUMON
#if P_FAMILY_CANDLEMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Santaagumon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Candlemon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Electivire);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CANDLEMON
#if P_FAMILY_CHIKURIMON
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Blktoyamon);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Chikurimon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magmortar);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CHIKURIMON
#if P_FAMILY_TYUTYUMON
SINGLE_ANIMATION(Tyutyumon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(TyutyumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYUTYUMON
#if P_FAMILY_CHUUMON
SINGLE_ANIMATION(Chuumon);
#if P_PALDEAN_FORMS
SINGLE_ANIMATION(ChuumonPaldean);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_CHUUMON
#if P_FAMILY_HAZYAGUMON
SINGLE_ANIMATION(Hazyagumon);
SINGLE_ANIMATION(Commdramon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CommdramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAZYAGUMON
#if P_FAMILY_CORONAMON
SINGLE_ANIMATION(Coronamon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CoronamonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CORONAMON
#if P_FAMILY_CRABMON
SINGLE_ANIMATION(Crabmon);
#endif //P_FAMILY_CRABMON
#if P_FAMILY_CRABMON_X
SINGLE_ANIMATION(Crabmon_x);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Crabmon_xGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Cutemon);
SINGLE_ANIMATION(Damemon);
SINGLE_ANIMATION(Demidevmon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Kunemon);
SINGLE_ANIMATION(Labramon);
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Leafeon);
SINGLE_ANIMATION(Glaceon);
#endif //P_GEN_4_CROSS_EVOS
#if P_GEN_6_CROSS_EVOS
SINGLE_ANIMATION(Sylveon);
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_CRABMON_X
#if P_FAMILY_DOKUNEMON
SINGLE_ANIMATION(Dokunemon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Renamon_x);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Dokunemon_Z);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_DOKUNEMON
#if P_FAMILY_DONDOKOMON
SINGLE_ANIMATION(Dondokomon);
SINGLE_ANIMATION(Dorumon);
#endif //P_FAMILY_DONDOKOMON
#if P_FAMILY_DOTAGUMON
SINGLE_ANIMATION(Dotagumon);
SINGLE_ANIMATION(Dotfalcmon);
#endif //P_FAMILY_DOTAGUMON
#if P_FAMILY_DRACMON
SINGLE_ANIMATION(Dracmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(DracmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRACMON
#if P_FAMILY_DRACOMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Munchlax);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Dracomon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DracomonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DRACOMON
#if P_FAMILY_DRACOMON_X
SINGLE_ANIMATION(Dracomon_x);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(Dracomon_xGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DRACOMON_X
#if P_FAMILY_EBIBURGMON
SINGLE_ANIMATION(Ebiburgmon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(EbiburgmonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EBIBURGMON
#if P_FAMILY_EKAKIMON
SINGLE_ANIMATION(Ekakimon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(EkakimonGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EKAKIMON
#if P_FAMILY_ELECMON
SINGLE_ANIMATION(Elecmon);
SINGLE_ANIMATION(Elecmon_violet);
SINGLE_ANIMATION(Espimon);
#endif //P_FAMILY_ELECMON
#if P_FAMILY_AGUMON_FAKE_EXPERT
SINGLE_ANIMATION(Agumon_fake_expert);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(Agumon_fake_expertMegaX);
SINGLE_ANIMATION(Agumon_fake_expertMegaY);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AGUMON_FAKE_EXPERT
#if P_FAMILY_FALCOMON
SINGLE_ANIMATION(Falcomon);
#endif //P_FAMILY_FALCOMON
#if P_FAMILY_FALCOMON_06
SINGLE_ANIMATION(Falcomon_06);
SINGLE_ANIMATION(Fanbeemon);
SINGLE_ANIMATION(Flamemon);
#endif //P_FAMILY_FALCOMON_06
#if P_FAMILY_FLORAMON
SINGLE_ANIMATION(Floramon);
SINGLE_ANIMATION(Gabumon);
SINGLE_ANIMATION(Gabumon_x);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(Gabumon_xHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FLORAMON
#if P_FAMILY_GAMMAMON
SINGLE_ANIMATION(Gammamon);
SINGLE_ANIMATION(Gaomon);
SINGLE_ANIMATION(Gaossmon);
#endif //P_FAMILY_GAMMAMON
#if P_FAMILY_GAZIMON
SINGLE_ANIMATION(Gazimon);
SINGLE_ANIMATION(Gazimon_x);
#endif //P_FAMILY_GAZIMON
#if P_FAMILY_GHOSTMON
SINGLE_ANIMATION(Ghostmon);
SINGLE_ANIMATION(Gizamon);
#endif //P_FAMILY_GHOSTMON
#if P_FAMILY_GIZUMON
SINGLE_ANIMATION(Gizumon);
SINGLE_ANIMATION(Goblimon);
#endif //P_FAMILY_GIZUMON
#if P_FAMILY_GOMAMON
SINGLE_ANIMATION(Gomamon);
SINGLE_ANIMATION(Gomamon_x);
#endif //P_FAMILY_GOMAMON
#if P_FAMILY_GOTSUMON_X
SINGLE_ANIMATION(Gotsumon_x);
SINGLE_ANIMATION(Guilmon);
#endif //P_FAMILY_GOTSUMON_X
#if P_FAMILY_HAGURUMON
SINGLE_ANIMATION(Hagurumon);
SINGLE_ANIMATION(Hagurumon_x);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Togekiss);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_HAGURUMON
#if P_FAMILY_HAWKMON
SINGLE_ANIMATION(Hawkmon);
SINGLE_ANIMATION(Herissmon);
#endif //P_FAMILY_HAWKMON
#if P_FAMILY_HYOKOMON
SINGLE_ANIMATION(Hyokomon);
SINGLE_ANIMATION(Ignitemon);
SINGLE_ANIMATION(Impmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(ImpmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HYOKOMON
#if P_FAMILY_JAZAMON
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Biostegmon);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Jazamon);
SINGLE_ANIMATION(Jellymon);
#endif //P_FAMILY_JAZAMON
#if P_FAMILY_JUNKMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bonsly);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Junkmon);
#endif //P_FAMILY_JUNKMON
#if P_FAMILY_KERAMON
SINGLE_ANIMATION(Keramon);
SINGLE_ANIMATION(Keramon_x);
SINGLE_ANIMATION(Kodokgumon);
#endif //P_FAMILY_KERAMON
#if P_FAMILY_KOKABUIMON
SINGLE_ANIMATION(Kokabuimon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Ambipom);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOKABUIMON
#if P_FAMILY_KOKUWAMON
SINGLE_ANIMATION(Kokuwamon);
SINGLE_ANIMATION(Kokuwamon_x);
#endif //P_FAMILY_KOKUWAMON
#if P_FAMILY_KOTEMON
SINGLE_ANIMATION(Kotemon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Yanmega);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOTEMON
#if P_FAMILY_KUDAMON
SINGLE_ANIMATION(Kudamon);
SINGLE_ANIMATION(Kudamon_06);
#if P_PALDEAN_FORMS
SINGLE_ANIMATION(KudamonPaldean);
SINGLE_ANIMATION(Clodsire);
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_KUDAMON
#if P_FAMILY_LALAMON
SINGLE_ANIMATION(Lalamon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Honchkrow);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LALAMON
#if P_FAMILY_LOOGAMON
SINGLE_ANIMATION(Loogamon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mismagius);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LOOGAMON
#if P_FAMILY_LOPMON
SINGLE_ANIMATION(Lopmon);
#endif //P_FAMILY_LOPMON
#if P_FAMILY_LOPMONX
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Wynaut);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Lopmonx);
#endif //P_FAMILY_LOPMONX
#if P_FAMILY_LUCEMON
SINGLE_ANIMATION(Lucemon);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Farigiraf);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUCEMON
#if P_FAMILY_PINECO
SINGLE_ANIMATION(Pineco);
SINGLE_ANIMATION(Forretress);
#endif //P_FAMILY_PINECO
#if P_FAMILY_LUXMON
SINGLE_ANIMATION(Luxmon);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Dudunsparce);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUXMON
#if P_FAMILY_METABEE
SINGLE_ANIMATION(Metabee);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gliscor);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_METABEE
#if P_FAMILY_MODBETAMON
SINGLE_ANIMATION(Modbetamon);
SINGLE_ANIMATION(Monitamon);
#endif //P_FAMILY_MODBETAMON
#if P_FAMILY_MONMON
SINGLE_ANIMATION(Monmon);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(MonmonHisuian);
SINGLE_ANIMATION(Overqwil);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MONMON
#if P_FAMILY_MORPHOMON
SINGLE_ANIMATION(Morphomon);
#endif //P_FAMILY_MORPHOMON
#if P_FAMILY_MUCHOMON
SINGLE_ANIMATION(Muchomon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MuchomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUCHOMON
#if P_FAMILY_MUSHROOMON
SINGLE_ANIMATION(Mushroomon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Weavile);
#endif //P_GEN_4_CROSS_EVOS
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(MushroomonHisuian);
SINGLE_ANIMATION(Sneasler);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MUSHROOMON
#if P_FAMILY_NEEMON
SINGLE_ANIMATION(Neemon);
SINGLE_ANIMATION(Otamamon);
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Ursaluna);
SINGLE_ANIMATION(UrsalunaBloodmoon);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_NEEMON
#if P_FAMILY_OTAMAMON_RED
SINGLE_ANIMATION(Otamamon_red);
SINGLE_ANIMATION(Otamamon_x);
#endif //P_FAMILY_OTAMAMON_RED
#if P_FAMILY_PALMON
SINGLE_ANIMATION(Palmon);
SINGLE_ANIMATION(Palmon_x);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mamoswine);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PALMON
#if P_FAMILY_PATAMON
SINGLE_ANIMATION(Patamon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(PatamonGalarian);
SINGLE_ANIMATION(Cursola);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PATAMON
#if P_FAMILY_PAWNMON_BLACK
SINGLE_ANIMATION(Pawnmon_black);
SINGLE_ANIMATION(Pawnmon_white);
#endif //P_FAMILY_PAWNMON_BLACK
#if P_FAMILY_PENGUINMON
SINGLE_ANIMATION(Penguinmon);
#endif //P_FAMILY_PENGUINMON
#if P_FAMILY_PETITMAMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mantyke);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Petitmamon);
#endif //P_FAMILY_PETITMAMON
#if P_FAMILY_PHASCOMON
SINGLE_ANIMATION(Phascomon);
#endif //P_FAMILY_PHASCOMON
#if P_FAMILY_PILLOMON
SINGLE_ANIMATION(Pillomon);
SINGLE_ANIMATION(Pomumon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(PomumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PILLOMON
#if P_FAMILY_PULSEMON
SINGLE_ANIMATION(Pulsemon);
SINGLE_ANIMATION(Renamon);
#endif //P_FAMILY_PULSEMON
#if P_FAMILY_ROKUSHO
SINGLE_ANIMATION(Rokusho);
#if P_GEN_8_CROSS_EVOS
SINGLE_ANIMATION(Wyrdeer);
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_ROKUSHO
#if P_FAMILY_RYUDAMON
SINGLE_ANIMATION(Ryudamon);
#endif //P_FAMILY_RYUDAMON
#if P_FAMILY_SHAMANMON
SINGLE_ANIMATION(Shamanmon);
#endif //P_FAMILY_SHAMANMON
#if P_FAMILY_YUKIAGUMON
SINGLE_ANIMATION(Yukiagumon);
#endif //P_FAMILY_YUKIAGUMON
#if P_FAMILY_YUKIAGUMON_06
SINGLE_ANIMATION(Yukiagumon_06);
#endif //P_FAMILY_YUKIAGUMON_06
#if P_FAMILY_ICEGOBIMON
SINGLE_ANIMATION(Icegobimon);
#endif //P_FAMILY_ICEGOBIMON
#if P_FAMILY_SOLARMON
SINGLE_ANIMATION(Solarmon);
SINGLE_ANIMATION(Sounbrdmon);
SINGLE_ANIMATION(Spadamon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SpadamonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SOLARMON
#if P_FAMILY_SPARROWMON
SINGLE_ANIMATION(Sparrowmon);
#endif //P_FAMILY_SPARROWMON
#if P_FAMILY_STARMON_2010
SINGLE_ANIMATION(Starmon_2010);
#endif //P_FAMILY_STARMON_2010
#if P_FAMILY_STRABIMON
SINGLE_ANIMATION(Strabimon);
#endif //P_FAMILY_STRABIMON
#if P_FAMILY_SUNARZAMON
SINGLE_ANIMATION(Sunarzamon);
SINGLE_ANIMATION(Swimmon);
SINGLE_ANIMATION(Syakomon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SyakomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SUNARZAMON
#if P_FAMILY_SYAKOMON_X
SINGLE_ANIMATION(Syakomon_x);
SINGLE_ANIMATION(Tapirmon);
SINGLE_ANIMATION(Tentomon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(TentomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SYAKOMON_X
#if P_FAMILY_TERRIERMON
SINGLE_ANIMATION(Terriermon);
SINGLE_ANIMATION(Terriermon_assistant);
SINGLE_ANIMATION(Terriermon_x);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(Terriermon_xMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TERRIERMON
#if P_FAMILY_TINKERMON
SINGLE_ANIMATION(Tinkermon);
SINGLE_ANIMATION(Tinpet);
#endif //P_FAMILY_TINKERMON
#if P_FAMILY_TOYAGUMON
SINGLE_ANIMATION(Toyagumon);
SINGLE_ANIMATION(Tsukaimon);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(ToyagumonGalarian);
SINGLE_ANIMATION(TsukaimonGalarian);
SINGLE_ANIMATION(Obstagoon);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_TOYAGUMON
#if P_FAMILY_VEEMON
SINGLE_ANIMATION(Veemon);
SINGLE_ANIMATION(Vemmon);
SINGLE_ANIMATION(Vorvomon);
SINGLE_ANIMATION(Wormmon);
SINGLE_ANIMATION(Zenimon);
#endif //P_FAMILY_VEEMON
#if P_FAMILY_ZUBAMON
SINGLE_ANIMATION(Zubamon);
SINGLE_ANIMATION(Aegiomon);
SINGLE_ANIMATION(Ludicolo);
#endif //P_FAMILY_ZUBAMON
#if P_FAMILY_AIRDRAMON
SINGLE_ANIMATION(Airdramon);
SINGLE_ANIMATION(Akatorimon);
SINGLE_ANIMATION(Allomon);
#endif //P_FAMILY_AIRDRAMON
#if P_FAMILY_ALLOMON_X
SINGLE_ANIMATION(Allomon_x);
SINGLE_ANIMATION(Angelamon);
#endif //P_FAMILY_ALLOMON_X
#if P_FAMILY_ANGEMON
SINGLE_ANIMATION(Angemon);
SINGLE_ANIMATION(Ankylomon);
#endif //P_FAMILY_ANGEMON
#if P_FAMILY_APEMON
SINGLE_ANIMATION(Apemon);
SINGLE_ANIMATION(Aquilamon);
SINGLE_ANIMATION(Arcadiamon_champion);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(Arcadiamon_championMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gallade);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GalladeMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_APEMON
#if P_FAMILY_ARCHELOMON
SINGLE_ANIMATION(Archelomon);
SINGLE_ANIMATION(Argomon_champion);
#endif //P_FAMILY_ARCHELOMON
#if P_FAMILY_ARESDRAMON
SINGLE_ANIMATION(Aresdramon);
SINGLE_ANIMATION(Atamademon);
#endif //P_FAMILY_ARESDRAMON
#if P_FAMILY_AURUMON
SINGLE_ANIMATION(Aurumon);
SINGLE_ANIMATION(Axemon);
SINGLE_ANIMATION(Baboonmon);
#endif //P_FAMILY_AURUMON
#if P_FAMILY_BAKEMON
SINGLE_ANIMATION(Bakemon);
SINGLE_ANIMATION(Balistamon);
SINGLE_ANIMATION(Baluchimon);
#endif //P_FAMILY_BAKEMON
#if P_FAMILY_BAOHUCKMON
SINGLE_ANIMATION(Baohuckmon);
SINGLE_ANIMATION(Baromon);
SINGLE_ANIMATION(Trailmon_battle_armament);
#endif //P_FAMILY_BAOHUCKMON
#if P_FAMILY_BETGAMAMON
SINGLE_ANIMATION(Betgamamon);
SINGLE_ANIMATION(Bioquetmon);
#endif //P_FAMILY_BETGAMAMON
#if P_FAMILY_BIOTHUNMON
SINGLE_ANIMATION(Biothunmon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Probopass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BIOTHUNMON
#if P_FAMILY_BIRDRAMON
SINGLE_ANIMATION(Birdramon);
SINGLE_ANIMATION(Blgaogamon);
#endif //P_FAMILY_BIRDRAMON
#if P_FAMILY_BLGARGOMON
SINGLE_ANIMATION(Blgargomon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlgargomonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARGOMON
#if P_FAMILY_BLGARURMON
SINGLE_ANIMATION(Blgarurmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlgarurmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLGARURMON
#if P_FAMILY_BLKGATOMON
SINGLE_ANIMATION(Blkgatomon);
SINGLE_ANIMATION(Blkgatomon_uver);
SINGLE_ANIMATION(Blgrowlmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlgrowlmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BLKGATOMON
#if P_FAMILY_SAWKUWAMON
SINGLE_ANIMATION(Sawkuwamon);
SINGLE_ANIMATION(Blimpmon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BlimpmonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SAWKUWAMON
#if P_FAMILY_BOARMON
SINGLE_ANIMATION(Boarmon);
SINGLE_ANIMATION(Bomnanimon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BomnanimonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BOARMON
#if P_FAMILY_BOOGIEMON
SINGLE_ANIMATION(Boogiemon);
#endif //P_FAMILY_BOOGIEMON
#if P_FAMILY_BUCCHIEMON_RED
SINGLE_ANIMATION(Bucchiemon_red);
#endif //P_FAMILY_BUCCHIEMON_RED
#if P_FAMILY_BUCCHIEMON_GREEN_BULKMON
SINGLE_ANIMATION(Bucchiemon_green);
SINGLE_ANIMATION(Bulkmon);
#endif //P_FAMILY_BUCCHIEMON_GREEN_BULKMON
#if P_FAMILY_BULLMON
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Budew);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bullmon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Roserade);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BULLMON
#if P_FAMILY_BURAIMON
SINGLE_ANIMATION(Buraimon);
SINGLE_ANIMATION(Burgermon_champion);
#endif //P_FAMILY_BURAIMON
#if P_FAMILY_CHOUMON
SINGLE_ANIMATION(Choumon);
SINGLE_ANIMATION(Centarumon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CentarumonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHOUMON
#if P_FAMILY_CHAMBLEMON
SINGLE_ANIMATION(Chamblemon);
SINGLE_ANIMATION(Chamelemon);
#endif //P_FAMILY_CHAMBLEMON
#if P_FAMILY_CHRYSALMON
SINGLE_ANIMATION(Chrysalmon);
SINGLE_ANIMATION(Citramon);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(CitramonMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHRYSALMON
#if P_FAMILY_CLOCKMON
SINGLE_ANIMATION(Clockmon);
#endif //P_FAMILY_CLOCKMON
#if P_FAMILY_CLOCKMON_FUSION
SINGLE_ANIMATION(Clockmon_fusion);
SINGLE_ANIMATION(Coelamon);
#endif //P_FAMILY_CLOCKMON_FUSION
#if P_FAMILY_COREDRAMON_BLUE
SINGLE_ANIMATION(Coredramon_blue);
#endif //P_FAMILY_COREDRAMON_BLUE
#if P_FAMILY_TRAPINCH
SINGLE_ANIMATION(Trapinch);
SINGLE_ANIMATION(Vibrava);
SINGLE_ANIMATION(Flygon);
#endif //P_FAMILY_TRAPINCH
#if P_FAMILY_CACNEA
SINGLE_ANIMATION(Cacnea);
SINGLE_ANIMATION(Cacturne);
#endif //P_FAMILY_CACNEA
#if P_FAMILY_SWABLU
SINGLE_ANIMATION(Swablu);
SINGLE_ANIMATION(Altaria);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AltariaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU
#if P_FAMILY_ZANGOOSE
SINGLE_ANIMATION(Zangoose);
#endif //P_FAMILY_ZANGOOSE
#if P_FAMILY_SEVIPER
SINGLE_ANIMATION(Seviper);
#endif //P_FAMILY_SEVIPER
#if P_FAMILY_LUNATONE
SINGLE_ANIMATION(Lunatone);
#endif //P_FAMILY_LUNATONE
#if P_FAMILY_SOLROCK
SINGLE_ANIMATION(Solrock);
#endif //P_FAMILY_SOLROCK
#if P_FAMILY_BARBOACH
SINGLE_ANIMATION(Barboach);
SINGLE_ANIMATION(Whiscash);
#endif //P_FAMILY_BARBOACH
#if P_FAMILY_CORPHISH
SINGLE_ANIMATION(Corphish);
SINGLE_ANIMATION(Crawdaunt);
#endif //P_FAMILY_CORPHISH
#if P_FAMILY_BALTOY
SINGLE_ANIMATION(Baltoy);
SINGLE_ANIMATION(Claydol);
#endif //P_FAMILY_BALTOY
#if P_FAMILY_LILEEP
SINGLE_ANIMATION(Lileep);
SINGLE_ANIMATION(Cradily);
#endif //P_FAMILY_LILEEP
#if P_FAMILY_ANORITH
SINGLE_ANIMATION(Anorith);
SINGLE_ANIMATION(Armaldo);
#endif //P_FAMILY_ANORITH
#if P_FAMILY_FEEBAS
SINGLE_ANIMATION(Feebas);
SINGLE_ANIMATION(Milotic);
#endif //P_FAMILY_FEEBAS
#if P_FAMILY_CASTFORM
SINGLE_ANIMATION(CastformNormal);
SINGLE_ANIMATION(CastformSunny);
SINGLE_ANIMATION(CastformRainy);
SINGLE_ANIMATION(CastformSnowy);
#endif //P_FAMILY_CASTFORM
#if P_FAMILY_KECLEON
SINGLE_ANIMATION(Kecleon);
#endif //P_FAMILY_KECLEON
#if P_FAMILY_SHUPPET
SINGLE_ANIMATION(Shuppet);
SINGLE_ANIMATION(Banette);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(BanetteMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET
#if P_FAMILY_DUSKULL
SINGLE_ANIMATION(Duskull);
SINGLE_ANIMATION(Dusclops);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Dusknoir);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL
#if P_FAMILY_TROPIUS
SINGLE_ANIMATION(Tropius);
#endif //P_FAMILY_TROPIUS
#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chingling);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chimecho);
#endif //P_FAMILY_CHIMECHO
#if P_FAMILY_ABSOL
SINGLE_ANIMATION(Absol);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AbsolMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL
#if P_FAMILY_SNORUNT
SINGLE_ANIMATION(Snorunt);
SINGLE_ANIMATION(Glalie);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GlalieMega);
#endif //P_MEGA_EVOLUTIONS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Froslass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT
#if P_FAMILY_SPHEAL
SINGLE_ANIMATION(Spheal);
SINGLE_ANIMATION(Sealeo);
SINGLE_ANIMATION(Walrein);
#endif //P_FAMILY_SPHEAL
#if P_FAMILY_CLAMPERL
SINGLE_ANIMATION(Clamperl);
SINGLE_ANIMATION(Huntail);
SINGLE_ANIMATION(Gorebyss);
#endif //P_FAMILY_CLAMPERL
#if P_FAMILY_RELICANTH
SINGLE_ANIMATION(Relicanth);
#endif //P_FAMILY_RELICANTH
#if P_FAMILY_LUVDISC
SINGLE_ANIMATION(Luvdisc);
#endif //P_FAMILY_LUVDISC
#if P_FAMILY_BAGON
SINGLE_ANIMATION(Bagon);
SINGLE_ANIMATION(Shelgon);
SINGLE_ANIMATION(Salamence);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(SalamenceMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON
#if P_FAMILY_BELDUM
SINGLE_ANIMATION(Beldum);
SINGLE_ANIMATION(Metang);
SINGLE_ANIMATION(Metagross);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(MetagrossMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM
#if P_FAMILY_REGIROCK
SINGLE_ANIMATION(Regirock);
#endif //P_FAMILY_REGIROCK
#if P_FAMILY_REGICE
SINGLE_ANIMATION(Regice);
#endif //P_FAMILY_REGICE
#if P_FAMILY_REGISTEEL
SINGLE_ANIMATION(Registeel);
#endif //P_FAMILY_REGISTEEL
#if P_FAMILY_LATIAS
SINGLE_ANIMATION(Latias);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LatiasMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS
#if P_FAMILY_LATIOS
SINGLE_ANIMATION(Latios);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LatiosMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS
#if P_FAMILY_KYOGRE
SINGLE_ANIMATION(Kyogre);
#if P_PRIMAL_REVERSIONS
SINGLE_ANIMATION(KyogrePrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE
#if P_FAMILY_GROUDON
SINGLE_ANIMATION(Groudon);
#if P_PRIMAL_REVERSIONS
SINGLE_ANIMATION(GroudonPrimal);
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON
#if P_FAMILY_RAYQUAZA
SINGLE_ANIMATION(Rayquaza);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(RayquazaMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA
#if P_FAMILY_JIRACHI
SINGLE_ANIMATION(Jirachi);
#endif //P_FAMILY_JIRACHI
#if P_FAMILY_DEOXYS
SINGLE_ANIMATION(DeoxysNormal);
SINGLE_ANIMATION(DeoxysAttack);
SINGLE_ANIMATION(DeoxysDefense);
SINGLE_ANIMATION(DeoxysSpeed);
#endif //P_FAMILY_DEOXYS
#if P_FAMILY_TURTWIG
SINGLE_ANIMATION(Turtwig);
SINGLE_ANIMATION(Grotle);
SINGLE_ANIMATION(Torterra);
#endif //P_FAMILY_TURTWIG
#if P_FAMILY_CHIMCHAR
SINGLE_ANIMATION(Chimchar);
SINGLE_ANIMATION(Monferno);
SINGLE_ANIMATION(Infernape);
#endif //P_FAMILY_CHIMCHAR
#if P_FAMILY_PIPLUP
SINGLE_ANIMATION(Piplup);
SINGLE_ANIMATION(Prinplup);
SINGLE_ANIMATION(Empoleon);
#endif //P_FAMILY_PIPLUP
#if P_FAMILY_STARLY
SINGLE_ANIMATION(Starly);
SINGLE_ANIMATION(Staravia);
SINGLE_ANIMATION(Staraptor);
#endif //P_FAMILY_STARLY
#if P_FAMILY_BIDOOF
SINGLE_ANIMATION(Bidoof);
SINGLE_ANIMATION(Bibarel);
#endif //P_FAMILY_BIDOOF
#if P_FAMILY_KRICKETOT
SINGLE_ANIMATION(Kricketot);
SINGLE_ANIMATION(Kricketune);
#endif //P_FAMILY_KRICKETOT
#if P_FAMILY_SHINX
SINGLE_ANIMATION(Shinx);
SINGLE_ANIMATION(Luxio);
SINGLE_ANIMATION(Luxray);
#endif //P_FAMILY_SHINX
#if P_FAMILY_CRANIDOS
SINGLE_ANIMATION(Cranidos);
SINGLE_ANIMATION(Rampardos);
#endif //P_FAMILY_CRANIDOS
#if P_FAMILY_SHIELDON
SINGLE_ANIMATION(Shieldon);
SINGLE_ANIMATION(Bastiodon);
#endif //P_FAMILY_SHIELDON
#if P_FAMILY_BURMY
SINGLE_ANIMATION(Burmy);
SINGLE_ANIMATION(Wormadam);
SINGLE_ANIMATION(Mothim);
#endif //P_FAMILY_BURMY
#if P_FAMILY_COMBEE
SINGLE_ANIMATION(Combee);
SINGLE_ANIMATION(Vespiquen);
#endif //P_FAMILY_COMBEE
#if P_FAMILY_PACHIRISU
SINGLE_ANIMATION(Pachirisu);
#endif //P_FAMILY_PACHIRISU
#if P_FAMILY_BUIZEL
SINGLE_ANIMATION(Buizel);
SINGLE_ANIMATION(Floatzel);
#endif //P_FAMILY_BUIZEL
#if P_FAMILY_CHERUBI
SINGLE_ANIMATION(Cherubi);
SINGLE_ANIMATION(CherrimOvercast);
SINGLE_ANIMATION(CherrimSunshine);
#endif //P_FAMILY_CHERUBI
#if P_FAMILY_SHELLOS
SINGLE_ANIMATION(Shellos);
SINGLE_ANIMATION(Gastrodon);
#endif //P_FAMILY_SHELLOS
#if P_FAMILY_DRIFLOON
SINGLE_ANIMATION(Drifloon);
SINGLE_ANIMATION(Drifblim);
#endif //P_FAMILY_DRIFLOON
#if P_FAMILY_BUNEARY
SINGLE_ANIMATION(Buneary);
SINGLE_ANIMATION(Lopunny);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LopunnyMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY
#if P_FAMILY_GLAMEOW
SINGLE_ANIMATION(Glameow);
SINGLE_ANIMATION(Purugly);
#endif //P_FAMILY_GLAMEOW
#if P_FAMILY_STUNKY
SINGLE_ANIMATION(Stunky);
SINGLE_ANIMATION(Skuntank);
#endif //P_FAMILY_STUNKY
#if P_FAMILY_BRONZOR
SINGLE_ANIMATION(Bronzor);
SINGLE_ANIMATION(Bronzong);
#endif //P_FAMILY_BRONZOR
#if P_FAMILY_CHATOT
SINGLE_ANIMATION(Chatot);
#endif //P_FAMILY_CHATOT
#if P_FAMILY_SPIRITOMB
SINGLE_ANIMATION(Spiritomb);
#endif //P_FAMILY_SPIRITOMB
#if P_FAMILY_GIBLE
SINGLE_ANIMATION(Gible);
SINGLE_ANIMATION(Gabite);
SINGLE_ANIMATION(Garchomp);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(GarchompMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE
#if P_FAMILY_RIOLU
SINGLE_ANIMATION(Riolu);
SINGLE_ANIMATION(Lucario);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(LucarioMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU
#if P_FAMILY_HIPPOPOTAS
SINGLE_ANIMATION(Hippopotas);
SINGLE_ANIMATION(Hippowdon);
#endif //P_FAMILY_HIPPOPOTAS
#if P_FAMILY_SKORUPI
SINGLE_ANIMATION(Skorupi);
SINGLE_ANIMATION(Drapion);
#endif //P_FAMILY_SKORUPI
#if P_FAMILY_CROAGUNK
SINGLE_ANIMATION(Croagunk);
SINGLE_ANIMATION(Toxicroak);
#endif //P_FAMILY_CROAGUNK
#if P_FAMILY_CARNIVINE
SINGLE_ANIMATION(Carnivine);
#endif //P_FAMILY_CARNIVINE
#if P_FAMILY_FINNEON
SINGLE_ANIMATION(Finneon);
SINGLE_ANIMATION(Lumineon);
#endif //P_FAMILY_FINNEON
#if P_FAMILY_SNOVER
SINGLE_ANIMATION(Snover);
SINGLE_ANIMATION(Abomasnow);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AbomasnowMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER
#if P_FAMILY_ROTOM
SINGLE_ANIMATION(Rotom);
SINGLE_ANIMATION(RotomHeat);
SINGLE_ANIMATION(RotomWash);
SINGLE_ANIMATION(RotomFrost);
SINGLE_ANIMATION(RotomFan);
SINGLE_ANIMATION(RotomMow);
#endif //P_FAMILY_ROTOM
#if P_FAMILY_UXIE
SINGLE_ANIMATION(Uxie);
#endif //P_FAMILY_UXIE
#if P_FAMILY_MESPRIT
SINGLE_ANIMATION(Mesprit);
#endif //P_FAMILY_MESPRIT
#if P_FAMILY_AZELF
SINGLE_ANIMATION(Azelf);
#endif //P_FAMILY_AZELF
#if P_FAMILY_DIALGA
SINGLE_ANIMATION(Dialga);
SINGLE_ANIMATION(DialgaOrigin);
#endif //P_FAMILY_DIALGA
#if P_FAMILY_PALKIA
SINGLE_ANIMATION(Palkia);
SINGLE_ANIMATION(PalkiaOrigin);
#endif //P_FAMILY_PALKIA
#if P_FAMILY_HEATRAN
SINGLE_ANIMATION(Heatran);
#endif //P_FAMILY_HEATRAN
#if P_FAMILY_REGIGIGAS
SINGLE_ANIMATION(Regigigas);
#endif //P_FAMILY_REGIGIGAS
#if P_FAMILY_GIRATINA
SINGLE_ANIMATION(GiratinaAltered);
SINGLE_ANIMATION(GiratinaOrigin);
#endif //P_FAMILY_GIRATINA
#if P_FAMILY_CRESSELIA
SINGLE_ANIMATION(Cresselia);
#endif //P_FAMILY_CRESSELIA
#if P_FAMILY_MANAPHY
SINGLE_ANIMATION(Phione);
SINGLE_ANIMATION(Manaphy);
#endif //P_FAMILY_MANAPHY
#if P_FAMILY_DARKRAI
SINGLE_ANIMATION(Darkrai);
#endif //P_FAMILY_DARKRAI
#if P_FAMILY_SHAYMIN
SINGLE_ANIMATION(ShayminLand);
SINGLE_ANIMATION(ShayminSky);
#endif //P_FAMILY_SHAYMIN
#if P_FAMILY_ARCEUS
SINGLE_ANIMATION(Arceus);
#endif //P_FAMILY_ARCEUS
#if P_FAMILY_VICTINI
SINGLE_ANIMATION(Victini);
#endif //P_FAMILY_VICTINI
#if P_FAMILY_SNIVY
SINGLE_ANIMATION(Snivy);
SINGLE_ANIMATION(Servine);
SINGLE_ANIMATION(Serperior);
#endif //P_FAMILY_SNIVY
#if P_FAMILY_TEPIG
SINGLE_ANIMATION(Tepig);
SINGLE_ANIMATION(Pignite);
SINGLE_ANIMATION(Emboar);
#endif //P_FAMILY_TEPIG
#if P_FAMILY_OSHAWOTT
SINGLE_ANIMATION(Oshawott);
SINGLE_ANIMATION(Dewott);
SINGLE_ANIMATION(Samurott);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(SamurottHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT
#if P_FAMILY_PATRAT
SINGLE_ANIMATION(Patrat);
SINGLE_ANIMATION(Watchog);
#endif //P_FAMILY_PATRAT
#if P_FAMILY_LILLIPUP
SINGLE_ANIMATION(Lillipup);
SINGLE_ANIMATION(Herdier);
SINGLE_ANIMATION(Stoutland);
#endif //P_FAMILY_LILLIPUP
#if P_FAMILY_PURRLOIN
SINGLE_ANIMATION(Purrloin);
SINGLE_ANIMATION(Liepard);
#endif //P_FAMILY_PURRLOIN
#if P_FAMILY_PANSAGE
SINGLE_ANIMATION(Pansage);
SINGLE_ANIMATION(Simisage);
#endif //P_FAMILY_PANSAGE
#if P_FAMILY_PANSEAR
SINGLE_ANIMATION(Pansear);
SINGLE_ANIMATION(Simisear);
#endif //P_FAMILY_PANSEAR
#if P_FAMILY_PANPOUR
SINGLE_ANIMATION(Panpour);
SINGLE_ANIMATION(Simipour);
#endif //P_FAMILY_PANPOUR
#if P_FAMILY_MUNNA
SINGLE_ANIMATION(Munna);
SINGLE_ANIMATION(Musharna);
#endif //P_FAMILY_MUNNA
#if P_FAMILY_PIDOVE
SINGLE_ANIMATION(Pidove);
SINGLE_ANIMATION(Tranquill);
SINGLE_ANIMATION(Unfezant);
#endif //P_FAMILY_PIDOVE
#if P_FAMILY_BLITZLE
SINGLE_ANIMATION(Blitzle);
SINGLE_ANIMATION(Zebstrika);
#endif //P_FAMILY_BLITZLE
#if P_FAMILY_ROGGENROLA
SINGLE_ANIMATION(Roggenrola);
SINGLE_ANIMATION(Boldore);
SINGLE_ANIMATION(Gigalith);
#endif //P_FAMILY_ROGGENROLA
#if P_FAMILY_WOOBAT
SINGLE_ANIMATION(Woobat);
SINGLE_ANIMATION(Swoobat);
#endif //P_FAMILY_WOOBAT
#if P_FAMILY_DRILBUR
SINGLE_ANIMATION(Drilbur);
SINGLE_ANIMATION(Excadrill);
#endif //P_FAMILY_DRILBUR
#if P_FAMILY_AUDINO
SINGLE_ANIMATION(Audino);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(AudinoMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO
#if P_FAMILY_TIMBURR
SINGLE_ANIMATION(Timburr);
SINGLE_ANIMATION(Gurdurr);
SINGLE_ANIMATION(Conkeldurr);
#endif //P_FAMILY_TIMBURR
#if P_FAMILY_TYMPOLE
SINGLE_ANIMATION(Tympole);
SINGLE_ANIMATION(Palpitoad);
SINGLE_ANIMATION(Seismitoad);
#endif //P_FAMILY_TYMPOLE
#if P_FAMILY_THROH
SINGLE_ANIMATION(Throh);
#endif //P_FAMILY_THROH
#if P_FAMILY_SAWK
SINGLE_ANIMATION(Sawk);
#endif //P_FAMILY_SAWK
#if P_FAMILY_SEWADDLE
SINGLE_ANIMATION(Sewaddle);
SINGLE_ANIMATION(Swadloon);
SINGLE_ANIMATION(Leavanny);
#endif //P_FAMILY_SEWADDLE
#if P_FAMILY_VENIPEDE
SINGLE_ANIMATION(Venipede);
SINGLE_ANIMATION(Whirlipede);
SINGLE_ANIMATION(Scolipede);
#endif //P_FAMILY_VENIPEDE
#if P_FAMILY_COTTONEE
SINGLE_ANIMATION(Cottonee);
SINGLE_ANIMATION(Whimsicott);
#endif //P_FAMILY_COTTONEE
#if P_FAMILY_PETILIL
SINGLE_ANIMATION(Petilil);
SINGLE_ANIMATION(Lilligant);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(LilligantHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL
#if P_FAMILY_BASCULIN
SINGLE_ANIMATION(Basculin);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(Basculegion);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN
#if P_FAMILY_SANDILE
SINGLE_ANIMATION(Sandile);
SINGLE_ANIMATION(Krokorok);
SINGLE_ANIMATION(Krookodile);
#endif //P_FAMILY_SANDILE
#if P_FAMILY_DARUMAKA
SINGLE_ANIMATION(Darumaka);
SINGLE_ANIMATION(DarmanitanStandardMode);
SINGLE_ANIMATION(DarmanitanZenMode);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(DarumakaGalarian);
SINGLE_ANIMATION(DarmanitanGalarianStandardMode);
SINGLE_ANIMATION(DarmanitanGalarianZenMode);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA
#if P_FAMILY_MARACTUS
SINGLE_ANIMATION(Maractus);
#endif //P_FAMILY_MARACTUS
#if P_FAMILY_DWEBBLE
SINGLE_ANIMATION(Dwebble);
SINGLE_ANIMATION(Crustle);
#endif //P_FAMILY_DWEBBLE
#if P_FAMILY_SCRAGGY
SINGLE_ANIMATION(Scraggy);
SINGLE_ANIMATION(Scrafty);
#endif //P_FAMILY_SCRAGGY
#if P_FAMILY_SIGILYPH
SINGLE_ANIMATION(Sigilyph);
#endif //P_FAMILY_SIGILYPH
#if P_FAMILY_YAMASK
SINGLE_ANIMATION(Yamask);
SINGLE_ANIMATION(Cofagrigus);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(YamaskGalarian);
SINGLE_ANIMATION(Runerigus);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK
#if P_FAMILY_TIRTOUGA
SINGLE_ANIMATION(Tirtouga);
SINGLE_ANIMATION(Carracosta);
#endif //P_FAMILY_TIRTOUGA
#if P_FAMILY_ARCHEN
SINGLE_ANIMATION(Archen);
SINGLE_ANIMATION(Archeops);
#endif //P_FAMILY_ARCHEN
#if P_FAMILY_TRUBBISH
SINGLE_ANIMATION(Trubbish);
SINGLE_ANIMATION(Garbodor);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(GarbodorGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH
#if P_FAMILY_ZORUA
SINGLE_ANIMATION(Zorua);
SINGLE_ANIMATION(Zoroark);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(ZoruaHisuian);
SINGLE_ANIMATION(ZoroarkHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA
#if P_FAMILY_MINCCINO
SINGLE_ANIMATION(Minccino);
SINGLE_ANIMATION(Cinccino);
#endif //P_FAMILY_MINCCINO
#if P_FAMILY_GOTHITA
SINGLE_ANIMATION(Gothita);
SINGLE_ANIMATION(Gothorita);
SINGLE_ANIMATION(Gothitelle);
#endif //P_FAMILY_GOTHITA
#if P_FAMILY_SOLOSIS
SINGLE_ANIMATION(Solosis);
SINGLE_ANIMATION(Duosion);
SINGLE_ANIMATION(Reuniclus);
#endif //P_FAMILY_SOLOSIS
#if P_FAMILY_DUCKLETT
SINGLE_ANIMATION(Ducklett);
SINGLE_ANIMATION(Swanna);
#endif //P_FAMILY_DUCKLETT
#if P_FAMILY_VANILLITE
SINGLE_ANIMATION(Vanillite);
SINGLE_ANIMATION(Vanillish);
SINGLE_ANIMATION(Vanilluxe);
#endif //P_FAMILY_VANILLITE
#if P_FAMILY_DEERLING
SINGLE_ANIMATION(Deerling);
SINGLE_ANIMATION(Sawsbuck);
#endif //P_FAMILY_DEERLING
#if P_FAMILY_EMOLGA
SINGLE_ANIMATION(Emolga);
#endif //P_FAMILY_EMOLGA
#if P_FAMILY_KARRABLAST
SINGLE_ANIMATION(Karrablast);
SINGLE_ANIMATION(Escavalier);
#endif //P_FAMILY_KARRABLAST
#if P_FAMILY_FOONGUS
SINGLE_ANIMATION(Foongus);
SINGLE_ANIMATION(Amoonguss);
#endif //P_FAMILY_FOONGUS
#if P_FAMILY_FRILLISH
SINGLE_ANIMATION(Frillish);
SINGLE_ANIMATION(Jellicent);
#endif //P_FAMILY_FRILLISH
#if P_FAMILY_ALOMOMOLA
SINGLE_ANIMATION(Alomomola);
#endif //P_FAMILY_ALOMOMOLA
#if P_FAMILY_JOLTIK
SINGLE_ANIMATION(Joltik);
SINGLE_ANIMATION(Galvantula);
#endif //P_FAMILY_JOLTIK
#if P_FAMILY_FERROSEED
SINGLE_ANIMATION(Ferroseed);
SINGLE_ANIMATION(Ferrothorn);
#endif //P_FAMILY_FERROSEED
#if P_FAMILY_KLINK
SINGLE_ANIMATION(Klink);
SINGLE_ANIMATION(Klang);
SINGLE_ANIMATION(Klinklang);
#endif //P_FAMILY_KLINK
#if P_FAMILY_TYNAMO
SINGLE_ANIMATION(Tynamo);
SINGLE_ANIMATION(Eelektrik);
SINGLE_ANIMATION(Eelektross);
#endif //P_FAMILY_TYNAMO
#if P_FAMILY_ELGYEM
SINGLE_ANIMATION(Elgyem);
SINGLE_ANIMATION(Beheeyem);
#endif //P_FAMILY_ELGYEM
#if P_FAMILY_LITWICK
SINGLE_ANIMATION(Litwick);
SINGLE_ANIMATION(Lampent);
SINGLE_ANIMATION(Chandelure);
#endif //P_FAMILY_LITWICK
#if P_FAMILY_AXEW
SINGLE_ANIMATION(Axew);
SINGLE_ANIMATION(Fraxure);
SINGLE_ANIMATION(Haxorus);
#endif //P_FAMILY_AXEW
#if P_FAMILY_CUBCHOO
SINGLE_ANIMATION(Cubchoo);
SINGLE_ANIMATION(Beartic);
#endif //P_FAMILY_CUBCHOO
#if P_FAMILY_CRYOGONAL
SINGLE_ANIMATION(Cryogonal);
#endif //P_FAMILY_CRYOGONAL
#if P_FAMILY_SHELMET
SINGLE_ANIMATION(Shelmet);
SINGLE_ANIMATION(Accelgor);
#endif //P_FAMILY_SHELMET
#if P_FAMILY_STUNFISK
SINGLE_ANIMATION(Stunfisk);
#if P_GALARIAN_FORMS
SINGLE_ANIMATION(StunfiskGalarian);
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK
#if P_FAMILY_MIENFOO
SINGLE_ANIMATION(Mienfoo);
SINGLE_ANIMATION(Mienshao);
#endif //P_FAMILY_MIENFOO
#if P_FAMILY_DRUDDIGON
SINGLE_ANIMATION(Druddigon);
#endif //P_FAMILY_DRUDDIGON
#if P_FAMILY_GOLETT
SINGLE_ANIMATION(Golett);
SINGLE_ANIMATION(Golurk);
#endif //P_FAMILY_GOLETT
#if P_FAMILY_PAWNIARD
SINGLE_ANIMATION(Pawniard);
SINGLE_ANIMATION(Bisharp);
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Kingambit);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD
#if P_FAMILY_BOUFFALANT
SINGLE_ANIMATION(Bouffalant);
#endif //P_FAMILY_BOUFFALANT
#if P_FAMILY_RUFFLET
SINGLE_ANIMATION(Rufflet);
SINGLE_ANIMATION(Braviary);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(BraviaryHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET
#if P_FAMILY_VULLABY
SINGLE_ANIMATION(Vullaby);
SINGLE_ANIMATION(Mandibuzz);
#endif //P_FAMILY_VULLABY
#if P_FAMILY_HEATMOR
SINGLE_ANIMATION(Heatmor);
#endif //P_FAMILY_HEATMOR
#if P_FAMILY_DURANT
SINGLE_ANIMATION(Durant);
#endif //P_FAMILY_DURANT
#if P_FAMILY_DEINO
SINGLE_ANIMATION(Deino);
SINGLE_ANIMATION(Zweilous);
SINGLE_ANIMATION(Hydreigon);
#endif //P_FAMILY_DEINO
#if P_FAMILY_LARVESTA
SINGLE_ANIMATION(Larvesta);
SINGLE_ANIMATION(Volcarona);
#endif //P_FAMILY_LARVESTA
#if P_FAMILY_COBALION
SINGLE_ANIMATION(Cobalion);
#endif //P_FAMILY_COBALION
#if P_FAMILY_TERRAKION
SINGLE_ANIMATION(Terrakion);
#endif //P_FAMILY_TERRAKION
#if P_FAMILY_VIRIZION
SINGLE_ANIMATION(Virizion);
#endif //P_FAMILY_VIRIZION
#if P_FAMILY_TORNADUS
SINGLE_ANIMATION(TornadusIncarnate);
SINGLE_ANIMATION(TornadusTherian);
#endif //P_FAMILY_TORNADUS
#if P_FAMILY_THUNDURUS
SINGLE_ANIMATION(ThundurusIncarnate);
SINGLE_ANIMATION(ThundurusTherian);
#endif //P_FAMILY_THUNDURUS
#if P_FAMILY_RESHIRAM
SINGLE_ANIMATION(Reshiram);
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
SINGLE_ANIMATION(Zekrom);
#endif //P_FAMILY_ZEKROM
#if P_FAMILY_LANDORUS
SINGLE_ANIMATION(LandorusIncarnate);
SINGLE_ANIMATION(LandorusTherian);
#endif //P_FAMILY_LANDORUS
#if P_FAMILY_KYUREM
SINGLE_ANIMATION(Kyurem);
#if P_FUSION_FORMS
SINGLE_ANIMATION(KyuremWhite);
SINGLE_ANIMATION(KyuremBlack);
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM
#if P_FAMILY_KELDEO
SINGLE_ANIMATION(KeldeoOrdinary);
SINGLE_ANIMATION(KeldeoResolute);
#endif //P_FAMILY_KELDEO
#if P_FAMILY_MELOETTA
SINGLE_ANIMATION(MeloettaAria);
SINGLE_ANIMATION(MeloettaPirouette);
#endif //P_FAMILY_MELOETTA
#if P_FAMILY_GENESECT
SINGLE_ANIMATION(Genesect);
#endif //P_FAMILY_GENESECT
#if P_FAMILY_CHESPIN
SINGLE_ANIMATION(Chespin);
SINGLE_ANIMATION(Quilladin);
SINGLE_ANIMATION(Chesnaught);
#endif //P_FAMILY_CHESPIN
#if P_FAMILY_FENNEKIN
SINGLE_ANIMATION(Fennekin);
SINGLE_ANIMATION(Braixen);
SINGLE_ANIMATION(Delphox);
#endif //P_FAMILY_FENNEKIN
#if P_FAMILY_FROAKIE
SINGLE_ANIMATION(Froakie);
SINGLE_ANIMATION(Frogadier);
SINGLE_ANIMATION(Greninja);
SINGLE_ANIMATION(GreninjaAsh);
#endif //P_FAMILY_FROAKIE
#if P_FAMILY_BUNNELBY
SINGLE_ANIMATION(Bunnelby);
SINGLE_ANIMATION(Diggersby);
#endif //P_FAMILY_BUNNELBY
#if P_FAMILY_FLETCHLING
SINGLE_ANIMATION(Fletchling);
SINGLE_ANIMATION(Fletchinder);
SINGLE_ANIMATION(Talonflame);
#endif //P_FAMILY_FLETCHLING
#if P_FAMILY_SCATTERBUG
SINGLE_ANIMATION(Scatterbug);
SINGLE_ANIMATION(Spewpa);
SINGLE_ANIMATION(Vivillon);
#endif //P_FAMILY_SCATTERBUG
#if P_FAMILY_LITLEO
SINGLE_ANIMATION(Litleo);
SINGLE_ANIMATION(Pyroar);
#endif //P_FAMILY_LITLEO
#if P_FAMILY_FLABEBE
SINGLE_ANIMATION(Flabebe);
SINGLE_ANIMATION(Floette);
SINGLE_ANIMATION(Florges);
#endif //P_FAMILY_FLABEBE
#if P_FAMILY_SKIDDO
SINGLE_ANIMATION(Skiddo);
SINGLE_ANIMATION(Gogoat);
#endif //P_FAMILY_SKIDDO
#if P_FAMILY_PANCHAM
SINGLE_ANIMATION(Pancham);
SINGLE_ANIMATION(Pangoro);
#endif //P_FAMILY_PANCHAM
#if P_FAMILY_FURFROU
SINGLE_ANIMATION(Furfrou);
#endif //P_FAMILY_FURFROU
#if P_FAMILY_ESPURR
SINGLE_ANIMATION(Espurr);
SINGLE_ANIMATION(Meowstic);
#endif //P_FAMILY_ESPURR
#if P_FAMILY_HONEDGE
SINGLE_ANIMATION(Honedge);
SINGLE_ANIMATION(Doublade);
SINGLE_ANIMATION(AegislashShield);
SINGLE_ANIMATION(AegislashBlade);
#endif //P_FAMILY_HONEDGE
#if P_FAMILY_SPRITZEE
SINGLE_ANIMATION(Spritzee);
SINGLE_ANIMATION(Aromatisse);
#endif //P_FAMILY_SPRITZEE
#if P_FAMILY_SWIRLIX
SINGLE_ANIMATION(Swirlix);
SINGLE_ANIMATION(Slurpuff);
#endif //P_FAMILY_SWIRLIX
#if P_FAMILY_INKAY
SINGLE_ANIMATION(Inkay);
SINGLE_ANIMATION(Malamar);
#endif //P_FAMILY_INKAY
#if P_FAMILY_BINACLE
SINGLE_ANIMATION(Binacle);
SINGLE_ANIMATION(Barbaracle);
#endif //P_FAMILY_BINACLE
#if P_FAMILY_SKRELP
SINGLE_ANIMATION(Skrelp);
SINGLE_ANIMATION(Dragalge);
#endif //P_FAMILY_SKRELP
#if P_FAMILY_CLAUNCHER
SINGLE_ANIMATION(Clauncher);
SINGLE_ANIMATION(Clawitzer);
#endif //P_FAMILY_CLAUNCHER
#if P_FAMILY_HELIOPTILE
SINGLE_ANIMATION(Helioptile);
SINGLE_ANIMATION(Heliolisk);
#endif //P_FAMILY_HELIOPTILE
#if P_FAMILY_TYRUNT
SINGLE_ANIMATION(Tyrunt);
SINGLE_ANIMATION(Tyrantrum);
#endif //P_FAMILY_TYRUNT
#if P_FAMILY_AMAURA
SINGLE_ANIMATION(Amaura);
SINGLE_ANIMATION(Aurorus);
#endif //P_FAMILY_AMAURA
#if P_FAMILY_HAWLUCHA
SINGLE_ANIMATION(Hawlucha);
#endif //P_FAMILY_HAWLUCHA
#if P_FAMILY_DEDENNE
SINGLE_ANIMATION(Dedenne);
#endif //P_FAMILY_DEDENNE
#if P_FAMILY_CARBINK
SINGLE_ANIMATION(Carbink);
#endif //P_FAMILY_CARBINK
#if P_FAMILY_GOOMY
SINGLE_ANIMATION(Goomy);
SINGLE_ANIMATION(Sliggoo);
SINGLE_ANIMATION(Goodra);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(SliggooHisuian);
SINGLE_ANIMATION(GoodraHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY
#if P_FAMILY_KLEFKI
SINGLE_ANIMATION(Klefki);
#endif //P_FAMILY_KLEFKI
#if P_FAMILY_PHANTUMP
SINGLE_ANIMATION(Phantump);
SINGLE_ANIMATION(Trevenant);
#endif //P_FAMILY_PHANTUMP
#if P_FAMILY_PUMPKABOO
SINGLE_ANIMATION(Pumpkaboo);
SINGLE_ANIMATION(Gourgeist);
#endif //P_FAMILY_PUMPKABOO
#if P_FAMILY_BERGMITE
SINGLE_ANIMATION(Bergmite);
SINGLE_ANIMATION(Avalugg);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(AvaluggHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE
#if P_FAMILY_NOIBAT
SINGLE_ANIMATION(Noibat);
SINGLE_ANIMATION(Noivern);
#endif //P_FAMILY_NOIBAT
#if P_FAMILY_XERNEAS
SINGLE_ANIMATION(Xerneas);
#endif //P_FAMILY_XERNEAS
#if P_FAMILY_YVELTAL
SINGLE_ANIMATION(Yveltal);
#endif //P_FAMILY_YVELTAL
#if P_FAMILY_ZYGARDE
SINGLE_ANIMATION(Zygarde50);
SINGLE_ANIMATION(Zygarde10);
SINGLE_ANIMATION(ZygardeComplete);
#endif //P_FAMILY_ZYGARDE
#if P_FAMILY_DIANCIE
SINGLE_ANIMATION(Diancie);
#if P_MEGA_EVOLUTIONS
SINGLE_ANIMATION(DiancieMega);
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE
#if P_FAMILY_HOOPA
SINGLE_ANIMATION(HoopaConfined);
SINGLE_ANIMATION(HoopaUnbound);
#endif //P_FAMILY_HOOPA
#if P_FAMILY_VOLCANION
SINGLE_ANIMATION(Volcanion);
#endif //P_FAMILY_VOLCANION
#if P_FAMILY_ROWLET
SINGLE_ANIMATION(Rowlet);
SINGLE_ANIMATION(Dartrix);
SINGLE_ANIMATION(Decidueye);
#if P_HISUIAN_FORMS
SINGLE_ANIMATION(DecidueyeHisuian);
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET
#if P_FAMILY_LITTEN
SINGLE_ANIMATION(Litten);
SINGLE_ANIMATION(Torracat);
SINGLE_ANIMATION(Incineroar);
#endif //P_FAMILY_LITTEN
#if P_FAMILY_POPPLIO
SINGLE_ANIMATION(Popplio);
SINGLE_ANIMATION(Brionne);
SINGLE_ANIMATION(Primarina);
#endif //P_FAMILY_POPPLIO
#if P_FAMILY_PIKIPEK
SINGLE_ANIMATION(Pikipek);
SINGLE_ANIMATION(Trumbeak);
SINGLE_ANIMATION(Toucannon);
#endif //P_FAMILY_PIKIPEK
#if P_FAMILY_YUNGOOS
SINGLE_ANIMATION(Yungoos);
SINGLE_ANIMATION(Gumshoos);
#endif //P_FAMILY_YUNGOOS
#if P_FAMILY_GRUBBIN
SINGLE_ANIMATION(Grubbin);
SINGLE_ANIMATION(Charjabug);
SINGLE_ANIMATION(Vikavolt);
#endif //P_FAMILY_GRUBBIN
#if P_FAMILY_CRABRAWLER
SINGLE_ANIMATION(Crabrawler);
SINGLE_ANIMATION(Crabominable);
#endif //P_FAMILY_CRABRAWLER
#if P_FAMILY_ORICORIO
SINGLE_ANIMATION(Oricorio);
#endif //P_FAMILY_ORICORIO
#if P_FAMILY_CUTIEFLY
SINGLE_ANIMATION(Cutiefly);
SINGLE_ANIMATION(Ribombee);
#endif //P_FAMILY_CUTIEFLY
#if P_FAMILY_ROCKRUFF
SINGLE_ANIMATION(Rockruff);
SINGLE_ANIMATION(LycanrocMidday);
SINGLE_ANIMATION(LycanrocMidnight);
SINGLE_ANIMATION(LycanrocDusk);
#endif //P_FAMILY_ROCKRUFF
#if P_FAMILY_WISHIWASHI
SINGLE_ANIMATION(WishiwashiSolo);
SINGLE_ANIMATION(WishiwashiSchool);
#endif //P_FAMILY_WISHIWASHI
#if P_FAMILY_MAREANIE
SINGLE_ANIMATION(Mareanie);
SINGLE_ANIMATION(Toxapex);
#endif //P_FAMILY_MAREANIE
#if P_FAMILY_MUDBRAY
SINGLE_ANIMATION(Mudbray);
SINGLE_ANIMATION(Mudsdale);
#endif //P_FAMILY_MUDBRAY
#if P_FAMILY_DEWPIDER
SINGLE_ANIMATION(Dewpider);
SINGLE_ANIMATION(Araquanid);
#endif //P_FAMILY_DEWPIDER
#if P_FAMILY_FOMANTIS
SINGLE_ANIMATION(Fomantis);
SINGLE_ANIMATION(Lurantis);
#endif //P_FAMILY_FOMANTIS
#if P_FAMILY_MORELULL
SINGLE_ANIMATION(Morelull);
SINGLE_ANIMATION(Shiinotic);
#endif //P_FAMILY_MORELULL
#if P_FAMILY_SALANDIT
SINGLE_ANIMATION(Salandit);
SINGLE_ANIMATION(Salazzle);
#endif //P_FAMILY_SALANDIT
#if P_FAMILY_STUFFUL
SINGLE_ANIMATION(Stufful);
SINGLE_ANIMATION(Bewear);
#endif //P_FAMILY_STUFFUL
#if P_FAMILY_BOUNSWEET
SINGLE_ANIMATION(Bounsweet);
SINGLE_ANIMATION(Steenee);
SINGLE_ANIMATION(Tsareena);
#endif //P_FAMILY_BOUNSWEET
#if P_FAMILY_COMFEY
SINGLE_ANIMATION(Comfey);
#endif //P_FAMILY_COMFEY
#if P_FAMILY_ORANGURU
SINGLE_ANIMATION(Oranguru);
#endif //P_FAMILY_ORANGURU
#if P_FAMILY_PASSIMIAN
SINGLE_ANIMATION(Passimian);
#endif //P_FAMILY_PASSIMIAN
#if P_FAMILY_WIMPOD
SINGLE_ANIMATION(Wimpod);
SINGLE_ANIMATION(Golisopod);
#endif //P_FAMILY_WIMPOD
#if P_FAMILY_SANDYGAST
SINGLE_ANIMATION(Sandygast);
SINGLE_ANIMATION(Palossand);
#endif //P_FAMILY_SANDYGAST
#if P_FAMILY_PYUKUMUKU
SINGLE_ANIMATION(Pyukumuku);
#endif //P_FAMILY_PYUKUMUKU
#if P_FAMILY_TYPE_NULL
SINGLE_ANIMATION(TypeNull);
SINGLE_ANIMATION(Silvally);
#endif //P_FAMILY_TYPE_NULL
#if P_FAMILY_MINIOR
SINGLE_ANIMATION(MiniorMeteor);
SINGLE_ANIMATION(MiniorCore);
#endif //P_FAMILY_MINIOR
#if P_FAMILY_KOMALA
SINGLE_ANIMATION(Komala);
#endif //P_FAMILY_KOMALA
#if P_FAMILY_TURTONATOR
SINGLE_ANIMATION(Turtonator);
#endif //P_FAMILY_TURTONATOR
#if P_FAMILY_TOGEDEMARU
SINGLE_ANIMATION(Togedemaru);
#endif //P_FAMILY_TOGEDEMARU
#if P_FAMILY_MIMIKYU
SINGLE_ANIMATION(MimikyuDisguised);
SINGLE_ANIMATION(MimikyuBusted);
#endif //P_FAMILY_MIMIKYU
#if P_FAMILY_BRUXISH
SINGLE_ANIMATION(Bruxish);
#endif //P_FAMILY_BRUXISH
#if P_FAMILY_DRAMPA
SINGLE_ANIMATION(Drampa);
#endif //P_FAMILY_DRAMPA
#if P_FAMILY_DHELMISE
SINGLE_ANIMATION(Dhelmise);
#endif //P_FAMILY_DHELMISE
#if P_FAMILY_JANGMO_O
SINGLE_ANIMATION(Jangmo_O);
SINGLE_ANIMATION(Hakamo_O);
SINGLE_ANIMATION(Kommo_O);
#endif //P_FAMILY_JANGMO_O
#if P_FAMILY_TAPU_KOKO
SINGLE_ANIMATION(TapuKoko);
#endif //P_FAMILY_TAPU_KOKO
#if P_FAMILY_TAPU_LELE
SINGLE_ANIMATION(TapuLele);
#endif //P_FAMILY_TAPU_LELE
#if P_FAMILY_TAPU_BULU
SINGLE_ANIMATION(TapuBulu);
#endif //P_FAMILY_TAPU_BULU
#if P_FAMILY_TAPU_FINI
SINGLE_ANIMATION(TapuFini);
#endif //P_FAMILY_TAPU_FINI
#if P_FAMILY_COSMOG
SINGLE_ANIMATION(Cosmog);
SINGLE_ANIMATION(Cosmoem);
SINGLE_ANIMATION(Solgaleo);
SINGLE_ANIMATION(Lunala);
#endif //P_FAMILY_COSMOG
#if P_FAMILY_NIHILEGO
SINGLE_ANIMATION(Nihilego);
#endif //P_FAMILY_NIHILEGO
#if P_FAMILY_BUZZWOLE
SINGLE_ANIMATION(Buzzwole);
#endif //P_FAMILY_BUZZWOLE
#if P_FAMILY_PHEROMOSA
SINGLE_ANIMATION(Pheromosa);
#endif //P_FAMILY_PHEROMOSA
#if P_FAMILY_XURKITREE
SINGLE_ANIMATION(Xurkitree);
#endif //P_FAMILY_XURKITREE
#if P_FAMILY_CELESTEELA
SINGLE_ANIMATION(Celesteela);
#endif //P_FAMILY_CELESTEELA
#if P_FAMILY_KARTANA
SINGLE_ANIMATION(Kartana);
#endif //P_FAMILY_KARTANA
#if P_FAMILY_GUZZLORD
SINGLE_ANIMATION(Guzzlord);
#endif //P_FAMILY_GUZZLORD
#if P_FAMILY_NECROZMA
SINGLE_ANIMATION(Necrozma);
#endif //P_FAMILY_NECROZMA
#if P_FAMILY_MAGEARNA
SINGLE_ANIMATION(Magearna);
#endif //P_FAMILY_MAGEARNA
#if P_FAMILY_MARSHADOW
SINGLE_ANIMATION(Marshadow);
#endif //P_FAMILY_MARSHADOW
#if P_FAMILY_POIPOLE
SINGLE_ANIMATION(Poipole);
SINGLE_ANIMATION(Naganadel);
#endif //P_FAMILY_POIPOLE
#if P_FAMILY_STAKATAKA
SINGLE_ANIMATION(Stakataka);
#endif //P_FAMILY_STAKATAKA
#if P_FAMILY_BLACEPHALON
SINGLE_ANIMATION(Blacephalon);
#endif //P_FAMILY_BLACEPHALON
#if P_FAMILY_ZERAORA
SINGLE_ANIMATION(Zeraora);
#endif //P_FAMILY_ZERAORA
#if P_FAMILY_MELTAN
SINGLE_ANIMATION(Meltan);
SINGLE_ANIMATION(Melmetal);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(MelmetalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN
#if P_FAMILY_GROOKEY
SINGLE_ANIMATION(Grookey);
SINGLE_ANIMATION(Thwackey);
SINGLE_ANIMATION(Rillaboom);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(RillaboomGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY
#if P_FAMILY_SCORBUNNY
SINGLE_ANIMATION(Scorbunny);
SINGLE_ANIMATION(Raboot);
SINGLE_ANIMATION(Cinderace);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CinderaceGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY
#if P_FAMILY_SOBBLE
SINGLE_ANIMATION(Sobble);
SINGLE_ANIMATION(Drizzile);
SINGLE_ANIMATION(Inteleon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(InteleonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE
#if P_FAMILY_SKWOVET
SINGLE_ANIMATION(Skwovet);
SINGLE_ANIMATION(Greedent);
#endif //P_FAMILY_SKWOVET
#if P_FAMILY_ROOKIDEE
SINGLE_ANIMATION(Rookidee);
SINGLE_ANIMATION(Corvisquire);
SINGLE_ANIMATION(Corviknight);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CorviknightGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE
#if P_FAMILY_BLIPBUG
SINGLE_ANIMATION(Blipbug);
SINGLE_ANIMATION(Dottler);
SINGLE_ANIMATION(Orbeetle);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(OrbeetleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG
#if P_FAMILY_NICKIT
SINGLE_ANIMATION(Nickit);
SINGLE_ANIMATION(Thievul);
#endif //P_FAMILY_NICKIT
#if P_FAMILY_GOSSIFLEUR
SINGLE_ANIMATION(Gossifleur);
SINGLE_ANIMATION(Eldegoss);
#endif //P_FAMILY_GOSSIFLEUR
#if P_FAMILY_WOOLOO
SINGLE_ANIMATION(Wooloo);
SINGLE_ANIMATION(Dubwool);
#endif //P_FAMILY_WOOLOO
#if P_FAMILY_CHEWTLE
SINGLE_ANIMATION(Chewtle);
SINGLE_ANIMATION(Drednaw);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DrednawGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE
#if P_FAMILY_YAMPER
SINGLE_ANIMATION(Yamper);
SINGLE_ANIMATION(Boltund);
#endif //P_FAMILY_YAMPER
#if P_FAMILY_ROLYCOLY
SINGLE_ANIMATION(Rolycoly);
SINGLE_ANIMATION(Carkol);
SINGLE_ANIMATION(Coalossal);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CoalossalGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY
#if P_FAMILY_APPLIN
SINGLE_ANIMATION(Applin);
SINGLE_ANIMATION(Flapple);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(FlappleGigantamax);
#endif //P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(Appletun);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(AppletunGigantamax);
#endif //P_GIGANTAMAX_FORMS
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Dipplin);
SINGLE_ANIMATION(Hydrapple);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN
#if P_FAMILY_SILICOBRA
SINGLE_ANIMATION(Silicobra);
SINGLE_ANIMATION(Sandaconda);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(SandacondaGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA
#if P_FAMILY_CRAMORANT
SINGLE_ANIMATION(Cramorant);
#endif //P_FAMILY_CRAMORANT
#if P_FAMILY_ARROKUDA
SINGLE_ANIMATION(Arrokuda);
SINGLE_ANIMATION(Barraskewda);
#endif //P_FAMILY_ARROKUDA
#if P_FAMILY_TOXEL
SINGLE_ANIMATION(Toxel);
SINGLE_ANIMATION(Toxtricity);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(ToxtricityGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL
#if P_FAMILY_SIZZLIPEDE
SINGLE_ANIMATION(Sizzlipede);
SINGLE_ANIMATION(Centiskorch);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CentiskorchGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE
#if P_FAMILY_CLOBBOPUS
SINGLE_ANIMATION(Clobbopus);
SINGLE_ANIMATION(Grapploct);
#endif //P_FAMILY_CLOBBOPUS
#if P_FAMILY_SINISTEA
SINGLE_ANIMATION(Sinistea);
SINGLE_ANIMATION(Polteageist);
#endif //P_FAMILY_SINISTEA
#if P_FAMILY_HATENNA
SINGLE_ANIMATION(Hatenna);
SINGLE_ANIMATION(Hattrem);
SINGLE_ANIMATION(Hatterene);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(HattereneGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA
#if P_FAMILY_IMPIDIMP
SINGLE_ANIMATION(Impidimp);
SINGLE_ANIMATION(Morgrem);
SINGLE_ANIMATION(Grimmsnarl);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(GrimmsnarlGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP
#if P_FAMILY_MILCERY
SINGLE_ANIMATION(Milcery);
SINGLE_ANIMATION(Alcremie);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(AlcremieGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY
#if P_FAMILY_FALINKS
SINGLE_ANIMATION(Falinks);
#endif //P_FAMILY_FALINKS
#if P_FAMILY_PINCURCHIN
SINGLE_ANIMATION(Pincurchin);
#endif //P_FAMILY_PINCURCHIN
#if P_FAMILY_SNOM
SINGLE_ANIMATION(Snom);
SINGLE_ANIMATION(Frosmoth);
#endif //P_FAMILY_SNOM
#if P_FAMILY_STONJOURNER
SINGLE_ANIMATION(Stonjourner);
#endif //P_FAMILY_STONJOURNER
#if P_FAMILY_EISCUE
SINGLE_ANIMATION(Eiscue);
#endif //P_FAMILY_EISCUE
#if P_FAMILY_INDEEDEE
SINGLE_ANIMATION(Indeedee);
#endif //P_FAMILY_INDEEDEE
#if P_FAMILY_MORPEKO
SINGLE_ANIMATION(Morpeko);
#endif //P_FAMILY_MORPEKO
#if P_FAMILY_CUFANT
SINGLE_ANIMATION(Cufant);
SINGLE_ANIMATION(Copperajah);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(CopperajahGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT
#if P_FAMILY_DRACOZOLT
SINGLE_ANIMATION(Dracozolt);
#endif //P_FAMILY_DRACOZOLT
#if P_FAMILY_ARCTOZOLT
SINGLE_ANIMATION(Arctozolt);
#endif //P_FAMILY_ARCTOZOLT
#if P_FAMILY_DRACOVISH
SINGLE_ANIMATION(Dracovish);
#endif //P_FAMILY_DRACOVISH
#if P_FAMILY_ARCTOVISH
SINGLE_ANIMATION(Arctovish);
#endif //P_FAMILY_ARCTOVISH
#if P_FAMILY_DURALUDON
SINGLE_ANIMATION(Duraludon);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(DuraludonGigantamax);
#endif //P_GIGANTAMAX_FORMS
#if P_GEN_9_CROSS_EVOS
SINGLE_ANIMATION(Archaludon);
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DURALUDON
#if P_FAMILY_DREEPY
SINGLE_ANIMATION(Dreepy);
SINGLE_ANIMATION(Drakloak);
SINGLE_ANIMATION(Dragapult);
#endif //P_FAMILY_DREEPY
#if P_FAMILY_ZACIAN
SINGLE_ANIMATION(Zacian);
#endif //P_FAMILY_ZACIAN
#if P_FAMILY_ZAMAZENTA
SINGLE_ANIMATION(Zamazenta);
#endif //P_FAMILY_ZAMAZENTA
#if P_FAMILY_ETERNATUS
SINGLE_ANIMATION(Eternatus);
#endif //P_FAMILY_ETERNATUS
#if P_FAMILY_KUBFU
SINGLE_ANIMATION(Kubfu);
SINGLE_ANIMATION(Urshifu);
#if P_GIGANTAMAX_FORMS
SINGLE_ANIMATION(UrshifuSingleStrikeStyleGigantamax);
SINGLE_ANIMATION(UrshifuRapidStrikeStyleGigantamax);
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU
#if P_FAMILY_ZARUDE
SINGLE_ANIMATION(Zarude);
#endif //P_FAMILY_ZARUDE
#if P_FAMILY_REGIELEKI
SINGLE_ANIMATION(Regieleki);
#endif //P_FAMILY_REGIELEKI
#if P_FAMILY_REGIDRAGO
SINGLE_ANIMATION(Regidrago);
#endif //P_FAMILY_REGIDRAGO
#if P_FAMILY_GLASTRIER
SINGLE_ANIMATION(Glastrier);
#endif //P_FAMILY_GLASTRIER
#if P_FAMILY_SPECTRIER
SINGLE_ANIMATION(Spectrier);
#endif //P_FAMILY_SPECTRIER
#if P_FAMILY_CALYREX
SINGLE_ANIMATION(Calyrex);
#endif //P_FAMILY_CALYREX
#if P_FAMILY_ENAMORUS
SINGLE_ANIMATION(EnamorusIncarnate);
SINGLE_ANIMATION(EnamorusTherian);
#endif //P_FAMILY_ENAMORUS
#if P_FAMILY_SPRIGATITO
SINGLE_ANIMATION(Sprigatito);
SINGLE_ANIMATION(Floragato);
SINGLE_ANIMATION(Meowscarada);
#endif //P_FAMILY_SPRIGATITO
#if P_FAMILY_FUECOCO
SINGLE_ANIMATION(Fuecoco);
SINGLE_ANIMATION(Crocalor);
SINGLE_ANIMATION(Skeledirge);
#endif //P_FAMILY_FUECOCO
#if P_FAMILY_QUAXLY
SINGLE_ANIMATION(Quaxly);
SINGLE_ANIMATION(Quaxwell);
SINGLE_ANIMATION(Quaquaval);
#endif //P_FAMILY_QUAXLY
#if P_FAMILY_LECHONK
SINGLE_ANIMATION(Lechonk);
SINGLE_ANIMATION(Oinkologne);
#endif //P_FAMILY_LECHONK
#if P_FAMILY_TAROUNTULA
SINGLE_ANIMATION(Tarountula);
SINGLE_ANIMATION(Spidops);
#endif //P_FAMILY_TAROUNTULA
#if P_FAMILY_NYMBLE
SINGLE_ANIMATION(Nymble);
SINGLE_ANIMATION(Lokix);
#endif //P_FAMILY_NYMBLE
#if P_FAMILY_PAWMI
SINGLE_ANIMATION(Pawmi);
SINGLE_ANIMATION(Pawmo);
SINGLE_ANIMATION(Pawmot);
#endif //P_FAMILY_PAWMI
#if P_FAMILY_TANDEMAUS
SINGLE_ANIMATION(Tandemaus);
SINGLE_ANIMATION(Maushold);
#endif //P_FAMILY_TANDEMAUS
#if P_FAMILY_FIDOUGH
SINGLE_ANIMATION(Fidough);
SINGLE_ANIMATION(Dachsbun);
#endif //P_FAMILY_FIDOUGH
#if P_FAMILY_SMOLIV
SINGLE_ANIMATION(Smoliv);
SINGLE_ANIMATION(Dolliv);
SINGLE_ANIMATION(Arboliva);
#endif //P_FAMILY_SMOLIV
#if P_FAMILY_SQUAWKABILLY
SINGLE_ANIMATION(Squawkabilly);
#endif //P_FAMILY_SQUAWKABILLY
#if P_FAMILY_NACLI
SINGLE_ANIMATION(Nacli);
SINGLE_ANIMATION(Naclstack);
SINGLE_ANIMATION(Garganacl);
#endif //P_FAMILY_NACLI
#if P_FAMILY_CHARCADET
SINGLE_ANIMATION(Charcadet);
SINGLE_ANIMATION(Armarouge);
SINGLE_ANIMATION(Ceruledge);
#endif //P_FAMILY_CHARCADET
#if P_FAMILY_TADBULB
SINGLE_ANIMATION(Tadbulb);
SINGLE_ANIMATION(Bellibolt);
#endif //P_FAMILY_TADBULB
#if P_FAMILY_WATTREL
SINGLE_ANIMATION(Wattrel);
SINGLE_ANIMATION(Kilowattrel);
#endif //P_FAMILY_WATTREL
#if P_FAMILY_MASCHIFF
SINGLE_ANIMATION(Maschiff);
SINGLE_ANIMATION(Mabosstiff);
#endif //P_FAMILY_MASCHIFF
#if P_FAMILY_SHROODLE
SINGLE_ANIMATION(Shroodle);
SINGLE_ANIMATION(Grafaiai);
#endif //P_FAMILY_SHROODLE
#if P_FAMILY_BRAMBLIN
SINGLE_ANIMATION(Bramblin);
SINGLE_ANIMATION(Brambleghast);
#endif //P_FAMILY_BRAMBLIN
#if P_FAMILY_TOEDSCOOL
SINGLE_ANIMATION(Toedscool);
SINGLE_ANIMATION(Toedscruel);
#endif //P_FAMILY_TOEDSCOOL
#if P_FAMILY_KLAWF
SINGLE_ANIMATION(Klawf);
#endif //P_FAMILY_KLAWF
#if P_FAMILY_CAPSAKID
SINGLE_ANIMATION(Capsakid);
SINGLE_ANIMATION(Scovillain);
#endif //P_FAMILY_CAPSAKID
#if P_FAMILY_RELLOR
SINGLE_ANIMATION(Rellor);
SINGLE_ANIMATION(Rabsca);
#endif //P_FAMILY_RELLOR
#if P_FAMILY_FLITTLE
SINGLE_ANIMATION(Flittle);
SINGLE_ANIMATION(Espathra);
#endif //P_FAMILY_FLITTLE
#if P_FAMILY_TINKATINK
SINGLE_ANIMATION(Tinkatink);
SINGLE_ANIMATION(Tinkatuff);
SINGLE_ANIMATION(Tinkaton);
#endif //P_FAMILY_TINKATINK
#if P_FAMILY_WIGLETT
SINGLE_ANIMATION(Wiglett);
SINGLE_ANIMATION(Wugtrio);
#endif //P_FAMILY_WIGLETT
#if P_FAMILY_BOMBIRDIER
SINGLE_ANIMATION(Bombirdier);
#endif //P_FAMILY_BOMBIRDIER
#if P_FAMILY_FINIZEN
SINGLE_ANIMATION(Finizen);
SINGLE_ANIMATION(Palafin);
#endif //P_FAMILY_FINIZEN
#if P_FAMILY_VAROOM
SINGLE_ANIMATION(Varoom);
SINGLE_ANIMATION(Revavroom);
#endif //P_FAMILY_VAROOM
#if P_FAMILY_CYCLIZAR
SINGLE_ANIMATION(Cyclizar);
#endif //P_FAMILY_CYCLIZAR
#if P_FAMILY_ORTHWORM
SINGLE_ANIMATION(Orthworm);
#endif //P_FAMILY_ORTHWORM
#if P_FAMILY_GLIMMET
SINGLE_ANIMATION(Glimmet);
SINGLE_ANIMATION(Glimmora);
#endif //P_FAMILY_GLIMMET
#if P_FAMILY_GREAVARD
SINGLE_ANIMATION(Greavard);
SINGLE_ANIMATION(Houndstone);
#endif //P_FAMILY_GREAVARD
#if P_FAMILY_FLAMIGO
SINGLE_ANIMATION(Flamigo);
#endif //P_FAMILY_FLAMIGO
#if P_FAMILY_CETODDLE
SINGLE_ANIMATION(Cetoddle);
SINGLE_ANIMATION(Cetitan);
#endif //P_FAMILY_CETODDLE
#if P_FAMILY_VELUZA
SINGLE_ANIMATION(Veluza);
#endif //P_FAMILY_VELUZA
#if P_FAMILY_DONDOZO
SINGLE_ANIMATION(Dondozo);
#endif //P_FAMILY_DONDOZO
#if P_FAMILY_TATSUGIRI
SINGLE_ANIMATION(Tatsugiri);
#endif //P_FAMILY_TATSUGIRI
#if P_FAMILY_GREAT_TUSK
SINGLE_ANIMATION(GreatTusk);
#endif //P_FAMILY_GREAT_TUSK
#if P_FAMILY_SCREAM_TAIL
SINGLE_ANIMATION(ScreamTail);
#endif //P_FAMILY_SCREAM_TAIL
#if P_FAMILY_BRUTE_BONNET
SINGLE_ANIMATION(BruteBonnet);
#endif //P_FAMILY_BRUTE_BONNET
#if P_FAMILY_FLUTTER_MANE
SINGLE_ANIMATION(FlutterMane);
#endif //P_FAMILY_FLUTTER_MANE
#if P_FAMILY_SLITHER_WING
SINGLE_ANIMATION(SlitherWing);
#endif //P_FAMILY_SLITHER_WING
#if P_FAMILY_SANDY_SHOCKS
SINGLE_ANIMATION(SandyShocks);
#endif //P_FAMILY_SANDY_SHOCKS
#if P_FAMILY_IRON_TREADS
SINGLE_ANIMATION(IronTreads);
#endif //P_FAMILY_IRON_TREADS
#if P_FAMILY_IRON_BUNDLE
SINGLE_ANIMATION(IronBundle);
#endif //P_FAMILY_IRON_BUNDLE
#if P_FAMILY_IRON_HANDS
SINGLE_ANIMATION(IronHands);
#endif //P_FAMILY_IRON_HANDS
#if P_FAMILY_IRON_JUGULIS
SINGLE_ANIMATION(IronJugulis);
#endif //P_FAMILY_IRON_JUGULIS
#if P_FAMILY_IRON_MOTH
SINGLE_ANIMATION(IronMoth);
#endif //P_FAMILY_IRON_MOTH
#if P_FAMILY_IRON_THORNS
SINGLE_ANIMATION(IronThorns);
#endif //P_FAMILY_IRON_THORNS
#if P_FAMILY_FRIGIBAX
SINGLE_ANIMATION(Frigibax);
SINGLE_ANIMATION(Arctibax);
SINGLE_ANIMATION(Baxcalibur);
#endif //P_FAMILY_FRIGIBAX
#if P_FAMILY_GIMMIGHOUL
SINGLE_ANIMATION(Gimmighoul);
SINGLE_ANIMATION(Gholdengo);
#endif //P_FAMILY_GIMMIGHOUL
#if P_FAMILY_WO_CHIEN
SINGLE_ANIMATION(WoChien);
#endif //P_FAMILY_WO_CHIEN
#if P_FAMILY_CHIEN_PAO
SINGLE_ANIMATION(ChienPao);
#endif //P_FAMILY_CHIEN_PAO
#if P_FAMILY_TING_LU
SINGLE_ANIMATION(TingLu);
#endif //P_FAMILY_TING_LU
#if P_FAMILY_CHI_YU
SINGLE_ANIMATION(ChiYu);
#endif //P_FAMILY_CHI_YU
#if P_FAMILY_ROARING_MOON
SINGLE_ANIMATION(RoaringMoon);
#endif //P_FAMILY_ROARING_MOON
#if P_FAMILY_IRON_VALIANT
SINGLE_ANIMATION(IronValiant);
#endif //P_FAMILY_IRON_VALIANT
#if P_FAMILY_KORAIDON
SINGLE_ANIMATION(Koraidon);
#endif //P_FAMILY_KORAIDON
#if P_FAMILY_MIRAIDON
SINGLE_ANIMATION(Miraidon);
#endif //P_FAMILY_MIRAIDON
#if P_FAMILY_WALKING_WAKE
SINGLE_ANIMATION(WalkingWake);
#endif //P_FAMILY_WALKING_WAKE
#if P_FAMILY_IRON_LEAVES
SINGLE_ANIMATION(IronLeaves);
#endif //P_FAMILY_IRON_LEAVES
#if P_FAMILY_POLTCHAGEIST
SINGLE_ANIMATION(Poltchageist);
SINGLE_ANIMATION(Sinistcha);
#endif //P_FAMILY_POLTCHAGEIST
#if P_FAMILY_OKIDOGI
SINGLE_ANIMATION(Okidogi);
#endif //P_FAMILY_OKIDOGI
#if P_FAMILY_MUNKIDORI
SINGLE_ANIMATION(Munkidori);
#endif //P_FAMILY_MUNKIDORI
#if P_FAMILY_FEZANDIPITI
SINGLE_ANIMATION(Fezandipiti);
#endif //P_FAMILY_FEZANDIPITI
#if P_FAMILY_OGERPON
SINGLE_ANIMATION(Ogerpon);
#endif //P_FAMILY_OGERPON
#if P_FAMILY_GOUGING_FIRE
SINGLE_ANIMATION(GougingFire);
#endif //P_FAMILY_GOUGING_FIRE
#if P_FAMILY_RAGING_BOLT
SINGLE_ANIMATION(RagingBolt);
#endif //P_FAMILY_RAGING_BOLT
#if P_FAMILY_IRON_BOULDER
SINGLE_ANIMATION(IronBoulder);
#endif //P_FAMILY_IRON_BOULDER
#if P_FAMILY_IRON_CROWN
SINGLE_ANIMATION(IronCrown);
#endif //P_FAMILY_IRON_CROWN
#if P_FAMILY_TERAPAGOS
SINGLE_ANIMATION(TerapagosNormal);
SINGLE_ANIMATION(TerapagosTerastal);
SINGLE_ANIMATION(TerapagosStellar);
#endif //P_FAMILY_TERAPAGOS
#if P_FAMILY_PECHARUNT
SINGLE_ANIMATION(Pecharunt);
#endif //P_FAMILY_PECHARUNT
SINGLE_ANIMATION(Egg);
