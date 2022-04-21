/*
** EPITECH PROJECT, 2022
** museum2 Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void museum2_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    display_museum2(game);
    display_rat(game);
    display_circle_rat(game);
    check_rat_key_pressed(game);
}
