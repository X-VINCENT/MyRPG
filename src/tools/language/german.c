/*
** EPITECH PROJECT, 2022
** Language German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    /*sfText_setString(settings->controls->up, GERMAN_UP);
    sfText_setString(settings->controls->down, GERMAN_DOWN);
    sfText_setString(settings->controls->left, GERMAN_LEFT);
    sfText_setString(settings->controls->right, GERMAN_RIGHT);
    sfText_setString(settings->controls->interact, GERMAN_INTERACT);*/
    sfText_setString(settings->settings_text, GERMAN_SETTINGS);
    sfText_setString(settings->game_text, GERMAN_GAME);
    sfText_setString(settings->graphics_text, GERMAN_GRAPHICS);
    sfText_setString(settings->audio_text, GERMAN_AUDIO);
    sfText_setString(settings->controls_text, GERMAN_CONTROLS);
    sfText_setString(settings->game->language, GERMAN_GERMAN);
    sfText_setString(settings->game->title_language, GERMAN_LANGUAGE);
    sfText_setString(settings->graphics->title_res, GERMAN_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, GERMAN_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, GERMAN_VSYNC);
    sfText_setString(settings->graphics->fps[4], GERMAN_UNLIMITED);
}

void set_texts_german(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, GERMAN_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, GERMAN_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, GERMAN_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, GERMAN_MENU_4);
    set_texts_german_settings(game);
}
