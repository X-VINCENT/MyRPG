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
    while (sfRenderWindow_pollEvent(game->window, game->event->event)) {
        switch (game->event->event->type) {
            case sfEvtClosed:
                sfRenderWindow_close(game->window);
                break;
            case sfEvtKeyPressed:
                event_key_pressed(game);
                break;
            case sfEvtMouseButtonPressed:
                mouse_pressed(game);
                break;
            case sfEvtMouseMoved:
                mouse_moved(game);
            default:
                break;
        }
    }
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
        case APPARTMENT_STAGE:
            appartment_key_pressed(game);
            break;
        case ICE_STAGE:
            ice_cream_shop_key_pressed(game);
            break;
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_key_pressed(game);
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
        case CITY_STAGE:
            city_mouse_pressed(game);
        case CLOTHE_STAGE:
            clothe_store_mouse_pressed(game);
        case APPARTMENT_STAGE:
            appartment_mouse_pressed(game);
        case ICE_STAGE:
            ice_cream_shop_mouse_pressed(game);
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_mouse_pressed(game);
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
        case CITY_STAGE:
            city_mouse_moved(game);
        case APPARTMENT_STAGE:
            appartment_mouse_moved(game);
        case ICE_STAGE:
            ice_cream_shop_mouse_moved(game);
        case CLOTHE_STAGE:
            clothe_store_mouse_moved(game);
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_mouse_moved(game);
        default:
            mouse_moved_2(game);
            break;
    }
}
