/*
** EPITECH PROJECT, 2021
** Event 3 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void event_key_pressed_3(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_key_pressed(game);
        default:
            break;
    }
}

void mouse_pressed_3(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_mouse_pressed(game);
        default:
            break;
    }
}

void mouse_moved_3(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_mouse_moved(game);
        default:
            break;
    }
}
