/*
** EPITECH PROJECT, 2022
** Display clothe store for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_clothe(game_t *game)
{
    clothe_t *clothe = game->assets->clothe;

    sfRenderWindow_drawSprite(game->window, clothe->bg, NULL);
}
