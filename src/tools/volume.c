/*
** EPITECH PROJECT, 2022
** Volume Tool for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void set_music_volume(game_t *game)
{
    sfSprite *circle = game->assets->settings->audio->music_circle_bar;
    sfVector2f pos_circle = init_pos(1300 + 5 * game->music_volume, 310);

    sfSprite_setPosition(circle, pos_circle);
}

void set_effects_volume(game_t *game)
{
    sfSprite *circle = game->assets->settings->audio->effects_circle_bar;
    sfVector2f pos_circle = init_pos(1300 + 5 * game->effects_volume, 410);

    sfSprite_setPosition(circle, pos_circle);
}
