#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"
#include "battle_tower.h"
#include "constants/battle_tower.h"


bool8 CheckLevelCapFlagIsTrue( bool8 flag ){
    bool8 result;

    if( flag == TRUE )
        result = TRUE;
    else
        result = FALSE;

    return result;
}


u32 GetCurrentLevelCap(void)
{
    static const u32 sLevelCapFlagMap[] =
    {
        FLAG_REACHED_LEVEL_10,
        FLAG_BADGE01_GET,
        FLAG_BADGE02_GET,
        FLAG_BADGE03_GET,
        FLAG_BADGE04_GET,
        FLAG_BADGE05_GET,
        FLAG_BADGE06_GET,
        FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT,
        FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE,
        FLAG_BADGE07_GET,
        FLAG_HIDE_MOSSDEEP_CITY_SCOTT,
        FLAG_RECEIVED_HM_WATERFALL, //--might need to replace this flag
        FLAG_BADGE08_GET,
        FLAG_DEFEATED_WALLY_VICTORY_ROAD,
        FLAG_IS_CHAMPION,
        FLAG_REMATCHED_ALL_GYMS,
    };

    u32 amountFlags = 0;
    u32 levelCap;
    u8 highestLevel;

    for( int i = 0; i < ARRAY_COUNT( sLevelCapFlagMap ); i++ ){
        if( FlagGet( sLevelCapFlagMap[i] ) ){
            amountFlags++;
        }
    }

    switch ( amountFlags ){
        case 0:
            highestLevel = GetHighestLevelInPlayerParty();

            if( !FlagGet( FLAG_DEFEATED_RIVAL_ROUTE103 ) )
                levelCap = 6;
            else if( highestLevel != 10 )
                levelCap = 10;
            else if( highestLevel == 10 )
                FLAG_REACHED_LEVEL_10 == TRUE;
                
            break;

        case 1:
            levelCap = 15;
                
            break;

        case 2:
            levelCap = 19;
                
            break;

        case 3:
            levelCap = 24;
                
            break;

        case 4:
            levelCap = 35;
                
            break;

        case 5:
            levelCap = 38;
                
            break;

        case 6:
            levelCap = 45;
                
            break;

        case 7:
            levelCap = 55;
                
            break;

        case 8:
            levelCap = 58;
                
            break;

        case 9:
            levelCap = 62;
                
            break;

        case 10:
            levelCap = 64;
                
            break;

        case 11:
            levelCap = 68;
                
            break;

        case 12:
            levelCap = 70;
                
            break;

        case 13:
            levelCap = 73;
                
            break;

        case 14:
            levelCap = 75;
                
            break;

        case 15:
            levelCap = 80;
                
            break;
            
        default:
            levelCap = 100;
                
            break;

        }
        
    return levelCap;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetCurrentLevelCap();

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (B_LEVEL_CAP_EXP_UP && level < currentLevelCap)
    {
        levelDifference = currentLevelCap - level;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingDown) - 1]);
        else
            return expValue + (expValue / sExpScalingUp[levelDifference]);
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT && level >= currentLevelCap)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
        return 0;

}

u32 GetNumBadges( void ){
    return NUM_BADGES;
}
