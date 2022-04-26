/*
** EPITECH PROJECT, 2022
** Language Game Menu Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_game_menu(game_t *game)
{
    game_menu_t *menu = game->assets->game_menu;

    sfText_setString(menu->save_1->title_time_played, SPANISH_TIME_PLAYED);
    sfText_setString(menu->save_1->title_money, SPANISH_MONEY);
    sfText_setString(menu->save_1->title_xp, SPANISH_XP);
    sfText_setString(menu->save_1->empty, SPANISH_EMPTY);
    sfText_setString(menu->save_2->title_time_played, SPANISH_TIME_PLAYED);
    sfText_setString(menu->save_2->title_money, SPANISH_MONEY);
    sfText_setString(menu->save_2->title_xp, SPANISH_XP);
    sfText_setString(menu->save_2->empty, SPANISH_EMPTY);
    sfText_setString(menu->save_3->title_time_played, SPANISH_TIME_PLAYED);
    sfText_setString(menu->save_3->title_money, SPANISH_MONEY);
    sfText_setString(menu->save_3->title_xp, SPANISH_XP);
    sfText_setString(menu->save_3->empty, SPANISH_EMPTY);
}
