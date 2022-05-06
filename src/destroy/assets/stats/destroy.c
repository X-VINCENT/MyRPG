/*
** EPITECH PROJECT, 2022
** Destroy Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_wallet(wallet_t *wallet)
{
    if (!wallet)
        return;
    destroy_sprite(wallet->logo);
    destroy_text(wallet->title);
    destroy_text(wallet->value);
    free(wallet);
}

void destroy_stat(stat_data_t *stat_data)
{
    if (!stat_data)
        return;
    destroy_text(stat_data->title);
    destroy_text(stat_data->value);
    free(stat_data);
}

void destroy_stats(stats_t *stats)
{
    if (!stats)
        return;
    destroy_sprite(stats->bg);
    destroy_wallet(stats->money);
    destroy_wallet(stats->xp);
    destroy_wallet(stats->abilities);
    destroy_stat(stats->time_played);
    destroy_stat(stats->fights);
    destroy_stat(stats->money_saved);
    destroy_stat(stats->stolen_items);
    sfClock_destroy(stats->clock);
    free(stats);
}
