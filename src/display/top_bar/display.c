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

    sfText_setColor(bar->game, sfWhite);
    sfText_setColor(bar->abilities, sfWhite);
    sfText_setColor(bar->stats, sfWhite);
    sfText_setColor(bar->howtoplay, sfWhite);
    if (game->stage == GAME_STAGE)
        sfText_setColor(bar->game, color);
    if (game->stage == ABILITIES_STAGE)
        sfText_setColor(bar->abilities, color);
    if (game->stage == STATS_STAGE)
        sfText_setColor(bar->stats, color);
    if (game->stage == HOWTOPLAY_STAGE)
        sfText_setColor(bar->howtoplay, color);
}

void display_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;

    set_top_bar_title_color(game);
    sfRenderWindow_drawText(game->window, bar->game, NULL);
    sfRenderWindow_drawText(game->window, bar->abilities, NULL);
    sfRenderWindow_drawText(game->window, bar->stats, NULL);
    sfRenderWindow_drawText(game->window, bar->howtoplay, NULL);
    if (game->stage == SETTINGS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->settings_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->settings_off, NULL);
    sfRenderWindow_drawSprite(game->window, bar->quit_off, NULL);
}
