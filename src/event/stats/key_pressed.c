/*
** EPITECH PROJECT, 2022
** Key Pressed Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void stats_key_pressed(game_t *game)
{
    stats_t *stats = game->assets->stats;
    sfEvent *event = game->event->event;

    top_bar_key_pressed(game);
}
