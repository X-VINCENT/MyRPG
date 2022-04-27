/*
** EPITECH PROJECT, 2022
** Fights Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void attack_hover(attack_t *attack, sfVector2f coords)
{
    sfFloatRect r_attack;

    if (!attack)
        return;
    r_attack = sfSprite_getGlobalBounds(attack->bg);
    if (sfFloatRect_contains(&r_attack, coords.x, coords.y))
        attack->is_hover = 1;
    else
        attack->is_hover = 0;
}

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
    attack_hover(fights->attack_1, coords);
    attack_hover(fights->attack_2, coords);
    attack_hover(fights->attack_3, coords);
}
