/*
** EPITECH PROJECT, 2022
** Destroy Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_texts_stats(stats_t *stats)
{
    if (!stats)
        return;
}

void destroy_sprites_stats(stats_t *stats)
{
    if (!stats)
        return;
    destroy_sprite(stats->bg);
}

void destroy_stats(stats_t *stats)
{
    if (!stats)
        return;
    destroy_texts_stats(stats);
    destroy_sprites_stats(stats);
    sfClock_destroy(stats->clock);
    free(stats);
}
