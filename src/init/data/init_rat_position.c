/*
** EPITECH PROJECT, 2022
** init_rat_position
** File description:
** init_rat_position
*/

#include "rpg.h"

void init_file_rat_position(game_t *game)
{
    char *buff = my_load_file_in_mem("data/.rat_position");
    FILE *file_ptr;

    if (!buff)
        return;
    my_putstr(buff);
    free(buff);
    return;
}
