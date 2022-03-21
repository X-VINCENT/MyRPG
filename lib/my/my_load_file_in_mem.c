/*
** EPITECH PROJECT, 2022
** My Load File in Mem
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "my.h"

char *my_load_file_in_mem(const char *file)
{
    int fd = 0;
    char *buff = NULL;

    if (!file)
        return NULL;
    if ((fd = open(file, O_RDONLY)) == -1) {
        my_puterror("File not found.\n");
        return NULL;
    }
    if ((buff = malloc(sizeof(char) * 201 + 1)) == NULL)
        return NULL;
    read(fd, buff, 202);
    buff[my_strlen(buff) + 1] = '\0';
    close(fd);
    return buff;
}
