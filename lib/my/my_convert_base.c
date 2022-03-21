/*
** EPITECH PROJECT, 2022
** My Convert Base
** File description:
** Xavier VINCENT
*/

#include "my.h"

char *my_convert_base_bis(
    long long number, int minus, char *cvt_nb, char *base)
{
    int i = 0;
    int tmp_num = 0;
    int src_base_size = 0;

    if (!cvt_nb || !base)
        return NULL;
    src_base_size = my_strlen(base);
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

char *my_convert_base(long long number, char *base)
{
    int minus = 0;
    char *converted_nb = malloc(sizeof(int) * 32);

    if (!base || !converted_nb)
        return NULL;
    if (number == 0)
        return "0";
    if (number < 0) {
        number *= -1;
        minus = 1;
    }
    converted_nb = my_convert_base_bis(number, minus, converted_nb, base);
    my_revstr(converted_nb);
    return converted_nb;
}
