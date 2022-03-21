/*
** EPITECH PROJECT, 2022
** Help File for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int print_help(void)
{
    char *help_msg = malloc(sizeof(char) * 1024);
    int fd = open("src/errors/.help", O_RDONLY);

    if (fd == -1) {
        my_printf("Invalid Help File\n");
        free(help_msg);
        close(fd);
        return ERROR;
    }
    read(fd, help_msg, 1024);
    my_printf(help_msg);
    free(help_msg);
    close(fd);
    return SUCCESS;
}
