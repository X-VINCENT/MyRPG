/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** Function my_str_isprintable
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    if (!str)
        return 84;
    if (my_strlen(str) <= 0)
        return 1;
    for (int i = 0; str[i] >= 32 && str[i] <= 126; i += 1)
        if (str[i + 1] == '\0')
            return 1;
    return 0;
}
