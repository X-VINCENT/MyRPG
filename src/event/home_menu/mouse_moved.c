/*
** EPITECH PROJECT, 2022
** Mouse moved home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_mouse_moved(game_t *game)
{
    home_menu_t *h = game->assets->home_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_q = sfSprite_getGlobalBounds(h->quit[h->quit_state]);
    sfFloatRect r_o = sfSprite_getGlobalBounds(h->options[h->options_state]);
    sfFloatRect r_p = sfText_getGlobalBounds(h->press);

    if (sfFloatRect_contains(&r_q, coords.x, coords.y))
        h->quit_state = 1;
    else
        h->quit_state = 0;
    if (sfFloatRect_contains(&r_o, coords.x, coords.y))
        h->options_state = 1;
    else
        h->options_state = 0;
    button_hover(h->quit[h->quit_state], h->button_clock, &r_q, coords);
    button_hover(h->options[h->options_state], h->button_clock, &r_o, coords);
    text_hover(h->press, h->button_clock, &r_p, coords);
}
