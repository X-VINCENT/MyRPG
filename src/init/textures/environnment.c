/*
** EPITECH PROJECT, 2022
** Init Textures Environnment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_environnment(game_t *game)
{
    textures_t *textures = game->textures;

    textures->apart_top = sfTexture_createFromFile(APART_TOP, NULL);
    textures->apart = sfTexture_createFromFile(APART, NULL);
    textures->city_view = sfTexture_createFromFile(CITY, NULL);
    textures->city_view_top = sfTexture_createFromFile(CITY_TOP, NULL);
    textures->city_rat_door = sfTexture_createFromFile(RAT_DOOR, NULL);
    textures->clothe_view = sfTexture_createFromFile(CLOTHE, NULL);
    textures->ice_cream_view = sfTexture_createFromFile(ICE, NULL);
    textures->market_view = sfTexture_createFromFile(MARKET, NULL);
    textures->museum_view1 = sfTexture_createFromFile(MUSEUM1, NULL);
    textures->museum_view2 = sfTexture_createFromFile(MUSEUM2, NULL);
}
