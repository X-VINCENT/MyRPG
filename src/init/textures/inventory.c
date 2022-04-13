/*
** EPITECH PROJECT, 2022
** Init Textures Inventory for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_inventory(game_t *game)
{
    textures_t *textures = game->textures;

    textures->slot_off = sfTexture_createFromFile(SLOT_PATH_OFF, NULL);
    textures->slot_on = sfTexture_createFromFile(SLOT_PATH_ON, NULL);
}
