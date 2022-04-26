/*
** EPITECH PROJECT, 2022
** Display Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_fights(game_t *game)
{
    fights_t *fights = game->fights;

    sfRenderWindow_drawSprite(game->window, fights->bg, NULL);
    sfRenderWindow_drawSprite(game->window, fights->fight_button, NULL);
    sfRenderWindow_drawSprite(game->window, fights->run_button, NULL);
}
