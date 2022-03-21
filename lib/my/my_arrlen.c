/*
** EPITECH PROJECT, 2022
** my_arrlen
** File description:
** Function my_arrlen
*/

#include "my.h"

int my_arrlen(char **arr)
{
    int i = 0;

    if (!arr)
        return -1;
    while (arr[i] != NULL)
        i += 1;
    return i;
}
