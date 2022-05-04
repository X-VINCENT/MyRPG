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
        if (i == PNJ_CASHIER)
            sfClock_destroy(pnj[PNJ_CASHIER]->animation);
        if (i == PNJ_BLACK_THREE)
            sfClock_destroy(pnj[PNJ_BLACK_THREE]->animation);
        destroy_sprite(pnj[i]->sprite);
        for (int x = 0; pnj[i]->text_to_display[x] != NULL; x++)
            destroy_text(pnj[i]->text_to_display[x]);
        if (pnj[i]->touch_talk)
            destroy_text(pnj[i]->touch_talk);
        sfClock_destroy(pnj[i]->timer_display_text);
        sfClock_destroy(pnj[i]->timer_move);
        sfClock_destroy(pnj[i]->walk);
        sfCircleShape_destroy(pnj[i]->circle);
        sfCircleShape_destroy(pnj[i]->circle_citizens);
        free(pnj[i]);
    }
    free(pnj);
}
