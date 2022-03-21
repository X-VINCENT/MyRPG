/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Function my_strcpy
*/

#include "my.h"

char *my_strcpy(const char *src)
{
    char *new_str = NULL;

    if (!src)
        return NULL;
    if (!(new_str = malloc(sizeof(char) * my_strlen(src) + 1)))
        return NULL;
    for (int i = 0; src[i] != '\0'; i += 1)
        new_str[i] = src[i];
    new_str[my_strlen(new_str)] = '\0';
    return new_str;
}
