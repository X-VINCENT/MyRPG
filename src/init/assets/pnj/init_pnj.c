/*
** EPITECH PROJECT, 2022
** init_pnj_struct
** File description:
** init_pnj
*/

#include "rpg.h"

void init_black_pnj(pnj_t *pnj)
{
    int nbr_text = 2;

    pnj->sprite = create_sprite(PNJ_BLACK_PATH, (sfIntRect){0, 30, 45, 65},
        (sfVector2f){2324, 1690}, (sfVector2f){0.5, 0.5});
    set_sprite_origin(pnj->sprite, (sfIntRect){0, 30, 45, 65});
    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text);
    pnj->text_to_display[nbr_text] = NULL;
    pnj->text_to_display[0] = create_text(FONT_BUENARD, sfBlack,
        10, "Hello, I'm Jacques\n");
    pnj->text_to_display[1] = create_text(FONT_BUENARD, sfBlack,
        10, "I'm the blacksmith of the city\n");
    set_text_origin(pnj->text_to_display[0]);
    set_text_origin(pnj->text_to_display[1]);
    sfText_setPosition(pnj->text_to_display[0], (sfVector2f){2324, 1670});
    sfText_setPosition(pnj->text_to_display[1], (sfVector2f){2324, 1670});
    sfText_setPosition(pnj->text_to_display[0], (sfVector2f){2324, 1680});
    sfText_setPosition(pnj->text_to_display[1], (sfVector2f){2324, 1680});
    pnj->time_between_text = 2;
    pnj->display_the_text = false;
    pnj->text_index_display = 0;
    pnj->timer_display_text = sfClock_create();
}

void init_struct_pnjs(game_t *game)
{
    assets_t *assets = game->assets;

    if (!game)
        return;
    assets->pnj = malloc(sizeof(pnj_t) * PNJ_NBR + 1);
    assets->pnj[PNJ_NBR] = NULL;
    init_black_pnj(assets->pnj[PNJ_BLACK]);
}
