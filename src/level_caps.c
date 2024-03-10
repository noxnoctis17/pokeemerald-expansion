#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"


// u32 GetCurrentLevelCap(void)
// {
//     static const u32 sLevelCapFlagMap[][2] =
//     {
//         {FLAG_DEFEATED_RIVAL_ROUTE103, 6},
//         {FLAG_HIDE_PETALBURG_CITY_WALLY, 10}, //--temporary flag so that random trainers aren't dumb lol. this will be 0 badges flag
//         {FLAG_BADGE01_GET, 15},
//         {FLAG_BADGE02_GET, 19},
//         {FLAG_BADGE03_GET, 24},
//         {FLAG_BADGE04_GET, 35}, //--29
//         {FLAG_BADGE05_GET, 38}, //--31
//         {FLAG_BADGE06_GET, 45}, //--33
//         {FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, 55},
//         {FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, 58},
//         {FLAG_BADGE07_GET, 62}, //--42
//         {FLAG_HIDE_MOSSDEEP_CITY_SCOTT, 64},
//         {FLAG_RECEIVED_HM_WATERFALL, 68},
//         {FLAG_BADGE08_GET, 70}, //--46
//         {FLAG_DEFEATED_WALLY_VICTORY_ROAD, 73},
//         {FLAG_IS_CHAMPION, 75}, //--58
//         {FLAG_REMATCHED_ALL_GYMS, 80},
//     };

//     u32 i;

//     if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
//     {
//         for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
//         {
//             if (!FlagGet(sLevelCapFlagMap[i][0]))
//                 return sLevelCapFlagMap[i][1];
//         }
//     }
//     else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
//     {
//         return VarGet(B_LEVEL_CAP_VARIABLE);
//     }

//     return MAX_LEVEL;
// }

bool8 CheckLevelCapFlagIsTrue( bool8 flag ){
    bool8 result;

    if( flag == TRUE )
        result = TRUE;
    else
        result = FALSE;

    return result;
}

int CheckHasGymBadges(){

    static const u32 sBadgesObtained[] =
    {
        FLAG_BADGE01_GET,
        FLAG_BADGE02_GET,
        FLAG_BADGE03_GET,
        FLAG_BADGE04_GET,
        FLAG_BADGE05_GET,
        FLAG_BADGE06_GET,
        FLAG_BADGE07_GET,
        FLAG_BADGE08_GET,
    };

    int i;

    for( i = 0; i < ARRAY_COUNT( sBadgesObtained ); i++ ){
        if( i >= 1 ){
           break;
        }
    }

    return i;
}

u32 GetCurrentLevelCap(void)
{
    static const u32 sLevelCapFlagMap[] =
    {
        FLAG_DEFEATED_RIVAL_ROUTE103,
        FLAG_COMPLETED_WALLY_TUTORIAL,
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

    for( int i = 0; i < ARRAY_COUNT( sLevelCapFlagMap ); i++ ){
        if( FlagGet( sLevelCapFlagMap[i] ) ){
            amountFlags++;
        }
    }

    // if( CheckHasGymBadges() && !FLAG_HIDE_PETALBURG_CITY_WALLY ){ //--probably doesn't work because of getting flags magic!!!!
    //     amountFlags = amountFlags + 1;
    // }

    switch ( amountFlags ){
        case 0:
            levelCap = 6;
                
            break;

        case 1:
            levelCap = 10;
                
            break;

        case 2:
            levelCap = 15;
                
            break;

        case 3:
            levelCap = 19;
                
            break;

        case 4:
            levelCap = 24;
                
            break;

        case 5:
            levelCap = 35;
                
            break;

        case 6:
            levelCap = 38;
                
            break;

        case 7:
            levelCap = 45;
                
            break;

        case 8:
            levelCap = 55;
                
            break;

        case 9:
            levelCap = 58;
                
            break;

        case 10:
            levelCap = 62;
                
            break;

        case 11:
            levelCap = 64;
                
            break;

        case 12:
            levelCap = 68;
                
            break;

        case 13:
            levelCap = 70;
                
            break;

        case 14:
            levelCap = 73;
                
            break;

        case 15:
            levelCap = 75;
                
            break;

        case 16:
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
