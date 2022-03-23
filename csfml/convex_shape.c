/*
** EPITECH PROJECT, 2022
** Convex Shape for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfConvexShape *create_convex_shape_from_file(const char *filepath)
{
    shape_t *s_shape = NULL;
    const char *buffer = NULL;

    if (!filepath)
        return NULL;
    if (!(buffer = my_load_file_in_mem(filepath)))
        return NULL;
    if (!(s_shape = store_shape_coordinates_in_struct(buffer)))
        return NULL;
    return create_convex_shape(s_shape);
}

shape_t *store_shape_coordinates_in_struct(const char *buffer)
{
    shape_t *s_shape = NULL;
    int idx = 0;
    int idx_x = 0;
    int idx_y = 0;

    if (!buffer || buffer[0] >= '0' && buffer[0] <= '9')
        return NULL;
    if (!(s_shape = malloc(sizeof(shape_t))))
        return NULL;
    if (!(s_shape->x = malloc(sizeof(int) * 10000)))
        return NULL;
    if (!(s_shape->y = malloc(sizeof(int) * 10000)))
        return NULL;
    while (*buffer != '\0') {
        if (idx % 2 == 0) {
            s_shape->x[idx_x] = my_getnbr(buffer);
            idx += my_getnbsize(s_shape->x[idx_x]) + 1;
            buffer += my_getnbsize(s_shape->x[idx_x]) + 1;
            idx_x += 1;
        } else {
            s_shape->y[idx_y] = my_getnbr(buffer);
            idx += my_getnbsize(s_shape->y[idx_y]) + 1;
            buffer += my_getnbsize(s_shape->y[idx_y]) + 1;
            idx_y += 1;
        }
        idx += 1;
        s_shape->counter += 1;
    }
    s_shape->x[idx_x] = NULL;
    s_shape->y[idx_y] = NULL;
    return s_shape;
}

sfConvexShape *create_convex_shape(shape_t *s_shape)
{
    sfConvexShape *shape = NULL;
    int idx_x = 0;
    int idx_y = 0;

    if (!s_shape)
        return NULL;
    if (!(shape = sfConvexShape_create()))
        return NULL;
    sfConvexShape_setPointCount(shape, s_shape->counter);
    for (int idx = 0; idx < s_shape->counter; idx += 1) {
        sfConvexShape_setPoint(shape, idx, (sfVector2f){
            s_shape->x[idx_x], s_shape->y[idx_y]});
        idx_x += 1;
        idx_y += 1;
    }
    return shape;
}
