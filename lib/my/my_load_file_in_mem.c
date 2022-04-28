/*
** EPITECH PROJECT, 2022
** My Load File in Mem
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **end_arr_and_free_line(FILE *fp, char **arr, char *line, int idx)
{
    if (!arr || !line)
        return NULL;
    arr[idx] = NULL;
    if (line)
        free(line);
    fclose(fp);
    return arr;
}

char **my_load_file_in_arr(const char *file)
{
    FILE *fp = NULL;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char **arr = NULL;
    int idx = 0;

    fp = fopen(file, "r");
    if (!fp)
        return NULL;
    if (!(arr = malloc(sizeof(char *) * 10000)))
        return NULL;
    while ((read = getline(&line, &len, fp)) != -1) {
        if (!(arr[idx] = my_strcpy(line)))
            return NULL;
        idx += 1;
    }
    return end_arr_and_free_line(fp, arr, line, idx);
}

char *my_load_file_in_mem(const char *file)
{
    FILE *fp = NULL;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char *buff = NULL;

    fp = fopen(file, "r");
    if (!fp)
        return NULL;
    while ((read = getline(&line, &len, fp)) != -1)
        if (!(buff = my_strcat(buff, line)))
            return NULL;
    if (line)
        free(line);
    fclose(fp);
    return buff;
}
