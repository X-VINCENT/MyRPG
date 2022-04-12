/*
** EPITECH PROJECT, 2022
** Destroy Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_key(settings_key_t *s_key)
{
    destroy_text(s_key->title);
    destroy_sprite(s_key->key_rect);
    destroy_text(s_key->key);
    destroy_sprite(s_key->reset);
    free(s_key);
}

void destroy_settings_controls(settings_controls_t *s_controls)
{
    destroy_key(s_controls->up);
    destroy_key(s_controls->down);
    destroy_key(s_controls->left);
    destroy_key(s_controls->right);
    destroy_key(s_controls->jump);
    destroy_key(s_controls->dodge);
    destroy_key(s_controls->attack);
    destroy_key(s_controls->interact);
    destroy_key(s_controls->zoom_in);
    destroy_key(s_controls->zoom_out);
    destroy_key(s_controls->rotate_left);
    destroy_key(s_controls->rotate_right);
    destroy_key(s_controls->reset_view);
    destroy_key(s_controls->escape);
    free(s_controls);
}
