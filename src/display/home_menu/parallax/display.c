/*
** EPITECH PROJECT, 2022
** Display parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_parallax(game_t *game)
{
    parallax_t *parallax = game->assets->home_menu->parallax;

    sfRenderWindow_drawSprite(game->window, parallax->bg0, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg1, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg2, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg3, NULL);
}
