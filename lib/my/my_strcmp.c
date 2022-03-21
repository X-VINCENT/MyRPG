/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** Function my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int temp = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i += 1;
    temp = s1[i] - s2[i];
    if (temp > 0)
        return 1;
    else if (temp < 0)
        return -1;
    else
        return 0;
}
