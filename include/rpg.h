/*
** EPITECH PROJECT, 2021
** Header File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef MY_RPG_H_
    #define MY_RPG_H_

// Libs
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// CSFML Headers
    #include "csfml.h"

// RPG Headers
    #include "abilities.h"
    #include "car.h"
    #include "assets.h"
    #include "data.h"
    #include "destroy.h"
    #include "display.h"
    #include "errors.h"
    #include "event.h"
    #include "fights.h"
    #include "init.h"
    #include "inventory.h"
    #include "pnj.h"
    #include "stage.h"
    #include "texts.h"
    #include "tools.h"
    #include "rpg.h"

// Basic Macros
    #define SUCCESS 0
    #define ERROR 84

// RPG File
    int my_rpg(void);
    int engine(game_t *game);
    void display_cursor(game_t *game);

//////////////////////////////////////////////////////////////////////////////
// View
    // DEFAULT
    #define VIEW_DEFAULT_SIZE ((sfVector2f){640, 360})
    #define VIEW_DEFAULT_POS ((sfVector2f){2468, 1710})
    #define VIEW_DEFAULT_ROTATION 0
    #define VIEW_ZOOM_VALUE 5
    #define VIEW_MAX_ZOOM_IN 250
    #define VIEW_MAX_ZOOM_OUT 700
    #define VIEW_ROTATE_VALUE 0.1

    // MENUS
    #define VIEW_MENUS_SIZE ((sfVector2f){1920, 1080})
    #define VIEW_MENUS_POS ((sfVector2f){960, 540})

    #define VIEW_HOME_MENU_SIZE ((sfVector2f){640, 360})
    #define VIEW_HOME_MENU_POS ((sfVector2f){320, 180})

    #define VIEW_INTRO_SIZE ((sfVector2f){1280, 720})
    #define VIEW_INTRO_POS ((sfVector2f){640, 360})

    // SHOP
    #define VIEW_SHOP_SIZE ((sfVector2f){3414, 1920})
    #define VIEW_SHOP_POS ((sfVector2f){1707, 960})

    // FIGHTS
    #define VIEW_FIGHTS_SIZE ((sfVector2f){520, 307})
    #define VIEW_FIGHTS_POS ((sfVector2f){260, 153.50})

    // Appartment
    #define VIEW_APPARTMENT_SIZE ((sfVector2f){600, 320})
    #define VIEW_APPARTMENT_POS ((sfVector2f){258.5, 146})

    // Bar
    #define VIEW_BAR_SIZE ((sfVector2f){852, 480})
    #define VIEW_BAR_POS ((sfVector2f){208, 134})

    // City
    #define VIEW_CITY_SIZE ((sfVector2f){853, 480})
    #define VIEW_CITY_POS ((sfVector2f){2468, 1710})

    // Ice Cream Shop
    #define VIEW_ICE_SIZE ((sfVector2f){600, 320})
    #define VIEW_ICE_POS ((sfVector2f){192, 160})

    // Clothe shop
    #define VIEW_CLOTHE_SIZE ((sfVector2f){853, 480})
    #define VIEW_CLOTHE_POS ((sfVector2f){207, 214})

    // Market
    #define VIEW_MARKET_SIZE ((sfVector2f){853, 480})
    #define VIEW_MARKET_POS ((sfVector2f){240, 150})

    // Museum
    #define VIEW_MUSEUM_SIZE ((sfVector2f){1280, 720})
    #define VIEW_MUSEUM_POS ((sfVector2f){256, 342})
    #define VIEW_MUSEUM_POS_1 ((sfVector2f){693, 1427})
    #define VIEW_MUSEUM_POS_2 ((sfVector2f){2776, 518})
    #define VIEW_MUSEUM_POS_3 ((sfVector2f){2337, 1655})
    #define VIEW_MUSEUM_POS_4 ((sfVector2f){256, 2277})
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Rat
    #define SCALE_RAT ((sfVector2f){1.00, 1.00})
    // Speed
    #define RAT_SPEED_APPARTMENT 1.3
    #define RAT_SPEED_CITY 2.2
    #define RAT_SPEED_ICE_CREAM_SHOP 1.3
    #define RAT_SPEED_CLOTHE_SHOP 1
    #define RAT_SPEED_BAR 1.3
    #define RAT_SPEED_MARKET 1.3
    #define RAT_SPEED_MUSEUM 1.3

    // Competencies
    #define RAT_RADIUS_0 150
    #define RAT_RADIUS_10 135
    #define RAT_RADIUS_20 120
    #define RAT_RADIUS_40 90
    #define RAT_SPEED_MULTIPLIER_30 1.3
    #define RAT_SPEED_MULTIPLIER_40 1.4
    #define RAT_SPEED_MULTIPLIER_50 1.5
    #define RAT_SPEED_MULTIPLIER_100 2.0

    // Pos
    #define RAT_DEFAULT_POS_CITY_APPARTMENT ((sfVector2f){2468, 1710})
    #define RAT_DEFAULT_POS_CITY_BAR ((sfVector2f){1022, 1708})
    #define RAT_DEFAULT_POS_CITY_ICE_SHOP ((sfVector2f){915, 1675})
    #define RAT_DEFAULT_POS_CITY_MUSEUM ((sfVector2f){2034, 590})
    #define RAT_DEFAULT_POS_CITY_MUSEUM_OUT ((sfVector2f){2664, 590})
    #define RAT_DEFAULT_POS_CITY_CLOTHE_STORE ((sfVector2f){588, 1672})
    #define RAT_DEFAULT_POS_CITY_MARKET ((sfVector2f){1524, 1690})

    #define RAT_DEFAULT_POS_APPARTMENT ((sfVector2f){166, 252})
    #define RAT_DEFAULT_POS_BAR ((sfVector2f){31, 162})
    #define RAT_DEFAULT_POS_ICE_CREAM_SHOP ((sfVector2f){195, 300})
    #define RAT_DEFAULT_POS_CLOTHE_SHOP ((sfVector2f){50, 160})
    #define RAT_DEFAULT_POS_MARKET ((sfVector2f){30, 240})
    #define RAT_DEFAULT_POS_MUSEUM ((sfVector2f){15, 530})
    #define RAT_DEFAULT_POS_MUSEUM_1_TO_E ((sfVector2f){420, 540})
    #define RAT_DEFAULT_POS_MUSEUM_E_TO_1 ((sfVector2f){435, 1650})
    #define RAT_DEFAULT_POS_MUSEUM_1_TO_2 ((sfVector2f){2570, 750})
    #define RAT_DEFAULT_POS_MUSEUM_2_TO_1 ((sfVector2f){940, 1650})
    #define RAT_DEFAULT_POS_MUSEUM_2_TO_3 ((sfVector2f){2030, 1790})
    #define RAT_DEFAULT_POS_MUSEUM_3_TO_2 ((sfVector2f){2980, 760})
    #define RAT_DEFAULT_POS_MUSEUM_3_TO_4 ((sfVector2f){15, 2375})
    #define RAT_DEFAULT_POS_MUSEUM_4_TO_3 ((sfVector2f){2645, 1790})

    // Idle
    #define RAT_IDLE_FRONT_OFFSET 18
    #define RAT_IDLE_FRONT_MAX 94
    #define RAT_IDLE_BACK_OFFSET 18
    #define RAT_IDLE_BACK_MAX 94
    #define RAT_IDLE_SIDE_OFFSET 27
    #define RAT_IDLE_SIDE_MAX 130
    #define RAT_IDLE_DIAGONAL_OFFSET 20
    #define RAT_IDLE_DIAGONAL_MAX 102

    // Movement
    #define RAT_UP_OFFSET 20
    #define RAT_UP_MAX 135
    #define RAT_DOWN_OFFSET 20
    #define RAT_DOWN_MAX 140
    #define RAT_SIDE_OFFSET 27
    #define RAT_SIDE_MAX 177
    #define RAT_DIAGONAL_OFFSET 23
    #define RAT_DIAGONAL_MAX 156

    // Dodge
    #define RAT_DODGE_UP_OFFSET 22
    #define RAT_DODGE_UP_MAX 214
    #define RAT_DODGE_DOWN_OFFSET 22
    #define RAT_DODGE_DOWN_MAX 214
    #define RAT_DODGE_SIDE_OFFSET 31
    #define RAT_DODGE_SIDE_MAX 290
    #define RAT_DODGE_DIAGONAL_OFFSET 27
    #define RAT_DODGE_DIAGONAL_MAX 255

    // Kick
    #define RAT_KICK_DOWN_OFFSET 22
    #define RAT_KICK_DOWN_MAX 18
    #define RAT_KICK_SIDE_OFFSET 23
    #define RAT_KICK_SIDE_MAX 87
    #define RAT_KICK_DIAGONAL_OFFSET 21
    #define RAT_KICK_DIAGONAL_MAX 63
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Locations
    // Appartment
    #define LOCATION_DOOR_APPARTMENT ((sfVector2f){145, 280})

    // Bar
    #define LOCATION_DOOR_BAR ((sfVector2f){0, 110})

    // City
    #define LOCATION_APPARTMENT ((sfVector2f){2450, 1690})
    #define LOCATION_BAR ((sfVector2f){1008, 1667})
    #define LOCATION_ICE_SHOP ((sfVector2f){904, 1667})
    #define LOCATION_CLOTHE_SHOP ((sfVector2f){573, 1666})
    #define LOCATION_MARKET ((sfVector2f){1510, 1683})
    #define LOCATION_MUSEUM ((sfVector2f){2022, 556})

    // Ice Cream Shop
    #define LOCATION_DOOR_ICE_CREAM_SHOP ((sfVector2f){160, 310})

    // Clothe
    #define LOCATION_DOOR_CLOTHE_STORE ((sfVector2f){0, 110})

    // Market
    #define LOCATION_DOOR_MARKET ((sfVector2f){0, 180})

    // Museum
    #define LOCATION_DOOR_MUSEUM ((sfVector2f){10, 500})
    #define LOCATION_DOOR_MUSEUM_E_TO_1 ((sfVector2f){450, 500})
    #define LOCATION_DOOR_MUSEUM_1_TO_E ((sfVector2f){430, 1625})
    #define LOCATION_DOOR_MUSEUM_1_TO_2 ((sfVector2f){950, 1625})
    #define LOCATION_DOOR_MUSEUM_2_TO_1 ((sfVector2f){2565, 725})
    #define LOCATION_DOOR_MUSEUM_2_TO_3 ((sfVector2f){2968, 725})
    #define LOCATION_DOOR_MUSEUM_3_TO_2 ((sfVector2f){2025, 1725})
    #define LOCATION_DOOR_MUSEUM_3_TO_4 ((sfVector2f){2650, 1725})
    #define LOCATION_DOOR_MUSEUM_4_TO_3 ((sfVector2f){10, 2325})
    #define LOCATION_DOOR_MUSEUM_4_TO_CITY ((sfVector2f){500, 2325})

    // Back to museum
    #define DOOR_BACK_TO_MUSEUM ((sfVector2f){0, 573})
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// XP
    #define XP_FOR_1_LEVEL 100

#endif /* !MY_RPG_H_ */
