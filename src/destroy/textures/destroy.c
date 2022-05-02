/*
** EPITECH PROJECT, 2022
** Destroy Textures for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_textures_2(textures_t *textures)
{
    sfTexture_destroy(textures->slot_off);
    sfTexture_destroy(textures->slot_on);
    sfTexture_destroy(textures->home_menu_bg0);
    sfTexture_destroy(textures->home_menu_bg1);
    sfTexture_destroy(textures->home_menu_bg2);
    sfTexture_destroy(textures->home_menu_bg3);
    sfTexture_destroy(textures->home_menu_title);
    sfTexture_destroy(textures->settings_bg);
    sfTexture_destroy(textures->transition_enter);
    sfTexture_destroy(textures->transition_quit);
    sfTexture_destroy(textures->menu_bg);
    sfTexture_destroy(textures->buttons_1);
    sfTexture_destroy(textures->gui);
    sfTexture_destroy(textures->message_box);
    sfTexture_destroy(textures->blue_girl_pnj);
    sfTexture_destroy(textures->guard_pnj);
    sfTexture_destroy(textures->hotess_pnj);
    sfTexture_destroy(textures->black_pnj);
}

void destroy_textures(textures_t *textures)
{
    sfTexture_destroy(textures->rat_blue);
    sfTexture_destroy(textures->rat_green);
    sfTexture_destroy(textures->rat_purple);
    sfTexture_destroy(textures->rat_red);
    sfTexture_destroy(textures->apart_top);
    sfTexture_destroy(textures->apart);
    sfTexture_destroy(textures->bar);
    sfTexture_destroy(textures->bar_top);
    sfTexture_destroy(textures->city_view);
    sfTexture_destroy(textures->city_view_top);
    sfTexture_destroy(textures->city_rat_door);
    sfTexture_destroy(textures->clothe);
    sfTexture_destroy(textures->clothe_top);
    sfTexture_destroy(textures->ice_cream);
    sfTexture_destroy(textures->ice_cream_top);
    sfTexture_destroy(textures->market);
    sfTexture_destroy(textures->market_top);
    sfTexture_destroy(textures->museum_bg);
    sfTexture_destroy(textures->museum_bg_top);
    sfTexture_destroy(textures->cursor_icon);
    sfTexture_destroy(textures->window_icon);
    destroy_textures_2(textures);
}
