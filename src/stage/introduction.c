/*
** EPITECH PROJECT, 2022
** Introduction Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void animate_introduction(game_t *game)
{
    introduction_t *introduction = game->assets->introduction;
    sfIntRect rect = sfSprite_getTextureRect(introduction->bg);

    if (rect.top < 12960) {
        if (rect.left >= 11520) {
            rect.left = 0;
            rect.top += 720;
        } else
            rect.left += 1280;
    } else {
        if (rect.left >= 3840) {
            game->last_stage = START_STAGE;
            game->stage = START_STAGE;
        } else
            rect.left += 1280;
    }
    sfSprite_setTextureRect(introduction->bg, rect);
}

void introduction_stage(game_t *game)
{
    introduction_t *introduction = game->assets->introduction;

    sfView_setSize(game->view, VIEW_INTRO_SIZE);
    sfView_setCenter(game->view, VIEW_INTRO_POS);
    if (time_elapsed(introduction->clock) > 0.1) {
        animate_introduction(game);
        sfClock_restart(introduction->clock);
    }
    display_introduction(game);
}
