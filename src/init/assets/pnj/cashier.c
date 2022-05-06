/*
** EPITECH PROJECT, 2022
** cashier
** File description:
** cashier
*/

#include "rpg.h"

char *message_cashier[] = {
    "Hello do you want to sell or buy anything ?",
    "To buy an item, press U. To sell an item, select it and press Y.",
    NULL
};

void init_text_pnj_cashier(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_cashier);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_cashier[i] != NULL; i++)
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_cashier[i]);
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_pnj_bar_cashier(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_CASHIER];
    sfTexture *texture = game->textures->gui;
    sfVector2f position = {240, 63};
    sfIntRect rect = {426, 123, 47, 75};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.666, 0.666});
    create_box_message(game, pnj, position);
    init_text_pnj_cashier(pnj, position);
    sfCircleShape_setRadius(pnj->circle, 60);
    pnj->time_between_text = 100000;
    pnj->animation = sfClock_create();
    pnj->stage = BAR_STAGE;
}
