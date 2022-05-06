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

void init_fire_car(game_t *game)
{
    sfVector2f pos = {2295, 1690};
    sfVector2f size = {1, 1};
    sfColor color = {255, 0, 0, 255};

    game->assets->city->fire_car = create_fire_list(pos, size, color);
    for (int i = 0; i < FIRE_NUMBER; i++) {
        pos.y += 1;
        if (pos.y < 1675)
            pos.y = 1690;
        game->assets->city->fire_car = add_node_fire(
            game->assets->city->fire_car, pos, size, color);
    }
}

void init_fire_trashcan(game_t *game)
{
    sfVector2f pos = {467, 583};
    sfVector2f size = {1, 1};
    sfColor color = {255, 0, 0, 255};

    game->assets->city->fire = create_fire_list(pos, size, color);
    for (int i = 0; i < FIRE_NUMBER; i++) {
        pos.y += 1;
        if (pos.y < 570)
            pos.y = 583;
        game->assets->city->fire = add_node_fire(game->assets->city->fire,
            pos, size, color);
    }
    init_fire_car(game);
}
