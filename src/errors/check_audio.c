/*
** EPITECH PROJECT, 2022
** Check Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_musics(void)
{
    int error = 0;

    error += is_file(MUSIC_HOME_MENU);
    error += is_file(MUSIC_CITY);
    error += is_file(MUSIC_BAR);
    error += is_file(MUSIC_ICE_CREAM_SHOP);
    return error;
}

int check_sounds(void)
{
    int error = 0;

    return error;
}

int check_audio(void)
{
    int error = 0;

    error += check_musics();
    error += check_sounds();
    return error;
}
