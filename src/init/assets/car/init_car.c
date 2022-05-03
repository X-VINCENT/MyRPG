/*
** EPITECH PROJECT, 2022
** init_car.c
** File description:
** init_car
*/

#include "rpg.h"

void init_car_right(game_t *game)
{
    game->assets->car_right = malloc(sizeof(car_right_t));
    car_right_t *car_right = game->assets->car_right;

    car_right->car = create_sprite(game->textures->car_grey,
        (sfIntRect){960, 140, 64, 130},
        (sfVector2f){2725, 1864}, (sfVector2f){0.6, 0.6});
    car_right->clock = sfClock_create();
    car_right->clock_animation = sfClock_create();
    return;
}

void init_car(game_t *game)
{
    game->assets->car = malloc(sizeof(car_t));
    car_t *car = game->assets->car;

    car->car = create_sprite(game->textures->car,
        (sfIntRect){0, 150, 160, 74},
        (sfVector2f){100, 1838}, (sfVector2f){0.6, 0.6});
    car->clock = sfClock_create();
    car->clock_animation = sfClock_create();
    return init_car_right(game);
}
