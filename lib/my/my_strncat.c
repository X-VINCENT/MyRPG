/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** Function my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    char *new_str = NULL;

    if (!src)
        return NULL;
    if (!(new_str = my_strcpy(dest)))
        return NULL;
    for (int i = 0; src[i] != '\0' && i < nb; i += 1)
        new_str[my_strlen(dest) + i] = src[i];
    new_str[my_strlen(new_str)] = '\0';
    return new_str;
}
