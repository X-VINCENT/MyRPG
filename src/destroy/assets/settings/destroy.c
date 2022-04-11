/*
** EPITECH PROJECT, 2022
** Destroy Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_settings_game(settings_game_t *s_game)
{
    destroy_sprite(s_game->arrow_language_left);
    destroy_sprite(s_game->arrow_language_right);
    destroy_text(s_game->title_language);
    destroy_text(s_game->language);
    free(s_game);
}

void destroy_settings_graphics(settings_graphics_t *s_graphics)
{
    free(s_graphics);
}

void destroy_settings_audio(settings_audio_t *s_audio)
{
    free(s_audio);
}

void destroy_settings_controls(settings_controls_t *s_controls)
{
    free(s_controls);
}

void destroy_settings(settings_t *settings)
{
    destroy_settings_game(settings->game);
    destroy_settings_graphics(settings->graphics);
    destroy_settings_audio(settings->audio);
    destroy_settings_controls(settings->controls);
    destroy_text(settings->settings_text);
    destroy_text(settings->game_text);
    destroy_text(settings->graphics_text);
    destroy_text(settings->audio_text);
    destroy_text(settings->controls_text);
    sfClock_destroy(settings->clock);
    free(settings);
}
