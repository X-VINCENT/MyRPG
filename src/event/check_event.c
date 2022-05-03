/*
** EPITECH PROJECT, 2021
** Call Differents Events for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void call_different_events(game_t *game)
{
    switch (game->event->event->type) {
        case sfEvtClosed:
            sfRenderWindow_close(game->window);
            break;
        case sfEvtResized:
            resize_view(game);
            break;
        case sfEvtKeyPressed:
            event_key_pressed(game);
            break;
        case sfEvtMouseButtonPressed:
            mouse_pressed(game);
            break;
        case sfEvtMouseMoved:
            mouse_moved(game);
            break;
        default:
            break;
    }
}
