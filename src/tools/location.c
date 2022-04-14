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
    sfFloatRect square = {location.x, location.y, width, height};
    sfVector2f pos = sfSprite_getPosition(character);

    if (sfFloatRect_contains(&square, pos.x, pos.y))
        return true;
    return false;
}
