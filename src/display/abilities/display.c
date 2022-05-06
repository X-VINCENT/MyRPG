/*
** EPITECH PROJECT, 2022
** Display Abilities for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_ability(game_t *game, ability_t *ability)
{
    sfRenderWindow_drawSprite(
        game->window, ability->rect[ability->status], NULL);
    sfRenderWindow_drawText(game->window, ability->text, NULL);
    sfRenderWindow_drawText(game->window, ability->text_price, NULL);
}

void display_all_abilities(game_t *game)
{
    abilities_t *abilities = game->abilities;

    for (int idx = 0; abilities->ability[idx] != NULL; idx += 1)
        display_ability(game, abilities->ability[idx]);
}

void display_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfRenderWindow_drawSprite(game->window, menu->tree, NULL);
    display_all_abilities(game);
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
    abilities_scrolling_bar_event(game);
    display_abilities_menu(game);
    display_top_bar(game);
}
