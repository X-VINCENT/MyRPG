/*
** EPITECH PROJECT, 2022
** Destroy particles for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_rain(game_t *game)
{
    for (int i = 0; i < RAIN_NUMBER; i++) {
        sfSprite_destroy(game->assets->city->rain->sprite);
        game->assets->city->rain = game->assets->city->rain->next;
        if (game->assets->city->rain->previous)
            free(game->assets->city->rain->previous);
    }
    free(game->assets->city->rain);
}

void destroy_wind(game_t *game)
{
    for (int i = 0; i < WIND_NUMBER; i++) {
        sfSprite_destroy(game->assets->city->wind->sprite);
        game->assets->city->wind = game->assets->city->wind->next;
        if (game->assets->city->wind->previous)
            free(game->assets->city->wind->previous);
    }
    free(game->assets->city->wind);
}

void destroy_fire(game_t *game)
{
    for (int i = 0; i < FIRE_NUMBER; i++) {
        sfRectangleShape_destroy(game->assets->city->fire->pixel);
        sfRectangleShape_destroy(game->assets->city->fire_car->pixel);
        game->assets->city->fire = game->assets->city->fire->next;
        game->assets->city->fire_car = game->assets->city->fire_car->next;
        if (game->assets->city->fire->previous)
            free(game->assets->city->fire->previous);
        if (game->assets->city->fire_car->previous)
            free(game->assets->city->fire_car->previous);
    }
    free(game->assets->city->fire);
    free(game->assets->city->fire_car);
}

void destroy_particles(game_t *game)
{
    destroy_fire(game);
    destroy_rain(game);
    destroy_wind(game);
}
