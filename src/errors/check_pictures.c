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
    return error;
}

int check_backgrounds(void)
{
    int error = 0;

    return error;
}

int check_buttons(void)
{
    int error = 0;

    return error;
}

int check_icons(void)
{
    int error = 0;

    error += is_file("assets/pictures/icons/cursor_icon.png");
    error += is_file("assets/pictures/icons/window_icon.png");
    return error;
}
