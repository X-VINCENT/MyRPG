/*
** EPITECH PROJECT, 2022
** Key Pressed HowToPlay for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void howtoplay_key_pressed(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfEvent *event = game->event->event;

    top_bar_key_pressed(game);
}
