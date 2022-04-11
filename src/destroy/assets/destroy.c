/*
** EPITECH PROJECT, 2022
** Destroy Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_assets(assets_t *assets)
{
    if (!assets)
        return;
    destroy_appartment(assets->appartment);
    destroy_city(assets->city);
    destroy_home_menu(assets->home_menu);
    destroy_rat(assets->rat);
    destroy_ice(assets->ice);
    destroy_market(assets->market);
    destroy_clothe(assets->clothe);
    destroy_museum1(assets->museum1);
    destroy_museum2(assets->museum2);
    destroy_settings(assets->settings);
    destroy_top_bar(assets->top_bar);
    destroy_pnj(assets);
    free(assets);
}
