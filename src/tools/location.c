/*
** EPITECH PROJECT, 2022
** Location Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

bool check_location_rect(
    sfSprite *character, sfVector2f location, int width, int height)
{
    sfVector2f pos = sfSprite_getPosition(character);

    if (pos.x >= location.x && pos.x <= location.x + width &&
        pos.y >= location.y && pos.y <= location.y + height)
        return true;
    return false;
}
