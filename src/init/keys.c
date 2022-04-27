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
    game->default_keys[JUMP] = sfKeyLShift;
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

    game->keys[UP] = game->data->game->keys[UP];
    game->keys[DOWN] = game->data->game->keys[DOWN];
    game->keys[LEFT] = game->data->game->keys[LEFT];
    game->keys[RIGHT] = game->data->game->keys[RIGHT];
    game->keys[JUMP] = game->data->game->keys[JUMP];
    game->keys[DODGE] = game->data->game->keys[DODGE];
    game->keys[ATTACK] = game->data->game->keys[ATTACK];
    game->keys[INTERACT] = game->data->game->keys[INTERACT];
    game->keys[ROTATE_LEFT] = game->data->game->keys[ROTATE_LEFT];
    game->keys[ROTATE_RIGHT] = game->data->game->keys[ROTATE_RIGHT];
    game->keys[ZOOM_IN] = game->data->game->keys[ZOOM_IN];
    game->keys[ZOOM_OUT] = game->data->game->keys[ZOOM_OUT];
    game->keys[RESET_VIEW] = game->data->game->keys[RESET_VIEW];
    game->keys[ESCAPE] = game->data->game->keys[ESCAPE];
    game->keys[HITBOX] = game->data->game->keys[HITBOX];
    game->keys[NB_KEYS] = game->data->game->keys[NB_KEYS];
    init_default_keys(game);
}
