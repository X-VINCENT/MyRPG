/*
** EPITECH PROJECT, 2022
** Destroy Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "rpg.h"

// Appartment
    // destroy.c
    void destroy_appartment(appartment_t *appartment);

// City
    // destroy.c
    void destroy_city(city_t *city);

// Home Menu
    // destroy.c
    void destroy_home_menu(home_menu_t *home_menu);
     //parallax
     void destroy_parallax(parallax_t *parallax);

// Rat
    // destroy.c
    void destroy_rat(rat_t *rat);

// destroy.c
void destroy_all(game_t *game);
void destroy_event(event_t *event);
void destroy_assets(assets_t *assets);

#endif /* !DESTROY_H_ */
