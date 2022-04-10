/*
** EPITECH PROJECT, 2022
** Init Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_texts_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfColor color = sfColor_fromRGBA(244, 154, 78, 255);
    sfVector2f pos = init_pos(38, 210);

    settings->settings_text = create_text(
        FONT_BUENARD, color, 48, ENGLISH_SETTINGS);
    sfSprite_setPosition(settings->settings_text, pos);
    set_text_origin_middle_left(settings->settings_text);
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
        SETTINGS_BG, r_bg, p_bg, scale);
    game->assets->settings->scrolling_rect = create_sprite(
        GUI, r_scrolling_rect, p_scrolling_rect, scale);
    set_sprite_origin(
        game->assets->settings->scrolling_rect, r_scrolling_rect);
    init_texts_settings(game);
    init_settings_game(game);
    init_settings_graphics(game);
    init_settings_audio(game);
    init_settings_controls(game);
    game->assets->settings->current = 0;
}
