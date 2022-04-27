/*
** EPITECH PROJECT, 2022
** Destroy Save for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_game_save(save_game_t *save)
{
    if (!save)
        return;
    if (save->keys)
        free(save->keys);
    free(save);
}

void destroy_save(save_t *save)
{
    if (!save)
        return;
    if (save->abilities)
        free(save->abilities);
    free(save);
}

void destroy_data(data_t *data)
{
    if (!data)
        return;
    destroy_game_save(data->game);
    destroy_save(data->current);
    destroy_save(data->save1);
    destroy_save(data->save2);
    destroy_save(data->save3);
    free(data);
}
