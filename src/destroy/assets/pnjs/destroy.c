/*
** EPITECH PROJECT, 2022
** destroy_pnj
** File description:
** destroy
*/

#include "rpg.h"

void destroy_pnjs(pnj_t **pnj)
{
    for (int i = 0; pnj[i] != NULL; i++) {
        destroy_sprite(pnj[i]->sprite);
        for (int x = 0; pnj[i]->text_to_display[x] != NULL; x++)
            destroy_text(pnj[i]->text_to_display[x]);
        sfClock_destroy(pnj[i]->timer_display_text);
        sfClock_destroy(pnj[i]->timer_move);
        free(pnj[i]);
    }
    free(pnj);
}
