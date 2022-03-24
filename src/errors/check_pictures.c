/*
** EPITECH PROJECT, 2022
** Check Pictures for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_pictures(void)
{
    int error = 0;

    error += is_file(BLUE_RAT);
    error += is_file(APPARTMENT);
    error += is_file(CITY);
    error += check_environment_assets();
    error += check_gui();
    error += check_icons();
    return error;
}

int check_environment_assets(void)
{
    int error = 0;

    return error;
}

int check_gui(void)
{
    int error = 0;

    return error;
}

int check_icons(void)
{
    int error = 0;

    error += is_file(CURSOR);
    error += is_file(WINDOW_ICON);
    return error;
}
