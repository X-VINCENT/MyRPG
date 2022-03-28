/*
** EPITECH PROJECT, 2022
** Destroy Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_audio(audio_t *audio)
{
    if (!audio)
        return;
    destroy_musics(audio->musics);
    destroy_sounds(audio->sounds);
}
