/*
** EPITECH PROJECT, 2022
** Init Textures Environnment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_textures_environnment_two(game_t *game)
{
    textures_t *textures = game->textures;

    textures->museum_bg = sfTexture_createFromFile(MUSEUM, NULL);
    textures->museum_bg_top = sfTexture_createFromFile(MUSEUM_TOP, NULL);
    textures->rain = sfTexture_createFromFile(RAIN, NULL);
    textures->wind = sfTexture_createFromFile(WIND, NULL);
    textures->car = sfTexture_createFromFile(CAR, NULL);
    textures->car_grey = sfTexture_createFromFile(CAR_GREY, NULL);
    textures->win = sfTexture_createFromFile(WIN, NULL);
    textures->loose = sfTexture_createFromFile(LOOSE, NULL);
}

void init_textures_environnment(game_t *game)
{
    textures_t *textures = game->textures;

    textures->apart_top = sfTexture_createFromFile(APART_TOP, NULL);
    textures->apart = sfTexture_createFromFile(APART, NULL);
    textures->bar = sfTexture_createFromFile(BAR, NULL);
    textures->bar_top = sfTexture_createFromFile(BAR_TOP, NULL);
    textures->city_view = sfTexture_createFromFile(CITY, NULL);
    textures->city_view_top = sfTexture_createFromFile(CITY_TOP, NULL);
    textures->city_rat_door = sfTexture_createFromFile(RAT_DOOR, NULL);
    textures->clothe = sfTexture_createFromFile(CLOTHE, NULL);
    textures->clothe_top = sfTexture_createFromFile(CLOTHE_TOP, NULL);
    textures->ice_cream = sfTexture_createFromFile(ICE, NULL);
    textures->ice_cream_top = sfTexture_createFromFile(ICE_TOP, NULL);
    textures->market = sfTexture_createFromFile(MARKET, NULL);
    textures->market_top = sfTexture_createFromFile(MARKET_TOP, NULL);
    init_textures_environnment_two(game);
}
