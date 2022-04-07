/*
** EPITECH PROJECT, 2022
** Key Pressed Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    top_bar_key_pressed(game);
}
