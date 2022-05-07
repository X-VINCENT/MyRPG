/*
** EPITECH PROJECT, 2022
** Init Textures Objects for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_objects(game_t *game)
{
    textures_t *textures = game->textures;

    textures->buttons_1 = sfTexture_createFromFile(BUTTONS_1, NULL);
    textures->gui = sfTexture_createFromFile(GUI, NULL);
    textures->intro = sfTexture_createFromFile(INTRODUCTION, NULL);
    textures->message_box = sfTexture_createFromFile(MESSAGE_BOX, NULL);
}
