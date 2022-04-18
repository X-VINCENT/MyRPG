/*
** EPITECH PROJECT, 2022
** str_to_tab
** File description:
** maintab
*/

#include "../my.h"

char **malloc_str_tab(char **new_argv, char *string, int nbr_word,
                        char *separators)
{
    new_argv = malloc(sizeof(char *) * nbr_word + 1);
    if (!string || !new_argv || !separators)
        return NULL;
    for (int i = 0; i < nbr_word; i++) {
        if (!(new_argv[i] = malloc(lenght_word_in_string(string, separators)
            + 1)))
            return NULL;
        if ((string = next_word(string, separators)) == NULL)
            return NULL;
    }
    return new_argv;
}

int check_error(char **new_argv, int nbr_word)
{
    for (int i = 0; i < nbr_word; i++) {
        if (!new_argv)
            return 84;
        new_argv++;
    }
    return 0;
}

char **fill_newargv(char **new_argv, char *string, int nbr_word,
                        char *separators)
{
    int x = 0;

    if (!new_argv || !string || !separators)
        return NULL;
    for (int i = 0; i < nbr_word; i++) {
        x = 0;
        for (; string[0] == separators[0] || string[0] == separators[1]
            && string[0] != '\0'; string++);
        string = (string[0] == separators[0] ||
            string[0] == separators[1]) ? string++ : string;
        for (; (string[0] != separators[0] && string[0] != separators[1])
            && string [0] != '\0'; x++, string++)
            new_argv[i][x] = string[0];
    }
    new_argv[nbr_word] = NULL;
    return new_argv;
}

char **str_to_array(char *string, char *separators)
{
    int nbr_word = 0;
    char **new_argv = NULL;
    int to_malloc = 0;
    int x = 0;
    int w = 0;

    if (!string || (nbr_word = count_sep(string, separators) + 1) == -1
        || !separators)
        return NULL;
    if (!(new_argv = malloc_str_tab(new_argv, string, nbr_word, separators)))
        return NULL;
    if (!(new_argv = fill_newargv(new_argv, string, nbr_word, separators)))
        return NULL;
    if (check_error(new_argv, nbr_word) == 84)
        return NULL;
    return new_argv;
}
