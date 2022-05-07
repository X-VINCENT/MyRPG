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
            break;
        case MUSEUM_STAGE:
            museum_key_pressed(game);
            break;
        case BAR_STAGE:
            bar_key_pressed(game);
            break;
        case FIGHTS_STAGE:
            fights_key_pressed(game);
            break;
        case SHOP_STAGE:
            shop_key_pressed(game);
            break;
        default:
            event_key_pressed_4(game);
            break;
    }
}

void mouse_pressed_3(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_mouse_pressed(game);
            break;
        case MUSEUM_STAGE:
            museum_mouse_pressed(game);
            break;
        case BAR_STAGE:
            bar_mouse_pressed(game);
            break;
        case FIGHTS_STAGE:
            fights_mouse_pressed(game);
            break;
        case SHOP_STAGE:
            shop_mouse_pressed(game);
            break;
        default:
            mouse_pressed_4(game);
            break;
    }
}

void mouse_moved_3(game_t *game)
{
    switch (game->stage) {
        case MARKET_STAGE:
            market_mouse_moved(game);
            break;
        case MUSEUM_STAGE:
            museum_mouse_moved(game);
            break;
        case BAR_STAGE:
            bar_mouse_moved(game);
            break;
        case FIGHTS_STAGE:
            fights_mouse_moved(game);
            break;
        case SHOP_STAGE:
            shop_mouse_moved(game);
            break;
        default:
            mouse_moved_4(game);
            break;
    }
}
