/*
** EPITECH PROJECT, 2022
** check_data_file
** File description:
** check_data
*/

#include "rpg.h"

int check_data(void)
{
    int error = 0;

    error += is_file("data/.rat_position");
    return error;
}
