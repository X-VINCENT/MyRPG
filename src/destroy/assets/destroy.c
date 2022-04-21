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
    destroy_museum(assets->museum);
    destroy_settings(assets->settings);
    destroy_top_bar(assets->top_bar);
    destroy_pnjs(assets->pnj);
    free(assets);
}
