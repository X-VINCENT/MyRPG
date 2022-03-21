/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Function my_strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    if (!str || !to_find)
        return NULL;
    while (str[i] != '\0') {
        if (str[i] == to_find[j]) {
            i++;
            j++;
        } else if (to_find[j] == '\0') {
            return &(str[i - j]);
        } else {
            i++;
            j = 0;
        }
    }
    return NULL;
}
