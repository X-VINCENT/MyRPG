/*
** EPITECH PROJECT, 2022
** Language Stats English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfText_setString(stats->stats, ENGLISH_STATS);
    sfText_setString(stats->money->title, ENGLISH_MONEY);
    sfText_setString(stats->xp->title, ENGLISH_XP);
    sfText_setString(stats->abilities->title, ENGLISH_ABILITIES);
    sfText_setString(stats->time_played->title, ENGLISH_TIME_PLAYED);
    sfText_setString(stats->fights->title, ENGLISH_FIGHTS);
    sfText_setString(stats->money_saved->title, ENGLISH_MONEY_SAVED);
    sfText_setString(stats->stolen_items->title, ENGLISH_STOLEN_ITEMS);
}
