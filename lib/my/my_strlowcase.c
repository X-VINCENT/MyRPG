/*
** EPITECH PROJECT, 2021
** my_lowcase
** File description:
** Function my_lowcase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    if (!str)
        return NULL;
    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    return str;
}
