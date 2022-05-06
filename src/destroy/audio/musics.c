/*
** EPITECH PROJECT, 2022
** Destroy Musics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_musics(musics_t *musics)
{
    if (!musics)
        return;
    destroy_music(musics->music_menu);
    destroy_music(musics->music_city);
    destroy_music(musics->music_bar);
    destroy_music(musics->music_ice_cream);
    destroy_music(musics->music_museum);
    destroy_music(musics->music_fight);
    destroy_music(musics->win);
    destroy_music(musics->loose);
    free(musics);
}
