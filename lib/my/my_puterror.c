/*
** EPITECH PROJECT, 2021
** my_puterror
** File description:
** Function that prints a str on the error output
*/

#include "my.h"

int my_puterror(char const *str)
{
    if (!str)
        return 84;
    for (int i = 0; str[i] != '\0'; i += 1)
        write(2, &str[i], 1);
    return 84;
}
