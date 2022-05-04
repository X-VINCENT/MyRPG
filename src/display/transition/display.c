/*
** EPITECH PROJECT, 2022
** Display Transition for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_transition(game_t *game)
{
    sfRenderWindow_drawRectangleShape(
        game->window, game->assets->transition->rectangle, NULL);
}
