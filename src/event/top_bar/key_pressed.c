/*
** EPITECH PROJECT, 2022
** Key Pressed Top Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void top_bar_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys->escape)
        game->stage = game->last_stage;
}
