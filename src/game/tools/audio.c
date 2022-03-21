/*
** EPITECH PROJECT, 2022
** Audio Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "rpg.h"

void down_volume(game_t *game)
{
    sfMusic *music;

    if (sfMusic_getVolume(music) < 10) {
        mute_music(music);
    } else {
        set_offset_music(music, -10);
    }
}

void up_volume(game_t *game)
{
    sfMusic *music;

    if (sfMusic_getVolume(music) < 100) {
        set_offset_music(music, 10);
        set_offset_music(music, 10);
        set_offset_music(music, 10);
    }
}

void down_sounds(game_t *game)
{
    sfSound *sound;

    if (sfSound_getVolume(sound) < 10) {
        mute_sound(sound);
    } else {
        set_offset_sound(sound, -10);
    }
}

void up_sounds(game_t *game)
{
    sfSound *sound;

    if (sfSound_getVolume(sound) < 100) {
        set_offset_sound(sound, 10);
    }
}

void stop_musics(game_t *game)
{
    sfMusic *music;

    sfMusic_stop(music);
    sfMusic_stop(music);
    sfMusic_stop(music);
}
