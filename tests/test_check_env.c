/*
** EPITECH PROJECT, 2022
** Test Check Env for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include "rpg.h"

Test(env, basic_env_ok)
{
    char *arge[] = {"DISPLAY", 0};
    int returned_value = env(arge);

    cr_assert_eq(returned_value, 1);
}

Test(env, basic_env_ko)
{
    char *arge[] = {"FAKE", 0};
    int returned_value = env(arge);

    cr_assert_eq(returned_value, ERROR);
}

Test(env, basic_env_null)
{
    int returned_value = env(NULL);

    cr_assert_eq(returned_value, ERROR);
}

Test(check_display, basic_check_display_ok)
{
    int returned_value = check_display("DISPLAY");

    cr_assert_eq(returned_value, 1);
}

Test(check_display, basic_check_display_ko)
{
    int returned_value = check_display("FAKE");

    cr_assert_eq(returned_value, 0);
}

Test(check_display, basic_check_display_null)
{
    int returned_value = check_display(NULL);

    cr_assert_eq(returned_value, ERROR);
}
