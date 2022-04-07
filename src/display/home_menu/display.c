/*
** EPITECH PROJECT, 2022
** Display home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_home_menu(game_t *game)
{
    home_menu_t *home = game->assets->home_menu;

    display_parallax(game);
    sfRenderWindow_drawSprite(game->window, home->title, NULL);
    sfRenderWindow_drawSprite(game->window,
        home->quit[home->quit_state], NULL);
    sfRenderWindow_drawSprite(game->window,
        home->options[home->options_state], NULL);
}
