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
    #define MAP "assets/map/map.jpg"
    #define BLUE_RAT "assets/pictures/rats/blue.png"
    #define CURSOR "assets/pictures/icons/cursor_icon.png"

    // Stage
    #define START_STAGE 0
    #define MAP_STAGE 1

    // Rat
    #define SCALE_RAT 1
    #define RAT_SPEED 10

    // View
    #define ZOOM 10
    #define MAX_ZOOM 150
    #define MAX_DEZOOM 1000

#endif /* !MY_RPG_H_ */
