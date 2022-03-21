/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Function my_strcapitalize
*/

#include "my.h"

int previous_char_test(char c)
{
    if ((c < 48 && c > 31) || (c < 97 && c > 90) || (c < 48 && c > 31))
        return 1;
}

char *my_strcapitalize(char *str)
{
    if (!str)
        return NULL;
    str = my_strlowcase(str);
    if (str[0] >= 'A' && str[0] <= 'Z')
        str[0] -= 32;
    for (int i = 0; str[i] != '\0'; i += 1)
        if ((str[i] >= 'a' && str[i] <= 'z') &&
            previous_char_test(str[i - 1]) == 1)
            str[i] -= 32;
    return str;
}
