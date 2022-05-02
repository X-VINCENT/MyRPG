/*
** EPITECH PROJECT, 2022
** Init Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const int name_objects_apart[] = {
    -1
};

const sfVector2f pos_objects_apart[] = {
    {0, 0}
};

const int objects_areas_apart[] = {
    -1
};

void init_sign_appartment(game_t *game)
{
    appartment_t *apart = game->assets->appartment;
    sfIntRect r_sign = init_rect(0, 560, 320, 80);
    sfVector2f p_sign = {258, 20};
    sfVector2f s_sign = {1, 0.6};

    apart->sign = create_sprite(
        game->textures->message_box, r_sign, p_sign, s_sign);
    set_sprite_origin(game->assets->appartment->sign, r_sign);
    apart->press_interact = create_text(FONT_BUENARD,
        (sfColor){255, 255, 255, 255}, 16, "Press E to save");
    sfText_setPosition(apart->press_interact,
        (sfVector2f){p_sign.x, p_sign.y - 4});
    set_text_origin(apart->press_interact);
    apart->is_saving = 0;
}

void init_appartment(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 517, 292);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->appartment = malloc(sizeof(appartment_t));
    game->assets->appartment->bg = create_sprite(
        game->textures->apart, rect, pos, scale);
    game->assets->appartment->bg_top = create_sprite(
        game->textures->apart_top, rect, pos, scale);
    game->assets->appartment->hitbox = create_image(APART_HITBOX);
    game->assets->appartment->skin_selector = init_skin_selector(game);
    game->assets->appartment->is_choosing_skin = 0;
    game->assets->appartment->objects = create_objects(game->textures->gui,
        name_objects_apart, pos_objects_apart, objects_areas_apart);
    init_sign_appartment(game);
}
