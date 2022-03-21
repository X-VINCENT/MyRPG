/*
** EPITECH PROJECT, 2021
** Modifying Str File
** File description:
** Xavier VINCENT
*/

#include "my_printf.h"

char *mod_str(char const *str)
{
    var_t var;
    int i = 0;
    int j = 0;
    char *modified_str = malloc(sizeof(char) * 1024);
    char *tmp_str = malloc(sizeof(char) * 4);

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 128)
            modified_str[j] = str[i];
        else {
            modified_str[j] = '\\';
            tmp_str = convert_base(str[i], "01234567");
            modified_str = mod_str_bis(modified_str, my_strlen_f(tmp_str));
            modified_str = my_strcat_f(modified_str, tmp_str);
            j += 3;
        }
        i += 1;
        j += 1;
    }
    return modified_str;
}

char *mod_str_bis(char *modified_str, int nb_size)
{
    if (nb_size == 1)
        modified_str = my_strcat_f(modified_str, "00");
    if (nb_size == 2)
        modified_str = my_strcat_f(modified_str, "0");
    return modified_str;
}
