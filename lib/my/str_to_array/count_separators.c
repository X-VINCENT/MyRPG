/*
** EPITECH PROJECT, 2022
** count_sep
** File description:
** lib
*/

#include "../my.h"

int count_sep(char *string, char *separators)
{
    int space = 0;

    if (!string || !separators)
        return -1;
    while ((string[0] == separators[0]
        || string[0] == separators[1])
        && string[0] != '\0')
        string++;
    for (int i = 0; string[i] != '\0'; i++)
        if ((string[i] == separators[0] || string[i] == separators[1])
            && (string[i + 1] != separators[0]
            && string[i + 1] != separators[1])
            && string[i + 1] != '\0') {
            space++;
            i++;
        }
    return space;
}
