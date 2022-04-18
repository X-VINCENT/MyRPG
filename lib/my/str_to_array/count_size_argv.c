/*
** EPITECH PROJECT, 2022
** count_size_argv
** File description:
** lib
*/

#include "../my.h"

int count_size_argv(char **argv)
{
    int i = 0;

    if (!argv)
        return -1;
    for (; argv[i] != NULL; i++);
    return i;
}
