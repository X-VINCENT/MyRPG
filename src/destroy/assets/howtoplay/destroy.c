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
