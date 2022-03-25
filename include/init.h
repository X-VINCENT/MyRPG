/*
** EPITECH PROJECT, 2022
** Init Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "rpg.h"

// Appartment
    // init.c
    void init_appartment(game_t *game);

// City
    // init.c
    void init_city(game_t *game);

// home_menu
    //init.c
    void init_home_menu(assets_t *assets);

    //parallax
        // init.c
        void init_parallax(home_menu_t *home);

// Rat
    // init.c
    void init_rat(game_t *game, const char *filename_color);

// init_assets.c
void init_assets(game_t *game);
void init_cursor(game_t *game);

// init_game.c
game_t *init_game(void);
void init_window(game_t *game);
void init_view(game_t *game);
void init_event(game_t *game);
void init_keys(game_t *game);

#endif /* !INIT_H_ */
