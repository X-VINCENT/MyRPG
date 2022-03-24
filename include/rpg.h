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
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// CSFML
    #include "csfml.h"

// My Runner
    #include "data.h"
    #include "destroy.h"
    #include "errors.h"
    #include "game.h"
    #include "init.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

// Assets
// Audio
    // Musics
    // Sounds

// Images
    // Characters
        // Rat
        #define BLUE_RAT "assets/images/characters/rat/blue.png"

    // Environments
    #define APPARTMENT "assets/images/environments/appartment/view.png"
    #define APPART_HITBOX "assets/images/environments/appartment/hitbox.bmp"
    #define CITY "assets/images/environments/city/view.jpg"

    // Icons
    #define CURSOR "assets/images/icons/cursor_icon.png"
    #define WINDOW_ICON "assets/images/icons/window_icon.png"

    // Objects

    // Stage
    #define START_STAGE 0
    #define CITY_STAGE 1
    #define APPARTMENT_STAGE 2

    // Window
    #define DEFAULT_FPS 60
    #define DEFAULT_WINDOW_RESOLUTION 1080

    // View
    #define VIEW_DEFAULT_SIZE_X 517
    #define VIEW_DEFAULT_SIZE_Y 292
    #define VIEW_DEFAULT_POS_X 258.5
    #define VIEW_DEFAULT_POS_Y 146
    #define VIEW_DEFAULT_ROTATION 0
    #define VIEW_ZOOM_VALUE 10
    #define VIEW_MAX_ZOOM_IN 150
    #define VIEW_MAX_ZOOM_OUT 1000
    #define VIEW_ROTATE_VALUE 5

    // Rat
    #define RAT_DEFAULT_POS_X 100
    #define RAT_DEFAULT_POS_Y 100
    #define SCALE_RAT 1
    #define RAT_SPEED 1

#endif /* !MY_RPG_H_ */
