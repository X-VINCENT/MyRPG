/*
** EPITECH PROJECT, 2022
** Display City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_fire(fire_t *fire, sfRenderWindow *window)
{
    while (fire != NULL) {
        sfRenderWindow_drawRectangleShape(window, fire->pixel, NULL);
        fire = fire->next;
    }
}

void animate_fire(fire_t *fire, sfRenderWindow *window, sfVector2f pos)
{
    sfVector2f move = {0, -1};
    sfColor color = sfRectangleShape_getFillColor(fire->pixel);

    while (fire != NULL) {
        color = sfRectangleShape_getFillColor(fire->pixel);
        color.g += 10;
        sfRectangleShape_move(fire->pixel, move);
        sfRectangleShape_setFillColor(fire->pixel, color);
        if (sfRectangleShape_getPosition(fire->pixel).y < pos.y - 20) {
            sfRectangleShape_setFillColor(fire->pixel, sfRed);
            sfRectangleShape_setPosition(fire->pixel, pos);
            color.g = 0;
        }
        move.x = rand() % 2;
        fire = fire->next;
    }
}

void fire(game_t *game)
{
    fire_t *fire = game->assets->city->fire;
    fire_t *fire_car = game->assets->city->fire_car;
    sfRenderWindow *window = game->window;
    sfVector2f pos = {467, 583};
    sfVector2f pos_car = {2295, 1690};

    if (game->assets->city->is_raining == 0) {
        display_fire(fire, window);
        display_fire(fire_car, window);
        if (time_elapsed(game->assets->city->fire_clock) > 0.01) {
            animate_fire(fire, window, pos);
            sfClock_restart(game->assets->city->fire_clock);
        }
        if (time_elapsed(game->assets->city->fire_car_clock) > 0.01) {
            animate_fire(fire_car, window, pos_car);
            sfClock_restart(game->assets->city->fire_car_clock);
        }
    }
}
