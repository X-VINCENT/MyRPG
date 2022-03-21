/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Function my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0')
        i += 1;
    write(1, str, i);
    return 0;
}
