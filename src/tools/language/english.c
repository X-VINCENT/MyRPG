/*
** EPITECH PROJECT, 2022
** Language English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2f p_game = init_pos(384, 64);
    sfVector2f p_abilities = init_pos(654, 64);
    sfVector2f p_stats = init_pos(940, 64);
    sfVector2f p_howtoplay = init_pos(1255, 64);

    sfText_setString(bar->game, ENGLISH_GAME);
    sfText_setString(bar->abilities, ENGLISH_ABILITIES);
    sfText_setString(bar->stats, ENGLISH_STATS);
    sfText_setString(bar->howtoplay, ENGLISH_HOW_TO_GAME);
    sfText_setPosition(bar->game, p_game);
    sfText_setPosition(bar->abilities, p_abilities);
    sfText_setPosition(bar->stats, p_stats);
    sfText_setPosition(bar->howtoplay, p_howtoplay);
}

void set_texts_english(game_t *game)
{
    sfText_setString(game->assets->home_menu->press, ENGLISH_PRESS_ENTER);
    sfText_setString(game->assets->appartment->press_interact,
        ENGLISH_PRESS_TO_SAVE);
    set_texts_english_top_bar(game);
    set_texts_english_stats(game);
    set_texts_english_game_menu(game);
    set_texts_english_abilities(game);
    set_texts_english_settings(game);
}
