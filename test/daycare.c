#include "global.h"
#include "daycare.h"
#include "event_data.h"
#include "malloc.h"
#include "party_menu.h"
#include "regions.h"
#include "test/overworld_script.h"
#include "test/test.h"

// We don't run the StoreSelectedPokemonInDaycare special because it relies on calling the
// party select screen and the GetCursorSelectionMonId function, so we store directly to the struct.
#define STORE_IN_DAYCARE_AND_GET_EGG()                                          \
    StorePokemonInDaycare(&gPlayerParty[0], &gSaveBlock1Ptr->daycare.mons[0]);  \
    StorePokemonInDaycare(&gPlayerParty[0], &gSaveBlock1Ptr->daycare.mons[1]);  \
    RUN_OVERWORLD_SCRIPT( special GiveEggFromDaycare; );

TEST("(Daycare) Pokémon generate Eggs of the lowest member of the evolutionary family")
{
    ASSUME(P_FAMILY_PETITMON == TRUE);
    ASSUME(P_GEN_2_CROSS_EVOS == TRUE);

    ZeroPlayerPartyMons();
    RUN_OVERWORLD_SCRIPT(
        givemon SPECIES_PETITMON, 100, gender=MON_MALE;
        givemon SPECIES_PETITMON, 100, gender=MON_FEMALE;
    );
    STORE_IN_DAYCARE_AND_GET_EGG();

    EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), SPECIES_GUILMON_X);
}

TEST("(Daycare) Pokémon offspring species is based off the mother's species")
{
    u32 offspring = 0;
    ASSUME(P_FAMILY_PETITMON == TRUE);
    ASSUME(P_GEN_2_CROSS_EVOS == TRUE);
    ASSUME(P_FAMILY_RIOLU == TRUE);

    ZeroPlayerPartyMons();
    PARAMETRIZE { offspring = SPECIES_RIOLU; RUN_OVERWORLD_SCRIPT(givemon SPECIES_PETITMON, 100, gender=MON_MALE;   givemon SPECIES_LUCARIO, 100, gender=MON_FEMALE, item=ITEM_NONE;     ); }
    PARAMETRIZE { offspring = SPECIES_GUILMON_X; RUN_OVERWORLD_SCRIPT(givemon SPECIES_PETITMON, 100, gender=MON_FEMALE; givemon SPECIES_LUCARIO, 100, gender=MON_MALE;); }
    STORE_IN_DAYCARE_AND_GET_EGG();

    EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), offspring);
}

TEST("(Daycare) Pokémon can breed with Crabmon if they don't belong to the Crabmon or No Eggs Discovered group")
{
    u32 j = 0;
    u32 parentSpecies = 0;

    ZeroPlayerPartyMons();
    for (j = 1; j < NUM_SPECIES; j++)
        PARAMETRIZE { parentSpecies = j; }
    VarSet(VAR_TEMP_C, parentSpecies);
    RUN_OVERWORLD_SCRIPT(
        givemon SPECIES_CRABMON, 100; givemon VAR_TEMP_C, 100;
    );
    STORE_IN_DAYCARE_AND_GET_EGG();

    if (gSpeciesInfo[parentSpecies].eggGroups[0] != EGG_GROUP_NO_EGGS_DISCOVERED
     && gSpeciesInfo[parentSpecies].eggGroups[0] != EGG_GROUP_CRABMON)
        EXPECT_NE(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), SPECIES_NONE);
    else
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), SPECIES_NONE);
}

TEST("(Daycare) Shellos' form is always based on the mother's form")
{
    u32 offspring = 0;
    ASSUME(P_FAMILY_CALUMON == TRUE);
    ASSUME(P_ALOLAN_FORMS == TRUE);
    ASSUME(P_GALARIAN_FORMS == TRUE);

    ZeroPlayerPartyMons();
    PARAMETRIZE { offspring = SPECIES_SHELLOS_WEST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_EAST, 1, gender=MON_MALE; givemon SPECIES_SHELLOS_WEST, 1, gender=MON_FEMALE, item=ITEM_NONE;     ); }
    PARAMETRIZE { offspring = SPECIES_SHELLOS_WEST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_EAST, 1, gender=MON_MALE, item=ITEM_EVERSTONE; givemon SPECIES_SHELLOS_WEST, 1, gender=MON_FEMALE, item=ITEM_NONE;     ); }
    PARAMETRIZE { offspring = SPECIES_SHELLOS_WEST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_EAST, 1, gender=MON_MALE; givemon SPECIES_SHELLOS_WEST, 1, gender=MON_FEMALE, item=ITEM_EVERSTONE;); }
    PARAMETRIZE { offspring = SPECIES_SHELLOS_EAST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_WEST, 1, gender=MON_MALE; givemon SPECIES_SHELLOS_EAST, 1, gender=MON_FEMALE, item=ITEM_NONE;     ); }
    PARAMETRIZE { offspring = SPECIES_SHELLOS_EAST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_WEST, 1, gender=MON_MALE, item=ITEM_EVERSTONE; givemon SPECIES_SHELLOS_EAST, 1, gender=MON_FEMALE, item=ITEM_NONE;     ); }
    PARAMETRIZE { offspring = SPECIES_SHELLOS_EAST; RUN_OVERWORLD_SCRIPT(givemon SPECIES_SHELLOS_WEST, 1, gender=MON_MALE; givemon SPECIES_SHELLOS_EAST, 1, gender=MON_FEMALE, item=ITEM_EVERSTONE;); }
    STORE_IN_DAYCARE_AND_GET_EGG();

    EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), offspring);
}

