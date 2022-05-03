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

    s_controls->scrolling_bar = create_sprite(game->textures->gui,
        R_SCROLLING_BAR, pos_scrolling_bar, scale);
    set_sprite_origin(s_controls->scrolling_bar, R_SCROLLING_BAR);
    s_controls->scrolling_bar_inside = create_sprite(game->textures->gui,
        R_SCROLLING_BAR_INSIDE, pos_scrolling_bar_inside, scale);
    set_sprite_origin(
        s_controls->scrolling_bar_inside, R_SCROLLING_BAR_INSIDE);
}

settings_key_t *create_key(game_t *game, int pos_y,
    const char *title_string, const char *key_string)
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
    s_key->key_rect = create_sprite(
        game->textures->gui, R_KEY_BG, key_pos, scale);
    set_sprite_origin(s_key->key_rect, R_KEY_BG);
    s_key->key = create_text(FONT_BUENARD, sfWhite, 36, key_string);
    set_text_origin(s_key->key);
    sfText_setPosition(s_key->key, (sfVector2f){key_pos.x, key_pos.y - 7});
    s_key->reset = create_sprite(
        game->textures->gui, R_CROSS, reset_pos, reset_scale);
    set_sprite_origin(s_key->reset, R_CROSS);
    return s_key;
}

void init_settings_controls_keys_2(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    s_controls->keys[INTERACT] = create_key(game, 965, ENGLISH_INTERACT,
        get_key_name(game->keys[INTERACT]));
    s_controls->keys[ZOOM_IN] = create_key(game, 1065,
        ENGLISH_ZOOM_IN, get_key_name(game->keys[ZOOM_IN]));
    s_controls->keys[ZOOM_OUT] = create_key(game, 1165,
        ENGLISH_ZOOM_OUT, get_key_name(game->keys[ZOOM_OUT]));
    s_controls->keys[ROTATE_LEFT] = create_key(game, 1265,
        ENGLISH_ROTATE_LEFT, get_key_name(game->keys[ROTATE_LEFT]));
    s_controls->keys[ROTATE_RIGHT] = create_key(game, 1365,
        ENGLISH_ROTATE_RIGHT, get_key_name(game->keys[ROTATE_RIGHT]));
    s_controls->keys[RESET_VIEW] = create_key(game, 1465,
        ENGLISH_RESET_VIEW, get_key_name(game->keys[RESET_VIEW]));
    s_controls->keys[HITBOX] = create_key(game, 1565,
        ENGLISH_HITBOX, get_key_name(game->keys[HITBOX]));
    s_controls->keys[ESCAPE] = create_key(game, 1665,
        ENGLISH_ESCAPE, get_key_name(game->keys[ESCAPE]));
}

void init_settings_controls_keys(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    s_controls->keys = malloc(sizeof(settings_key_t *) * NB_KEYS + 1);
    s_controls->keys[NB_KEYS] = NULL;
    s_controls->keys[UP] = create_key(game, 265, ENGLISH_UP,
        get_key_name(game->keys[UP]));
    s_controls->keys[DOWN] = create_key(game, 365, ENGLISH_DOWN,
        get_key_name(game->keys[DOWN]));
    s_controls->keys[LEFT] = create_key(game, 465, ENGLISH_LEFT,
        get_key_name(game->keys[LEFT]));
    s_controls->keys[RIGHT] = create_key(game, 565, ENGLISH_RIGHT,
        get_key_name(game->keys[RIGHT]));
    s_controls->keys[BITE] = create_key(game, 665, ENGLISH_BITE,
        get_key_name(game->keys[BITE]));
    s_controls->keys[DODGE] = create_key(game, 765, ENGLISH_DODGE,
        get_key_name(game->keys[DODGE]));
    s_controls->keys[ATTACK] = create_key(game, 865, ENGLISH_ATTACK,
        get_key_name(game->keys[ATTACK]));
    init_settings_controls_keys_2(game);
}

void init_settings_controls(game_t *game)
{
    game->assets->settings->controls = malloc(sizeof(settings_controls_t));

    init_settings_controls_choose_key(game);
    init_settings_controls_scrolling_bar(game);
    init_settings_controls_keys(game);
    game->assets->settings->controls->scrolling_clock = sfClock_create();
    game->assets->settings->controls->clock = sfClock_create();
    game->assets->settings->controls->key_selected = -1;
}
