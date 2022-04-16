/*
** EPITECH PROJECT, 2022
** Destroy Abilities for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_abilities_menu(abilities_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_text(menu->title);
    destroy_text(menu->title_utility);
    destroy_text(menu->title_stealth);
    destroy_text(menu->title_fight);
    destroy_sprite(menu->tree);
    destroy_sprite(menu->scrolling_bar);
    destroy_sprite(menu->scrolling_bar_inside);
    sfClock_destroy(menu->scrolling_clock);
    sfClock_destroy(menu->clock);
    free(menu);
}

void destroy_abilities(abilities_t *abilities)
{
    destroy_abilities_menu(abilities->menu);
    free(abilities);
}
