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
    #define PNJ_BLUE_GIRL_PATH "assets/images/characters/pnj/blue_girl.png"
    #define PNJ_GUARD_PATH "assets/images/characters/pnj/guard_pnj.png"
    #define PNJ_HOTESS_PATH "assets/images/characters/pnj/hotesse.png"

    #define PNJ_NBR 18
    #define LAST_PNJ 12
    #define PNJ_BLACK 0
    #define PNJ_GIRL_TWO 1
    #define PNJ_BLACK_THREE 2
    #define PNJ_GUARD_LEFT 3
    #define PNJ_GUARD_RIGHT 4
    #define PNJ_MUSEUM_HOTESS 5
    #define PNJ_M_GUARD_LEFT 6
    #define PNJ_M_GUARD_RIGHT 7
    #define PNJ_M2_GUARD_LEFT 8
    #define PNJ_CASHIER 9
    #define PNJ_GUIDE_TOP_RIGHT 10
    #define PNJ_MUSEUM_INDICATOR 11
    #define PNJ_GUARD_LAST_MUSEUM 12

    typedef struct pnj {
        sfClock *timer_move;
        int pnj_stage;
        sfSprite *sprite;
        sfCircleShape *circle;
        sfCircleShape *circle_citizens;
        sfText **text_to_display;
        sfClock *timer_display_text;
        sfClock *walk;
        sfSprite *message_box;
        float time_between_text;
        int move_left_or_right;
        int text_index_display;
        sfClock *animation;
        int change_t;
        bool display_the_text;
        bool text;
        sfText *touch_talk;
        int life;
        int damage;
        int speed;
        int displaying_text;
        int is_guard;
        int stage;
        int is_dead;
    } pnj_t;

#endif /* !PNJ_H_ */
