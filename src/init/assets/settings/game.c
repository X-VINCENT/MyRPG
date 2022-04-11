/*
** EPITECH PROJECT, 2022
** Init Settings Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_game_language(game_t *game)
{
    settings_game_t *s_game = game->assets->settings->game;
    sfIntRect r_arrow = init_rect(240, 0, 35, 51);
    sfVector2f p_arrow_left = init_pos(1448, 285);
    sfVector2f p_arrow_right = init_pos(1750, 285);
    sfVector2f p_language_title = init_pos(850, 305);
    sfVector2f p_language = init_pos(1600, 305);

    s_game->arrow_language_left = create_sprite(
        GUI, r_arrow, p_arrow_left, (sfVector2f){1, 1});
    s_game->arrow_language_right = create_sprite(
        GUI, r_arrow, p_arrow_right, (sfVector2f){-1, 1});
    s_game->title_language = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_LANGUAGE);
    set_text_origin_middle_left(s_game->title_language);
    sfText_setPosition(s_game->title_language, p_language_title);
    s_game->language = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_ENGLISH);
    set_text_origin(s_game->language);
    sfText_setPosition(s_game->language, p_language);
}

void init_settings_game(game_t *game)
{
    game->assets->settings->game = malloc(sizeof(settings_game_t));
    init_settings_game_language(game);
}
