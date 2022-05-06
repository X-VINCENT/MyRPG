/*
** EPITECH PROJECT, 2021
** CSFML Header
** File description:
** Xavier VINCENT
*/

#ifndef CSFML_H_
    #define CSFML_H_

    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// Structures
    typedef struct shape {
        int *x;
        int *y;
        int counter;
    } shape_t;

// Animation
    void button_hover(sfSprite *sprite, sfClock *clock,
        sfFloatRect *global_bounds, sfVector2f coords);
    void button_hover_little(sfSprite *sprite, sfClock *clock,
        sfFloatRect *global_bounds, sfVector2f coords);
    void button_hover_micro(sfSprite *sprite, sfClock *clock,
        sfFloatRect *global_bounds, sfVector2f coords);
    void text_hover(sfText *text, sfClock *clock,
        sfFloatRect *global_bounds, sfVector2f coords);

// Audio
    sfMusic *create_music(const char *music_path);
    void play_music(sfMusic *music);
    sfSound *create_sound(const char *sound_path);
    void destroy_music(sfMusic *music);
    void destroy_sound(sfSound *sound);

// Audio2
    void set_offset_music(sfMusic *music, int offset);
    void set_offset_sound(sfSound *sound, int offset);
    void mute_music(sfMusic *music);
    void mute_sound(sfSound *sound);

// Clock
    float time_elapsed(sfClock *clock);

// Convex Shape
    sfConvexShape *create_convex_shape_from_file(const char *filepath,
        sfVector2f position, sfColor color, sfColor out_color);
    shape_t *store_shape_coordinates_in_struct(const char *buffer);
    sfConvexShape *create_convex_shape(shape_t *s_shape, sfVector2f position,
        sfColor color, sfColor out_color);

// Image
    sfImage *create_image(const char *filename);
    void save_image(sfImage *image, const char *filename);
    void destroy_image(sfImage *image);

// Init
    sfIntRect init_rect(int left, int top, int width, int height);
    sfVector2f init_pos(int x, int y);
    sfVector2f init_scale(int x, int y);

// Shape
    sfRectangleShape *create_rectangle_shape(sfVector2f position,
        sfVector2f size, sfColor color, sfColor out_color);
    void destroy_rectangle_shape(sfRectangleShape *rectangle);
    sfCircleShape *create_circle_shape(
        sfColor color, sfVector2f position, float radius, sfColor out_color);
    void destroy_circle_shape(sfCircleShape *circle);

// Sprite
    sfSprite *create_sprite(sfTexture *texture, sfIntRect rect,
        sfVector2f position, sfVector2f scale);
    void animate_sprite(
        sfSprite *sprite, float shift, int max_value, int offset_from_left);
    int animate_sprite_one_time(
        sfSprite *sprite, float shift, int max_value, int offset_from_left);
    void set_sprite_origin(sfSprite *sprite, sfIntRect rect);
    void destroy_sprite(sfSprite *sprite);

// Text
    sfText *create_text(
        const char *font_path, sfColor color, int size, const char *string);
    void set_text_origin(sfText *text);
    void set_text_origin_middle_left(sfText *text);
    void set_text_origin_middle_right(sfText *text);
    void destroy_text(sfText *text);

// View
    sfView *create_view(sfVector2f size, float angle);
    void destroy_view(sfView *view);

// Window
    sfRenderWindow *create_window(const char *title, int width, int height);
    sfRenderWindow *set_icon_window(
        sfRenderWindow *window, const char *icon_path);
    void destroy_window(sfRenderWindow *window);

#endif /* !CSFML_H_ */
