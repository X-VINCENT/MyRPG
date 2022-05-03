/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_pnj_guide_right_top[] = {
    "You seek the museum ?",
    "It's on my left",
    "Between the two guards",
    NULL
};

void init_text_pnj_guide_right_top(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_pnj_guide_right_top);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_pnj_guide_right_top[i] != NULL; i++)
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_pnj_guide_right_top[i]);
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_pnj_guide_top_right(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_GUIDE_TOP_RIGHT];
    sfTexture *texture = game->textures->hotess_pnj;
    sfVector2f position = {2573, 580};
    sfIntRect rect = {97, 18, 36, 47};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.6, 0.6});
    create_box_message(game, pnj, position);
    init_text_pnj_guide_right_top(pnj, position);
    pnj->time_between_text = 4;
    pnj->is_guard = false;
    pnj->stage = CITY_STAGE;
}
