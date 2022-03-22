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
        case MAP_STAGE:
            map_key_pressed(game);
        default:
            event_key_pressed_2(game);
            break;
    }
}

void mouse_pressed(game_t *game)
{
    switch (game->stage) {
        case MAP_STAGE:
            map_mouse_pressed(game);
        default:
            mouse_pressed_2(game);
            break;
    }
}

void mouse_moved(game_t *game)
{
    switch (game->stage) {
        default:
            mouse_moved_2(game);
            break;
    }
}
