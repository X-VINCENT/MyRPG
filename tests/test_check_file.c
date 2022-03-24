/*
** EPITECH PROJECT, 2022
** Test Check File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include "rpg.h"

Test(check_sounds, basic_check_sounds)
{
    int returned_value = check_audio();

    cr_assert_eq(returned_value, 0);
}

Test(is_file, basic_is_file_false)
{
    int returned_value = is_file("fake.png");

    cr_assert_eq(returned_value, 1);
}

Test(is_file, basic_is_file_null)
{
    int returned_value = is_file(NULL);

    cr_assert_eq(returned_value, 1);
}
