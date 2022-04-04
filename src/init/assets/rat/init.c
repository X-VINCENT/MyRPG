/*
** EPITECH PROJECT, 2022
** Init Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_rat_idle(game_t *game, const char *filename_color)
{
    rat_t *rat = game->assets->rat;
    sfIntRect r_front = init_rect(22, 39, 16, 21);
    sfIntRect r_back = init_rect(22, 94, 16, 24);
    sfIntRect r_sides = init_rect(22, 66, 25, 22);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;

    rat->idle_front = create_sprite(filename_color, r_front, pos, scale);
    rat->idle_back = create_sprite(filename_color, r_back, pos, scale);
    rat->idle_left = create_sprite(
        filename_color, r_sides, pos, (sfVector2f){-scale.x, scale.y});
    rat->idle_right = create_sprite(filename_color, r_sides, pos, scale);
    set_sprite_origin(rat->idle_front, r_front);
    set_sprite_origin(rat->idle_back, r_back);
    set_sprite_origin(rat->idle_left, r_sides);
    set_sprite_origin(rat->idle_right, r_sides);
    rat->idle_anim_clock = sfClock_create();
}

void init_rat_movement(game_t *game, const char *filename_color)
{
    rat_t *rat = game->assets->rat;
    sfIntRect r_up = init_rect(22, 226, 16, 26);
    sfIntRect r_down = init_rect(22, 164, 16, 24);
    sfIntRect r_sides = init_rect(22, 194, 25, 26);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;

    rat->movement_up = create_sprite(filename_color, r_up, pos, scale);
    rat->movement_down = create_sprite(filename_color, r_down, pos, scale);
    rat->movement_left = create_sprite(
        filename_color, r_sides, pos, (sfVector2f){-scale.x, scale.y});
    rat->movement_right = create_sprite(filename_color, r_sides, pos, scale);
    rat->movement_anim_clock = sfClock_create();
    rat->latency_status_clock = sfClock_create();
    set_sprite_origin(rat->movement_up, r_up);
    set_sprite_origin(rat->movement_down, r_down);
    set_sprite_origin(rat->movement_left, r_sides);
    set_sprite_origin(rat->movement_right, r_sides);
}

void init_rat(game_t *game, const char *filename_color)
{
    rat_t *rat = NULL;
    sfIntRect r_shadow = init_rect(202, 40, 12, 4);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;

    game->assets->rat = malloc(sizeof(rat_t));
    rat = game->assets->rat;
    rat->speed = RAT_SPEED_CITY;
    rat->is_moving = 0;
    rat->movement_clock = sfClock_create();
    rat->shadow = create_sprite(filename_color, r_shadow, pos, scale);
    set_sprite_origin(rat->shadow, r_shadow);
    init_rat_idle(game, filename_color);
    init_rat_movement(game, filename_color);
}
