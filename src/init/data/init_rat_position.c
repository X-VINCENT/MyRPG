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
    //à faire
    /*if (my_strlen(buff) == 0) {
        file_ptr = fopen("data/.rat_position", "w");
        fput
    }*/
    my_putstr(buff);
    free(buff);
    return;
}
