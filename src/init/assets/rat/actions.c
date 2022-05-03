/*
** EPITECH PROJECT, 2022
** Init Rat Actions for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_rat_dodge_2(game_t *game, sfTexture *texture)
{
    rat_t *rat = game->assets->rat;
    sfIntRect r_diagonal = init_rect(22, 410, 25, 30);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;
    sfVector2f i_scale = (sfVector2f){-scale.x, scale.y};

    rat->dodge_up_left = create_sprite(texture, r_diagonal, pos, i_scale);
    rat->dodge_up_right = create_sprite(texture, r_diagonal, pos, scale);
    set_sprite_origin(rat->dodge_up_left, r_diagonal);
    set_sprite_origin(rat->dodge_up_right, r_diagonal);
    rat->dodge_anim_clock = sfClock_create();
}

void init_rat_dodge(game_t *game, sfTexture *texture)
{
    rat_t *rat = game->assets->rat;
    sfIntRect r_up = init_rect(22, 377, 20, 27);
    sfIntRect r_down = init_rect(22, 305, 21, 28);
    sfIntRect r_sides = init_rect(22, 340, 29, 31);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;
    sfVector2f i_scale = (sfVector2f){-scale.x, scale.y};

    rat->dodge_up = create_sprite(texture, r_up, pos, scale);
    rat->dodge_down = create_sprite(texture, r_down, pos, scale);
    rat->dodge_left = create_sprite(texture, r_sides, pos, i_scale);
    rat->dodge_right = create_sprite(texture, r_sides, pos, scale);
    set_sprite_origin(rat->dodge_up, r_up);
    set_sprite_origin(rat->dodge_down, r_down);
    set_sprite_origin(rat->dodge_left, r_sides);
    set_sprite_origin(rat->dodge_right, r_sides);
    init_rat_dodge_2(game, texture);
}

void init_rat_kick(game_t *game, sfTexture *texture)
{
    rat_t *rat = game->assets->rat;
    sfIntRect r_down = init_rect(22, 457, 18, 24);
    sfIntRect r_sides = init_rect(22, 487, 23, 22);
    sfIntRect r_diagonal = init_rect(22, 515, 21, 20);
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;
    sfVector2f i_scale = (sfVector2f){-scale.x, scale.y};

    rat->kick_down = create_sprite(texture, r_down, pos, scale);
    rat->kick_left = create_sprite(texture, r_sides, pos, i_scale);
    rat->kick_right = create_sprite(texture, r_sides, pos, scale);
    rat->kick_up_left = create_sprite(texture, r_diagonal, pos, i_scale);
    rat->kick_up_right = create_sprite(texture, r_diagonal, pos, scale);
    set_sprite_origin(rat->kick_down, r_down);
    set_sprite_origin(rat->kick_left, r_sides);
    set_sprite_origin(rat->kick_right, r_sides);
    set_sprite_origin(rat->kick_up_left, r_diagonal);
    set_sprite_origin(rat->kick_up_right, r_diagonal);
    rat->kick_anim_clock = sfClock_create();
}

void init_rat_bite(game_t *game, sfTexture *texture)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = RAT_DEFAULT_POS_CITY_APPARTMENT;
    sfVector2f scale = SCALE_RAT;
    sfVector2f i_scale = (sfVector2f){-scale.x, scale.y};

    rat->bite_left = create_sprite(texture, R_RAT_BITE, pos, i_scale);
    rat->bite_right = create_sprite(texture, R_RAT_BITE, pos, scale);
    set_sprite_origin(rat->bite_left, R_RAT_BITE);
    set_sprite_origin(rat->bite_right, R_RAT_BITE);
    rat->bite_time_clock = sfClock_create();
}
