/*
** EPITECH PROJECT, 2022
** Language Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_language_texts(game_t *game)
{
    switch (game->language) {
        case ENGLISH:
            set_texts_english(game);
            break;
        case FRENCH:
            set_texts_french(game);
            break;
        case GERMAN:
            set_texts_german(game);
            break;
        case SPANISH:
            set_texts_spanish(game);
            break;
        default:
            break;
    }
    set_texts_origin(game);
}
