/*
** EPITECH PROJECT, 2022
** Main File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int main(const int argc, const char **argv, char **arge)
{
    if (env(arge) == ERROR)
        return ERROR;
    if (argc == 2 && !(my_strcmp(argv[1], "-h")))
        return print_help();
    if (argc != 1)
        return my_puterror("Invalid Args\n\nCheck: ./my_rpg -h");
    if (check_assets() == ERROR)
        return ERROR;
    return my_rpg();
}
