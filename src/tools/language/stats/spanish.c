/*
** EPITECH PROJECT, 2022
** Language Stats Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfText_setString(stats->stats, SPANISH_STATS);
    sfText_setString(stats->money->title, SPANISH_MONEY);
    sfText_setString(stats->xp->title, SPANISH_XP);
    sfText_setString(stats->abilities->title, SPANISH_ABILITIES);
    sfText_setString(stats->time_played->title, SPANISH_TIME_PLAYED);
    sfText_setString(stats->fights->title, SPANISH_FIGHTS);
    sfText_setString(stats->money_saved->title, SPANISH_MONEY_SAVED);
    sfText_setString(stats->stolen_items->title, SPANISH_STOLEN_ITEMS);
}
