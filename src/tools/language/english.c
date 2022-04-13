/*
** EPITECH PROJECT, 2022
** Language English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    /*sfText_setString(settings->controls->up, ENGLISH_UP);
    sfText_setString(settings->controls->down, ENGLISH_DOWN);
    sfText_setString(settings->controls->left, ENGLISH_LEFT);
    sfText_setString(settings->controls->right, ENGLISH_RIGHT);
    sfText_setString(settings->controls->interact, ENGLISH_INTERACT);*/
    sfText_setString(settings->settings_text, ENGLISH_SETTINGS);
    sfText_setString(settings->game_text, ENGLISH_GAME);
    sfText_setString(settings->graphics_text, ENGLISH_GRAPHICS);
    sfText_setString(settings->audio_text, ENGLISH_AUDIO);
    sfText_setString(settings->controls_text, ENGLISH_CONTROLS);
    sfText_setString(settings->game->language, ENGLISH_ENGLISH);
    sfText_setString(settings->game->title_language, ENGLISH_LANGUAGE);
    sfText_setString(settings->graphics->title_res, ENGLISH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, ENGLISH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, ENGLISH_VSYNC);
    sfText_setString(settings->graphics->fps[4], ENGLISH_UNLIMITED);
    sfText_setString(settings->audio->title_music, ENGLISH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, ENGLISH_EFFECTS_VOLUME);
}

void set_texts_english(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, ENGLISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, ENGLISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, ENGLISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, ENGLISH_MENU_4);
    set_texts_english_settings(game);
}
