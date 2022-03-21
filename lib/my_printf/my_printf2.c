/*
** EPITECH PROJECT, 2021
** My_Printf 2 Project
** File description:
** Xavier VINCENT
*/

#include "my_printf.h"

char *arg_str_1(var_t var, va_list list, char *s, char *arg)
{
    char unrecognized_flags[3] = {'%', *s, '\0'};

    if (test_flags(*s) == 0)
        arg = unrecognized_flags;
    if (*s == 's')
        arg = va_arg(list, char *);
    if (*s == 'S')
        arg = mod_str(va_arg(list, char *));
    if (*s == 'c')
        arg[0] = va_arg(list, int);
    if (*s == 'd' || *s == 'i')
        arg = convert_base(va_arg(list, int), "0123456789");
    if (*s == 'u')
        arg = convert_base(va_arg(list, unsigned int), "0123456789");
    if (*s == 'n')
        *va_arg(list, int *) = var.nb_of_chars;
    return arg;
}

char *arg_str_2(var_t var, va_list list, char *s, char *arg)
{
    char *base_16 = "0123456789abcdef";
    char *ptr_init = malloc(sizeof(char) * 1024);
    char unrecognized_flags[3] = {'%', *s, '\0'};

    if (test_flags(*s) == 0)
        arg = unrecognized_flags;
    if (*s == 'b')
        arg = convert_base(va_arg(list, unsigned int), "01");
    if (*s == 'x')
        arg = convert_base(va_arg(list, unsigned int), base_16);
    if (*s == 'X')
        arg = convert_base(va_arg(list, unsigned int), "0123456789ABCDEF");
    if (*s == 'o')
        arg = convert_base(va_arg(list, unsigned int), "01234567");
    if (*s == 'p') {
        ptr_init[0] = '0';
        ptr_init[1] = 'x';
        arg = my_strcat_f(ptr_init, convert_base(va_arg(list, long), base_16));
    }
    return arg;
}

int print_arg(var_t var, va_list list, char *s)
{
    int ptr_forward = 0;
    char *arg = malloc(sizeof(char) * 1024);

    s++;
    if (*s == '-')
        ptr_forward = print_neg_arg(var, list, s, arg);
    else if (*s == '+') {
        my_putchar_f('+', var);
        ptr_forward = print_arg(var, list, s);
    } else
        ptr_forward = print_pos_arg(var, list, s, arg);
    return ptr_forward;
}
