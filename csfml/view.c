/*
** EPITECH PROJECT, 2021
** Create Window gor CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfView *create_view(sfVector2f size, float angle)
{
    sfView *view = sfView_create();

    if (!view)
        return NULL;
    sfView_setSize(view, size);
    sfView_setCenter(view, (sfVector2f){sfView_getSize(view).x / 2,
        sfView_getSize(view).y / 2});
    sfView_setRotation(view, angle);
    return view;
}

void destroy_view(sfView *view)
{
    sfView_destroy(view);
}
