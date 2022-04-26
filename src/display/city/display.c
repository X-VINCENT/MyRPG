/*
** EPITECH PROJECT, 2022
** Display City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rain(particle_t *rain, sfRenderWindow *window)
{
    while (rain != NULL) {
        sfRenderWindow_drawSprite(window, rain->sprite, NULL);
        rain = rain->next;
    }
}

void display_wind(particle_t *wind, sfRenderWindow *window)
{
    while (wind != NULL) {
        sfRenderWindow_drawSprite(window, wind->sprite, NULL);
        wind = wind->next;
    }
}

void animate_rain(particle_t *rain, sfRenderWindow *window)
{
    sfVector2f pos = init_pos(0, 0);

    while (rain != NULL) {
        sfSprite_move(rain->sprite, init_pos(-2, 4));
        if ((sfSprite_getPosition(rain->sprite).y > 2000) ||
            sfSprite_getPosition(rain->sprite).x < 0) {
            pos.x = rand() % (3001);
            pos.y = rand() % (2001);
            sfSprite_setPosition(rain->sprite, pos);
        }
        rain = rain->next;
    }
}

void animate_wind(particle_t *wind, sfRenderWindow *window)
{
    sfVector2f pos = init_pos(0, 0);

    while (wind != NULL) {
        sfSprite_move(wind->sprite, init_pos(4, 0));
        if (sfSprite_getPosition(wind->sprite).x > 3000) {
            pos.x = rand() % (3001);
            pos.y = rand() % (2001);
            sfSprite_setPosition(wind->sprite, pos);
        }
        wind = wind->next;
    }
}

void display_city(game_t *game)
{
    city_t *city = game->assets->city;

    sfRenderWindow_drawSprite(game->window, city->bg, NULL);
    sfRenderWindow_drawSprite(game->window, city->doors->rat, NULL);
}
