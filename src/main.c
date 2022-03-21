/*
** EPITECH PROJECT, 2022
** Main File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int main(int argc, char **argv, char **arge)
{
    if (env(arge) == ERROR)
        return ERROR;
    if (argc == 2 && !(my_strcmp(argv[1], "-h")))
        return print_help();
    if (argc != 1)
        return my_puterror("Invalid Args\n\nCheck: ./my_defender -h");
    if (check_assets() == ERROR)
        return ERROR;
    return my_rpg();
}
