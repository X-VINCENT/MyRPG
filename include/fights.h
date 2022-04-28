/*
** EPITECH PROJECT, 2022
** Fights Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef FIGHTS_H_
    #define FIGHTS_H_

    #include "rpg.h"

    typedef struct attack {
        sfSprite *bg;
        sfSprite *filter;
        sfSprite *sprite;
        sfText *name;
        sfText *damage_text;
        sfClock *anim_clock;
        sfClock *clock;
        int damage;
        int is_unlocked;
        int is_hover;
        float anim_time;
        float shift;
        int max_value;
        int offset_from_left;
    } attack_t;

    typedef struct fights {
        sfSprite *bg;
        sfSprite *fight_button;
        sfSprite *run_button;
        attack_t *attack_1;
        attack_t *attack_2;
        attack_t *attack_3;
        sfClock *button_clock;
        int fight_status;
    } fights_t;

#endif /* !FIGHTS_H_ */
