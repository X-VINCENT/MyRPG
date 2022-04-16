/*
** EPITECH PROJECT, 2022
** Language Abilities Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, SPANISH_ABILITIES);
    sfText_setString(menu->title_utility, SPANISH_UTILITY);
    sfText_setString(menu->title_stealth, SPANISH_STEALTH);
    sfText_setString(menu->title_fight, SPANISH_FIGHT);
}

void set_texts_spanish_abilities(game_t *game)
{
    set_texts_spanish_abilities_menu(game);
}
