/*
** EPITECH PROJECT, 2022
** init_pnj_citizens
** File description:
** init_pnj_citizens
*/

#include "rpg.h"
#include <time.h>

void init_settings_base_citizens(pnj_t *pnj, float time_between_text)
{
    pnj->time_between_text = time_between_text;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
    pnj->walk = sfClock_create();
    pnj->text = false;
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
    set_sprite_origin(pnj->message_box, (sfIntRect){0, 560, 320, 80});
    init_text_pnj(pnj, pos, "");
    init_settings_base_citizens(pnj, 5);
}

void citizens_png(game_t *game)
{
    assets_t *assets = game->assets;
    sfVector2f default_pnj_position;
    int random = 0;
    int n = 0;
    time_t t;

    srand((unsigned) time(&t));
    for (int i = PNJ_BLACK_THREE + 1; i < PNJ_NBR; i++) {
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