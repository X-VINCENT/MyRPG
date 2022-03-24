/*
** EPITECH PROJECT, 2022
** Test Check Env2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include "rpg.h"

Test(check_display, basic_check_display_null)
{
    int returned_value = check_display(NULL);

    cr_assert_eq(returned_value, ERROR);
}
