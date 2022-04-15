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
    #include "assets.h"
    #include "data.h"
    #include "destroy.h"
    #include "display.h"
    #include "errors.h"
    #include "event.h"
    #include "init.h"
    #include "inventory.h"
    #include "pnj.h"
    #include "stage.h"
    #include "texts.h"
    #include "tools.h"

// Basic Macros
    #define SUCCESS 0
    #define ERROR 84

// RPG File
    int my_rpg(void);
    int engine(game_t *game);
    void display_cursor(game_t *game);

// Window
    #define DEFAULT_FPS 0
    #define DEFAULT_WINDOW_RESOLUTION 1080

//////////////////////////////////////////////////////////////////////////////
// View
    // DEFAULT
    #define VIEW_DEFAULT_SIZE (sfVector2f) {640, 360}
    #define VIEW_DEFAULT_POS (sfVector2f) {2468, 1710}
    #define VIEW_DEFAULT_ROTATION 0
    #define VIEW_ZOOM_VALUE 5
    #define VIEW_MAX_ZOOM_IN 250
    #define VIEW_MAX_ZOOM_OUT 700
    #define VIEW_ROTATE_VALUE 1

    // MENUS
    #define VIEW_MENUS_SIZE (sfVector2f) {1920, 1080}
    #define VIEW_MENUS_POS (sfVector2f) {960, 540}

    #define VIEW_HOME_MENU_SIZE (sfVector2f) {640, 360}
    #define VIEW_HOME_MENU_POS (sfVector2f) {320, 180}

    // Appartment
    #define VIEW_APPARTMENT_SIZE (sfVector2f) {600, 320}
    #define VIEW_APPARTMENT_POS (sfVector2f) {258.5, 146}

    // City
    #define VIEW_CITY_SIZE (sfVector2f) {853, 480}
    #define VIEW_CITY_POS (sfVector2f) {2468, 1710}

    // Ice Cream Shop
    #define VIEW_ICE_SIZE (sfVector2f) {600, 320}
    #define VIEW_ICE_POS (sfVector2f) {288, 240}

    // Clothe shop
    #define VIEW_CLOTHE_SIZE (sfVector2f) {1024, 768}
    #define VIEW_CLOTHE_POS (sfVector2f) {336, 321}

    // Market
    #define VIEW_MARKET_SIZE (sfVector2f) {740, 450}
    #define VIEW_MARKET_POS (sfVector2f) {370, 225}

    // Museum
    #define VIEW_MUSEUM1_SIZE (sfVector2f) {1920, 1080}
    #define VIEW_MUSEUM1_POS (sfVector2f) {384, 528}
    #define VIEW_MUSEUM2_SIZE (sfVector2f) {1600, 900}
    #define VIEW_MUSEUM2_POS (sfVector2f) {480, 408}
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Rat
    #define SCALE_RAT (sfVector2f) {1.00, 1.00}
    // Speed
    #define RAT_SPEED_APPARTMENT 1
    #define RAT_SPEED_CITY 4
    #define RAT_SPEED_ICE_CREAM_SHOP 1
    #define RAT_SPEED_CLOTHE_SHOP 1
    #define RAT_SPEED_MARKET 2
    #define RAT_SPEED_MUSEUM1 2
    #define RAT_SPEED_MUSEUM2 2

    // Pos
    #define RAT_DEFAULT_POS_CITY_APPARTMENT (sfVector2f) {2468, 1710}
    #define RAT_DEFAULT_POS_CITY_ICE_SHOP (sfVector2f) {915, 1675}
    #define RAT_DEFAULT_POS_CITY_MUSEUM1 (sfVector2f) {2034, 590}
    #define RAT_DEFAULT_POS_CITY_CLOTHE_STORE (sfVector2f) {588, 1672}
    #define RAT_DEFAULT_POS_CITY_MARKET (sfVector2f) {1524, 1690}

    #define RAT_DEFAULT_POS_APPARTMENT (sfVector2f) {166, 252}
    #define RAT_DEFAULT_POS_ICE_CREAM_SHOP (sfVector2f) {288, 380}
    #define RAT_DEFAULT_POS_CLOTHE_SHOP (sfVector2f) {36, 232}
    #define RAT_DEFAULT_POS_MARKET (sfVector2f) {30, 342}
    #define RAT_DEFAULT_POS_MUSEUM1 (sfVector2f) {47, 793}
    #define RAT_DEFAULT_POS_MUSEUM2 (sfVector2f) {47, 622}

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
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Locations
    // Appartment
    #define LOCATION_DOOR_APPARTMENT (sfVector2f) {145, 280}

    // City
    #define LOCATION_APPARTMENT (sfVector2f) {2450, 1690}
    #define LOCATION_ICE_SHOP (sfVector2f) {904, 1667}
    #define LOCATION_CLOTHE_SHOP (sfVector2f) {573, 1666}
    #define LOCATION_MARKET (sfVector2f) {1510, 1683}
    #define LOCATION_MUSEUM1 (sfVector2f) {2022, 556}

    // Ice Cream Shop
    #define LOCATION_DOOR_ICE_CREAM_SHOP (sfVector2f) {235, 395}

    // Clothe
    #define LOCATION_DOOR_CLOTHE_STORE (sfVector2f) {50, 226}

    // Market
    #define LOCATION_DOOR_MARKET (sfVector2f) {0, 320}

    // Museum1
    #define LOCATION_DOOR_MUSEUM1 (sfVector2f) {0, 765}

    //Museum2
    #define LOCATION_TO_MUSEUM2 (sfVector2f) {667, 765}

    //Back to museum1
    #define DOOR_BACK_TO_MUSEUM1 (sfVector2f) {0, 573}
    #define LOCATION_BACK_TO_MUSEUM2 (sfVector2f) {667, 805}
//////////////////////////////////////////////////////////////////////////////

#endif /* !MY_RPG_H_ */
