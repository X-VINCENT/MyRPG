/*
** EPITECH PROJECT, 2022
** Language Abilities French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, FRENCH_ABILITIES);
    sfText_setString(menu->title_utility, FRENCH_UTILITY);
    sfText_setString(menu->title_stealth, FRENCH_STEALTH);
    sfText_setString(menu->title_fight, FRENCH_FIGHT);
}

void set_texts_french_abilities(game_t *game)
{
    set_texts_french_abilities_menu(game);
}
