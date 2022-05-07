/*
** EPITECH PROJECT, 2022
** Destroy Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_assets_car(assets_t *assets)
{
    sfClock_destroy(assets->car->clock);
    sfClock_destroy(assets->car->clock_animation);
    destroy_sprite(assets->car->car);
    sfClock_destroy(assets->car_right->clock);
    sfClock_destroy(assets->car_right->clock_animation);
    destroy_sprite(assets->car_right->car);
    free(assets->car);
    free(assets->car_right);
}

void destroy_assets_2(assets_t *assets)
{
    destroy_market(assets->market);
    destroy_clothe(assets->clothe);
    destroy_museum(assets->museum);
    destroy_settings(assets->settings);
    destroy_shop(assets->shop);
    destroy_stats(assets->stats);
    destroy_top_bar(assets->top_bar);
    destroy_pnjs(assets->pnj);
    destroy_sprite(assets->end->win);
    destroy_sprite(assets->end->loose);
    destroy_introduction(assets->introduction);
    free(assets);
}

void destroy_assets(assets_t *assets)
{
    if (!assets)
        return;
    destroy_appartment(assets->appartment);
    destroy_city(assets->city);
    destroy_game_menu(assets->game_menu);
    destroy_home_menu(assets->home_menu);
    destroy_howtoplay(assets->howtoplay);
    destroy_rat(assets->rat);
    destroy_ice(assets->ice);
    destroy_assets_2(assets);
}
