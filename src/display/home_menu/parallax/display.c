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
    home_menu_t *home = game->assets->home_menu;

    sfRenderWindow_drawSprite(game->window, parallax->bg0, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg1, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg2, NULL);
    sfRenderWindow_drawText(game->window, home->press, NULL);
    sfRenderWindow_drawSprite(game->window, parallax->bg3, NULL);
}
