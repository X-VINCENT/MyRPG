/*
** EPITECH PROJECT, 2022
** Test Check File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include "rpg.h"

Test(check_assets, basic_check_assets)
{
    int returned_value = check_assets();

    cr_assert_eq(returned_value, SUCCESS);
}

Test(check_pictures, basic_check_pictures)
{
    int returned_value = check_pictures();

    cr_assert_eq(returned_value, 0);
}

Test(check_sounds, basic_check_sounds)
{
    int returned_value = check_audio();

    cr_assert_eq(returned_value, 0);
}

Test(is_file, basic_is_file_true)
{
    int returned_value = is_file("assets/audio/musics/start_menu.ogg");

    cr_assert_eq(returned_value, SUCCESS);
}

Test(is_file, basic_is_file_false)
{
    int returned_value = is_file("fake.png");

    cr_assert_eq(returned_value, 1);
}
