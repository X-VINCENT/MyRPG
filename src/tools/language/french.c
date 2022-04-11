/*
** EPITECH PROJECT, 2022
** Language French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french(game_t *game)
{
    /*sfText_setString(game->assets->settings->controls->up, FRENCH_UP);
    sfText_setString(game->assets->settings->controls->down, FRENCH_DOWN);
    sfText_setString(game->assets->settings->controls->left, FRENCH_LEFT);
    sfText_setString(game->assets->settings->controls->right, FRENCH_RIGHT);
    sfText_setString(
        game->assets->settings->controls->interact, FRENCH_INTERACT);*/
    sfText_setString(game->assets->settings->settings_text, FRENCH_SETTINGS);
    sfText_setString(game->assets->settings->game_text, FRENCH_GAME);
    sfText_setString(game->assets->settings->graphics_text, FRENCH_GRAPHICS);
    sfText_setString(game->assets->settings->audio_text, FRENCH_AUDIO);
    sfText_setString(game->assets->settings->controls_text, FRENCH_CONTROLS);
    sfText_setString(game->assets->top_bar->menu1, FRENCH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, FRENCH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, FRENCH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, FRENCH_MENU_4);
}
