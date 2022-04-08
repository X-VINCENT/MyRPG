/*
** EPITECH PROJECT, 2022
** Init Settings Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_game(game_t *game)
{
    game->assets->settings->game = malloc(sizeof(settings_game_t));
}
