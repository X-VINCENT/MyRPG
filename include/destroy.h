/*
** EPITECH PROJECT, 2022
** Destroy Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "rpg.h"

// Abilities
    // destroy.c
    void destroy_abilities(abilities_t *abilities);

// Assets
    // Appartment
        // destroy.c
        void destroy_appartment(appartment_t *appartment);

    // Bar
        // destroy.c
        void destroy_bar(bar_t *bar);

    // City
        // destroy.c
        void destroy_city(city_t *city);

    // Market
        // destroy.c
        void destroy_market(market_t *market);

    // Clothe
        // destroy.c
        void destroy_clothe(clothe_t *clothe);

    // Game Menu
        // destroy.c
        void destroy_game_menu(game_menu_t *game_menu);

    // Home Menu
        // destroy.c
        void destroy_home_menu(home_menu_t *home_menu);
        // parallax.c
        void destroy_parallax(parallax_t *parallax);

    // HowToPlay
        // destroy.c
        void destroy_howtoplay(howtoplay_t *howtoplay);

    // Ice cream shop
        // destroy.c
        void destroy_ice(ice_t *ice);

    // Introduction
        // destroy.c
        void destroy_introduction(introduction_t *introduction);

    // Inventory
        // destroy.c
        void destroy_inventory(inventory_t *inventory);

    // Particless
        // destroy.c
        void destroy_particles(game_t *game);

    // Museum
        // destroy.c
        void destroy_museum(museum_t *museum);

    // Pnj
        // destroy.c
        void destroy_pnjs(pnj_t **pnj);

    // Rat
        // destroy.c
        void destroy_rat(rat_t *rat);

    // Settings
        // controls.c
        void destroy_settings_controls(settings_controls_t *s_controls);

        // destroy.c
        void destroy_settings(settings_t *settings);

    // Shop
        // destroy.c
        void destroy_shop(shop_t *shop);

    // Stats
        // destroy.c
        void destroy_stats(stats_t *stats);

    // Top Bar
        // destroy.c
        void destroy_top_bar(top_bar_t *bar);

    // Textures
        // destroy.c
        void destroy_textures(textures_t *textures);

    // destroy.c
    void destroy_assets(assets_t *assets);

// Audio
    // destroy.c
    void destroy_audio(audio_t *audio);

    // musics.c
    void destroy_musics(musics_t *musics);

    // sounds.c
    void destroy_sounds(sounds_t *sounds);

// Data
    // destroy.c
    void destroy_save(save_t *save);
    void destroy_data(data_t *data);

// Fights
    // destroy.c
    void destroy_fights(fights_t *fights);

// destroy.c
void destroy_all(game_t *game);

// save_game.c
void save_game_data_in_file(save_game_t *save, const char *filename);

// save.c
void save_all_data(game_t *game);

#endif /* !DESTROY_H_ */
