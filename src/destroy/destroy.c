/*
** EPITECH PROJECT, 2022
** Destroy for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_event(event_t *event)
{
    if (!event)
        return;
    free(event->event);
    free(event);
}

void destroy_all(game_t *game)
{
    if (!game)
        return;
    destroy_window(game->window);
    destroy_view(game->view);
    destroy_event(game->event);
    destroy_assets(game->assets);
    destroy_audio(game->audio);
    free(game->keys);
    free(game->default_keys);
    destroy_abilities(game->abilities);
    destroy_inventory(game->inventory);
    destroy_textures(game->textures);
    destroy_data(game->data);
    sfClock_destroy(game->time_playing_clock);
    destroy_particles(game);
    free(game);
}
