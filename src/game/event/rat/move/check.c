/*
** EPITECH PROJECT, 2022
** Check Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_left(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->sprite);

    rat_pos.y += rat->speed;
    if (game->stage == CITY_STAGE || game->stage == APPARTMENT_STAGE)
        return 1;
    return 0;
}

int rat_can_move_right(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->sprite);

    rat_pos.y += rat->speed;
    if (game->stage == CITY_STAGE || game->stage == APPARTMENT_STAGE)
        return 1;
    return 0;
}

int rat_can_move_up(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->sprite);

    rat_pos.y += rat->speed;
    if (game->stage == CITY_STAGE || game->stage == APPARTMENT_STAGE)
        return 1;
    return 0;
}

int rat_can_move_down(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->sprite);

    rat_pos.y += rat->speed;
    if (game->stage == CITY_STAGE || game->stage == APPARTMENT_STAGE)
        return 1;
    return 0;
}
