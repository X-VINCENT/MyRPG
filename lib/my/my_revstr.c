/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** Function my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int a = 0;

    if (!str)
        return NULL;
    j = my_strlen(str) - 1;
    while (i < j) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
        i++;
        j--;
    }
    return str;
}
