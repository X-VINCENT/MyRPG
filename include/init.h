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
        //animated
            //doors.c
            void init_doors(game_t *game);

    // Clothe
        //init.c
        void init_clothe(game_t *game);

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

    // Museum1
        //init.c
        void init_museum1(game_t *game);

    // Museum2
        //init.c
        void init_museum2(game_t *game);

    // Rat
        // init.c
        void init_rat(game_t *game, sfTexture *color_texture);

    // Settings
        // audio.c
        void init_settings_audio(game_t *game);

        // controls_choose_key.c
        void init_settings_controls_choose_key(game_t *game);

        // controls.c
        void init_settings_controls(game_t *game);

        // game.c
        void init_settings_game(game_t *game);

        // graphics.c
        void init_settings_graphics(game_t *game);

        // init.c
        void init_settings(game_t *game);

    // Top Bar
        // init.c
        void init_top_bar(game_t *game);

    // Transitions
        // init.c
        void init_transitions(game_t *game);

    // Pnj
        // init.c
        void init_struct_pnjs(game_t *game);

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

// Inventory
    // init.c
    void init_inventory(game_t *game);

// Textures
    // characters.c
    void init_textures_characters(game_t *game);
    void init_textures_environnment(game_t *game);
    void init_textures_icons(game_t *game);
    void init_textures(game_t *game);
    void init_textures_inventory(game_t *game);
    void init_textures_menus(game_t *game);
    void init_textures_objects(game_t *game);

// game.c
game_t *init_game(void);
void init_window(game_t *game);
void init_event(game_t *game);
void init_keys(game_t *game);

#endif /* !INIT_H_ */
