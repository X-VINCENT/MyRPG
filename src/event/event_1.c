/*
** EPITECH PROJECT, 2021
** Event 1 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void event(game_t *game)
{
    if (!game)
        return;
    update_xp(game);
    while (sfRenderWindow_pollEvent(game->window, game->event->event))
        call_different_events(game);
}

void event_key_pressed(game_t *game)
{
    switch (game->stage) {
        case START_STAGE:
            home_menu_key_pressed(game);
            break;
        case CITY_STAGE:
            city_key_pressed(game);
            break;
        case CLOTHE_STAGE:
            clothe_store_key_pressed(game);
            break;
        case APPARTMENT_STAGE:
            appartment_key_pressed(game);
            break;
        case ICE_STAGE:
            ice_cream_shop_key_pressed(game);
            break;
        default:
            event_key_pressed_2(game);
            break;
    }
}

void mouse_pressed(game_t *game)
{
    switch (game->stage) {
        case START_STAGE:
            home_menu_mouse_pressed(game);
            break;
        case CITY_STAGE:
            city_mouse_pressed(game);
            break;
        case CLOTHE_STAGE:
            clothe_store_mouse_pressed(game);
            break;
        case APPARTMENT_STAGE:
            appartment_mouse_pressed(game);
            break;
        case ICE_STAGE:
            ice_cream_shop_mouse_pressed(game);
            break;
        default:
            mouse_pressed_2(game);
            break;
    }
}

void mouse_moved(game_t *game)
{
    switch (game->stage) {
        case START_STAGE:
            home_menu_mouse_moved(game);
            break;
        case CITY_STAGE:
            city_mouse_moved(game);
            break;
        case APPARTMENT_STAGE:
            appartment_mouse_moved(game);
            break;
        case ICE_STAGE:
            ice_cream_shop_mouse_moved(game);
            break;
        case CLOTHE_STAGE:
            clothe_store_mouse_moved(game);
            break;
        default:
            mouse_moved_2(game);
            break;
    }
}

void mouse_released(game_t *game)
{
    switch (game->stage) {
        case SHOP_STAGE:
            shop_mouse_released(game);
            break;
        default:
            break;
    }
}
