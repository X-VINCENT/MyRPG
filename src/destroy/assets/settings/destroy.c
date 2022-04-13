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
    destroy_text(s_graphics->title_res);
    for (int idx = 0; s_graphics->res[idx] != NULL; idx += 1)
        destroy_text(s_graphics->res[idx]);
    free(s_graphics->res);
    destroy_sprite(s_graphics->res_left);
    destroy_sprite(s_graphics->res_right);
    destroy_text(s_graphics->title_fps);
    for (int idx = 0; s_graphics->fps[idx] != NULL; idx += 1)
        destroy_text(s_graphics->fps[idx]);
    free(s_graphics->fps);
    destroy_sprite(s_graphics->fps_left);
    destroy_sprite(s_graphics->fps_right);
    destroy_text(s_graphics->title_vsync);
    for (int idx = 0; s_graphics->vsync[idx] != NULL; idx += 1)
        destroy_text(s_graphics->vsync[idx]);
    free(s_graphics->vsync);
    destroy_sprite(s_graphics->vsync_left);
    destroy_sprite(s_graphics->vsync_right);
    free(s_graphics);
}

void destroy_settings_audio(settings_audio_t *s_audio)
{
    destroy_text(s_audio->title_music);
    destroy_sprite(s_audio->music_left);
    destroy_sprite(s_audio->music_right);
    destroy_sprite(s_audio->music_empty_bar);
    destroy_sprite(s_audio->music_circle_bar);
    for (int idx = 0; s_audio->music_bar[idx] != NULL; idx += 1)
        destroy_sprite(s_audio->music_bar[idx]);
    free(s_audio->music_bar);
    destroy_text(s_audio->title_effects);
    destroy_sprite(s_audio->effects_left);
    destroy_sprite(s_audio->effects_right);
    destroy_sprite(s_audio->effects_empty_bar);
    destroy_sprite(s_audio->effects_circle_bar);
    for (int idx = 0; s_audio->effects_bar[idx] != NULL; idx += 1)
        destroy_sprite(s_audio->effects_bar[idx]);
    free(s_audio->effects_bar);
    free(s_audio);
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
