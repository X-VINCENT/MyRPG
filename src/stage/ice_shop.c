/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void ice_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_play(game->audio->musics->music_ice_cream);
    display_ice_cream(game);
    display_rat(game);
    display_circle_rat(game);
    check_rat_key_pressed(game);
}
