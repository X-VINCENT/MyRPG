/*
** EPITECH PROJECT, 2022
** Init Textures for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures(game_t *game)
{
    game->textures = malloc(sizeof(textures_t));

    init_textures_characters(game);
    init_textures_environnment(game);
    init_textures_icons(game);
    init_textures_inventory(game);
    init_textures_menus(game);
    init_textures_objects(game);
}
