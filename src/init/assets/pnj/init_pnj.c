/*
** EPITECH PROJECT, 2022
** init_pnj_struct
** File description:
** init_pnj
*/

#include "rpg.h"

void init_settings_base(pnj_t *pnj, float time_between_text)
{
    pnj->time_between_text = 2;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
    pnj->timer_move = sfClock_create();
}

void init_black_pnj(pnj_t *pnj, sfVector2f pos, char *name)
{
    int nbr_text = 2;

    pnj->sprite = create_sprite(PNJ_BLACK_PATH, (sfIntRect){0, 30, 45, 65},
        pos, (sfVector2f){0.5, 0.5});
    set_sprite_origin(pnj->sprite, (sfIntRect){0, 30, 45, 65});
    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text);
    pnj->text_to_display[nbr_text] = NULL;
    pnj->text_to_display[0] = create_text(FONT_BUENARD, sfBlack,
        10, name);
    pnj->text_to_display[1] = create_text(FONT_BUENARD, sfBlack,
        10, "I'm the blacksmith of the city\n");
    set_text_origin(pnj->text_to_display[0]);
    set_text_origin(pnj->text_to_display[1]);
    pos.y -= 25;
    sfText_setPosition(pnj->text_to_display[0], pos);
    sfText_setPosition(pnj->text_to_display[1], pos);
    init_settings_base(pnj, 2);
}

void init_struct_pnjs(game_t *game)
{
    assets_t *assets = game->assets;

    if (!game)
        return;
    assets->pnj = malloc(sizeof(pnj_t *) * PNJ_NBR + 1);
    for (int i = 0; i < PNJ_NBR; i++) {
        assets->pnj[i] = malloc(sizeof(pnj_t));
    }
    assets->pnj[PNJ_NBR] = NULL;
    init_black_pnj(assets->pnj[PNJ_BLACK], (sfVector2f){2324, 1800},
        "Hello, I'm Jacques");
    init_black_pnj(assets->pnj[PNJ_BLACK_TWO], (sfVector2f){2280, 1750},
        "Hello, I'm Harry the brother of Jacques");
    init_black_pnj(assets->pnj[PNJ_BLACK_THREE], (sfVector2f){2400, 1700},
        "Hello, I'm Harry the dad of Harry !");
}
