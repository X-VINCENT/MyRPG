/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** Function my_is_prime
*/

#include "my.h"

int my_is_prime(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1)
        return 0;
    while (i <= (nb / 2)) {
        if (nb % i != 0 || nb % i != 1)
            i += 1;
        return 1;
    }
}
