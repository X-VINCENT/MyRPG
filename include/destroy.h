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
        //destroy.c
        void destroy_clothe(clothe_t *clothe);
    // Home Menu
        // destroy.c
        void destroy_home_menu(home_menu_t *home_menu);
        //parallax
        void destroy_parallax(parallax_t *parallax);

    // Rat
        // destroy.c
        void destroy_rat(rat_t *rat);

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
