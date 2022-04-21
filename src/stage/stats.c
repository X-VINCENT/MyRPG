/*
** EPITECH PROJECT, 2022
** Stats Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void stats_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfView_setSize(game->view, VIEW_MENUS_SIZE);
    sfView_setCenter(game->view, VIEW_MENUS_POS);
    display_stats(game);
    display_cursor(game);
}
