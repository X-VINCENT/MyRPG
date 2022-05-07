/*
** EPITECH PROJECT, 2022
** Display Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DISPLAY_H_
    #define DISPLAY_H_

    #include "rpg.h"

// Abilities
    // display.c
    void display_abilities(game_t *game);

// Appartment
    // display.c
    void display_appartment(game_t *game);

// Bar
    //display.c
    void display_bar(game_t *game);

// City
    // display.c
    void display_city(game_t *game);
    void display_rain(particle_t *rain, sfRenderWindow *window);
    void animate_rain(particle_t *rain, sfRenderWindow *window);
    void display_wind(particle_t *wind, sfRenderWindow *window);
    void animate_wind(particle_t *rain, sfRenderWindow *window);
    void display_fire(fire_t *fire, sfRenderWindow *window);
    void animate_fire(fire_t *fire, sfRenderWindow *window, sfVector2f pos);
    void fire(game_t *game);
    void display_car(game_t *game);

    // minimap.c
    void display_minimap(game_t *game);

// Fights
    // characters.c
    void display_fights_rat(game_t *game);
    void display_fights_enemy(game_t *game);

    // display.c
    void display_fights(game_t *game);

    // gui.c
    void display_fights_gui(game_t *game);

    // result.c
    void display_fights_win(game_t *game);
    void display_fights_loose(game_t *game);

// Game Menu
    // display.c
    void display_game_menu(game_t *game);

// Home Menu
    // Parallax
        // display.c
        void animate_parallax(game_t *game);
        void display_parallax(game_t *game);
    // display.c
    void display_home_menu(game_t *game);

// HowToPlay
    // display.c
    void display_howtoplay(game_t *game);

// Ice Shop
    // display.c
    void display_ice_cream(game_t *game);

// Introduction
    // display.c
    void display_introduction(game_t *game);

// Inventory
    // display.c
    void display_inventory(game_t *game);

// Pnj
    // display.c
    void display_pnj(game_t *game, pnj_t *pnj, int idx);
    void move_circle(game_t *game, pnj_t *pnj);
    void check_intersect_circle(game_t *game, pnj_t *pnj, int idx);
    void move_pnj(game_t *game, int nbr_animated_pnj);

// Clothe
    // display.c
    void display_clothe(game_t *game);

// Market
    // display.c
    void display_market(game_t *game);

// Museum
    // display.c
    void display_museum(game_t *game);

// Rat
    // actions.c
    void display_rat_dodge(game_t *game);
    void display_rat_kick(game_t *game);
    void display_rat_bite(game_t *game);

    // display.c
    void display_rat(game_t *game);
    void display_circle_rat(game_t *game);

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

// Shop
    // display.c
    void display_shop(game_t *game);

// Stats
    // display.c
    void display_stats(game_t *game);

// Top Bar
    void display_top_bar(game_t *game);

// Transition
    // display.c
    void display_transition(game_t *game);

#endif /* !DISPLAY_H_ */
