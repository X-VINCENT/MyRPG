/*
** EPITECH PROJECT, 2022
** Set Save Values Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void save_data(save_t *target, save_t *source)
{
    for (int idx = 0; source->abilities[idx] != -1; idx += 1)
        target->abilities[idx] = source->abilities[idx];
    target->nb_xps = source->nb_xps;
    target->nb_golds = source->nb_golds;
    target->nb_abilities = source->nb_abilities;
    target->time_played = source->time_played;
    target->stolen_items = source->stolen_items;
    target->fights_won = source->fights_won;
    target->fights_lost = source->fights_lost;
    target->money_saved = source->money_saved;
}

void set_abilities_status(game_t *game, save_t *save)
{
    ability_t **abilities = game->abilities->ability;

    for (int idx = 0; save->abilities[idx] != -1; idx += 1) {
        if (save->abilities[idx] > 1 || save->abilities[idx] < 0)
            save->abilities[idx] = 0;
        abilities[idx]->status = save->abilities[idx];
    }
}

void load_save_values(game_t *game, save_t *save)
{
    save_data(game->data->current, save);
    set_abilities_status(game, save);
    game->stage = APPARTMENT_STAGE;
    set_rats_position(game, RAT_DEFAULT_POS_APPARTMENT);
    sfView_setCenter(game->view, VIEW_APPARTMENT_POS);
    sfView_setSize(game->view, VIEW_APPARTMENT_SIZE);
}

void erase_save(save_t *save)
{
    for (int idx = 0; save->abilities[idx] != -1; idx += 1)
        save->abilities[idx] = 0;
    save->fights_lost = 0;
    save->fights_won = 0;
    save->money_saved = 0;
    save->nb_abilities = 0;
    save->nb_golds = 1000;
    save->nb_xps = 0;
    save->stolen_items = 0;
    save->time_played = 0;
}

void set_load_save_values(load_save_t *load_save, save_t *save)
{
    char *time_played = put_time_in_str(save->time_played);
    char *money = my_put_nbr_in_str(save->nb_golds);
    char *nb_xps = my_put_nbr_in_str(save->nb_xps);

    sfText_setString(load_save->time_played, time_played);
    sfText_setString(load_save->money, money);
    sfText_setString(load_save->xp, nb_xps);
    if (save->time_played == 0)
        load_save->status = 0;
    else
        load_save->status = 1;
    free(time_played);
    free(money);
    free(nb_xps);
}
