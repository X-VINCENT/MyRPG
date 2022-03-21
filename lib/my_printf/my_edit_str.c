/*
** EPITECH PROJECT, 2021
** My_Edit_Str File
** File description:
** Xavier VINCENT
*/

#include "my_printf.h"

int my_strlen_f(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i += 1;
    return i;
}

char *my_revstr_f(char *str)
{
    int i = 0;
    int j = my_strlen_f(str) - 1;
    int a;

    while (i < j) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
        i += 1;
        j -= 1;
    }
    return str;
}

char *my_strcat_f(char *dest, char const *src)
{
    int i = 0;
    int dest_string_size = my_strlen_f(dest);

    while (src[i] != '\0') {
        dest[dest_string_size + i] = src[i];
        i += 1;
    }
    return dest;
}

char *convert_base_bis(long long number, int minus, char *cvt_nb, char *base)
{
    int i = 0;
    int tmp_num = 0;
    int src_base_size = my_strlen_f(base);

    while (number != 0) {
        tmp_num = number % src_base_size;
        cvt_nb[i] = base[tmp_num];
        number /= src_base_size;
        i += 1;
    }
    if (minus == 1)
        cvt_nb[i] = '-';
    return cvt_nb;
}

char *convert_base(long long number, char *base)
{
    int minus = 0;
    char *converted_nb = malloc(sizeof(int) * 32);

    if (number == 0)
        return "0";
    if (number < 0) {
        number *= -1;
        minus = 1;
    }
    converted_nb = convert_base_bis(number, minus, converted_nb, base);
    my_revstr_f(converted_nb);
    return converted_nb;
}
