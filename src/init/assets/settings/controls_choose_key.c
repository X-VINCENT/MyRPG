/*
** EPITECH PROJECT, 2022
** Init Settings Controls Choose Key for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_controls_choose_key_main(game_t *game)
{
    settings_choose_key_t *s_choose_key =
        game->assets->settings->controls->choose_key;
    sfVector2f p_bg = init_pos(960, 470);
    sfVector2f p_text = init_pos(960, 435);
    sfVector2f scale = init_scale(1, 1);

    s_choose_key->bg_rect = create_sprite(
        game->textures->gui, R_CHOOSE_KEY, p_bg, scale);
    set_sprite_origin(s_choose_key->bg_rect, R_CHOOSE_KEY);
    s_choose_key->text = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_PRESS_KEY);
    set_text_origin(s_choose_key->text);
    sfText_setPosition(s_choose_key->text, p_text);
}

void init_settings_controls_choose_key_quit(game_t *game)
{
    settings_choose_key_t *s_choose_key =
        game->assets->settings->controls->choose_key;
    sfVector2f pos = init_pos(960, 520);

    s_choose_key->quit = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_QUIT);
    set_text_origin(s_choose_key->quit);
    sfText_setPosition(s_choose_key->quit, pos);
}

void init_settings_controls_choose_key(game_t *game)
{
    game->assets->settings->controls->choose_key = malloc(
        sizeof(settings_choose_key_t));
    init_settings_controls_choose_key_main(game);
    init_settings_controls_choose_key_quit(game);
}
