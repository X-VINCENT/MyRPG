/*
** EPITECH PROJECT, 2022
** Image for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfImage *create_image(const char *filename)
{
    sfImage *image = NULL;

    if (!filename)
        return NULL;
    if (!(image = sfImage_createFromFile(filename)))
        return NULL;
    return image;
}

void save_image(sfImage *image, const char *filename)
{
    if (!image || !filename)
        return;
    if (sfImage_saveToFile(image, filename) == sfFalse)
        return;
}

void destroy_image(sfImage *image)
{
    if (!image)
        return;
    sfImage_destroy(image);
}
