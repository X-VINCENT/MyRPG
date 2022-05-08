/*
** EPITECH PROJECT, 2022
** Xp Tool for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

bool is_it_in_game(int stage)
{
    if (stage != INTRO_STAGE &&
        stage != START_STAGE &&
        stage != END_STAGE &&
        stage != GAME_STAGE &&
        stage != ABILITIES_STAGE &&
        stage != STATS_STAGE &&
        stage != HOWTOPLAY_STAGE &&
        stage != SETTINGS_STAGE)
        return true;
    return false;
}

void update_xp(game_t *game)
{
    if (game->data->current->nb_xps >= XP_FOR_1_LEVEL) {
        game->data->current->nb_xps -= XP_FOR_1_LEVEL;
        game->data->current->nb_abilities += 1;
    }
    if (game->data->current->nb_golds >= 1000000)
        game->stage = END_STAGE;
    if (game->data->current->nb_golds <= 0)
        game->stage = END_STAGE;
    if (is_it_in_game(game->stage)) {
        if (time_elapsed(game->costs_clock) > 10) {
            game->data->current->nb_golds -= 15;
            sfClock_restart(game->costs_clock);
        }
    } else
        sfClock_restart(game->costs_clock);
}
