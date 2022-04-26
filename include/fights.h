/*
** EPITECH PROJECT, 2022
** Fights Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef FIGHTS_H_
    #define FIGHTS_H_

    #include "rpg.h"

    typedef struct fights {
        sfSprite *bg;
        sfSprite *fight_button;
        sfSprite *run_button;
        sfClock *button_clock;
        int fight_status;
    } fights_t;

#endif /* !FIGHTS_H_ */
