/*
** EPITECH PROJECT, 2022
** Init Settings Audio for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_audio_music(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2f p_arrow_left = init_pos(1250, 310);
    sfVector2f p_arrow_right = init_pos(1850, 310);
    sfVector2f p_music_title = init_pos(700, 305);
    sfVector2f p_empty_bar = init_pos(1550, 310);
    sfVector2f p_circle_bar = init_pos(1300 +  5 * game->music_volume, 310);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f invert_scale = {-0.5, 0.5};

    s_audio->music_left = create_arrow(p_arrow_left, scale);
    s_audio->music_right = create_arrow(p_arrow_right, invert_scale);
    s_audio->title_music = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_MUSIC_VOLUME);
    set_text_origin_middle_left(s_audio->title_music);
    sfText_setPosition(s_audio->title_music, p_music_title);
    s_audio->music_empty_bar = create_sprite(GUI, R_EMPTY_BAR,
        p_empty_bar, (sfVector2f){1, 1});
    set_sprite_origin(s_audio->music_empty_bar, R_EMPTY_BAR);
    s_audio->music_circle_bar = create_sprite(GUI, R_CIRCLE_BAR,
        p_circle_bar, (sfVector2f){1, 1});
    set_sprite_origin(s_audio->music_circle_bar, R_CIRCLE_BAR);
}

void init_settings_audio_effects(game_t *game)
{
    settings_audio_t *s_audio = game->assets->settings->audio;
    sfVector2f p_arrow_left = init_pos(1250, 410);
    sfVector2f p_arrow_right = init_pos(1850, 410);
    sfVector2f p_effects_title = init_pos(700, 405);
    sfVector2f p_empty_bar = init_pos(1550, 410);
    sfVector2f p_circle_bar = init_pos(1300 + 5 * game->effects_volume, 410);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f invert_scale = {-0.5, 0.5};

    s_audio->effects_left = create_arrow(p_arrow_left, scale);
    s_audio->effects_right = create_arrow(p_arrow_right, invert_scale);
    s_audio->title_effects = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_EFFECTS_VOLUME);
    set_text_origin_middle_left(s_audio->title_effects);
    sfText_setPosition(s_audio->title_effects, p_effects_title);
    s_audio->effects_empty_bar = create_sprite(GUI, R_EMPTY_BAR,
        p_empty_bar, (sfVector2f){1, 1});
    set_sprite_origin(s_audio->effects_empty_bar, R_EMPTY_BAR);
    s_audio->effects_circle_bar = create_sprite(GUI, R_CIRCLE_BAR,
        p_circle_bar, (sfVector2f){1, 1});
    set_sprite_origin(s_audio->effects_circle_bar, R_CIRCLE_BAR);
}

void init_settings_audio(game_t *game)
{
    game->assets->settings->audio = malloc(sizeof(settings_audio_t));
    init_settings_audio_music(game);
    init_settings_audio_effects(game);
}
