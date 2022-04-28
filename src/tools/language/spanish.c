/*
** EPITECH PROJECT, 2022
** Language Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2f p_game = init_pos(384, 64);
    sfVector2f p_abilities = init_pos(684, 64);
    sfVector2f p_stats = init_pos(1055, 64);
    sfVector2f p_howtoplay = init_pos(1454, 64);

    sfText_setString(bar->game, SPANISH_GAME);
    sfText_setString(bar->abilities, SPANISH_ABILITIES);
    sfText_setString(bar->stats, SPANISH_STATS);
    sfText_setString(bar->howtoplay, SPANISH_HOW_TO_GAME);
    sfText_setPosition(bar->game, p_game);
    sfText_setPosition(bar->abilities, p_abilities);
    sfText_setPosition(bar->stats, p_stats);
    sfText_setPosition(bar->howtoplay, p_howtoplay);
}

void set_texts_spanish(game_t *game)
{
    sfText_setString(game->assets->home_menu->press, SPANISH_PRESS_ENTER);
    sfText_setString(game->assets->appartment->press_interact,
        SPANISH_PRESS_TO_SAVE);
    set_texts_spanish_top_bar(game);
    set_texts_spanish_stats(game);
    set_texts_spanish_game_menu(game);
    set_texts_spanish_abilities(game);
    set_texts_spanish_settings(game);
}
