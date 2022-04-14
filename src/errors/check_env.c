/*
** EPITECH PROJECT, 2022
** Check Env for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_display(char *environment)
{
    char *display = "DISPLAY";

    if (!environment)
        return ERROR;
    for (int i = 0; environment[i] == display[i]; i += 1)
        if (display[i] == 'Y')
            return 1;
    return 0;
}

int env(char **arge)
{
    if (!arge)
        return ERROR;
    for (int i = 0; arge[i] != NULL; i += 1)
        if (check_display(arge[i]))
            return 1;
    return my_puterror("Bad Environnement\n");
}
