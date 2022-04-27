/*
** EPITECH PROJECT, 2022
** My Str to Word Array
** File description:
** Xavier VINCENT
*/

#include "my.h"

int count_words(const char *str, char separator)
{
    int nb_words = 0;

    if (!str)
        return -1;
    for (int idx = 0; str[idx] != '\0'; idx += 1)
        if (str[idx] == separator)
            nb_words += 1;
    return nb_words;
}

int *get_words_sizes(const char *str, char separator)
{
    int *col_sizes = 0;
    int line = 0;
    int nb_lines = 0;

    if (!str)
        return NULL;
    for (int idx = 0; str[idx] != '\0'; idx += 1)
        if (str[idx] == separator)
            nb_lines += 1;
    if (!(col_sizes = malloc(sizeof(int) * nb_lines + 1)))
        return NULL;
    for (int idx = 0; str[idx] != '\0'; idx += 1) {
        if (str[idx] != separator)
            col_sizes[line] += 1;
        else
            line += 1;
    }
    return col_sizes;
}

char **my_str_to_word_array(const char *str, char separator)
{
    int word_count = count_words(str, separator);
    int *words_len = get_words_sizes(str, separator);
    char **words = NULL;

    if (!str)
        return NULL;
    if (!(words = malloc(sizeof(char *) * (word_count + 1))))
        return NULL;
    for (int idx = 0; idx != word_count; idx += 1) {
        if (!(words[idx] = my_strncpy(str, words_len[idx])))
            return NULL;
        str += words_len[idx] + 1;
    }
    words[word_count] = NULL;
    return words;
}
