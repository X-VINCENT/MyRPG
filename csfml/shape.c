/*
** EPITECH PROJECT, 2022
** Shape for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfRectangleShape *create_rectangle_shape(
    sfVector2f position, sfVector2f size, sfColor color, sfColor out_color)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfVector2f origin = {size.x / 2, size.y / 2};

    sfRectangleShape_setPosition(rectangle, position);
    sfRectangleShape_setSize(rectangle, size);
    sfRectangleShape_setFillColor(rectangle, color);
    sfRectangleShape_setOutlineColor(rectangle, out_color);
    sfRectangleShape_setOrigin(rectangle, origin);
    return rectangle;
}

void destroy_rectangle_shape(sfRectangleShape *rectangle)
{
    sfRectangleShape_destroy(rectangle);
}

sfCircleShape *create_circle_shape(
    sfColor color, sfVector2f position, float radius, sfColor out_color)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfVector2f origin = {radius, radius};

    sfCircleShape_setFillColor(circle, color);
    sfCircleShape_setPosition(circle, position);
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setOutlineColor(circle, out_color);
    sfCircleShape_setOrigin(circle, origin);
    return circle;
}

void destroy_circle_shape(sfCircleShape *circle)
{
    sfCircleShape_destroy(circle);
}
