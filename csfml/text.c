/*
** EPITECH PROJECT, 2021
** Text for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfText *create_text(
    const char *font_path, sfColor color, int size, const char *string)
{
    sfFont *font = NULL;
    sfText *text = NULL;

    if (!font_path || !string)
        return NULL;
    if (!(font = sfFont_createFromFile(font_path)))
        return NULL;
    if (!(text = sfText_create()))
        return NULL;
    sfText_setFont(text, font);
    sfText_setColor(text, color);
    sfText_setCharacterSize(text, size);
    sfText_setString(text, string);
    return text;
}

void set_text_origin(sfText *text)
{
    sfVector2f origin = {sfText_getGlobalBounds(text).width / 2,
        sfText_getGlobalBounds(text).height / 2};

    if (!text)
        return;
    sfText_setOrigin(text, origin);
}

void set_text_origin_middle_left(sfText *text)
{
    sfVector2f origin = {0, sfText_getGlobalBounds(text).height / 2};

    if (!text)
        return;
    sfText_setOrigin(text, origin);
}

void set_text_origin_middle_right(sfText *text)
{
    sfVector2f origin = {sfText_getGlobalBounds(text).width,
        sfText_getGlobalBounds(text).height / 2};

    if (!text)
        return;
    sfText_setOrigin(text, origin);
}

void destroy_text(sfText *text)
{
    if (!text)
        return;
    sfFont_destroy((sfFont *)sfText_getFont(text));
    sfText_destroy(text);
}
