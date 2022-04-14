/*
** EPITECH PROJECT, 2022
** Init Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_rect_pos_offset(sfVector2f *pos, sfIntRect *rect, int offset)
{
    (*pos).x += offset;
    (*rect).left += offset;
}

void init_texts_settings_2(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfVector2f pos_audio = init_pos(110, 500);
    sfVector2f pos_controls = init_pos(110, 590);

    settings->audio_text = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_AUDIO);
    sfText_setPosition(settings->audio_text, pos_audio);
    set_text_origin_middle_left(settings->audio_text);
    settings->controls_text = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_CONTROLS);
    sfText_setPosition(settings->controls_text, pos_controls);
    set_text_origin_middle_left(settings->controls_text);
}

void init_texts_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfColor color = sfColor_fromRGBA(244, 154, 78, 255);
    sfVector2f pos_settings = init_pos(38, 210);
    sfVector2f pos_game = init_pos(110, 320);
    sfVector2f pos_graphics = init_pos(110, 410);

    settings->settings_text = create_text(
        FONT_BUENARD, color, 48, ENGLISH_SETTINGS);
    sfText_setPosition(settings->settings_text, pos_settings);
    set_text_origin_middle_left(settings->settings_text);
    settings->game_text = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_GAME);
    sfText_setPosition(settings->game_text, pos_game);
    set_text_origin_middle_left(settings->game_text);
    settings->graphics_text = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_GRAPHICS);
    sfText_setPosition(settings->graphics_text, pos_graphics);
    set_text_origin_middle_left(settings->graphics_text);
    init_texts_settings_2(game);
}

void init_settings(game_t *game)
{
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfIntRect r_scrolling_rect = init_rect(0, 1000, 1255, 585);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f p_scrolling_rect = init_pos(1262, 479);
    sfVector2f scale = init_scale(1, 1);

    game->assets->settings = malloc(sizeof(settings_t));
    game->assets->settings->bg = create_sprite(
        game->textures->settings_bg, r_bg, p_bg, scale);
    game->assets->settings->scrolling_rect = create_sprite(
        game->textures->gui, r_scrolling_rect, p_scrolling_rect, scale);
    set_sprite_origin(
        game->assets->settings->scrolling_rect, r_scrolling_rect);
    init_texts_settings(game);
    init_settings_game(game);
    init_settings_graphics(game);
    init_settings_audio(game);
    init_settings_controls(game);
    game->assets->settings->clock = sfClock_create();
    game->assets->settings->current = 0;
}
