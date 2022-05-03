/*
** EPITECH PROJECT, 2022
** Fights Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void attack_key_pressed(game_t *game, sfVector2f coords)
{
    fights_t *fights = game->fights;
    sfFloatRect r1 = sfSprite_getGlobalBounds(fights->attack_1->bg);
    sfFloatRect r2 = sfSprite_getGlobalBounds(fights->attack_2->bg);
    sfFloatRect r3 = sfSprite_getGlobalBounds(fights->attack_3->bg);

    if (sfFloatRect_contains(&r1, coords.x, coords.y)) {
        fights->kick = 1;
        fights->fight_status = 0;
    }
    if (sfFloatRect_contains(&r2, coords.x, coords.y)) {
        fights->bite = 1;
        fights->fight_status = 0;
    }
    if (sfFloatRect_contains(&r3, coords.x, coords.y)) {
        fights->bomb = 1;
        fights->fight_status = 0;
    }
}

void fights_mouse_pressed(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_fight = sfSprite_getGlobalBounds(fights->fight_button);

    if (sfFloatRect_contains(&r_fight, coords.x, coords.y) &&
        fights->to_attack == 0) {
        if (fights->fight_status == 0)
            fights->fight_status = 1;
        else
            fights->fight_status = 0;
    }
    attack_key_pressed(game, coords);
}
