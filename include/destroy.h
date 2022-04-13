/*
** EPITECH PROJECT, 2022
** Destroy Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "rpg.h"

// Assets
    // Appartment
        // destroy.c
        void destroy_appartment(appartment_t *appartment);

    // Ice cream shop
        // destroy.c
        void destroy_ice(ice_t *ice);

    // City
        // destroy.c
        void destroy_city(city_t *city);

    // Market
        // destroy.c
        void destroy_market(market_t *market);

    // Clothe
        // destroy.c
        void destroy_clothe(clothe_t *clothe);

    // Home Menu
        // destroy.c
        void destroy_home_menu(home_menu_t *home_menu);
        // parallax.c
        void destroy_parallax(parallax_t *parallax);

    // Inventory
        // destroy.c
        void destroy_inventory(inventory_t *inventory);

    // Museum1
        // destroy.c
        void destroy_museum1(museum1_t *museum1);

    // Museum2
        // destroy.c
        void destroy_museum2(museum2_t *museum2);

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

// destroy.c
void destroy_all(game_t *game);
void destroy_event(event_t *event);
void destroy_keys(keys_t *keys);

#endif /* !DESTROY_H_ */
