/*
** EPITECH PROJECT, 2022
** display_car
** File description:
** car
*/

#include "rpg.h"

int check_car_interesect(game_t *game, car_t *car)
{
    sfFloatRect position_car =
        sfSprite_getGlobalBounds(car->car);
    sfFloatRect position_rat =
        sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    if (sfFloatRect_intersects(&position_car, &position_rat, NULL))
        return 1;
    return 0;
}

int check_car_interesect_two(game_t *game, car_right_t *car)
{
    sfFloatRect position_car =
        sfSprite_getGlobalBounds(car->car);
    sfFloatRect position_rat =
        sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    if (sfFloatRect_intersects(&position_car, &position_rat, NULL))
        return 1;
    return 0;
}

void low_car(game_t *game)
{
    sfVector2f position_car =
        sfSprite_getPosition(game->assets->car->car);

    if (time_elapsed(game->assets->car->clock) > 0.02
        && check_car_interesect(game, game->assets->car) == 0) {
        position_car.x += 2;
        sfSprite_setPosition(game->assets->car->car, position_car);
        sfClock_restart(game->assets->car->clock);
    }
    if (time_elapsed(game->assets->car->clock_animation) > 0.2) {
        animate_sprite(game->assets->car->car, 160, 960, 0);
        sfClock_restart(game->assets->car->clock_animation);
    }
}

void right_car(game_t *game)
{
    sfVector2f position_car =
        sfSprite_getPosition(game->assets->car_right->car);

    if (time_elapsed(game->assets->car_right->clock) > 0.02
        && check_car_interesect_two(game, game->assets->car_right) == 0) {
        position_car.y -= 2;
        sfSprite_setPosition(game->assets->car_right->car, position_car);
        sfClock_restart(game->assets->car_right->clock);
    }
    if (time_elapsed(game->assets->car_right->clock_animation) > 0.8) {
        animate_sprite(game->assets->car_right->car, 64, 384, 960);
        sfClock_restart(game->assets->car_right->clock_animation);
    }
}

void display_car(game_t *game)
{
    car_t *car = game->assets->car;
    car_right_t *car_right = game->assets->car_right;
    sfVector2f position_car_right;
    sfVector2f position_car;

    if (!car || !car->car || !car->clock)
        return;
    position_car_right = sfSprite_getPosition(car_right->car);
    position_car = sfSprite_getPosition(car->car);
    if (position_car_right.y < 650)
        sfSprite_setPosition(car_right->car, (sfVector2f){2725, 1864});
    if (position_car.x > 2700)
        sfSprite_setPosition(car->car, (sfVector2f){100, 1838});
    low_car(game);
    right_car(game);
    sfRenderWindow_drawSprite(game->window, car->car, NULL);
    sfRenderWindow_drawSprite(game->window, car_right->car, NULL);
    return;
}
