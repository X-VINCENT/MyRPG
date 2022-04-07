/*
** EPITECH PROJECT, 2022
** Display Top Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;

    sfRenderWindow_drawSprite(game->window, bar->menu1, NULL);
    sfRenderWindow_drawSprite(game->window, bar->menu2, NULL);
    sfRenderWindow_drawSprite(game->window, bar->menu3, NULL);
    sfRenderWindow_drawSprite(game->window, bar->menu4, NULL);
    if (game->stage == SETTINGS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->settings_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->settings_off, NULL);
    sfRenderWindow_drawSprite(game->window, bar->quit_off, NULL);
}
