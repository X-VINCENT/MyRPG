/*
** EPITECH PROJECT, 2022
** PNJ Header for my RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef PNJ_H_
    #define PNJ_H_

    #include "rpg.h"

    #define PNJ_BLACK_PATH "assets/images/characters/pnj/black.png"
    #define PNJ_BLUE_GIRL "assets/images/characters/pnj/blue_girl.png"

    #define PNJ_NBR 540
    #define PNJ_BLACK 0
    #define PNJ_GIRL_TWO 1
    #define PNJ_BLACK_THREE 2
    #define PNJ_GUARD_LEFT 3
    #define PNJ_GUARD_RIGHT 4

    typedef struct pnj {
        sfClock *timer_move;
        int pnj_stage;
        sfSprite *sprite;
        sfText **text_to_display;
        sfClock *timer_display_text;
        sfClock *walk;
        sfSprite *message_box;
        float time_between_text;
        int move_left_or_right;
        int text_index_display;
        int change_t;
        bool display_the_text;
        bool text;
        int speed;
        int displaying_text;
    } pnj_t;

#endif /* !PNJ_H_ */
