/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** FUnction my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *new_str = NULL;

    if (!dest || !src)
        return NULL;
    if (!(new_str = my_strcpy(dest)))
        return NULL;
    for (int i = 0; src[i] != '\0'; i += 1)
        new_str[my_strlen(dest) + i] = src[i];
    new_str[my_strlen(new_str)] = '\0';
    return new_str;
}
