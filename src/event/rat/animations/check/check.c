/*
** EPITECH PROJECT, 2022
** Check Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_up(game_t *game)
{
    switch (game->stage) {
        case CITY_STAGE:
            return rat_can_move_up_city(game);
        case APPARTMENT_STAGE:
            return rat_can_move_up_appartment(game);
        default:
            break;
    }
}

int rat_can_move_down(game_t *game)
{
    switch (game->stage) {
        case CITY_STAGE:
            return rat_can_move_down_city(game);
        case APPARTMENT_STAGE:
            return rat_can_move_down_appartment(game);
        default:
            break;
    }
}

int rat_can_move_left(game_t *game)
{
    switch (game->stage) {
        case CITY_STAGE:
            return rat_can_move_left_city(game);
        case APPARTMENT_STAGE:
            return rat_can_move_left_appartment(game);
        default:
            break;
    }
}

int rat_can_move_right(game_t *game)
{
    switch (game->stage) {
        case CITY_STAGE:
            return rat_can_move_right_city(game);
        case APPARTMENT_STAGE:
            return rat_can_move_right_appartment(game);
        default:
            break;
    }
}
