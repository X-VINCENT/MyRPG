/*
** EPITECH PROJECT, 2022
** Check Pictures for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_menu_pictures(void)
{
    int error = 0;

    error += is_file(BG0);
    error += is_file(BG1);
    error += is_file(BG2);
    error += is_file(BG3);
    error += is_file(HOME_TITLE);
    error += is_file(HOME_PRESS);
    return error;
}

int check_pictures(void)
{
    int error = 0;

    error += is_file(BLUE_RAT);
    error += is_file(APPARTMENT);
    error += is_file(CITY);
    error += is_file(RAT_DOOR);
    error += is_file(ICE);
    error += is_file(CLOTHE);
    error += is_file(MARKET);
    error += is_file(MUSEUM1);
    error += is_file(MUSEUM2);
    error += is_file(RAT_ENTER);
    error += is_file(RAT_QUIT);
    error += check_menu_pictures();
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
