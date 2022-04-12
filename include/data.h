/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"
    #include "pnj.h"

    typedef struct parallax {
        sfSprite *bg0;
        sfSprite *bg1;
        sfSprite *bg2;
        sfSprite *bg3;
        sfClock *clock;
    } parallax_t;

    typedef struct appartment {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
    } appartment_t;

    typedef struct museum1 {
        sfSprite *bg;
        sfImage *hitbox;
    } museum1_t;

    typedef struct museum2 {
        sfSprite *bg;
        sfImage *hitbox;
    } museum2_t;

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

    typedef struct doors {
        sfSprite *rat;
        int rat_is_taken;
        sfClock *clock;
        sfClock *animation;
    } doors_t;

    typedef struct city {
        sfSprite *bg;
        doors_t *doors;
        sfImage *hitbox;
    } city_t;

    typedef struct home_menu {
        parallax_t *parallax;
        sfSprite **quit;
        sfSprite **options;
        sfSprite *title;
        sfSprite *press;
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

    typedef struct settings_game {
        sfSprite *arrow_language_right;
        sfSprite *arrow_language_left;
        sfText *title_language;
        sfText *language;
    } settings_game_t;

    typedef struct settings_graphics {
        sfText *title_res;
        sfText **res;
        sfSprite *res_left;
        sfSprite *res_right;
        sfText *title_fps;
        sfText **fps;
        sfSprite *fps_left;
        sfSprite *fps_right;
        sfText *title_vsync;
        sfText **vsync;
        sfSprite *vsync_left;
        sfSprite *vsync_right;
    } settings_graphics_t;

    typedef struct settings_audio {
        sfText *title_music;
        sfSprite *music_left;
        sfSprite *music_right;
        sfSprite *music_empty_bar;
        sfSprite *music_circle_bar;
        sfSprite **music_bar;
        sfText *title_effects;
        sfSprite *effects_left;
        sfSprite *effects_right;
        sfSprite *effects_empty_bar;
        sfSprite *effects_circle_bar;
        sfSprite **effects_bar;
    } settings_audio_t;

    typedef struct settings_key {
        sfText *title;
        sfSprite *key_rect;
        sfText *key;
        sfSprite *reset;
    } settings_key_t;

    typedef struct settings_controls {
        sfSprite *scrolling_bar;
        sfSprite *scrolling_bar_inside;
        settings_key_t *up;
        settings_key_t *down;
        settings_key_t *left;
        settings_key_t *right;
        settings_key_t *jump;
        settings_key_t *dodge;
        settings_key_t *attack;
        settings_key_t *interact;
        settings_key_t *zoom_in;
        settings_key_t *zoom_out;
        settings_key_t *rotate_left;
        settings_key_t *rotate_right;
        settings_key_t *reset_view;
        settings_key_t *escape;
        sfClock *scrolling_clock;
    } settings_controls_t;

    typedef struct settings {
        sfSprite *bg;
        sfSprite *scrolling_rect;
        sfText *settings_text;
        sfText *game_text;
        sfText *graphics_text;
        sfText *audio_text;
        sfText *controls_text;
        settings_game_t *game;
        settings_graphics_t *graphics;
        settings_audio_t *audio;
        settings_controls_t *controls;
        sfClock *clock;
        int current;
    } settings_t;

    typedef struct transitions {
        sfSprite *rat_enter;
        sfSprite *rat_quit;
    } transitions_t;

    typedef struct top_bar {
        sfText *menu1;
        sfText *menu2;
        sfText *menu3;
        sfText *menu4;
        sfSprite *settings_off;
        sfSprite *settings_on;
        sfSprite *quit_off;
        sfSprite *quit_on;
        sfSprite *dot;
        sfClock *clock;
    } top_bar_t;

    typedef struct assets {
        sfSprite *cursor;
        appartment_t *appartment;
        museum1_t *museum1;
        museum2_t *museum2;
        ice_t *ice;
        market_t *market;
        clothe_t *clothe;
        city_t *city;
        home_menu_t *home_menu;
        rat_t *rat;
        pnj_t **pnj;
        settings_t *settings;
        transitions_t *transitions;
        top_bar_t *top_bar;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    typedef struct keys {
        int up;
        int down;
        int left;
        int right;
        int jump;
        int dodge;
        int attack;
        int interact;
        int zoom_in;
        int zoom_out;
        int rotate_left;
        int rotate_right;
        int reset_view;
        int escape;
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
        inventory_t *inventory;
        int stage;
        int last_stage;
        int next_stage;
        int fps;
        int res;
        int vsync;
        int language;
        int music_volume;
        int effects_volume;
    } game_t;

#endif /* !DATA_H_ */
