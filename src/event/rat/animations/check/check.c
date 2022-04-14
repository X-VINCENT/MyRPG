/*
** EPITECH PROJECT, 2022
** Check Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_up(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, 0, -1);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, 0, -1);
}

int rat_can_move_down(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, 0, 1);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, 0, 1);
}

int rat_can_move_left(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, -1, 0);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, -1, 0);
}

int rat_can_move_right(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, 0, 1);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, 0, 1);
}
