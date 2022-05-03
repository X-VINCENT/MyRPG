/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_girl_front_appart[] = {
    "Welcome in the city !",
    "Your goal here is to steal and save the most money",
    "You must not get caught by the various guards",
    "Higher in the city you can find a museum",
    "Inside there are valuable objects",
    "You will have to bring back objects and earn the most money",
    "You can sell your objects in the rat bar",
    "Good luck !",
    NULL
};

void init_text_pnj_two(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_girl_front_appart);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_girl_front_appart[i] != NULL; i++) {
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_girl_front_appart[i]);
    }
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_two(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_GIRL_TWO];
    sfTexture *texture = game->textures->blue_girl_pnj;
    sfVector2f position = {2505, 1703};
    sfIntRect rect = {0, 402, 31, 48};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.6, 0.6});
    position.y += 100;
    create_box_message(game, pnj, position);
    init_text_pnj_two(pnj, position);
    pnj->time_between_text = 3;
    pnj->stage = CITY_STAGE;
}
