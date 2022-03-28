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
    #include "data.h"
    #include "destroy.h"
    #include "display.h"
    #include "errors.h"
    #include "event.h"
    #include "init.h"
    #include "stage.h"
    #include "tools.h"

// Basic Macros
    #define SUCCESS 0
    #define ERROR 84

// RPG File
    int my_rpg(void);
    int engine(game_t *game);
    void display_cursor(game_t *game);

// Assets
// Audio
    // Musics
    // Sounds

// Images
    // Characters
        // Rat
        #define BLUE_RAT "assets/images/characters/rat/blue.png"
        #define RED_RAT "assets/images/characters/rat/red.png"
        #define GREEN_RAT "assets/images/characters/rat/green.png"
        #define PURPLE_RAT "assets/images/characters/rat/purple.png"

    // Environments
    #define APPARTMENT "assets/images/environments/appartment/view.png"
    #define APPART_HITBOX "assets/images/environments/appartment/hitbox.bmp"
    #define CITY "assets/images/environments/city/view.png"
    #define CITY_HITBOX "assets/images/environments/city/hitbox.bmp"
    #define ICE "assets/images/environments/ice_cream_shop/ice_cream_shop.png"
    #define CLOTHE "assets/images/environments/clothe_store/cothestore.png"
    #define MARKET "assets/images/environments/market/market.png"
    #define MUSEUM1 "assets/images/environments/museum/museum1.png"
    #define MUSEUM2 "assets/images/environments/museum/museum2.png"

    // Icons
    #define CURSOR "assets/images/icons/cursor_icon.png"
    #define WINDOW_ICON "assets/images/icons/window_icon.png"

    // Menus
        // Transitions
            // Rat
            #define RAT_ENTER "assets/images/menus/transitions/rat/enter.png"
            #define RAT_QUIT "assets/images/menus/transitions/rat/quit.png"

// Window
#define DEFAULT_FPS 0
#define DEFAULT_WINDOW_RESOLUTION 1080

// View
    // DEFAULT
    #define VIEW_DEFAULT_SIZE (sfVector2f){1920, 1080}
    #define VIEW_DEFAULT_POS (sfVector2f){2468, 1710}
    #define VIEW_DEFAULT_ROTATION 0
    #define VIEW_ZOOM_VALUE 10
    #define VIEW_MAX_ZOOM_IN 150
    #define VIEW_MAX_ZOOM_OUT 1000
    #define VIEW_ROTATE_VALUE 5

    // Appartment
    #define VIEW_APPARTMENT_SIZE (sfVector2f){517, 292}
    #define VIEW_APPARTMENT_POS (sfVector2f){258.5, 146}

    // Ice Cream Shop
    #define VIEW_ICE_SIZE (sfVector2f){576, 480}
    #define VIEW_ICE_POS (sfVector2f){0, 0}

    // City
    #define VIEW_CITY_SIZE (sfVector2f){720, 480}
    #define VIEW_CITY_POS (sfVector2f){2468, 1710}

// Rat
    // Speed
        #define RAT_SPEED_APPARTMENT 2
        #define RAT_SPEED_CITY 5
        #define RAT_DEFAULT_POS_APPARTMENT (sfVector2f){166, 272}
        #define RAT_DEFAULT_POS_CITY (sfVector2f){2468, 1710}
        #define SCALE_RAT (sfVector2f){1.00, 1.00}
    // Idle
        #define RAT_IDLE_FRONT_OFFSET 18
        #define RAT_IDLE_FRONT_MAX 94
        #define RAT_IDLE_BACK_OFFSET 18
        #define RAT_IDLE_BACK_MAX 94
        #define RAT_IDLE_SIDE_OFFSET 27
        #define RAT_IDLE_SIDE_MAX 130
    // Movement
        #define RAT_UP_OFFSET 20
        #define RAT_UP_MAX 135
        #define RAT_DOWN_OFFSET 20
        #define RAT_DOWN_MAX 140
        #define RAT_SIDE_OFFSET 27
        #define RAT_SIDE_MAX 177

// Locations
    // Appartment
    #define LOCATION_DOOR_APPARTMENT (sfVector2f){145, 280}

    // City
    #define LOCATION_APPARTMENT (sfVector2f){2460, 1698}

#endif /* !MY_RPG_H_ */
