/*
** EPITECH PROJECT, 2022
** Manage List for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

particle_t *create_particle_list(sfTexture *texture,
    sfIntRect rect, sfVector2f pos)
{
    particle_t *list = malloc(sizeof(particle_t));

    list->sprite = create_sprite(texture,
        rect, pos, init_scale(1, 1));
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
    node->sprite = create_sprite(texture,
        rect, pos, init_scale(1, 1));
    node->next = NULL;
    node->previous = list;
    return head;
}
