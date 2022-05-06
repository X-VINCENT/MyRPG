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
    rat_jump_in_fights(game);
    display_fights_gui(game);
    display_fights_rat(game);
    display_fights_enemy(game);
}
