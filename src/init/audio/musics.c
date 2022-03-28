/*
** EPITECH PROJECT, 2022
** Init Musics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_musics(game_t *game)
{
    game->audio->musics = malloc(sizeof(musics_t));
}
