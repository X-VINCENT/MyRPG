/*
** EPITECH PROJECT, 2022
** Destroy Save for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

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
    free(data);
}
