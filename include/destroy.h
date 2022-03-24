/*
** EPITECH PROJECT, 2022
** Destroy Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "rpg.h"

// City
    // destroy.c
    void destroy_city(city_t *city);

// Rat
    // destroy.c
    void destroy_rat(rat_t *rat);

// destroy.c
void destroy_all(game_t *game);
void destroy_event(event_t *event);
void destroy_assets(assets_t *assets);

#endif /* !DESTROY_H_ */
