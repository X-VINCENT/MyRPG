/*
** EPITECH PROJECT, 2021
** Create Window gor CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfRenderWindow *create_window(const char *title, int width, int height)
{
    sfVideoMode mode = {width, height, 32};
    sfUint32 style = sfClose | sfResize;
    sfContextSettings *settings = NULL;
    sfRenderWindow *window = NULL;

    if (!title)
        return NULL;
    if (!(window = sfRenderWindow_create(mode, title, style, settings)))
        return NULL;
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}

sfRenderWindow *set_icon_window(
    sfRenderWindow *window, const char *icon_path)
{
    const sfImage *image = NULL;
    const sfUint8 *pixels = NULL;
    sfVector2u size;

    if (!window || !icon_path)
        return NULL;
    if (!(image = sfImage_createFromFile(icon_path)))
        return NULL;
    if (!(pixels = sfImage_getPixelsPtr(image)))
        return NULL;
    size = sfImage_getSize(image);
    sfRenderWindow_setIcon(window, size.x, size.y, pixels);
    return window;
}

void destroy_window(sfRenderWindow *window)
{
    if (!window)
        return;
    sfRenderWindow_destroy(window);
}
