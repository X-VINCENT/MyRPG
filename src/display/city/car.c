/*
** EPITECH PROJECT, 2022
** display_car
** File description:
** car
*/

#include "rpg.h"

void low_forward(game_t *game)
{
    sfVector2f position_car =
        sfSprite_getPosition(game->assets->car->car);
    if (time_elapsed(game->assets->car->clock) > 0.02) {
        position_car.x += 2;
        sfSprite_setPosition(game->assets->car->car, position_car);
        sfClock_restart(game->assets->car->clock);
    }
    if (time_elapsed(game->assets->car->clock_animation) > 0.2) {
        animate_sprite(game->assets->car->car, 160, 960, 0);
        sfClock_restart(game->assets->car->clock_animation);
    }
}

void turn_car_top(game_t *game)
{
    /*car_t *car = game->assets->car;
    sfVector2f position_car =
        sfSprite_getPosition(game->assets->car->car);
    if (car->turning == 0) {
        sfSprite_setTextureRect(car->car, (sfIntRect){0, 415, 126, 134});
        car->turning = 1;
    }
    if (time_elapsed(game->assets->car->clock) > 0.02) {
        position_car.x += 3;
        sfSprite_setPosition(game->assets->car->car, position_car);
        sfClock_restart(game->assets->car->clock);
    }
    if (time_elapsed(game->assets->car->clock_animation) > 0.2) {
        animate_sprite(game->assets->car->car, 160, 960, 0);
        sfClock_restart(game->assets->car->clock_animation);
    }
    if (time_elapsed(game->assets->car->clock_turn) > 2)
        car->turned_left_to_museum = 1;*/
}

void display_car(game_t *game)
{
    sfVector2f position_car;
    car_t *car = game->assets->car;

    if (!car || !car->car || !car->clock)
        return;
    position_car = sfSprite_getPosition(game->assets->car->car);
    /*if (position_car.x > 2700 && car->turned_left_to_museum == 0)
        turn_car_top(game);
    else {
        car->turning = 0;
        sfClock_restart(game->assets->car->clock_turn);
    }*/
    low_forward(game);
    sfRenderWindow_drawSprite(game->window, car->car, NULL);
    return;
}
