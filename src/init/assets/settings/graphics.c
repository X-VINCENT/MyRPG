/*
** EPITECH PROJECT, 2022
** Init Settings Graphics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_graphics(game_t *game)
{
    game->assets->settings->graphics = malloc(sizeof(settings_graphics_t));
}
