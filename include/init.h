/*
** EPITECH PROJECT, 2022
** Init Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "rpg.h"

// Assets
    // Appartment
        // init.c
        void init_appartment(game_t *game);

    // City
        // init.c
        void init_city(game_t *game);

    // Home Menu
        // Parallax
            // init.c
            void init_parallax(game_t *game);
        // init.c
        void init_home_menu(game_t *game);

    // Ice Cream
        // init.c
        void init_ice_cream(game_t *game);

    // Market
        // init.c
        void init_market(game_t *game);

    // Rat
        // init.c
        void init_rat(game_t *game, const char *filename_color);

    // Transitions
        // init.c
        void init_transitions(game_t *game);

    // init.c
    void init_assets(game_t *game);
    void init_cursor(game_t *game);

// Audio
    // init.c
    void init_audio(game_t *game);

    // musics.c
    void init_musics(game_t *game);

    // sounds.c
    void init_sounds(game_t *game);

// game.c
game_t *init_game(void);
void init_window(game_t *game);
void init_event(game_t *game);
void init_keys(game_t *game);

#endif /* !INIT_H_ */
