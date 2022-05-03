/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_three[] = {
    "On my right you have the bar and of my left the market !",
    NULL
};

void init_text_pnj_three(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_three);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_three[i] != NULL; i++) {
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_three[i]);
    }
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_three(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_BLACK_THREE];
    sfTexture *texture = game->textures->blue_girl_pnj;
    sfVector2f position = {975, 1680};
    sfIntRect rect = {0, 466, 31, 48};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.6, 0.6});
    create_box_message(game, pnj, position);
    init_text_pnj_three(pnj, position);
    pnj->time_between_text = 4;
    pnj->stage = CITY_STAGE;
    pnj->animation = sfClock_create();
}
