/*
** EPITECH PROJECT, 2022
** Check File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_assets(void)
{
    int error = 0;

    error += check_audio();
    error += check_fonts();
    error += check_pictures();
    if (error > 0)
        return ERROR;
    return SUCCESS;
}

int check_audio(void)
{
    int error = 0;

    return error;
}

int check_fonts(void)
{
    int error = 0;

    error += is_file(FONT_RPG);
    return error;
}

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
