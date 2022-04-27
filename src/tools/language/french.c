/*
** EPITECH PROJECT, 2022
** Language French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2f p_game = init_pos(384, 64);
    sfVector2f p_abilities = init_pos(684, 64);
    sfVector2f p_stats = init_pos(1055, 67);
    sfVector2f p_howtoplay = init_pos(1454, 64);

    sfText_setString(bar->game, FRENCH_GAME);
    sfText_setString(bar->abilities, FRENCH_ABILITIES);
    sfText_setString(bar->stats, FRENCH_STATS);
    sfText_setString(bar->howtoplay, FRENCH_HOW_TO_GAME);
    sfText_setPosition(bar->game, p_game);
    sfText_setPosition(bar->abilities, p_abilities);
    sfText_setPosition(bar->stats, p_stats);
    sfText_setPosition(bar->howtoplay, p_howtoplay);
}

void set_texts_french(game_t *game)
{
    sfText_setString(game->assets->home_menu->press, FRENCH_PRESS_ENTER);
    sfText_setString(game->assets->appartment->press_interact,
        FRENCH_PRESS_TO_SAVE);
    set_texts_french_top_bar(game);
    set_texts_french_stats(game);
    set_texts_french_game_menu(game);
    set_texts_french_abilities(game);
    set_texts_french_settings(game);
}
