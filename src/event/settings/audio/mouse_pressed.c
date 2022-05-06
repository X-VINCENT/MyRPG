/*
** EPITECH PROJECT, 2022
** Settings Audio Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_audio_mouse_pressed_music(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(s_audio->music_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(s_audio->music_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y)) {
        if (game->music_volume >= 10)
            game->music_volume -= 10;
        else
            game->music_volume = 0;
    }
    if (sfFloatRect_contains(&r_right, coords.x, coords.y)) {
        if (game->music_volume <= 90)
            game->music_volume += 10;
        else
            game->music_volume = 100;
    }
}

void settings_audio_mouse_pressed_music_bar(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_bar;

    for (int idx = 0; s_audio->music_bar[idx] != NULL; idx += 1) {
        r_bar = sfSprite_getGlobalBounds(s_audio->music_bar[idx]);
        if (sfFloatRect_contains(&r_bar, coords.x, coords.y))
            game->music_volume = idx * 10;
    }
}

void settings_audio_mouse_pressed_effects(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(s_audio->effects_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(s_audio->effects_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y)) {
        if (game->effects_volume >= 10)
            game->effects_volume -= 10;
        else
            game->effects_volume = 0;
    }
    if (sfFloatRect_contains(&r_right, coords.x, coords.y)) {
        if (game->effects_volume <= 90)
            game->effects_volume += 10;
        else
            game->effects_volume = 100;
    }
}

void settings_audio_mouse_pressed_effects_bar(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_bar;

    for (int idx = 0; s_audio->effects_bar[idx] != NULL; idx += 1) {
        r_bar = sfSprite_getGlobalBounds(s_audio->effects_bar[idx]);
        if (sfFloatRect_contains(&r_bar, coords.x, coords.y))
            game->effects_volume = idx * 10;
    }
}

void settings_audio_mouse_pressed(game_t *game)
{
    settings_audio_mouse_pressed_music(game);
    settings_audio_mouse_pressed_music_bar(game);
    settings_audio_mouse_pressed_effects(game);
    settings_audio_mouse_pressed_effects_bar(game);
    set_music_volume(game);
    set_effects_volume(game);
}
