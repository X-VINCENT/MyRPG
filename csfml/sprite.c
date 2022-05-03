/*
** EPITECH PROJECT, 2021
** Sprite for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfSprite *create_sprite(sfTexture *texture, sfIntRect rect,
    sfVector2f position, sfVector2f scale)
{
    sfSprite *sprite = NULL;

    if (!texture)
        return NULL;
    if (!(sprite = sfSprite_create()))
        return NULL;
    sfSprite_setPosition(sprite, position);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setTextureRect(sprite, rect);
    return sprite;
}

void animate_sprite(
    sfSprite *sprite, float shift, int max_value, int offset_from_left)
{
    sfIntRect rect;

    if (!sprite)
        return;
    rect = sfSprite_getTextureRect(sprite);
    if (rect.left >= max_value - shift)
        rect.left = offset_from_left;
    else
        rect.left += shift;
    sfSprite_setTextureRect(sprite, rect);
}

int animate_sprite_one_time(
    sfSprite *sprite, float shift, int max_value, int offset_from_left)
{
    sfIntRect rect;
    int is_done = 0;

    if (!sprite)
        return -1;
    rect = sfSprite_getTextureRect(sprite);
    if (rect.left >= max_value - shift) {
        rect.left = offset_from_left;
        is_done = 1;
    } else
        rect.left += shift;
    sfSprite_setTextureRect(sprite, rect);
    return is_done;
}

void set_sprite_origin(sfSprite *sprite, sfIntRect rect)
{
    sfVector2f origin = {rect.width / 2, rect.height / 2};

    if (!sprite)
        return;
    sfSprite_setOrigin(sprite, origin);
}

void destroy_sprite(sfSprite *sprite)
{
    if (!sprite)
        return;
    sfSprite_destroy(sprite);
}
