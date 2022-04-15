/*
** EPITECH PROJECT, 2022
** Language Abilities German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, GERMAN_ABILITIES);
    sfText_setString(menu->title_utility, GERMAN_UTILITY);
    sfText_setString(menu->title_stealth, GERMAN_STEALTH);
    sfText_setString(menu->title_fight, GERMAN_FIGHT);
}

void set_texts_german_abilities(game_t *game)
{
    set_texts_german_abilities_menu(game);
}
