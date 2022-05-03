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
    if (game->stage == MUSEUM_STAGE)
        return check_rat_collision(
            game, game->assets->museum->hitbox, 0, -1);
    if (game->stage == BAR_STAGE)
        return check_rat_collision(game, game->assets->bar->hitbox, 0, -1);
    if (game->stage == ICE_STAGE)
        return check_rat_collision(game, game->assets->ice->hitbox, 0, -1);
    if (game->stage == MARKET_STAGE)
        return check_rat_collision(
            game, game->assets->market->hitbox, 0, -1);
    if (game->stage == CLOTHE_STAGE)
        return check_rat_collision(
            game, game->assets->clothe->hitbox, 0, -1);
    return 0;
}

int rat_can_move_down(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, 0, 1);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, 0, 1);
    if (game->stage == MUSEUM_STAGE)
        return check_rat_collision(
            game, game->assets->museum->hitbox, 0, 1);
    if (game->stage == BAR_STAGE)
        return check_rat_collision(game, game->assets->bar->hitbox, 0, 1);
    if (game->stage == ICE_STAGE)
        return check_rat_collision(game, game->assets->ice->hitbox, 0, 1);
    if (game->stage == MARKET_STAGE)
        return check_rat_collision(
            game, game->assets->market->hitbox, 0, 1);
    if (game->stage == CLOTHE_STAGE)
        return check_rat_collision(
            game, game->assets->clothe->hitbox, 0, 1);
    return 0;
}

int rat_can_move_left(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, -1, 0);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, -1, 0);
    if (game->stage == MUSEUM_STAGE)
        return check_rat_collision(
            game, game->assets->museum->hitbox, -1, 0);
    if (game->stage == BAR_STAGE)
        return check_rat_collision(game, game->assets->bar->hitbox, -1, 0);
    if (game->stage == ICE_STAGE)
        return check_rat_collision(game, game->assets->ice->hitbox, -1, 0);
    if (game->stage == MARKET_STAGE)
        return check_rat_collision(
            game, game->assets->market->hitbox, -1, 0);
    if (game->stage == CLOTHE_STAGE)
        return check_rat_collision(
            game, game->assets->clothe->hitbox, -1, 0);
    return 0;
}

int rat_can_move_right(game_t *game)
{
    if (game->stage == CITY_STAGE)
        return check_rat_collision(game, game->assets->city->hitbox, 1, 0);
    if (game->stage == APPARTMENT_STAGE)
        return check_rat_collision(
            game, game->assets->appartment->hitbox, 1, 0);
    if (game->stage == MUSEUM_STAGE)
        return check_rat_collision(
            game, game->assets->museum->hitbox, 1, 0);
    if (game->stage == BAR_STAGE)
        return check_rat_collision(game, game->assets->bar->hitbox, 1, 0);
    if (game->stage == ICE_STAGE)
        return check_rat_collision(game, game->assets->ice->hitbox, 1, 0);
    if (game->stage == MARKET_STAGE)
        return check_rat_collision(
            game, game->assets->market->hitbox, 1, 0);
    if (game->stage == CLOTHE_STAGE)
        return check_rat_collision(
            game, game->assets->clothe->hitbox, 1, 0);
    return 0;
}
