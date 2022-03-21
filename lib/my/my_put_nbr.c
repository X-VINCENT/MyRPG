/*
** EPITECH PROJECT, 2021
** putnbr
** File description:
** display an int
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int i = 1;
    int a = nb;

    if (a < 0) {
        my_putchar('-');
        my_put_nbr(nb * -1);
        return 0;
    }
    while (a > 9) {
        a = a / 10;
        i = i * 10;
    }
    while (i >= 1) {
        my_putchar(((nb / i) % 10) + '0');
        i = i / 10;
    }
    return 0;
}
