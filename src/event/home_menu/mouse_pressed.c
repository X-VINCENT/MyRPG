/*
** EPITECH PROJECT, 2022
** Mouse pressed home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_mouse_pressed(game_t *game)
{
    home_menu_t *h = game->assets->home_menu;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_q = sfSprite_getGlobalBounds(h->quit[h->quit_state]);
    sfFloatRect r_o = sfSprite_getGlobalBounds(h->options[h->options_state]);
    sfFloatRect r_p = sfText_getGlobalBounds(h->press);

    if (sfFloatRect_contains(&r_q, coords.x, coords.y))
        sfRenderWindow_close(game->window);
    if (sfFloatRect_contains(&r_o, coords.x, coords.y)) {
        game->last_stage = game->stage;
        game->stage = SETTINGS_STAGE;
    }
    if (sfFloatRect_contains(&r_p, coords.x, coords.y)) {
        game->last_stage = game->stage;
        game->stage = GAME_STAGE;
    }
}
