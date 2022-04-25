/*
** EPITECH PROJECT, 2022
** Language Stats French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfText_setString(stats->stats, FRENCH_STATS);
    sfText_setString(stats->money->title, FRENCH_MONEY);
    sfText_setString(stats->xp->title, FRENCH_XP);
    sfText_setString(stats->abilities->title, FRENCH_ABILITIES);
    sfText_setString(stats->time_played->title, FRENCH_TIME_PLAYED);
    sfText_setString(stats->fights->title, FRENCH_FIGHTS);
    sfText_setString(stats->money_saved->title, FRENCH_MONEY_SAVED);
    sfText_setString(stats->stolen_items->title, FRENCH_STOLEN_ITEMS);
}
