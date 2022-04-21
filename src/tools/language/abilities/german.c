/*
** EPITECH PROJECT, 2022
** Language Abilities German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *german_abilities_texts_language[] = {
    "Kick",
    "Verkaufen fur 10% mehr",
    "Verkaufen fur\n    20% mehr",
    "Verkaufen fur\n    30% mehr",
    "Verkaufen fur\n    40% mehr",
    "Verkaufen fur\n    50% mehr",
    "Kann Gegenstand kaufen",
    "30% schneller\n      laufen",
    "40% schneller\n      laufen",
    "50% schneller\n      laufen",
    "Verkaufen fur 100% mehr and\n   run 100% schneller laufen",
    "      Verringert die\nEntdeckung- um 10%",
    "     Kann 1 illegalen\nGegenstand trasport-",
    "   20% mehr\nFluchtchance",
    "   40% mehr\nFluchtchance",
    "   60% mehr\nFluchtchance",
    "      Verringert die\nEntdeckung- um 20%",
    "Kann ausweichen",
    "    Kann 2 illegalen\nGegenstand trasport-",
    "      Verringert die\nEntdeckung- um 10%",
    "Kann ein Karton werden",
    "Kann beissen",
    "20% mehr HP",
    "30% mehr HP",
    "40% mehr HP",
    "5% mehr Schaden",
    "Kann Waffen benutzen",
    "10% mehr Schaden",
    "Biss und Tritt verursachen\n      30% mehr Schaden",
    "50% mehr HP und 50% mehr Schaden",
    NULL
};

void set_texts_german_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, GERMAN_ABILITIES);
    sfText_setString(menu->title_utility, GERMAN_UTILITY);
    sfText_setString(menu->title_stealth, GERMAN_STEALTH);
    sfText_setString(menu->title_fight, GERMAN_FIGHT);
}

void set_texts_german_abilities(game_t *game)
{
    set_texts_german_abilities_menu(game);
    for (int idx = 0; game->abilities->ability[idx] != NULL; idx += 1)
        sfText_setString(game->abilities->ability[idx]->text,
            german_abilities_texts_language[idx]);
}
