/*
** EPITECH PROJECT, 2022
** Check File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int is_file(const char *filepath)
{
    FILE *file;

    if (!filepath)
        return 1;
    if ((file = fopen(filepath, "r"))) {
        fclose(file);
        return SUCCESS;
    }
    my_printf("File not found: \"%s\"\n", filepath);
    return 1;
}
