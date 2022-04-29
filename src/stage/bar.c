/*
** EPITECH PROJECT, 2022
** Market Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void bar_stage(game_t *game)
{
    play_music(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_museum);
    display_bar(game);
    display_rat(game);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_inventory(game);
}
