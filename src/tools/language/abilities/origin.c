/*
** EPITECH PROJECT, 2022
** Language Abilities Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    set_text_origin_middle_left(menu->title);
    set_text_origin(menu->title_utility);
    set_text_origin(menu->title_stealth);
    set_text_origin(menu->title_fight);
}

void set_texts_origin_abilities(game_t *game)
{
    set_texts_origin_abilities_menu(game);
    for (int idx = 0; game->abilities->ability[idx]; idx += 1)
        set_text_origin(game->abilities->ability[idx]->text);
}
