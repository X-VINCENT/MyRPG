/*
** EPITECH PROJECT, 2021
** My_Printf 3 Project
** File description:
** Xavier VINCENT
*/

#include "my_printf.h"

void display_spaces(int spaces, var_t var)
{
    int i = 0;

    while (i < spaces) {
        my_putchar_f(' ', var);
        i += 1;
    }
}

int get_size_of_nb(int nb)
{
    int size = 0;

    while (nb > 0) {
        nb /= 10;
        size += 1;
    }
    return size;
}

int test_flags(char flag)
{
    int i = 0;
    char *flags = "sSdiucp%bxXon";

    while (flags[i] != '\0') {
        if (flag == flags[i])
            return 1;
        i += 1;
    }
    return 0;
}

int print_neg_arg(var_t var, va_list list, char *s, char *arg)
{
    int flag_size = 0;
    int nb_spaces = 0;
    int flag_nb_size = 0;

    s++;
    if (*s >= '0' && *s <= '9') {
        nb_spaces = my_getnbr_f(s);
        flag_nb_size = get_size_of_nb(nb_spaces);
        s += flag_nb_size;
    }
    if (*s == '%')
        my_putchar_f('%', var);
    else {
        arg = arg_str_1(var, list, s, arg);
        arg = arg_str_2(var, list, s, arg);
        flag_size = my_strlen_f(arg);
        my_putstr_f(arg, var);
        display_spaces(nb_spaces - flag_size, var);
    }
    return (flag_nb_size + 2);
}

int print_pos_arg(var_t var, va_list list, char *s, char *arg)
{
    int flag_size = 0;
    int nb_spaces = 0;
    int flag_nb_size = 0;

    if (*s >= '0' && *s <= '9') {
        nb_spaces = my_getnbr_f(s);
        flag_nb_size = get_size_of_nb(nb_spaces);
        s += flag_nb_size;
    }
    if (*s == '%')
        my_putchar_f('%', var);
    else {
        arg = arg_str_1(var, list, s, arg);
        arg = arg_str_2(var, list, s, arg);
        flag_size = my_strlen_f(arg);
        display_spaces(nb_spaces - flag_size, var);
        my_putstr_f(arg, var);
    }
    return (flag_nb_size + 1);
}
