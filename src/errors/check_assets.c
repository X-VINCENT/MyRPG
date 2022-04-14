/*
** EPITECH PROJECT, 2022
** Check Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_assets(void)
{
    int error = 0;

    error += check_audio();
    error += check_fonts();
    error += check_images();
    error += check_data();
    if (error > 0)
        return ERROR;
    return SUCCESS;
}
