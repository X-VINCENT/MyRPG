/*
** EPITECH PROJECT, 2021
** My_Printf Project
** File description:
** Xavier VINCENT
*/

#include "my_printf.h"

int my_printf(char *s, ...)
{
    var_t var;
    va_list list;

    va_start(list, s);
    while (*s != '\0') {
        if (*s == '%') {
            s += check_spaces(var, list, s);
            s += print_arg(var, list, s);
        } else
            my_putchar_f(*s, var);
        s++;
    }
    va_end(list);
    return 0;
}

int check_spaces(var_t var, va_list list, char *s)
{
    int nb_of_spaces = 0;

    s++;
    if (*s == ' ') {
        while (*s == ' ') {
            s++;
            nb_of_spaces += 1;
        }
        if (*s != 's' && *s != 'c')
            my_putchar_f(' ', var);
    }
    return nb_of_spaces;
}
