/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** Function my_str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    if (!str)
        return 84;
    if (my_strlen(str) <= 0)
        return 1;
    for (int i = 0; str[i] >= '0' && str[i] <= '9'; i += 1)
        if (str[i + 1] == '\0')
            return 1;
    return 0;
}
