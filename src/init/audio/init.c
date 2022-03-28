/*
** EPITECH PROJECT, 2022
** Init Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_audio(game_t *game)
{
    game->audio = malloc(sizeof(audio_t));
    init_musics(game);
    init_sounds(game);
}
