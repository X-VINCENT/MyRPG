/*
** EPITECH PROJECT, 2021
** Header File for my_printf
** File description:
** Xavier VINCENT
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

// Libs
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

// Data
    typedef struct var {
        int nb_of_chars;
    } var_t;

// Modstr
    char *mod_str(char const *str);
    char *mod_str_bis(char *modified_str, int nb_size);

// My_edit_str
    int my_strlen_f(char *str);
    char *my_revstr_f(char *str);
    char *my_strcat_f(char *dest, char const *src);
    char *convert_base_bis(
        long long number, int minus, char *cvt_nb, char *base);
    char *convert_base(long long number, char *base);

// My_printf
    int my_printf(char *s, ...);
    int check_spaces(var_t var, va_list list, char *s);

// My_printf2
    char *arg_str_1(var_t var, va_list list, char *s, char *arg);
    char *arg_str_2(var_t var, va_list list, char *s, char *arg);
    int print_arg(var_t var, va_list list, char *s);

// My_printf3
    void display_spaces(int spaces, var_t var);
    int get_size_of_nb(int nb);
    int test_flags(char flag);
    int print_neg_arg(var_t var, va_list list, char *s, char *arg);
    int print_pos_arg(var_t var, va_list list, char *s, char *arg);

// My_put_get
    void my_putchar_f(char c, var_t var);
    void my_putstr_f(char const *str, var_t var);
    int return_number_f(char const *str, int minus, int i);
    int my_getnbr_f(char const *str);

#endif /* !MY_PRINTF_H_ */
