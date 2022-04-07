/*
** EPITECH PROJECT, 2022
** Init Settings Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_audio(game_t *game)
{
    game->assets->settings->audio = malloc(sizeof(settings_audio_t));
}
