/*
** EPITECH PROJECT, 2022
** Manage List for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

particle_t *create_particle_list(sfTexture *texture,
    sfIntRect rect, sfVector2f pos, sfVector2f scale)
{
    particle_t *list = malloc(sizeof(particle_t));

    list->sprite = create_sprite(texture, rect, pos, scale);
    list->next = NULL;
    list->previous = NULL;
    return list;
}

fire_t *create_fire_list(sfVector2f pos, sfVector2f size, sfColor color)
{
    fire_t *list = malloc(sizeof(fire_t));

    list->pixel = create_rectangle_shape(pos, size, color, color);
    list->nb_move = 0;
    list->next = NULL;
    list->previous = NULL;
    return list;
}

particle_t *add_node(particle_t *list, sfTexture *texture,
    sfIntRect rect, sfVector2f pos)
{
    particle_t *head = list;
    particle_t *node = malloc(sizeof(particle_t));

    while (list->next != NULL)
        list = list->next;
    list->next = node;
    node->sprite = create_sprite(texture, rect, pos, init_scale(1, 1));
    node->next = NULL;
    node->previous = list;
    return head;
}

fire_t *add_node_fire(fire_t *list, sfVector2f pos,
    sfVector2f size, sfColor color)
{
    fire_t *head = list;
    fire_t *node = malloc(sizeof(fire_t));

    while (list->next != NULL)
        list = list->next;
    list->next = node;
    node->pixel = create_rectangle_shape(pos, size, color, color);
    node->nb_move = 0;
    node->next = NULL;
    node->previous = list;
    return head;
}
