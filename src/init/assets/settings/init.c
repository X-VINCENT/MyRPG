/*
** EPITECH PROJECT, 2022
** Init Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings(game_t *game)
{
    game->assets->settings = malloc(sizeof(settings_t));
    init_settings_game(game);
    init_settings_graphics(game);
    init_settings_audio(game);
    init_settings_controls(game);
    game->assets->settings->current = 0;
}
