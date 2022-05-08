/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "rpg.h"
    #include "inventory.h"
    #include "pnj.h"
    #include "fights.h"

    typedef struct particle {
        sfSprite *sprite;
        struct particle *next;
        struct particle *previous;
    } particle_t;

    typedef struct fire {
        sfRectangleShape *pixel;
        int nb_move;
        struct fire *next;
        struct fire *previous;
    } fire_t;

    typedef struct parallax {
        sfSprite *bg0;
        sfSprite *bg1;
        sfSprite *bg2;
        sfSprite *bg3;
        sfClock *clock;
    } parallax_t;

    typedef struct skin {
        sfSprite *bg;
        sfSprite *preview;
        sfText *value_text;
        sfClock *clock;
        int value;
        int is_unlocked;
    } skin_t;

    typedef struct skin_selector {
        sfSprite *bg;
        sfText *title;
        sfText *money;
        sfSprite *gold;
        skin_t *blue;
        skin_t *green;
        skin_t *purple;
        skin_t *red;
    } skin_selector_t;

    typedef struct appartment {
        sfSprite *bg;
        sfSprite *bg_top;
        sfSprite *sign;
        sfText *press_interact;
        sfImage *hitbox;
        skin_selector_t *skin_selector;
        object_t **objects;
        int is_saving;
        int is_choosing_skin;
        int is_skin_selector_opened;
    } appartment_t;

    typedef struct bar {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
    } bar_t;

    typedef struct museum {
        sfSprite *bg;
        sfSprite *bg_top;
        sfSprite *lasers;
        sfImage *hitbox;
        object_t **objects;
        int curent_room;
        int are_lasers_unlocked;
    } museum_t;

    typedef struct ice {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
        object_t **objects;
    } ice_t;

    typedef struct market {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
        object_t **objects;
    } market_t;

    typedef struct clothe {
        sfSprite *bg;
        sfSprite *bg_top;
        sfImage *hitbox;
        object_t **objects;
    } clothe_t;

    typedef struct doors {
        sfSprite *rat;
        int rat_is_taken;
        sfClock *clock;
        sfClock *animation;
    } doors_t;

    typedef struct city {
        sfSprite *bg;
        sfSprite *bg_top;
        doors_t *doors;
        sfImage *hitbox;
        int is_raining;
        int is_windy;
        particle_t *rain;
        particle_t *wind;
        fire_t *fire;
        fire_t *fire_car;
        sfClock *weather_clock;
        sfClock *fire_clock;
        sfClock *fire_car_clock;
        object_t **objects;
        sfSprite *pos_minimap;
    } city_t;

    typedef struct load_save {
        sfSprite *box;
        sfSprite *map;
        sfText *title_time_played;
        sfText *title_money;
        sfText *title_xp;
        sfText *time_played;
        sfText *money;
        sfText *xp;
        sfSprite *play;
        sfSprite *erase;
        sfText *empty;
        sfSprite *new_game;
        sfClock *clock;
        int status;
    } load_save_t;

    typedef struct game_menu {
        sfSprite *bg;
        load_save_t *save_1;
        load_save_t *save_2;
        load_save_t *save_3;
        sfClock *clock;
    } game_menu_t;

    typedef struct home_menu {
        parallax_t *parallax;
        sfSprite **quit;
        sfSprite **options;
        sfSprite *title;
        sfText *press;
        int quit_state;
        int options_state;
        sfClock *button_clock;
    } home_menu_t;

    typedef struct howtoplay {
        int screen;
        sfSprite *bg;
        sfClock *clock;
        sfSprite **sprite;
        sfSprite *l_arrow;
        sfSprite *r_arrow;
    } howtoplay_t;

    typedef struct rat {
        sfSprite *idle_front;
        sfSprite *idle_back;
        sfSprite *idle_left;
        sfSprite *idle_right;
        sfSprite *idle_back_left;
        sfSprite *idle_back_right;
        sfSprite *movement_up;
        sfSprite *movement_down;
        sfSprite *movement_left;
        sfSprite *movement_right;
        sfSprite *movement_up_left;
        sfSprite *movement_up_right;
        sfSprite *dodge_up;
        sfSprite *dodge_down;
        sfSprite *dodge_left;
        sfSprite *dodge_right;
        sfSprite *dodge_up_left;
        sfSprite *dodge_up_right;
        sfSprite *kick_down;
        sfSprite *kick_left;
        sfSprite *kick_right;
        sfSprite *kick_up_left;
        sfSprite *kick_up_right;
        sfSprite *bite_left;
        sfSprite *bite_right;
        sfSprite *shadow;
        sfCircleShape *circle;
        sfClock *idle_anim_clock;
        sfClock *movement_anim_clock;
        sfClock *dodge_anim_clock;
        sfClock *kick_anim_clock;
        sfClock *bite_time_clock;
        sfClock *movement_clock;
        sfClock *latency_status_clock;
        sfClock *clock_jump;
        int up;
        int down;
        int left;
        int right;
        float speed;
        float speed_multiplier;
        int is_moving;
        int is_dodging;
        int is_kicking;
        int is_biting;
        float radius_circle;
        int damage;
        int life;
        int is_jumping;
        int run_chance;
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

    typedef struct settings_choose_key {
        sfSprite *bg_rect;
        sfText *text;
        sfText *quit;
    } settings_choose_key_t;

    typedef struct settings_key {
        sfText *title;
        sfSprite *key_rect;
        sfText *key;
        sfSprite *reset;
    } settings_key_t;

    enum keys_name {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        BITE,
        DODGE,
        ATTACK,
        INTERACT,
        ZOOM_IN,
        ZOOM_OUT,
        ROTATE_LEFT,
        ROTATE_RIGHT,
        RESET_VIEW,
        ESCAPE,
        HITBOX,
        NB_KEYS
    };

    typedef struct settings_controls {
        settings_choose_key_t *choose_key;
        sfSprite *scrolling_bar;
        sfSprite *scrolling_bar_inside;
        settings_key_t **keys;
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
        settings_key_t *hitbox;
        settings_key_t *escape;
        sfClock *scrolling_clock;
        sfClock *clock;
        int key_selected;
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

    typedef struct shop {
        sfSprite *bg;
        sfSprite *buy_off;
        sfSprite *exit_off;
        sfSprite *buy_on;
        sfSprite *exit_on;
        sfSprite *bomb_off;
        sfSprite *kit_off;
        sfSprite *sold;
        sfSprite *bomb_on;
        sfSprite *kit_on;
        sfText *bomb;
        sfText *kit;
        sfText *money;
        int current;
        int status_buy;
        int status_exit;
    } shop_t;

    typedef struct wallet {
        sfSprite *logo;
        sfText *title;
        sfText *value;
    } wallet_t;

    typedef struct stat_data {
        sfText *title;
        sfText *value;
    } stat_data_t;

    typedef struct stats {
        sfSprite *bg;
        sfText *stats;
        sfSprite *frame;
        wallet_t *money;
        wallet_t *xp;
        wallet_t *abilities;
        stat_data_t *time_played;
        stat_data_t *fights;
        stat_data_t *money_saved;
        stat_data_t *stolen_items;
        sfClock *clock;
    } stats_t;

    typedef struct transition {
        sfRectangleShape *rectangle;
        sfClock* clock;
        int direction;
        int done;
    } transition_t;

    typedef struct top_bar {
        sfText *game;
        sfText *abilities;
        sfText *stats;
        sfText *howtoplay;
        sfSprite *settings_off;
        sfSprite *settings_on;
        sfSprite *quit_off;
        sfSprite *quit_on;
        sfSprite *dot;
        sfClock *clock;
    } top_bar_t;

    typedef struct end {
        sfSprite *win;
        sfSprite *loose;
    } end_t;

    typedef struct introduction {
        sfSprite *bg;
        sfClock *clock;
    } introduction_t;

    typedef struct assets {
        sfSprite *cursor;
        appartment_t *appartment;
        game_menu_t *game_menu;
        howtoplay_t *howtoplay;
        museum_t *museum;
        ice_t *ice;
        market_t *market;
        bar_t *bar;
        clothe_t *clothe;
        city_t *city;
        home_menu_t *home_menu;
        rat_t *rat;
        pnj_t **pnj;
        car_t *car;
        car_right_t *car_right;
        settings_t *settings;
        stats_t *stats;
        shop_t *shop;
        transition_t *transition;
        top_bar_t *top_bar;
        end_t *end;
        introduction_t *introduction;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    typedef struct musics {
        sfMusic *rat_transition;
        sfMusic *music_menu;
        sfMusic *music_city;
        sfMusic *music_bar;
        sfMusic *music_ice_cream;
        sfMusic *music_museum;
        sfMusic *music_fight;
        sfMusic *win;
        sfMusic *loose;
    } musics_t;

    typedef struct sounds {
        sfSound *jump_sound;
        sfSound *punch_sound;
    } sounds_t;

    typedef struct audio {
        musics_t *musics;
        sounds_t *sounds;
    } audio_t;

    typedef struct textures {
        sfTexture *black_pnj;
        sfTexture *blue_girl_pnj;
        sfTexture *rat_blue;
        sfTexture *rat_green;
        sfTexture *rat_purple;
        sfTexture *rat_red;
        sfTexture *apart_top;
        sfTexture *apart;
        sfTexture *bar;
        sfTexture *bar_top;
        sfTexture *city_view;
        sfTexture *city_view_top;
        sfTexture *city_rat_door;
        sfTexture *clothe;
        sfTexture *clothe_top;
        sfTexture *ice_cream;
        sfTexture *ice_cream_top;
        sfTexture *market;
        sfTexture *market_top;
        sfTexture *museum_bg;
        sfTexture *museum_bg_top;
        sfTexture *cursor_icon;
        sfTexture *window_icon;
        sfTexture *slot_off;
        sfTexture *slot_on;
        sfTexture *home_menu_bg0;
        sfTexture *home_menu_bg1;
        sfTexture *home_menu_bg2;
        sfTexture *home_menu_bg3;
        sfTexture *home_menu_title;
        sfTexture *abilities_bg;
        sfTexture *settings_bg;
        sfTexture *menu_bg;
        sfTexture *buttons_1;
        sfTexture *gui;
        sfTexture *intro;
        sfTexture *message_box;
        sfTexture *rain;
        sfTexture *wind;
        sfTexture *guard_pnj;
        sfTexture *hotess_pnj;
        sfTexture *car;
        sfTexture *car_grey;
        sfTexture *win;
        sfTexture *loose;
    } textures_t;

    typedef struct save_game {
        int fps;
        int res;
        int vsync;
        int language;
        int music_volume;
        int effects_volume;
        int *keys;
    } save_game_t;

    typedef struct save {
        int nb_golds;
        int nb_xps;
        int nb_abilities;
        int time_played;
        int stolen_items;
        int fights_won;
        int fights_lost;
        int money_saved;
        int *abilities;
    } save_t;

    typedef struct data {
        save_game_t *game;
        save_t *current;
        save_t *save1;
        save_t *save2;
        save_t *save3;
    } data_t;

    typedef struct game {
        sfRenderWindow *window;
        sfView *view;
        data_t *data;
        textures_t *textures;
        event_t *event;
        assets_t *assets;
        audio_t *audio;
        int *keys;
        int *default_keys;
        inventory_t *inventory;
        abilities_t *abilities;
        fights_t *fights;
        int stage;
        int last_stage;
        int next_stage;
        int fps;
        int res;
        int vsync;
        int language;
        int music_volume;
        int effects_volume;
        sfClock *time_playing_clock;
        sfClock *reset_object_clock;
        sfClock *costs_clock;
    } game_t;

#endif /* !DATA_H_ */
