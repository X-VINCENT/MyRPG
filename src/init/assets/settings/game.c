/*
** EPITECH PROJECT, 2022
** Init Settings Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_game_language_texts(game_t *game)
{
    settings_game_t *s_game = game->assets->settings->game;
    sfVector2f p_text = init_pos(1613, 313);

    s_game->language = malloc(sizeof(sfText *) * 5);
    s_game->language[0] = create_text(FONT_BUENARD, sfWhite, 36, "English");
    s_game->language[1] = create_text(FONT_BUENARD, sfWhite, 36, "Francais");
    s_game->language[2] = create_text(FONT_BUENARD, sfWhite, 36, "Deutsch");
    s_game->language[3] = create_text(FONT_BUENARD, sfWhite, 36, "Espanol");
    s_game->language[4] = NULL;
    for (int idx = 0; s_game->language[idx] != NULL; idx += 1) {
        set_text_origin(s_game->language[idx]);
        sfText_setPosition(s_game->language[idx], p_text);
    }
}

void init_settings_game_language(game_t *game)
{
    settings_game_t *s_game = game->assets->settings->game;
    sfIntRect r_arrow = init_rect(240, 0, 35, 51);
    sfVector2f p_arrow_left = init_pos(1448, 285);
    sfVector2f p_arrow_right = init_pos(1750, 285);
    sfVector2f scale = init_scale(1, 1);
    sfVector2f inverted_scale = init_scale(-1, 1);

    s_game->arrow_language_left = create_sprite(
        GUI, r_arrow, p_arrow_left, scale);
    s_game->arrow_language_right = create_sprite(
        GUI, r_arrow, p_arrow_right, inverted_scale);
    init_settings_game_language_texts(game);
}

void init_settings_game(game_t *game)
{
    game->assets->settings->game = malloc(sizeof(settings_game_t));
    init_settings_game_language(game);
}
