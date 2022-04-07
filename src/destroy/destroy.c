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
    destroy_view(game->view);
    destroy_event(game->event);
    destroy_assets(game->assets);
    destroy_audio(game->audio);
    destroy_keys(game->keys);
    destroy_inventory(game->inventory);
    free(game);
}

void destroy_event(event_t *event)
{
    if (!event)
        return;
    free(event->event);
    free(event);
}

void destroy_keys(keys_t *keys)
{
    if (!keys)
        return;
    free(keys);
}