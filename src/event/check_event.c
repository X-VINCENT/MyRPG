/*
** EPITECH PROJECT, 2021
** Call Differents Events for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void resize_view(game_t *game)
{
    sfVector2u w_size = sfRenderWindow_getSize(game->window);
    sfVector2f size = sfView_getSize(game->view);
    sfFloatRect visible_area = {0, 0, game->event->event->size.width,
        game->event->event->size.height};
    float scale = size.x / visible_area.width;

    if (w_size.x < 800 || w_size.y < 600)
        sfRenderWindow_setSize(game->window, (sfVector2u){800, 800 * 9 / 16});
    if (w_size.x > 3840 || w_size.y > 2160)
        sfRenderWindow_setSize(game->window,
            (sfVector2u){3840, 3840 * 9 / 16});
    sfView_setSize(game->view, (sfVector2f){
        visible_area.width * scale, visible_area.height * scale});
}

void call_different_events_2(game_t *game)
{
    switch (game->event->event->type) {
        case sfEvtMouseButtonReleased:
            mouse_released(game);
            break;
        default:
            break;
    }
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
    call_different_events_2(game);
}
