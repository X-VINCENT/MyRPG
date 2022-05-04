/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_circle
*/

#include "rpg.h"

void move_circle(game_t *game, pnj_t *pnj)
{
    sfVector2f position_pnj = sfSprite_getPosition(pnj->sprite);
    if (pnj->circle)
        sfCircleShape_setPosition(pnj->circle, position_pnj);
    if (pnj->circle_citizens)
        sfCircleShape_setPosition(pnj->circle_citizens, position_pnj);
}
