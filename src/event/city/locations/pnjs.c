/*
** EPITECH PROJECT, 2022
** pnjs_event
** File description:
** pnjs
*/

#include "rpg.h"

bool check_pnj_intersects(game_t *game)
{
    sfFloatRect pnj;
    sfFloatRect rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    for (int i = 0; game->assets->pnj[i] != NULL; i++) {
        pnj = sfSprite_getGlobalBounds(game->assets->pnj[i]->sprite);
        if (sfFloatRect_intersects(&pnj, &rat, NULL) == sfTrue) {
            game->assets->pnj[i]->display_the_text = true;
            return true;
        } else {
            game->assets->pnj[i]->display_the_text = false;
            return false;
        }
    }
}
