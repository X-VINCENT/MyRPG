/*
** EPITECH PROJECT, 2022
** Language French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    /*sfText_setString(settings->controls->up, FRENCH_UP);
    sfText_setString(settings->controls->down, FRENCH_DOWN);
    sfText_setString(settings->controls->left, FRENCH_LEFT);
    sfText_setString(settings->controls->right, FRENCH_RIGHT);
    sfText_setString(settings->controls->interact, FRENCH_INTERACT);*/
    sfText_setString(settings->settings_text, FRENCH_SETTINGS);
    sfText_setString(settings->game_text, FRENCH_GAME);
    sfText_setString(settings->graphics_text, FRENCH_GRAPHICS);
    sfText_setString(settings->audio_text, FRENCH_AUDIO);
    sfText_setString(settings->controls_text, FRENCH_CONTROLS);
    sfText_setString(settings->game->language, FRENCH_FRENCH);
    sfText_setString(settings->game->title_language, FRENCH_LANGUAGE);
    sfText_setString(settings->graphics->title_res, FRENCH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, FRENCH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, FRENCH_VSYNC);
    sfText_setString(settings->graphics->fps[4], FRENCH_UNLIMITED);
    sfText_setString(settings->audio->title_music, FRENCH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, FRENCH_EFFECTS_VOLUME);
}

void set_texts_french(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, FRENCH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, FRENCH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, FRENCH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, FRENCH_MENU_4);
    set_texts_french_settings(game);
}
