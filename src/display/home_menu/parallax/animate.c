/*
** EPITECH PROJECT, 2022
** Display City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void animate_parallax(game_t *game)
{
    parallax_t *parallax = game->assets->home_menu->parallax;

    if (time_elapsed(parallax->clock) > 0.05) {
        animate_sprite(parallax->bg0, 0.5, 320, 0);
        animate_sprite(parallax->bg1, 1, 320, 0);
        animate_sprite(parallax->bg2, 2, 320, 0);
        animate_sprite(parallax->bg3, 3, 320, 0);
        sfClock_restart(parallax->clock);
    }
}
