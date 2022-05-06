/*
** EPITECH PROJECT, 2022
** Appartment Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void skin_mouse_moved(skin_t *skin, sfVector2f coords)
{
    sfFloatRect r_skin = sfSprite_getGlobalBounds(skin->bg);

    button_hover(skin->bg, skin->clock, &r_skin, coords);
}

void skin_selector_mouse_moved(game_t *game)
{
    skin_selector_t *skin_selector = game->assets->appartment->skin_selector;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    skin_mouse_moved(skin_selector->blue, coords);
    skin_mouse_moved(skin_selector->green, coords);
    skin_mouse_moved(skin_selector->purple, coords);
    skin_mouse_moved(skin_selector->red, coords);
}

void appartment_mouse_moved(game_t *game)
{
    appartment_t *appartment = game->assets->appartment;

    if (appartment->is_skin_selector_opened)
        skin_selector_mouse_moved(game);
    rat_mouse_moved(game);
}
