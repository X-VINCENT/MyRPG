/*
** EPITECH PROJECT, 2022
** Abilities Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void abilities_mouse_moved(game_t *game)
{
    abilities_t *abilities = game->abilities;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_ability;

    for (int idx = 0; abilities->ability[idx] != NULL; idx += 1) {
        r_ability = sfSprite_getGlobalBounds(
            abilities->ability[idx]->rect[LOCKED]);
        button_hover(abilities->ability[idx]->rect[LOCKED],
            abilities->ability[idx]->clock, &r_ability, coords);
        button_hover(abilities->ability[idx]->rect[UNLOCKED],
            abilities->ability[idx]->clock, &r_ability, coords);
    }
    top_bar_mouse_moved(game);
}
