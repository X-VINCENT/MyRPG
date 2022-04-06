/*
** EPITECH PROJECT, 2022
** Destroy Parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_parallax(parallax_t *parallax)
{
    destroy_sprite(parallax->bg0);
    destroy_sprite(parallax->bg1);
    destroy_sprite(parallax->bg2);
    destroy_sprite(parallax->bg3);
    free(parallax);
}
