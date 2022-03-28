/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"

    typedef struct parallax {
        sfSprite *bg0;
        sfSprite *bg1;
        sfSprite *bg2;
        sfSprite *bg3;
        sfClock *clock;
    } parallax_t;

    typedef struct appartment {
        sfSprite *bg;
        sfImage *hitbox;
    } appartment_t;

    typedef struct ice {
        sfSprite *bg;
        sfImage *hitbox;
    } ice_t;

    typedef struct market {
        sfSprite *bg;
        sfImage *hitbox;
    } market_t;

    typedef struct clothe {
        sfSprite *bg;
        sfImage *hitbox;
    } clothe_t;

    typedef struct city {
        sfSprite *bg;
        sfImage *hitbox;
    } city_t;

    typedef struct home_menu {
        parallax_t *parallax;
        sfSprite **quit;
        sfSprite **options;
        sfSprite *title;
        int quit_state;
        int options_state;
        sfClock *button_clock;
    } home_menu_t;

    typedef struct rat {
        sfSprite *idle_front;
        sfSprite *idle_back;
        sfSprite *idle_left;
        sfSprite *idle_right;
        sfSprite *movement_up;
        sfSprite *movement_down;
        sfSprite *movement_left;
        sfSprite *movement_right;
        sfSprite *shadow;
        sfClock *idle_anim_clock;
        sfClock *movement_anim_clock;
        sfClock *movement_clock;
        sfClock *latency_status_clock;
        int up;
        int down;
        int left;
        int right;
        int speed;
        int is_moving;
    } rat_t;

    typedef struct transitions {
        sfSprite *rat_enter;
        sfSprite *rat_quit;
    } transitions_t;

    typedef struct assets {
        sfSprite *cursor;
        appartment_t *appartment;
        ice_t *ice;
        market_t *market;
        clothe_t *clothe;
        city_t *city;
        home_menu_t *home_menu;
        rat_t *rat;
        transitions_t *transitions;
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

    typedef struct musics {
        sfMusic *rat_transition;
    } musics_t;

    typedef struct sounds {
    } sounds_t;

    typedef struct audio {
        musics_t *musics;
        sounds_t *sounds;
    } audio_t;

    typedef struct game {
        sfRenderWindow *window;
        sfView *view;
        event_t *event;
        assets_t *assets;
        audio_t *audio;
        keys_t *keys;
        int stage;
        int last_stage;
        int next_stage;
        int fps;
        int res;
    } game_t;

#endif /* !DATA_H_ */
