/*
** EPITECH PROJECT, 2022
** Fights Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void fights_mouse_moved(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_fight = sfSprite_getGlobalBounds(fights->fight_button);
    sfFloatRect r_run = sfSprite_getGlobalBounds(fights->run_button);

    button_hover(
        fights->fight_button, fights->button_clock, &r_fight, coords);
    button_hover(fights->run_button, fights->button_clock, &r_run, coords);
}
