/*
** EPITECH PROJECT, 2022
** Check Pictures for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_characters(void)
{
    int error = 0;

    error += is_file(CAR_GREY);
    error += is_file(CAR);
    error += is_file(WIN);
    error += is_file(LOOSE);
    error += is_file(PNJ_BLACK_PATH);
    error += is_file(PNJ_BLUE_GIRL_PATH);
    error += is_file(PNJ_GUARD_PATH);
    error += is_file(PNJ_HOTESS_PATH);
    error += is_file(BLUE_RAT);
    error += is_file(GREEN_RAT);
    error += is_file(PURPLE_RAT);
    error += is_file(RED_RAT);
    return error;
}

int check_environnments(void)
{
    int error = 0;

    error += is_file(APART_TOP);
    error += is_file(APART);
    error += is_file(APART_HITBOX);
    error += is_file(BAR_HITBOX);
    error += is_file(BAR_TOP);
    error += is_file(BAR);
    error += is_file(CITY_HITBOX);
    error += is_file(CITY_TOP);
    error += is_file(RAT_DOOR);
    error += is_file(CITY);
    return error;
}

int check_environnments_2(void)
{
    int error = 0;

    error += is_file(CLOTHE_HITBOX);
    error += is_file(CLOTHE_TOP);
    error += is_file(CLOTHE);
    error += is_file(ICE_HITBOX);
    error += is_file(ICE_TOP);
    error += is_file(ICE);
    error += is_file(MARKET);
    error += is_file(MUSEUM_HITBOX);
    error += is_file(MUSEUM_TOP);
    error += is_file(MUSEUM);
    return error;
}

int check_menus_objects(void)
{
    int error = 0;

    error += is_file(ABILITIES_BG);
    error += is_file(HOME_BG0);
    error += is_file(HOME_BG1);
    error += is_file(HOME_BG2);
    error += is_file(HOME_BG3);
    error += is_file(HOME_TITLE);
    error += is_file(SETTINGS_BG);
    error += is_file(INTRODUCTION);
    error += is_file(MENU_BG);
    error += is_file(BUTTONS_1);
    error += is_file(SLOT_PATH_OFF);
    error += is_file(SLOT_PATH_ON);
    error += is_file(MESSAGE_BOX);
    error += is_file(GUI);
    error += is_file(RAIN);
    error += is_file(WIND);
    return error;
}

int check_images(void)
{
    int error = 0;

    error += check_characters();
    error += check_environnments();
    error += check_environnments_2();
    error += is_file(CURSOR);
    error += is_file(WINDOW_ICON);
    error += check_menus_objects();
    return error;
}
