/*
** EPITECH PROJECT, 2022
** Language Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish(game_t *game)
{
    /*sfText_setString(game->assets->settings->controls->up, SPANISH_UP);
    sfText_setString(game->assets->settings->controls->down, SPANISH_DOWN);
    sfText_setString(game->assets->settings->controls->left, SPANISH_LEFT);
    sfText_setString(game->assets->settings->controls->right, SPANISH_RIGHT);
    sfText_setString(
        game->assets->settings->controls->interact, SPANISH_INTERACT);*/
    sfText_setString(game->assets->settings->settings_text, SPANISH_SETTINGS);
    sfText_setString(game->assets->settings->game_text, SPANISH_GAME);
    sfText_setString(game->assets->settings->graphics_text, SPANISH_GRAPHICS);
    sfText_setString(game->assets->settings->audio_text, SPANISH_AUDIO);
    sfText_setString(game->assets->settings->controls_text, SPANISH_CONTROLS);
    sfText_setString(game->assets->settings->game->language, SPANISH_SPANISH);
    sfText_setString(
        game->assets->settings->game->title_language, SPANISH_LANGUAGE);
    sfText_setString(game->assets->top_bar->menu1, SPANISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, SPANISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, SPANISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, SPANISH_MENU_4);
}
