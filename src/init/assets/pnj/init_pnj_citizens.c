/*
** EPITECH PROJECT, 2022
** init_pnj_citizens
** File description:
** init_pnj_citizens
*/

#include "rpg.h"
#include <time.h>

void init_text_pnj(pnj_t *pnj, sfVector2f pos, char *first_message)
{
    int nbr_text = 2;

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text);
    pnj->text_to_display[nbr_text] = NULL;
    pnj->text_to_display[0] = create_text(FONT_TEXT_PNJ, sfWhite,
        15, first_message);
    pnj->text_to_display[1] = create_text(FONT_TEXT_PNJ, sfWhite,
        15, "You are a fucking rat");
    pos.y -= 25;
    pos.x -= 185;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_settings_base_citizens(pnj_t *pnj, float time_between_text)
{
    pnj->time_between_text = time_between_text;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
    pnj->walk = sfClock_create();
    pnj->text = false;
    pnj->is_guard = false;
    pnj->stage = CITY_STAGE;
    pnj->is_dead = 0;
}

void init_pnj_citizens(sfTexture *texture,
                        pnj_t *pnj, sfVector2f pos, game_t *game)
{
    pnj->sprite = create_sprite(texture,
        (sfIntRect){0, 30, 45, 65}, pos, (sfVector2f){0.42, 0.42});
    set_sprite_origin(pnj->sprite, (sfIntRect){0, 30, 45, 65});
    pos.y -= 200;
    pos.x -= 210;
    pnj->message_box = create_sprite(game->textures->message_box,
        (sfIntRect){0, 560, 320, 80}, pos, (sfVector2f){1.2, 1});
    pnj->touch_talk = create_text(FONT_TEXT_PNJ, sfWhite, 0, "");
    sfText_setPosition(pnj->touch_talk, (sfVector2f){pos.x - 13, pos.y - 45});
    set_sprite_origin(pnj->message_box, (sfIntRect){0, 560, 320, 80});
    init_text_pnj(pnj, pos, "");
    pnj->circle_citizens =
        create_circle_shape(sfRed, (sfVector2f){0, 0}, 15, sfWhite);
    pnj->circle = create_circle_shape(sfRed, (sfVector2f){0, 0}, 0, sfRed);
    init_settings_base_citizens(pnj, 5);
}

void citizens_png(game_t *game)
{
    assets_t *assets = game->assets;
    sfVector2f default_pnj_position;

    for (int i = LAST_PNJ + 1; i < PNJ_NBR; i++) {
        default_pnj_position.x = rand() % 2500;
        default_pnj_position.y = 1700 + rand() % (1740 + 1 - 1700);
        assets->pnj[i]->speed = rand() % (3 + 1 - 1);
        if (assets->pnj[i]->speed == 0)
            assets->pnj[i]->speed += 1;
        assets->pnj[i]->move_left_or_right = rand() % (1 + 1 - 0);
        assets->pnj[i]->change_t = rand() % (60 + 1 - 10);
        init_pnj_citizens(game->textures->black_pnj, assets->pnj[i],
            default_pnj_position, game);
    }
}
