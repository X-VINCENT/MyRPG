/*
** EPITECH PROJECT, 2022
** Init Textures Icons for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_icons(game_t *game)
{
    textures_t *textures = game->textures;

    textures->cursor_icon = sfTexture_createFromFile(CURSOR, NULL);
    textures->window_icon = sfTexture_createFromFile(WINDOW_ICON, NULL);
}
