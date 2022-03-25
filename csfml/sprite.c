/*
** EPITECH PROJECT, 2021
** Sprite for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfSprite *create_sprite(const char *texture_path, sfIntRect rect,
    sfVector2f position, sfVector2f scale)
{
    sfSprite *sprite = NULL;
    sfTexture *texture = NULL;

    if (!texture_path)
        return NULL;
    if (!(sprite = sfSprite_create()))
        return NULL;
    if (!(texture = sfTexture_createFromFile(texture_path, NULL)))
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
    sfTexture_destroy((sfTexture *)sfSprite_getTexture(sprite));
    sfSprite_destroy(sprite);
}