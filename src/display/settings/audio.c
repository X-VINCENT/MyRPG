/*
** EPITECH PROJECT, 2022
** Display Settings Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_audio_music(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;

    sfRenderWindow_drawText(game->window, s_audio->title_music, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->music_left, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->music_right, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->music_empty_bar, NULL);
    for (int idx = 0; idx * 10 != game->music_volume; idx += 1)
        sfRenderWindow_drawSprite(
            game->window, s_audio->music_bar[idx], NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->music_circle_bar, NULL);
}

void display_settings_audio_effects(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;

    sfRenderWindow_drawText(game->window, s_audio->title_effects, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->effects_left, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->effects_right, NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->effects_empty_bar, NULL);
    for (int idx = 0; idx * 10 != game->effects_volume; idx += 1)
        sfRenderWindow_drawSprite(
            game->window, s_audio->effects_bar[idx], NULL);
    sfRenderWindow_drawSprite(game->window, s_audio->effects_circle_bar, NULL);
}

void display_settings_audio(game_t *game)
{
    display_settings_audio_music(game);
    display_settings_audio_effects(game);
}
