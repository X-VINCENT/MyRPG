/*
** EPITECH PROJECT, 2022
** Destroy Top Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_texts_top_bar(top_bar_t *bar)
{
    if (!bar)
        return;
    destroy_text(bar->menu1);
    destroy_text(bar->menu2);
    destroy_text(bar->menu3);
    destroy_text(bar->menu4);
}

void destroy_sprites_top_bar(top_bar_t *bar)
{
    if (!bar)
        return;
    destroy_sprite(bar->settings_off);
    destroy_sprite(bar->settings_on);
    destroy_sprite(bar->quit_off);
    destroy_sprite(bar->quit_on);
    destroy_sprite(bar->dot);
}

void destroy_top_bar(top_bar_t *bar)
{
    if (!bar)
        return;
    destroy_texts_top_bar(bar);
    destroy_sprites_top_bar(bar);
    sfClock_destroy(bar->clock);
    free(bar);
}
