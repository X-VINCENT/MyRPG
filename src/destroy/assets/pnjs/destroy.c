/*
** EPITECH PROJECT, 2022
** destroy_pnj
** File description:
** destroy
*/

#include "rpg.h"

void destroy_pnj(assets_t *assets)
{
    for (int i = 0; i < PNJ_NBR; i++) {
        if (assets->pnj[i]->sprite)
            destroy_sprite(assets->pnj[i]->sprite);
        for (int x = 0; assets->pnj[i]->text_to_display[x] != NULL; x++)
            destroy_text(assets->pnj[i]->text_to_display[x]);
        if (assets->pnj[i]->timer_display_text)
            sfClock_destroy(assets->pnj[i]->timer_display_text);
        if (assets->pnj[i]->timer_move)
            sfClock_destroy(assets->pnj[i]->timer_move);
        free(assets->pnj[i]);
    }
}
