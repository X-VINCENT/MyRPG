/*
** EPITECH PROJECT, 2022
** Map Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void map_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    move_rat(game);
    zoom_view(game);
}
