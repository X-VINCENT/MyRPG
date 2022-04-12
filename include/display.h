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

// Ice Shop
    // display.c
    void display_ice_cream(game_t *game);

// Inventory
    // display.c
    void display_inventory(game_t *game);

//pnjs
    //display.c
    void display_pnj(game_t *game, pnj_t *pnj);

// Clothe
    // display.c
    void display_clothe(game_t *game);

// Market
    // display.c
    void display_market(game_t *game);

// Museum1
    // display.c
    void display_museum1(game_t *game);

// Museum2
    // display.c
    void display_museum2(game_t *game);

// Rat
    // display.c
    void display_rat(game_t *game);

// Settings
    // audio.c
    void display_settings_audio(game_t *game);

    // controls.c
    void display_settings_controls(game_t *game);

    // display.c
    void display_settings(game_t *game);

    // game.c
    void display_settings_game(game_t *game);

    // graphics.c
    void display_settings_graphics(game_t *game);

// Top Bar
    void display_top_bar(game_t *game);

// Transitions
    // display.c
    void display_transition(game_t *game);

#endif /* !DISPLAY_H_ */
