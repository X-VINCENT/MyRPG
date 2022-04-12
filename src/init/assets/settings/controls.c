/*
** EPITECH PROJECT, 2022
** Init Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_controls_scrolling_bar(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2f pos_scrolling_bar = init_pos(1825, 479);
    sfVector2f pos_scrolling_bar_inside = init_pos(1825, 329);
    sfVector2f scale = init_scale(1, 1);

    s_controls->scrolling_bar = create_sprite(GUI, R_SCROLLING_BAR,
        pos_scrolling_bar, scale);
    set_sprite_origin(s_controls->scrolling_bar, R_SCROLLING_BAR);
    s_controls->scrolling_bar_inside = create_sprite(GUI,
        R_SCROLLING_BAR_INSIDE, pos_scrolling_bar_inside, scale);
    set_sprite_origin(
        s_controls->scrolling_bar_inside, R_SCROLLING_BAR_INSIDE);
}

settings_key_t *create_key(
    int pos_y, const char *title_string, const char *key_string)
{
    settings_key_t *s_key = malloc(sizeof(settings_key_t));
    sfVector2f title_pos = init_pos(700, pos_y);
    sfVector2f key_pos = init_pos(1550, pos_y);
    sfVector2f reset_pos = init_pos(1680, pos_y);
    sfVector2f scale = init_scale(1, 1);
    sfVector2f reset_scale = {0.5, 0.5};

    s_key->title = create_text(FONT_BUENARD, sfWhite, 36, title_string);
    set_text_origin_middle_left(s_key->title);
    sfText_setPosition(s_key->title, title_pos);
    s_key->key_rect = create_sprite(GUI, R_KEY_BG, key_pos, scale);
    set_sprite_origin(s_key->key_rect, R_KEY_BG);
    s_key->key = create_text(FONT_BUENARD, sfWhite, 36, key_string);
    set_text_origin(s_key->key);
    sfText_setPosition(s_key->key, (sfVector2f){key_pos.x, key_pos.y - 7});
    s_key->reset = create_sprite(GUI, R_CROSS, reset_pos, reset_scale);
    set_sprite_origin(s_key->reset, R_CROSS);
    return s_key;
}

void init_settings_controls_keys_2(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    s_controls->zoom_in = create_key(1065, ENGLISH_ZOOM_IN,
        get_key_name(game->keys->zoom_in));
    s_controls->zoom_out = create_key(1165, ENGLISH_ZOOM_OUT,
        get_key_name(game->keys->zoom_out));
    s_controls->rotate_left = create_key(1265, ENGLISH_ROTATE_LEFT,
        get_key_name(game->keys->rotate_left));
    s_controls->rotate_right = create_key(1365, ENGLISH_ROTATE_RIGHT,
        get_key_name(game->keys->rotate_right));
    s_controls->reset_view = create_key(1465, ENGLISH_RESET_VIEW,
        get_key_name(game->keys->reset_view));
    s_controls->escape = create_key(1565, ENGLISH_ESCAPE,
        get_key_name(game->keys->escape));
}

void init_settings_controls_keys(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    s_controls->up = create_key(265, ENGLISH_UP,
        get_key_name(game->keys->up));
    s_controls->down = create_key(365, ENGLISH_DOWN,
        get_key_name(game->keys->down));
    s_controls->left = create_key(465, ENGLISH_LEFT,
        get_key_name(game->keys->left));
    s_controls->right = create_key(565, ENGLISH_RIGHT,
        get_key_name(game->keys->right));
    s_controls->jump = create_key(665, ENGLISH_JUMP,
        get_key_name(game->keys->up));
    s_controls->dodge = create_key(765, ENGLISH_DODGE,
        get_key_name(game->keys->down));
    s_controls->attack = create_key(865, ENGLISH_ATTACK,
        get_key_name(game->keys->left));
    s_controls->interact = create_key(965, ENGLISH_INTERACT,
        get_key_name(game->keys->right));
    init_settings_controls_keys_2(game);
}

void init_settings_controls(game_t *game)
{
    game->assets->settings->controls = malloc(sizeof(settings_controls_t));

    init_settings_controls_scrolling_bar(game);
    init_settings_controls_keys(game);
    game->assets->settings->controls->scrolling_clock = sfClock_create();
}
