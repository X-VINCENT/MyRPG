/*
** EPITECH PROJECT, 2022
** Display Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DISPLAY_H_
    #define DISPLAY_H_

    #include "rpg.h"

// Appartment
    // display.c
    void display_appartment(game_t *game);

// City
    // display.c
    void display_city(game_t *game);

// Home Menu
    // Parallax
        // display.c
        void animate_parallax(game_t *game);
        void display_parallax(game_t *game);
    // display.c
    void display_home_menu(game_t *game);

// Ice Cream Shop
    // display.c
    void display_ice_cream(game_t *game);

//Clothe
    //display.c
    void display_clothe(game_t *game);

// Market
    // display.c
    void display_market(game_t *game);

// Rat
    // display.c
    void display_rat(game_t *game);

// Transitions
    // display.c
    void display_transition(game_t *game);

#endif /* !DISPLAY_H_ */
