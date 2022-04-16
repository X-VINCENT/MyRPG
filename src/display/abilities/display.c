/*
** EPITECH PROJECT, 2022
** Display Abilities for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfRenderWindow_drawSprite(game->window, menu->tree, NULL);
    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    sfRenderWindow_drawSprite(game->window, menu->scrolling_bar, NULL);
    sfRenderWindow_drawSprite(game->window, menu->scrolling_bar_inside, NULL);
    sfRenderWindow_drawText(game->window, menu->title, NULL);
    sfRenderWindow_drawText(game->window, menu->title_utility, NULL);
    sfRenderWindow_drawText(game->window, menu->title_stealth, NULL);
    sfRenderWindow_drawText(game->window, menu->title_fight, NULL);
}

void display_abilities(game_t *game)
{
    abilities_t *abilities = game->assets->abilities;
    sfColor color = sfColor_fromRGBA(244, 154, 78, 255);

    abilities_scrolling_bar_event(game);
    display_abilities_menu(game);
    display_top_bar(game);
}
