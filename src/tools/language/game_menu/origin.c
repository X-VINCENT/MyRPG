/*
** EPITECH PROJECT, 2022
** Language Game Menu Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_game_menu(game_t *game)
{
    game_menu_t *menu = game->assets->game_menu;

    set_text_origin_middle_left(menu->save_1->title_time_played);
    set_text_origin_middle_left(menu->save_1->title_money);
    set_text_origin_middle_left(menu->save_1->title_xp);
    set_text_origin(menu->save_1->empty);
    set_text_origin_middle_left(menu->save_2->title_time_played);
    set_text_origin_middle_left(menu->save_2->title_money);
    set_text_origin_middle_left(menu->save_2->title_xp);
    set_text_origin(menu->save_2->empty);
    set_text_origin_middle_left(menu->save_3->title_time_played);
    set_text_origin_middle_left(menu->save_3->title_money);
    set_text_origin_middle_left(menu->save_3->title_xp);
    set_text_origin(menu->save_3->empty);
}
