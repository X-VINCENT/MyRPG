/*
** EPITECH PROJECT, 2022
** Display Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_wallet(game_t *game, wallet_t *wallet)
{
    sfRenderWindow_drawSprite(game->window, wallet->logo, NULL);
    sfRenderWindow_drawText(game->window, wallet->title, NULL);
    sfRenderWindow_drawText(game->window, wallet->value, NULL);
}

void display_stat(game_t *game, stat_data_t *stat_data)
{
    sfRenderWindow_drawText(game->window, stat_data->title, NULL);
    sfRenderWindow_drawText(game->window, stat_data->value, NULL);
}

void display_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    sfRenderWindow_drawSprite(game->window, stats->bg, NULL);
    sfRenderWindow_drawSprite(game->window, stats->frame, NULL);
    sfRenderWindow_drawText(game->window, stats->stats, NULL);
    display_wallet(game, stats->money);
    display_wallet(game, stats->xp);
    display_wallet(game, stats->abilities);
    display_stat(game, stats->time_played);
    display_stat(game, stats->fights);
    display_stat(game, stats->money_saved);
    display_stat(game, stats->stolen_items);
    display_top_bar(game);
}
