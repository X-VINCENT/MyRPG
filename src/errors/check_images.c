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

    error += is_file(BLUE_RAT);
    error += is_file(RED_RAT);
    error += is_file(GREEN_RAT);
    error += is_file(PURPLE_RAT);
    return error;
}

int check_environnments(void)
{
    int error = 0;

    error += is_file(APART);
    error += is_file(APART_TOP);
    error += is_file(APART_HITBOX);
    error += is_file(CITY);
    error += is_file(CITY_TOP);
    error += is_file(CITY_HITBOX);
    error += is_file(RAT_DOOR);
    error += is_file(CLOTHE);
    error += is_file(ICE);
    error += is_file(MARKET);
    error += is_file(MUSEUM1);
    error += is_file(MUSEUM2);
    return error;
}

int check_message_box(void)
{
    int error = 0;

    error += is_file(MESSAGE_BOX);
    return error;
}

int check_images(void)
{
    int error = 0;

    error += check_characters();
    error += check_environnments();
    error += check_message_box();
    return error;
}
