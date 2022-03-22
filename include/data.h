/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"

    typedef struct rat {
        sfSprite *sprite;
        int speed;
    } rat_t;

    typedef struct map {
        sfSprite *bg;
        rat_t *rat;
    } map_t;

    typedef struct assets {
        sfSprite *cursor;
        map_t *map;
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
