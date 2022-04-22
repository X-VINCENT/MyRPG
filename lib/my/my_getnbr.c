/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** Function my_getnbr
*/

#include "my.h"

int return_number(char const *str, int minus, int i)
{
    int nb = 0;

    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') {
        if (nb > 214748364)
            return 0;
        if (nb == 0)
            nb = str[i] - 48;
        else {
            nb *= 10;
            nb += (str[i] - 48);
        }
        i += 1;
    }
    if (minus % 2 == 1)
        nb *= -1;
    return nb;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int minus = 0;

    if (!str)
        return -1;
    while (!(str[i] >= '0' && str[i] <= '9')) {
        if (str[i] == '-')
            minus += 1;
        i += 1;
    }
    return return_number(str, minus, i);
}
