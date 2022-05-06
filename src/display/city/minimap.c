/*
** EPITECH PROJECT, 2022
** Display City Minimap for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_scale_position_minimap(sfSprite *minimap, sfSprite *minimap_top,
    sfVector2f pos, sfVector2f scale)
{
    sfSprite_setPosition(minimap, pos);
    sfSprite_setScale(minimap, scale);
    sfSprite_setPosition(minimap_top, pos);
    sfSprite_setScale(minimap_top, scale);
}

void display_rat_minimap(game_t *game, sfVector2f pos, sfVector2f scale)
{
    city_t *city = game->assets->city;
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);
    sfVector2f point_pos = {pos.x + rat_pos.x * scale.x,
        pos.y + rat_pos.y * scale.y};

    sfSprite_setPosition(city->pos_minimap, point_pos);
    sfSprite_setScale(city->pos_minimap,
        (sfVector2f){scale.x * 8, scale.y * 8});
    sfRenderWindow_drawSprite(game->window, city->pos_minimap, NULL);
}

void display_minimap(game_t *game)
{
    city_t *city = game->assets->city;
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f size = sfView_getSize(game->view);
    sfVector2f scale = {sfView_getSize(game->view).x / 15000,
        sfView_getSize(game->view).x / 15000};
    sfVector2f pos = {view.x + size.x / 2 - size.x / 5,
        view.y - size.y / 2};

    set_scale_position_minimap(city->bg, city->bg_top, pos, scale);
    sfRenderWindow_drawSprite(game->window, city->bg, NULL);
    sfRenderWindow_drawSprite(game->window, city->bg_top, NULL);
    set_scale_position_minimap(city->bg, city->bg_top, (sfVector2f){0, 0},
        (sfVector2f){1, 1});
    display_rat_minimap(game, pos, scale);
}
