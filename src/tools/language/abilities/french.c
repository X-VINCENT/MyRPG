/*
** EPITECH PROJECT, 2022
** Language Abilities French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *french_abilities_texts_language[] = {
    "Coup de pied",
    "Vend pour 10%\n       de plus",
    "Vend pour 20%\n       de plus",
    "Vend pour 30%\n       de plus",
    "Vend pour 40%\n       de plus",
    "Vend pour 50%\n       de plus",
    "Peut acheter\n  un objet",
    "  Peut courir\n30% plus vite",
    "  Peut courir\n40% plus vite",
    "  Peut courir\n50% plus vite",
    "Vend pour 100% de plus et\npeut courir 100% plus vite",
    "10% plus discret",
    "  Peut porter \n 1 objet illegal",
    "       20% plus de   \nchance de s'echapper",
    "       40% plus de   \nchance de s'echapper",
    "       60% plus de   \nchance de s'echapper",
    "20% plus discret",
    "Peut esquiver",
    "    Peut porter  \n2 objets illegaux",
    "40% plus discret",
    "Peut devenir un carton",
    "Peut mordre",
    "20% de vie\n   en plus",
    "30% de vie\n   en plus",
    "40% de vie\n   en plus",
    " 5% de degats\n      en plus",
    "Peut utiliser\n   des armes   ",
    " 10% de degats\n      en plus",
    "Coups de pieds et morsure\ninfligent 30% plus de degats",
    "50% de vie en plus et\n 50% de degats en plus",
    NULL
};

void set_texts_french_abilities_menu(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;

    sfText_setString(menu->title, FRENCH_ABILITIES);
    sfText_setString(menu->title_utility, FRENCH_UTILITY);
    sfText_setString(menu->title_stealth, FRENCH_STEALTH);
    sfText_setString(menu->title_fight, FRENCH_FIGHT);
}

void set_texts_french_abilities(game_t *game)
{
    set_texts_french_abilities_menu(game);
    for (int idx = 0; game->abilities->ability[idx] != NULL; idx += 1)
        sfText_setString(game->abilities->ability[idx]->text,
            french_abilities_texts_language[idx]);
}
