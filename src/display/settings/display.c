/*
** EPITECH PROJECT, 2022
** Display Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_texts(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfColor color = sfColor_fromRGBA(254, 83, 119, 255);

    sfText_setColor(settings->game_text, sfWhite);
    sfText_setColor(settings->graphics_text, sfWhite);
    sfText_setColor(settings->audio_text, sfWhite);
    sfText_setColor(settings->controls_text, sfWhite);
    if (settings->current == SETTINGS_STAGE_GAME)
        sfText_setColor(settings->game_text, color);
    if (settings->current == SETTINGS_STAGE_GRAPHICS)
        sfText_setColor(settings->graphics_text, color);
    if (settings->current == SETTINGS_STAGE_AUDIO)
        sfText_setColor(settings->audio_text, color);
    if (settings->current == SETTINGS_STAGE_CONTROLS)
        sfText_setColor(settings->controls_text, color);
    sfRenderWindow_drawText(game->window, settings->settings_text, NULL);
    sfRenderWindow_drawText(game->window, settings->game_text, NULL);
    sfRenderWindow_drawText(game->window, settings->graphics_text, NULL);
    sfRenderWindow_drawText(game->window, settings->audio_text, NULL);
    sfRenderWindow_drawText(game->window, settings->controls_text, NULL);
}

void display_current_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    switch (settings->current) {
        case SETTINGS_STAGE_GAME:
            display_settings_game(game);
            break;
        case SETTINGS_STAGE_GRAPHICS:
            display_settings_graphics(game);
            break;
        case SETTINGS_STAGE_AUDIO:
            display_settings_audio(game);
            break;
        case SETTINGS_STAGE_CONTROLS:
            display_settings_controls(game);
            break;
        default:
            break;
    }
}

void display_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfRenderWindow_drawSprite(game->window, settings->scrolling_rect, NULL);
    display_current_settings(game);
    sfRenderWindow_drawSprite(game->window, settings->bg, NULL);
    display_settings_texts(game);
    display_top_bar(game);
}
