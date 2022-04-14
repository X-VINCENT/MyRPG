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
    display_ice_cream(game);
    display_rat(game);
    check_rat_key_pressed(game);
}
