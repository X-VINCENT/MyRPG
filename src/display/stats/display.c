/*
** EPITECH PROJECT, 2022
** Display Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfRenderWindow_drawSprite(game->window, stats->bg, NULL);
    display_top_bar(game);
}
