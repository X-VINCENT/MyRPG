/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** Function my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = '\0';

    if (!a || !b)
        return;
    c = *a;
    *a = *b;
    *b = c;
}
