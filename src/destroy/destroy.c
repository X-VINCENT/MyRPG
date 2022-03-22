/*
** EPITECH PROJECT, 2022
** Destroy for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_all(game_t *game)
{
    if (!game)
        return;
    destroy_window(game->window);
    destroy_event(game->event);
    destroy_assets(game->assets);
    destroy_view(game->view);
    free(game);
}

void destroy_event(event_t *event)
{
    if (!event)
        return;
    free(event->event);
    free(event);
}

void destroy_assets(assets_t *assets)
{
    if (!assets)
        return;
    destroy_map(assets->map);
    free(assets);
}
