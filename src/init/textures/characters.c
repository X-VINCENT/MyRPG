/*
** EPITECH PROJECT, 2022
** Init Textures Characters for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_characters(game_t *game)
{
    textures_t *textures = game->textures;

    textures->black_pnj = sfTexture_createFromFile(PNJ_BLACK_PATH, NULL);
    textures->blue_girl_pnj =
        sfTexture_createFromFile(PNJ_BLUE_GIRL_PATH, NULL);
    textures->guard_pnj = sfTexture_createFromFile(PNJ_GUARD_PATH, NULL);
    textures->hotess_pnj = sfTexture_createFromFile(PNJ_HOTESS_PATH, NULL);
    textures->rat_blue = sfTexture_createFromFile(BLUE_RAT, NULL);
    textures->rat_green = sfTexture_createFromFile(GREEN_RAT, NULL);
    textures->rat_purple = sfTexture_createFromFile(PURPLE_RAT, NULL);
    textures->rat_red = sfTexture_createFromFile(RED_RAT, NULL);
}
