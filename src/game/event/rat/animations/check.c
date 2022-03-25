/*
** EPITECH PROJECT, 2022
** Check Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_up(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.y -= rat->speed;
    if (game->stage == APPARTMENT_STAGE) {
        color = sfImage_getPixel(
            game->assets->appartment->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_down(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_down);
    sfColor color;

    rat_pos.y += rat->speed;
    if (game->stage == APPARTMENT_STAGE) {
        color = sfImage_getPixel(
            game->assets->appartment->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_left(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_left);
    sfColor color;

    rat_pos.x -= rat->speed;
    if (game->stage == APPARTMENT_STAGE) {
        color = sfImage_getPixel(
            game->assets->appartment->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}

int rat_can_move_right(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_right);
    sfColor color;

    rat_pos.x += rat->speed;
    if (game->stage == APPARTMENT_STAGE) {
        color = sfImage_getPixel(
            game->assets->appartment->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    if (game->stage == CITY_STAGE) {
        color = sfImage_getPixel(
            game->assets->city->hitbox, rat_pos.x, rat_pos.y);
        if (color.r == 0 && color.g == 0 && color.b == 0)
            return 1;
    }
    return 0;
}
