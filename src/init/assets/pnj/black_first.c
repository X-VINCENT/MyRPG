/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_two[] = {
    "wesh chacal",
    "ca dit quoi\n",
    "\nAbbaye Saint-Wandrille, anciennement abbaye\n de Fontenelle, est\
    une abbaye de la\ncongregation de Solesmes situee sur\
    \nl'ancienne commune de AOUDOUBILAH en BULGARIE",
    "va au musée et ARCHI la joconque",
    NULL
};

void init_text_pnj_one(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_two);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_two[i] != NULL; i++) {
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_two[i]);
    }
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_one(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_GIRL_TWO];
    sfTexture *texture = game->textures->black_pnj;
    sfVector2f position = {2500, 1900};

    init_pnj(pnj, texture, position);
    create_box_message(game, pnj, position);
    init_text_pnj_one(pnj, position);
}
