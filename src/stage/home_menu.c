/*
** EPITECH PROJECT, 2022
** Home_menu Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_stage(game_t *game)
{
    sfView_setSize(game->view, VIEW_HOME_MENU_SIZE);
    sfView_setCenter(game->view, VIEW_HOME_MENU_POS);
    animate_parallax(game);
    display_home_menu(game);
    display_cursor(game);
    check_rat_key_pressed(game);
    play_music(game->audio->musics->music_menu);
}
