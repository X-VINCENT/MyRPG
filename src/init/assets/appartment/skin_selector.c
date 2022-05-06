/*
** EPITECH PROJECT, 2022
** Init Skin Selector Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_texts_skin_selector(game_t *game, skin_selector_t *skin_selector)
{
    sfVector2f p_title = init_pos(258, 35);
    sfVector2f p_money = init_pos(240, 250);

    skin_selector->title = create_text(
        FONT_BUENARD, sfWhite, 24, ENGLISH_CHOOSE_SKIN);
    skin_selector->money = create_text(FONT_BUENARD, sfWhite, 24, "0");
    sfText_setPosition(skin_selector->title, p_title);
    sfText_setPosition(skin_selector->money, p_money);
    set_text_origin(skin_selector->title);
    set_text_origin(skin_selector->money);
}

void init_sprites_skin_selector(game_t *game, skin_selector_t *skin_selector)
{
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f p_coin = init_pos(278, 261);
    sfVector2f s_bg = init_scale(2, 2);
    sfVector2f s_coin = {0.4, 0.4};

    skin_selector->bg = create_sprite(
        game->textures->gui, R_BG_SKIN, p_bg, s_bg);
    skin_selector->gold = create_sprite(
        game->textures->gui, R_COIN, p_coin, s_coin);
    set_sprite_origin(skin_selector->gold, R_COIN);
}

skin_t *init_skin(
    game_t *game, sfTexture *skin_texture, sfVector2f pos, int value)
{
    skin_t *skin = malloc(sizeof(skin_t));
    sfIntRect r_skin = init_rect(22, 39, 16, 21);
    sfVector2f p_skin = init_pos(pos.x, pos.y - 8);
    char *value_text = my_put_nbr_in_str(value);
    sfVector2f scale = init_scale(1, 1);

    skin->bg = create_sprite(game->textures->gui, R_SKIN_LOCKED, pos, scale);
    skin->preview = create_sprite(skin_texture, r_skin, p_skin, scale);
    skin->value_text = create_text(FONT_BUENARD, sfBlack, 18, value_text);
    set_sprite_origin(skin->bg, R_SKIN_LOCKED);
    set_sprite_origin(skin->preview, r_skin);
    sfText_setPosition(skin->value_text, init_pos(pos.x, pos.y + 26));
    set_text_origin(skin->value_text);
    skin->clock = sfClock_create();
    skin->value = value;
    skin->is_unlocked = 0;
    if (value == 0)
        skin->is_unlocked = 1;
    free(value_text);
    return skin;
}

skin_selector_t *init_skin_selector(game_t *game)
{
    skin_selector_t *skin_selector = malloc(sizeof(skin_selector_t));
    sfVector2f p_1 = init_pos(107, 146);
    sfVector2f p_2 = init_pos(207, 146);
    sfVector2f p_3 = init_pos(307, 146);
    sfVector2f p_4 = init_pos(407, 146);

    init_texts_skin_selector(game, skin_selector);
    init_sprites_skin_selector(game, skin_selector);
    skin_selector->blue = init_skin(game, game->textures->rat_blue, p_1, 0);
    skin_selector->green = init_skin(
        game, game->textures->rat_green, p_2, 100);
    skin_selector->purple = init_skin(
        game, game->textures->rat_purple, p_3, 250);
    skin_selector->red = init_skin(game, game->textures->rat_red, p_4, 500);
    return skin_selector;
}
