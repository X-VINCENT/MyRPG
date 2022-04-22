/*
** EPITECH PROJECT, 2022
** Game Menu Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void game_menu_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfView_setSize(game->view, VIEW_MENUS_SIZE);
    sfView_setCenter(game->view, VIEW_MENUS_POS);
    display_game_menu(game);
    display_cursor(game);
}