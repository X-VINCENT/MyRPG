/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Function my_strlen
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return -1;
    while (str[i] != '\0')
        i += 1;
    return i;
}