TEST("(Daycare) Pokémon with regional forms give the correct offspring")
{
    u32 region = 0, offspring = 0, species1 = 0, item1 = 0, species2 = 0, item2 = 0;

    ZeroPlayerPartyMons();

    region = GetCurrentRegion();
    if (region == REGION_ALOLA) {
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_CHAPMON_ALOLA; item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_EVERSTONE; }
    } else if (region == REGION_GALAR) {
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR;  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_CHAPMON_ALOLA; item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON;       item2=ITEM_EVERSTONE; }
    } else {
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA,  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_ALOLA;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_ALOLA,  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR,  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_CALUMON;        item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR,  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR,  item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_BUDMON;       item1=ITEM_NONE;      species2=SPECIES_CALUMON_GALAR,  item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON_GALAR;  species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON,       item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_PERRSERKER;    item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON,       item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_CALUMON;        species1=SPECIES_CHAPMON_ALOLA; item1=ITEM_EVERSTONE; species2=SPECIES_CHAPMON,       item2=ITEM_EVERSTONE; }
    }

    if (region == REGION_HISUI) {
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON_HISUI; species1=SPECIES_MUSHROOMON;       item1=ITEM_NONE;      species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON;       species1=SPECIES_MUSHROOMON;       item1=ITEM_EVERSTONE; species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON_HISUI; species1=SPECIES_MUSHROOMON;       item1=ITEM_NONE;      species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON;       species1=SPECIES_SNEASLER;      item1=ITEM_EVERSTONE; species2=SPECIES_WEAVILE,       item2=ITEM_EVERSTONE; }
    } else {
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON;       species1=SPECIES_MUSHROOMON;       item1=ITEM_NONE;      species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON;       species1=SPECIES_MUSHROOMON;       item1=ITEM_EVERSTONE; species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON_HISUI; species1=SPECIES_MUSHROOMON;       item1=ITEM_NONE;      species2=SPECIES_MUSHROOMON_HISUI, item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_MUSHROOMON;       species1=SPECIES_SNEASLER;      item1=ITEM_EVERSTONE; species2=SPECIES_WEAVILE,       item2=ITEM_EVERSTONE; }
    }

    if (region == REGION_PALDEA) {
        PARAMETRIZE { offspring=SPECIES_KUDAMON_PALDEA; species1=SPECIES_KUDAMON;        item1=ITEM_NONE;      species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_KUDAMON;        species1=SPECIES_KUDAMON;        item1=ITEM_EVERSTONE; species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_KUDAMON_PALDEA; species1=SPECIES_KUDAMON;        item1=ITEM_NONE;      species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_KUDAMON;        species1=SPECIES_CLODSIRE;      item1=ITEM_EVERSTONE; species2=SPECIES_KUDAMON_06,      item2=ITEM_EVERSTONE; }
    } else {
        PARAMETRIZE { offspring=SPECIES_KUDAMON;        species1=SPECIES_KUDAMON;        item1=ITEM_NONE;      species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_KUDAMON;        species1=SPECIES_KUDAMON;        item1=ITEM_EVERSTONE; species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_NONE;      }
        PARAMETRIZE { offspring=SPECIES_KUDAMON_PALDEA; species1=SPECIES_KUDAMON;        item1=ITEM_NONE;      species2=SPECIES_KUDAMON_PALDEA, item2=ITEM_EVERSTONE; }
        PARAMETRIZE { offspring=SPECIES_KUDAMON;        species1=SPECIES_CLODSIRE;      item1=ITEM_EVERSTONE; species2=SPECIES_KUDAMON_06,      item2=ITEM_EVERSTONE; }
    }
    ASSUME(IsSpeciesEnabled(species1) == TRUE);
    ASSUME(IsSpeciesEnabled(species2) == TRUE);
    ASSUME(IsSpeciesEnabled(offspring) == TRUE);

    VarSet(VAR_0x8000, species1);
    VarSet(VAR_0x8001, item1);
    VarSet(VAR_0x8002, species2);
    VarSet(VAR_0x8003, item2);

    RUN_OVERWORLD_SCRIPT(givemon VAR_0x8000, 1, gender=MON_MALE,   item=VAR_0x8001;);
    RUN_OVERWORLD_SCRIPT(givemon VAR_0x8002, 1, gender=MON_FEMALE, item=VAR_0x8003;);

    STORE_IN_DAYCARE_AND_GET_EGG();

    EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_SPECIES), offspring);
}
