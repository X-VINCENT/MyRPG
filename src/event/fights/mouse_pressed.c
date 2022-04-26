/*
** EPITECH PROJECT, 2022
** Fights Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void fights_mouse_pressed(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_fight = sfSprite_getGlobalBounds(fights->fight_button);

    if (sfFloatRect_contains(&r_fight, coords.x, coords.y)) {
        if (fights->fight_status == 0)
            fights->fight_status = 1;
        else
            fights->fight_status = 0;
    }
}
