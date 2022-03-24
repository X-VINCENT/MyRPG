/*
** EPITECH PROJECT, 2022
** Test Check File2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include "rpg.h"

Test(is_file, basic_is_file_null)
{
    int returned_value = is_file(NULL);

    cr_assert_eq(returned_value, 1);
}
