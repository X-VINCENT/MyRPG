/*
** EPITECH PROJECT, 2022
** Display Top Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_top_bar_title_color(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfColor color = sfColor_fromRGBA(244, 154, 78, 255);

    sfText_setColor(bar->menu1, sfWhite);
    sfText_setColor(bar->abilities, sfWhite);
    sfText_setColor(bar->menu3, sfWhite);
    sfText_setColor(bar->menu4, sfWhite);
    if (game->stage == ABILITIES_STAGE)
        sfText_setColor(bar->abilities, color);
}

void display_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;

    set_top_bar_title_color(game);
    sfRenderWindow_drawText(game->window, bar->menu1, NULL);
    sfRenderWindow_drawText(game->window, bar->abilities, NULL);
    sfRenderWindow_drawText(game->window, bar->menu3, NULL);
    sfRenderWindow_drawText(game->window, bar->menu4, NULL);
    if (game->stage == SETTINGS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->settings_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->settings_off, NULL);
    sfRenderWindow_drawSprite(game->window, bar->quit_off, NULL);
}
