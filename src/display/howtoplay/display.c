/*
** EPITECH PROJECT, 2022
** Display HowToPlay for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_howtoplay(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;

    sfRenderWindow_drawSprite(game->window, howtoplay->bg, NULL);
    sfRenderWindow_drawSprite(game->window, howtoplay->l_arrow, NULL);
    sfRenderWindow_drawSprite(game->window, howtoplay->r_arrow, NULL);
    sfRenderWindow_drawSprite(
        game->window, howtoplay->sprite[howtoplay->screen], NULL);
    display_top_bar(game);
}
