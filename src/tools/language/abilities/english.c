/*
** EPITECH PROJECT, 2022
** Language Abilities English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, ENGLISH_ABILITIES);
    sfText_setString(menu->title_utility, ENGLISH_UTILITY);
    sfText_setString(menu->title_stealth, ENGLISH_STEALTH);
    sfText_setString(menu->title_fight, ENGLISH_FIGHT);
}

void set_texts_english_abilities(game_t *game)
{
    set_texts_english_abilities_menu(game);
}
