/*
** EPITECH PROJECT, 2022
** Abilities Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void abilities_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfView_setSize(game->view, VIEW_MENUS_SIZE);
    sfView_setCenter(game->view, VIEW_MENUS_POS);
    display_abilities(game);
    display_cursor(game);
}
