/*
** EPITECH PROJECT, 2022
** pnj
** File description:
** pnj
*/

#ifndef PNJ_H_
    #define PNJ_H_

    #include "rpg.h"

    #define PNJ_NBR 1
    #define PNJ_BLACK 0
    #define PNJ_BLACK_PATH "assets/images/characters/pnj/black.png"

    typedef struct pnj {
        int pnj_stage;
        sfSprite *sprite;
        sfText **text_to_display;
        sfClock *timer_display_text;
        float time_between_text;
        int text_index_display;
        bool display_the_text;
    } pnj_t;

#endif /* !PNJ_H_ */
