/*
** EPITECH PROJECT, 2022
** Display Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_stats_values_2(game_t *game)
{
    stats_t *stats = game->assets->stats;
    char *money_saved = my_put_nbr_in_str(game->data->current->money_saved);
    char *stolen_items = my_put_nbr_in_str(game->data->current->stolen_items);

    sfText_setString(stats->money_saved->value, money_saved);
    sfText_setString(stats->stolen_items->value, stolen_items);
    free(money_saved);
    free(stolen_items);
}

void set_stats_values(game_t *game)
{
    stats_t *stats = game->assets->stats;
    char *money = my_put_nbr_in_str(game->data->current->nb_golds);
    char *xp = my_put_nbr_in_str(game->data->current->nb_xps);
    char *abilities = my_put_nbr_in_str(game->data->current->nb_abilities);
    char *time_played = put_time_in_str(game->data->current->time_played);
    char *fights = my_strcat(my_strcat(my_put_nbr_in_str(
        game->data->current->fights_won), " / "),
        my_put_nbr_in_str(game->data->current->fights_lost));

    sfText_setString(stats->money->value, money);
    sfText_setString(stats->xp->value, xp);
    sfText_setString(stats->abilities->value, abilities);
    sfText_setString(stats->time_played->value, time_played);
    sfText_setString(stats->fights->value, fights);
    free(money);
    free(xp);
    free(abilities);
    free(time_played);
    free(fights);
    set_stats_values_2(game);
}

void display_wallet(game_t *game, wallet_t *wallet)
{
    set_text_origin_middle_right(wallet->value);
    sfRenderWindow_drawSprite(game->window, wallet->logo, NULL);
    sfRenderWindow_drawText(game->window, wallet->title, NULL);
    sfRenderWindow_drawText(game->window, wallet->value, NULL);
}

void display_stat(game_t *game, stat_data_t *stat_data)
{
    set_text_origin_middle_right(stat_data->value);
    sfRenderWindow_drawText(game->window, stat_data->title, NULL);
    sfRenderWindow_drawText(game->window, stat_data->value, NULL);
}

void display_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    set_stats_values(game);
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
