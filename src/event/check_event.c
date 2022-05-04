/*
** EPITECH PROJECT, 2021
** Call Differents Events for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void resize_view(game_t *game)
{
    sfVector2f size = sfView_getSize(game->view);
    sfFloatRect visible_area = {0, 0, game->event->event->size.width,
        game->event->event->size.height};
    float scale = size.x / visible_area.width;

    sfView_setSize(game->view, (sfVector2f){
        visible_area.width * scale, visible_area.height * scale});
}

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
