/*
** EPITECH PROJECT, 2022
** Init Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_controls(game_t *game)
{
    game->assets->settings->controls = malloc(sizeof(settings_controls_t));
}
