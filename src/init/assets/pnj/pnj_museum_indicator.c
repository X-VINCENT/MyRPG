/*
** EPITECH PROJECT, 2022
** message_one
** File description:
** message_one
*/

#include "rpg.h"

char *message_museum_indicator[] = {
    "Hello again, be discret here",
    "In this museum there is many objects that you can steal",
    "Some objects are next to us, it's up to you to find them",
    "Two of them are less than 10 meters from us, practice",
    "The most valuable object in this museum is the Mona Lisa",
    "You'll need to find a key",
    "After that you'll be able to cut the electricty from the laser",
    "It's up to you to find which one",
    "If you succeed to disable the laser you can steal the Mona lisa !",
    "Be careful when you're near the guards or you will have to fight them",
    NULL
};

void init_text_museum_indicator(pnj_t *pnj, sfVector2f pos)
{
    int nbr_text = my_arrlen(message_museum_indicator);

    pnj->text_to_display = malloc(sizeof(sfText *) * nbr_text + 1);
    pnj->text_to_display[nbr_text] = NULL;
    for (int i = 0; message_museum_indicator[i] != NULL; i++)
        pnj->text_to_display[i] = create_text(FONT_TEXT_PNJ, sfWhite,
            13, message_museum_indicator[i]);
    pos.y -= 220;
    pos.x -= 395;
    for (int i = 0; pnj->text_to_display[i] != NULL; i++) {
        set_text_origin_middle_left(pnj->text_to_display[i]);
        sfText_setPosition(pnj->text_to_display[i], pos);
    }
}

void init_pnj_museum_indicator(game_t *game)
{
    assets_t *assets = game->assets;
    pnj_t *pnj = assets->pnj[PNJ_MUSEUM_INDICATOR];
    sfTexture *texture = game->textures->blue_girl_pnj;
    sfVector2f position = {472, 238};
    sfIntRect rect = {97, 18, 36, 47};

    init_pnj(pnj, texture, position, rect);
    sfSprite_setScale(pnj->sprite, (sfVector2f){0.6, 0.6});
    create_box_message(game, pnj, position);
    init_text_museum_indicator(pnj, position);
    pnj->time_between_text = 5;
    pnj->is_guard = false;
    pnj->stage = MUSEUM_STAGE;
}
