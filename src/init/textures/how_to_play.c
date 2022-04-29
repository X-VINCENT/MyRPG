/*
** EPITECH PROJECT, 2022
** Init Textures Environnment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_how_to_play(game_t *game)
{
    textures_t *textures = game->textures;

    textures->left_arrow = sfTexture_createFromFile(LEFT_ARROW, NULL);
    textures->right_arrow = sfTexture_createFromFile(RIGHT_ARROW, NULL);
    
}
