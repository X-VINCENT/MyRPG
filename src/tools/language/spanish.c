/*
** EPITECH PROJECT, 2022
** Language Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    /*sfText_setString(settings->controls->up, SPANISH_UP);
    sfText_setString(settings->controls->down, SPANISH_DOWN);
    sfText_setString(settings->controls->left, SPANISH_LEFT);
    sfText_setString(settings->controls->right, SPANISH_RIGHT);
    sfText_setString(settings->controls->interact, SPANISH_INTERACT);*/
    sfText_setString(settings->settings_text, SPANISH_SETTINGS);
    sfText_setString(settings->game_text, SPANISH_GAME);
    sfText_setString(settings->graphics_text, SPANISH_GRAPHICS);
    sfText_setString(settings->audio_text, SPANISH_AUDIO);
    sfText_setString(settings->controls_text, SPANISH_CONTROLS);
    sfText_setString(settings->game->language, SPANISH_SPANISH);
    sfText_setString(settings->game->title_language, SPANISH_LANGUAGE);
    sfText_setString(settings->graphics->title_res, SPANISH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, SPANISH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, SPANISH_VSYNC);
    sfText_setString(settings->graphics->fps[4], SPANISH_UNLIMITED);
    sfText_setString(settings->audio->title_music, SPANISH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, SPANISH_EFFECTS_VOLUME);
}

void set_texts_spanish(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, SPANISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, SPANISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, SPANISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, SPANISH_MENU_4);
    set_texts_spanish_settings(game);
}
