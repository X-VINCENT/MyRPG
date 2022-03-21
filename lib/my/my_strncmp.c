/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** Function my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int tmp = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i + 1) < n)
        i++;
    tmp = s1[i] - s2[i];
    if (tmp > 0)
        return 1;
    else if (tmp < 0)
        return -1;
    else
        return 0;
}
