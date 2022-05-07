/*
** EPITECH PROJECT, 2022
** Display Introduction for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_introduction(game_t *game)
{
    introduction_t *introduction = game->assets->introduction;

    sfRenderWindow_drawSprite(game->window, introduction->bg, NULL);
}
