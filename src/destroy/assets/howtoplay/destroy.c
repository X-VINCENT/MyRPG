/*
** EPITECH PROJECT, 2022
** Destroy HowToPlay for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_texts_howtoplay(howtoplay_t *howtoplay)
{
    if (!howtoplay)
        return;
}

void destroy_sprites_howtoplay(howtoplay_t *howtoplay)
{
    if (!howtoplay)
        return;
    destroy_sprite(howtoplay->bg);
    destroy_sprite(howtoplay->l_arrow);
    destroy_sprite(howtoplay->r_arrow);
    for (int idx = 0; howtoplay->sprite[idx] != NULL; idx++)
        destroy_sprite(howtoplay->sprite[idx]);
    free(howtoplay->sprite);
}

void destroy_howtoplay(howtoplay_t *howtoplay)
{
    if (!howtoplay)
        return;
    destroy_texts_howtoplay(howtoplay);
    destroy_sprites_howtoplay(howtoplay);
    sfClock_destroy(howtoplay->clock);
    free(howtoplay);
}
