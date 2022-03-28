/*
** EPITECH PROJECT, 2022
** Destroy Parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_parallax(parallax_t *parallax)
{
    sfSprite_destroy(parallax->bg0);
    sfSprite_destroy(parallax->bg1);
    sfSprite_destroy(parallax->bg2);
    sfSprite_destroy(parallax->bg3);
    free(parallax);
}
