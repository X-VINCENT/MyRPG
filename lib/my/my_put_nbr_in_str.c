/*
** EPITECH PROJECT, 2021
** My Put Nulber in String File
** File description:
** Xavier VINCENT
*/

#include "my.h"

char *my_put_nbr_in_str(int nb)
{
    char *str = malloc(my_getnbsize(nb) + 1);
    int i = 1;
    int tmp = nb;
    int j = 0;

    if (nb < 0) {
        str[0] = '-';
        my_put_nbr_in_str(nb * -1);
    }
    while (tmp > 9) {
        tmp = tmp / 10;
        i = i * 10;
    }
    while (i >= 1) {
        str[j] = (((nb / i) % 10) + '0');
        i = i / 10;
        j += 1;
    }
    str[j] = '\0';
    return str;
}
