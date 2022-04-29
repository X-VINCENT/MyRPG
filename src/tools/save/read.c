/*
** EPITECH PROJECT, 2022
** Load Save Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int get_value_from_file(const char path[])
{
    FILE *fp = fopen(path, "rb");
    int value = 0;
    char *value_str = malloc(sizeof(char) * 100);

    if (!fp)
        return 0;
    if (fread(value_str, 1, 100, fp) == -1)
        return 0;
    if ((value = my_getnbr(value_str)) == -1)
        return 0;
    free(value_str);
    fclose(fp);
    return value;
}

int *init_int_array(int size)
{
    int *arr = malloc(sizeof(int) * size + 1);

    for (int idx = 0; idx != size; idx += 1)
        arr[idx] = 0;
    arr[size] = -1;
    return arr;
}

float *init_float_array(int size)
{
    float *arr = malloc(sizeof(float) * size + 1);

    for (int idx = 0; idx != size; idx += 1)
        arr[idx] = 0.0;
    arr[size] = -1.0;
    return arr;
}

void free_and_close(char *str, char **arr, FILE *fp)
{
    for (int idx = 0; arr[idx] != NULL; idx += 1) {
        if (arr[idx])
            free(arr[idx]);
    }
    if (arr)
        free(arr);
    if (str)
        free(str);
    if (fp)
        fclose(fp);
}

int *load_int_arr_from_file(const char path[])
{
    FILE *fp = fopen(path, "rb");
    int *values = init_int_array(100);
    char *str = malloc(sizeof(char) * 10000);
    char **arr = NULL;

    if (!fp)
        return values;
    if (fread(str, 1, 10000, fp) == -1)
        return NULL;
    if (!(arr = my_str_to_word_array(str, '\n')))
        return NULL;
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        if ((values[idx] = my_getnbr(arr[idx])) == -1)
            return NULL;
    values[my_arrlen(arr)] = -1;
    free_and_close(str, arr, fp);
    return values;
}
