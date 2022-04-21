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

    for (int idx = 0; idx <= NB_KEYS; idx += 1)
        game->default_keys[idx] = game->keys[idx];
}

void init_keys(game_t *game)
{
    game->keys = malloc(sizeof(int) * NB_KEYS + 1);

    game->keys[UP] = sfKeyZ;
    game->keys[DOWN] = sfKeyS;
    game->keys[LEFT] = sfKeyQ;
    game->keys[RIGHT] = sfKeyD;
    game->keys[JUMP] = sfKeyLShift;
    game->keys[DODGE] = sfKeySpace;
    game->keys[ATTACK] = sfKeyA;
    game->keys[INTERACT] = sfKeyE;
    game->keys[ROTATE_LEFT] = sfKeyLeft;
    game->keys[ROTATE_RIGHT] = sfKeyRight;
    game->keys[ZOOM_IN] = sfKeyUp;
    game->keys[ZOOM_OUT] = sfKeyDown;
    game->keys[RESET_VIEW] = sfKeyRControl;
    game->keys[ESCAPE] = sfKeyEscape;
    game->keys[HITBOX] = sfKeyH;
    game->keys[NB_KEYS] = sfKeyUnknown;
    init_default_keys(game);
}
