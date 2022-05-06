/*
** EPITECH PROJECT, 2022
** Fights Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef FIGHTS_H_
    #define FIGHTS_H_

    #include "rpg.h"

    #define RAT 0
    #define ENEMY 1

    typedef struct enemy {
        sfTexture *texture;
        sfSprite *left;
        sfSprite *right;
        sfClock *anim_clock;
        sfClock *clock;
        int damage;
        int life;
        int direction;
        int idx;
    } enemy_t;

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

    typedef struct lifebar {
        sfSprite *empty_bar;
        sfSprite **ticks;
    } lifebar_t;

    typedef struct fights {
        sfSprite *bg;
        sfSprite *fight_button;
        sfSprite *run_button;
        lifebar_t *rat_lifebar;
        lifebar_t *enemy_lifebar;
        enemy_t *enemy;
        attack_t *attack_1;
        attack_t *attack_2;
        attack_t *attack_3;
        sfClock *button_clock;
        sfClock *rat_bite_clock;
        sfText *win;
        sfText *loose;
        sfClock *result_clock;
        sfVector2f last_position;
        int fight_status;
        int to_attack;
        int kick;
        int bite;
        int bomb;
        int as_touched;
    } fights_t;

#endif /* !FIGHTS_H_ */
