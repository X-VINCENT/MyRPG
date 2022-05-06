/*
** EPITECH PROJECT, 2022
** Check Fonts for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_fonts(void)
{
    int error = 0;

    error += is_file(FONT_TEXT_PNJ);
    error += is_file(FONT_BUENARD);
    error += is_file(FONT_PIXEL_ART);
    error += is_file(FONT_RPG);
    return error;
}
