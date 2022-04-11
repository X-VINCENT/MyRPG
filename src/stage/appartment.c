/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void appartment_stage(game_t *game)
{
    display_appartment(game);
    display_rat(game);
    move_rat(game);
}
