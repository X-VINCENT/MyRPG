/*
** EPITECH PROJECT, 2022
** Language Stats German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfText_setString(stats->stats, GERMAN_STATS);
    sfText_setString(stats->money->title, GERMAN_MONEY);
    sfText_setString(stats->xp->title, GERMAN_XP);
    sfText_setString(stats->abilities->title, GERMAN_ABILITIES);
    sfText_setString(stats->time_played->title, GERMAN_TIME_PLAYED);
    sfText_setString(stats->fights->title, GERMAN_FIGHTS);
    sfText_setString(stats->money_saved->title, GERMAN_MONEY_SAVED);
    sfText_setString(stats->stolen_items->title, GERMAN_STOLEN_ITEMS);
}
