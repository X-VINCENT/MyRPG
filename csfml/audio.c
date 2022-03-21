/*
** EPITECH PROJECT, 2021
** Audio for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfMusic *create_music(const char *music_path)
{
    sfMusic *music = NULL;

    if (!music_path)
        return NULL;
    if (!(music = sfMusic_createFromFile(music_path)))
        return NULL;
    sfMusic_setLoop(music, sfTrue);
    sfMusic_setVolume(music, 100.00);
    return music;
}

void play_music(sfMusic *music)
{
    if (!music)
        return;
    if (sfMusic_getStatus(music) != sfPlaying)
        sfMusic_play(music);
}

sfSound *create_sound(const char *sound_path)
{
    sfSoundBuffer *buffer = NULL;
    sfSound *sound = NULL;

    if (!sound_path)
        return NULL;
    if (!(buffer = sfSoundBuffer_createFromFile(sound_path)))
        return NULL;
    if (!(sound = sfSound_create()))
        return NULL;
    sfSound_setBuffer(sound, buffer);
    sfSound_setVolume(sound, 100.00);
    return sound;
}

void destroy_music(sfMusic *music)
{
    if (!music)
        return;
    sfMusic_destroy(music);
}

void destroy_sound(sfSound *sound)
{
    if (!sound)
        return;
    sfSoundBuffer_destroy((sfSoundBuffer *)sfSound_getBuffer(sound));
    sfSound_destroy(sound);
}
