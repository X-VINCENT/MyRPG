/*
** EPITECH PROJECT, 2022
** lib
** File description:
** lenghtword
*/

#include "../my.h"

int lenght_word_in_string(char *string, char *separators)
{
    int count = 0;

    if (!string || !separators)
        return -1;
    for (int i = 0; (string[i] != separators[0] && string[i] != separators[1])
        && string[i] != '\0'; i++, count++);
    return count + 1;
}

char *next_word(char *string, char *separators)
{
    if (!string || !separators)
        return NULL;
    for (int i = 0; (string[i] == separators[0]
        || string[i] == separators[1])
        && string[i] != '\0'; string++);
    for (int i = 0; (string[i] == separators[0] || string[i] == separators[1])
        && string[i] != '\0'; string++);
    while (string[0] == separators[0] || string[0] == separators[1])
        string++;
    return string;
}
