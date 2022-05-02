/*
** EPITECH PROJECT, 2022
** Destroy Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_skin(skin_t *skin)
{
    destroy_sprite(skin->bg);
    destroy_sprite(skin->preview);
    destroy_text(skin->value_text);
    sfClock_destroy(skin->clock);
    free(skin);
}

void destroy_skin_selector(skin_selector_t *skin_selector)
{
    destroy_sprite(skin_selector->bg);
    destroy_text(skin_selector->title);
    destroy_text(skin_selector->money);
    destroy_sprite(skin_selector->gold);
    destroy_skin(skin_selector->blue);
    destroy_skin(skin_selector->green);
    destroy_skin(skin_selector->purple);
    destroy_skin(skin_selector->red);
    free(skin_selector);
}

void destroy_appartment(appartment_t *appartment)
{
    destroy_sprite(appartment->bg);
    destroy_sprite(appartment->bg_top);
    destroy_sprite(appartment->sign);
    destroy_image(appartment->hitbox);
    destroy_skin_selector(appartment->skin_selector);
    destroy_objects(appartment->objects);
    free(appartment);
}
