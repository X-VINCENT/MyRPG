/*
** EPITECH PROJECT, 2022
** Init Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "rpg.h"

// Abilities
    // init.c
    void init_abilities(game_t *game);

    // menu.c
    void init_abilities_menu(game_t *game);

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
        // init.c
        void init_clothe(game_t *game);

    // Game Menu
        // init.c
        void init_game_menu(game_t *game);

    // Home Menu
        // Parallax
            // init.c
            void init_parallax(game_t *game);
        // init.c
        void init_home_menu(game_t *game);

    // Howtoplay
        // init.c
        void init_howtoplay(game_t *game);

    // Ice Cream
        // init.c
        void init_ice_cream(game_t *game);

    // Market
        // init.c
        void init_market(game_t *game);

    // Museum1
        //init.c
        void init_museum(game_t *game);

    // Rat
        // actions.c
        void init_rat_dodge(game_t *game, sfTexture *texture);

        // init.c
        void init_rat(game_t *game, sfTexture *texture);
        void init_rat_circle(game_t *game);

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
        void move_rect_pos_offset(sfVector2f *pos, sfIntRect *rect, int offset);
        void init_settings(game_t *game);

    // Stats
        // init.c
        void init_stats(game_t *game);

        // stat.c
        void init_stats_stats(game_t *game);

        // wallet.c
        void init_wallets_stats(game_t *game);

    // Top Bar
        // init.c
        void init_top_bar(game_t *game);

    // Transitions
        // init.c
        void init_transitions(game_t *game);

    // Pnj
        // init.c
        void init_struct_pnjs(game_t *game);
        void citizens_png(game_t *game);
        void init_text_pnj(pnj_t *pnj, sfVector2f pos, char *first_message);

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

// Data
    // init.c
    void init_data(game_t *game);

// Inventory
    // init.c
    save_t *load_save(char *save_directory);
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

// keys.c
void init_keys(game_t *game);

#endif /* !INIT_H_ */
