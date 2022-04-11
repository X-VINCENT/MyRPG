/*
** EPITECH PROJECT, 2022
** Language English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english(game_t *game)
{
    /*sfText_setString(game->assets->settings->controls->up, ENGLISH_UP);
    sfText_setString(game->assets->settings->controls->down, ENGLISH_DOWN);
    sfText_setString(game->assets->settings->controls->left, ENGLISH_LEFT);
    sfText_setString(game->assets->settings->controls->right, ENGLISH_RIGHT);
    sfText_setString(
        game->assets->settings->controls->interact, ENGLISH_INTERACT);*/
    sfText_setString(game->assets->settings->settings_text, ENGLISH_SETTINGS);
    sfText_setString(game->assets->settings->game_text, ENGLISH_GAME);
    sfText_setString(game->assets->settings->graphics_text, ENGLISH_GRAPHICS);
    sfText_setString(game->assets->settings->audio_text, ENGLISH_AUDIO);
    sfText_setString(game->assets->settings->controls_text, ENGLISH_CONTROLS);
    sfText_setString(game->assets->top_bar->menu1, ENGLISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, ENGLISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, ENGLISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, ENGLISH_MENU_4);
}
