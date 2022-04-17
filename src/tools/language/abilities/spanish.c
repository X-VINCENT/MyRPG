/*
** EPITECH PROJECT, 2022
** Language Abilities Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *spanish_abilities_texts_language[] = {
    "Kick",
    "Vender por un 10% mas",
    "Vender por\nun 20% mas",
    "Vender por\nun 30% mas",
    "Vender por\nun 40% mas",
    "Vender por\nun 50% mas",
    "Puede comprar\n      objetos",
    "Corre un 30%\n  mas rapido",
    "Corre un 40%\n  mas rapido",
    "Corre un 50%\n  mas rapido",
    "   Vende un 100% mas y\n corre un 100% mas rapido",
    "Reduce rango deteccion un 10%",
    "Pueda empunar\n  1 objeto ilegal",
    "20% mas escapar\n    posibilidad",
    "40% mas escapar\n    posibilidad",
    "60% mas escapar\n    posibilidad",
    "    Reduce rango\ndeteccion un 20%  ",
    "Puedo esquivar",
    "Pueda empunar\n  2 objeto ilegal",
    "    Reduce rango\ndeteccion un 40%  ",
    "Pueda convertirse en carton",
    "Puede morder",
    "20% mas de HP",
    "30% mas de HP",
    "40% mas de HP",
    "5% mas de dano",
    "Pueda usar armas",
    "10% mas de dano",
    "     La mordida y la patada\ninfligen un 30% mas de dano",
    "50% mas de HP y 20% mas de dano",
    NULL
};

void set_texts_spanish_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, SPANISH_ABILITIES);
    sfText_setString(menu->title_utility, SPANISH_UTILITY);
    sfText_setString(menu->title_stealth, SPANISH_STEALTH);
    sfText_setString(menu->title_fight, SPANISH_FIGHT);
}

void set_texts_spanish_abilities(game_t *game)
{
    set_texts_spanish_abilities_menu(game);
    for (int idx = 0; game->abilities->ability[idx] != NULL; idx += 1)
        sfText_setString(game->abilities->ability[idx]->text,
            spanish_abilities_texts_language[idx]);
}
