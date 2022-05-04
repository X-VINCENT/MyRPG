/*
** EPITECH PROJECT, 2022
** Init Textures Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_menus(game_t *game)
{
    textures_t *textures = game->textures;

    textures->home_menu_bg0 = sfTexture_createFromFile(HOME_BG0, NULL);
    textures->home_menu_bg1 = sfTexture_createFromFile(HOME_BG1, NULL);
    textures->home_menu_bg2 = sfTexture_createFromFile(HOME_BG2, NULL);
    textures->home_menu_bg3 = sfTexture_createFromFile(HOME_BG3, NULL);
    textures->home_menu_title = sfTexture_createFromFile(HOME_TITLE, NULL);
    textures->abilities_bg = sfTexture_createFromFile(ABILITIES_BG, NULL);
    textures->settings_bg = sfTexture_createFromFile(SETTINGS_BG, NULL);
    textures->menu_bg = sfTexture_createFromFile(MENU_BG, NULL);
}
