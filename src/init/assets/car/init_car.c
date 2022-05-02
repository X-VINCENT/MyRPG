/*
** EPITECH PROJECT, 2022
** init_car.c
** File description:
** init_car
*/

#include "rpg.h"

void init_car(game_t *game)
{
    game->assets->car = malloc(sizeof(car_t));
    car_t *car = game->assets->car;

    car->car = create_sprite(game->textures->car, (sfIntRect){0, 150, 160, 74},
        (sfVector2f){100, 1838}, (sfVector2f){0.6, 0.6});
    car->turned_left_to_museum = 0;
    car->turning = 0;
    car->clock = sfClock_create();
    car->clock_turn = sfClock_create();
    car->clock_animation = sfClock_create();
    return;
}
