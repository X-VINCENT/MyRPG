/*
** EPITECH PROJECT, 2022
** Init Assets Stats Stat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

stat_data_t *init_stat(game_t *game, int pos_y, char *title)
{
    stat_data_t *stat_data = malloc(sizeof(stat_data_t));
    sfVector2f p_title = init_pos(1250, pos_y);
    sfVector2f p_value = init_pos(1800, pos_y - 8);

    stat_data->title = create_text(FONT_BUENARD, sfWhite, 36, title);
    stat_data->value = create_text(FONT_BUENARD, sfWhite, 36, "0");
    sfText_setPosition(stat_data->title, p_title);
    sfText_setPosition(stat_data->value, p_value);
    set_text_origin_middle_left(stat_data->title);
    set_text_origin_middle_right(stat_data->value);
    return stat_data;
}

void init_stats_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    stats->time_played = init_stat(game, 290, ENGLISH_TIME_PLAYED);
    stats->fights = init_stat(game, 390, ENGLISH_FIGHTS);
    stats->money_saved = init_stat(game, 490, ENGLISH_MONEY_SAVED);
    stats->stolen_items = init_stat(game, 590, ENGLISH_STOLEN_ITEMS);
}
