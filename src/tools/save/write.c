/*
** EPITECH PROJECT, 2022
** Save Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void append_data_in_file(
    char *data, const char *filename, int should_free_data)
{
    FILE *fp = NULL;

    if (!data || !filename)
        return;
    fp = fopen(filename, "a");
    if (!fp)
        return;
    if (fwrite(data, 1, my_strlen(data), fp) == -1)
        return;
    fclose(fp);
    if (should_free_data == 1)
        free(data);
}

void write_data_in_file(char *data, const char *filename)
{
    FILE *fp = NULL;

    if (!data || !filename)
        return;
    fp = fopen(filename, "w");
    if (!fp)
        return;
    if (fwrite(data, 1, my_strlen(data), fp) == -1)
        return;
    fclose(fp);
}

char *str_to_save(char *title, int value)
{
    char *str = NULL;
    char *new_title = NULL;

    if (!title)
        return NULL;
    if (!(new_title = my_strcat(title, " = ")))
        return NULL;
    if (!(str = my_strcat(my_strcat(
        new_title, my_put_nbr_in_str(value)), "\n")))
        return NULL;
    free(new_title);
    return str;
}
