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
    free(musics);
}
