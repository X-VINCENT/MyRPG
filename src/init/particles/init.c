/*
** EPITECH PROJECT, 2022
** Init Particles for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_wind(game_t *game)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 3, 5};
    sfVector2f scale = {1, 1};

    game->assets->city->wind = create_particle_list(
        game->textures->wind, rect, pos, scale);
    for (int i = 0; i < WIND_NUMBER; i++) {
        pos.x = rand() % (3001);
        pos.y = rand() % (2001);
        game->assets->city->wind = add_node(game->assets->city->wind,
            game->textures->wind, rect, pos);
    }
}

void init_rain(game_t *game)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 3, 5};
    sfVector2f scale = {1, 1};

    game->assets->city->rain = create_particle_list(
        game->textures->rain, rect, pos, scale);
    for (int i = 0; i < RAIN_NUMBER; i++) {
        pos.x = rand() % (3001);
        pos.y = rand() % (2001);
        game->assets->city->rain = add_node(game->assets->city->rain,
            game->textures->rain, rect, pos);
    }
}
