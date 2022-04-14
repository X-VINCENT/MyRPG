/*
** EPITECH PROJECT, 2022
** Destroy Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_settings_controls_choose_key(settings_choose_key_t *s_choose_key)
{
    destroy_sprite(s_choose_key->bg_rect);
    destroy_text(s_choose_key->text);
    destroy_text(s_choose_key->quit);
    free(s_choose_key);
}

void destroy_key(settings_key_t *s_key)
{
    destroy_text(s_key->title);
    destroy_sprite(s_key->key_rect);
    destroy_text(s_key->key);
    destroy_sprite(s_key->reset);
    free(s_key);
}

void destroy_settings_controls_scrolling_bar(settings_controls_t *s_controls)
{
    destroy_sprite(s_controls->scrolling_bar);
    destroy_sprite(s_controls->scrolling_bar_inside);
}

void destroy_settings_controls_keys(settings_controls_t *s_controls)
{
    for (int idx = 0; s_controls->keys[idx] != NULL; idx += 1)
        destroy_key(s_controls->keys[idx]);
    free(s_controls->keys);
}

void destroy_settings_controls(settings_controls_t *s_controls)
{
    destroy_settings_controls_choose_key(s_controls->choose_key);
    destroy_settings_controls_scrolling_bar(s_controls);
    destroy_settings_controls_keys(s_controls);
    sfClock_destroy(s_controls->scrolling_clock);
    sfClock_destroy(s_controls->clock);
    free(s_controls);
}
