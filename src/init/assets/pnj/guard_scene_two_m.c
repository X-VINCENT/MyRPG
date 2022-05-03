/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_pnj_m2_left[] = {
    "Don't touch the dinosaur !",
    NULL
};

void init_text_g2_museum_left(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_pnj_m2_left);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_pnj_m2_left[i] != NULL; i++)
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_pnj_m2_left[i]);
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_pnj_g2_museum_left(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_M2_GUARD_LEFT];
    sfTexture *texture = game->textures->guard_pnj;
    sfVector2f position = {560, 1530};
    sfIntRect rect = {97, 18, 36, 47};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.6, 0.6});
    create_box_message(game, pnj, position);
    init_text_g2_museum_left(pnj, position);
    pnj->time_between_text = 3;
    pnj->is_guard = true;
    pnj->stage = MUSEUM_STAGE;
}
