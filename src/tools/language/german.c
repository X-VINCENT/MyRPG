/*
** EPITECH PROJECT, 2022
** Language German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german(game_t *game)
{
    /*sfText_setString(game->assets->settings->controls->up, GERMAN_UP);
    sfText_setString(game->assets->settings->controls->down, GERMAN_DOWN);
    sfText_setString(game->assets->settings->controls->left, GERMAN_LEFT);
    sfText_setString(game->assets->settings->controls->right, GERMAN_RIGHT);
    sfText_setString(
        game->assets->settings->controls->interact, GERMAN_INTERACT);*/
    sfText_setString(game->assets->settings->settings_text, GERMAN_SETTINGS);
    sfText_setString(game->assets->settings->game_text, GERMAN_GAME);
    sfText_setString(game->assets->settings->graphics_text, GERMAN_GRAPHICS);
    sfText_setString(game->assets->settings->audio_text, GERMAN_AUDIO);
    sfText_setString(game->assets->settings->controls_text, GERMAN_CONTROLS);
    sfText_setString(game->assets->settings->game->language, GERMAN_GERMAN);
    sfText_setString(
        game->assets->settings->game->title_language, GERMAN_LANGUAGE);
    sfText_setString(game->assets->top_bar->menu1, GERMAN_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, GERMAN_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, GERMAN_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, GERMAN_MENU_4);
}
