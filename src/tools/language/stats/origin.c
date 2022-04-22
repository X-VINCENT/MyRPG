/*
** EPITECH PROJECT, 2022
** Language Stats Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    set_text_origin_middle_left(stats->stats);
    set_text_origin_middle_left(stats->money->title);
    set_text_origin_middle_left(stats->xp->title);
    set_text_origin_middle_left(stats->abilities->title);
    set_text_origin_middle_left(stats->time_played->title);
    set_text_origin_middle_left(stats->fights->title);
    set_text_origin_middle_left(stats->money_saved->title);
    set_text_origin_middle_left(stats->stolen_items->title);
}
