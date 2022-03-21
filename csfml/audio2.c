/*
** EPITECH PROJECT, 2022
** Audio 2 for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

void set_offset_music(sfMusic *music, int offset)
{
    if (!music)
        return;
    sfMusic_setVolume(music, sfMusic_getVolume(music) + offset);
}

void set_offset_sound(sfSound *sound, int offset)
{
    if (!sound)
        return;
    sfSound_setVolume(sound, sfSound_getVolume(sound) + offset);
}

void mute_music(sfMusic *music)
{
    if (!music)
        return;
    sfMusic_setVolume(music, 0);
}

void mute_sound(sfSound *sound)
{
    if (!sound)
        return;
    sfSound_setVolume(sound, 0);
}
