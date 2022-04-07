/*
** EPITECH PROJECT, 2022
** Check Move Rat City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_up_city(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.y -= rat->speed;
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_down_city(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.y += rat->speed;
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_left_city(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.x -= rat->speed;
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_right_city(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.x += rat->speed;
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}