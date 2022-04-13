/*
** EPITECH PROJECT, 2022
** Settings Choose Key Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_mouse_pressed_choose_key(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_quit = sfText_getGlobalBounds(s_controls->choose_key->quit);

    if (sfFloatRect_contains(&r_quit, coords.x, coords.y))
        s_controls->key_selected = -1;
}
