/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"

    typedef struct appartment {
        sfSprite *bg;
        sfImage *hitbox;
    } appartment_t;

    typedef struct city {
        sfSprite *bg;
    } city_t;

    typedef struct rat {
        sfSprite *idle_front;
        sfSprite *idle_back;
        sfSprite *idle_left;
        sfSprite *idle_right;
        sfSprite *movement_up;
        sfSprite *movement_down;
        sfSprite *movement_left;
        sfSprite *movement_right;
        sfClock *idle_anim_clock;
        sfClock *movement_anim_clock;
        int up;
        int down;
        int left;
        int right;
        int speed;
        int is_moving;
    } rat_t;

    typedef struct assets {
        sfSprite *cursor;
        appartment_t *appartment;
        city_t *city;
        rat_t *rat;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    typedef struct keys {
        int move_left;
        int move_right;
        int move_up;
        int move_down;
        int zoom_in;
        int zoom_out;
        int rotate_left;
        int rotate_right;
        int reset_view;
    } keys_t;

    typedef struct game {
        sfRenderWindow *window;
        sfView *view;
        sfClock *fps_clock;
        event_t *event;
        assets_t *assets;
        keys_t *keys;
        int stage;
        int last_stage;
        int fps;
        int res;
    } game_t;

#endif /* !DATA_H_ */
