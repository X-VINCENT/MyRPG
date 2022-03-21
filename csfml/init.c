/*
** EPITECH PROJECT, 2022
** Init for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfIntRect init_rect(int left, int top, int width, int height)
{
    sfIntRect rect;

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return rect;
}

sfVector2f init_pos(int x, int y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return pos;
}

sfVector2f init_scale(int x, int y)
{
    sfVector2f scale;

    scale.x = x;
    scale.y = y;
    return scale;
}
