/*
** EPITECH PROJECT, 2022
** Language Game Menu English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_game_menu(game_t *game)
{
    game_menu_t *menu = game->assets->game_menu;

    sfText_setString(menu->save_1->title_time_played, ENGLISH_TIME_PLAYED);
    sfText_setString(menu->save_1->title_money, ENGLISH_MONEY);
    sfText_setString(menu->save_1->title_xp, ENGLISH_XP);
    sfText_setString(menu->save_1->empty, ENGLISH_EMPTY);
    sfText_setString(menu->save_2->title_time_played, ENGLISH_TIME_PLAYED);
    sfText_setString(menu->save_2->title_money, ENGLISH_MONEY);
    sfText_setString(menu->save_2->title_xp, ENGLISH_XP);
    sfText_setString(menu->save_2->empty, ENGLISH_EMPTY);
    sfText_setString(menu->save_3->title_time_played, ENGLISH_TIME_PLAYED);
    sfText_setString(menu->save_3->title_money, ENGLISH_MONEY);
    sfText_setString(menu->save_3->title_xp, ENGLISH_XP);
    sfText_setString(menu->save_3->empty, ENGLISH_EMPTY);
}
