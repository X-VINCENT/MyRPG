/*
** EPITECH PROJECT, 2022
** Init Keys for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_default_keys(game_t *game)
{
    game->default_keys = malloc(sizeof(int) * NB_KEYS + 1);

    game->default_keys[UP] = sfKeyZ;
    game->default_keys[DOWN] = sfKeyS;
    game->default_keys[LEFT] = sfKeyQ;
    game->default_keys[RIGHT] = sfKeyD;
    game->default_keys[BITE] = sfKeyLShift;
    game->default_keys[DODGE] = sfKeySpace;
    game->default_keys[ATTACK] = sfKeyA;
    game->default_keys[INTERACT] = sfKeyE;
    game->default_keys[ROTATE_LEFT] = sfKeyLeft;
    game->default_keys[ROTATE_RIGHT] = sfKeyRight;
    game->default_keys[ZOOM_IN] = sfKeyUp;
    game->default_keys[ZOOM_OUT] = sfKeyDown;
    game->default_keys[RESET_VIEW] = sfKeyRControl;
    game->default_keys[ESCAPE] = sfKeyEscape;
    game->default_keys[HITBOX] = sfKeyH;
    game->default_keys[NB_KEYS] = sfKeyUnknown;
}

void init_keys(game_t *game)
{
    game->keys = malloc(sizeof(int) * NB_KEYS + 1);

    init_default_keys(game);
    for (int idx = 0; idx != NB_KEYS; idx += 1) {
        if (game->data->game->keys[idx] != sfKeyUnknown)
            game->keys[idx] = game->data->game->keys[idx];
        else
            game->keys[idx] = game->default_keys[idx];
    }
    game->keys[NB_KEYS] = sfKeyUnknown;
}
