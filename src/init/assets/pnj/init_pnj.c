/*
** EPITECH PROJECT, 2022
** init_pnj_struct
** File description:
** init_pnj
*/

#include "rpg.h"
#include <time.h>

void init_settings_base(pnj_t *pnj, float time_between_text, bool text)
{
    int random = 0;
    int n = 0;
    time_t t;

    pnj->time_between_text = time_between_text;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
    pnj->walk = sfClock_create();
    pnj->text = text;
}

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

void init_black_pnj(pnj_t *pnj, sfVector2f pos, bool text,
                        game_t *game)
{
    pnj->sprite = create_sprite(game->textures->black_pnj,
        (sfIntRect){0, 30, 45, 65}, pos, (sfVector2f){0.42, 0.42});
    set_sprite_origin(pnj->sprite, (sfIntRect){0, 30, 45, 65});
    pos.y -= 200;
    pos.x -= 210;
    pnj->message_box = create_sprite(game->textures->message_box,
        (sfIntRect){0, 560, 320, 80}, pos, (sfVector2f){1.2, 1});
    set_sprite_origin(pnj->message_box, (sfIntRect){0, 560, 320, 80});
    init_text_pnj(pnj, pos, "un deux trois soleil");
    init_settings_base(pnj, 5, text);
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
        init_black_pnj(assets->pnj[i], default_pnj_position, false, game);
    }
}

void init_struct_pnjs(game_t *game)
{
    assets_t *assets = game->assets;

    if (!game)
        return;
    assets->pnj = malloc(sizeof(pnj_t *) * PNJ_NBR + 1);
    for (int i = 0; i < PNJ_NBR; i++)
        assets->pnj[i] = malloc(sizeof(pnj_t));
    assets->pnj[PNJ_NBR] = NULL;
    init_black_pnj(assets->pnj[PNJ_BLACK], (sfVector2f){2324, 1900},
        true, game);
    init_black_pnj(assets->pnj[PNJ_BLACK_TWO], (sfVector2f){2280, 1900},
        true, game);
    init_black_pnj(assets->pnj[PNJ_BLACK_THREE], (sfVector2f){2400, 1900},
        true, game);
    citizens_png(game);
}
