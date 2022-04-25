/*
** EPITECH PROJECT, 2022
** Appartment Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void appartment_key_pressed(game_t *game)
{
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);
    sfEvent *event = game->event->event;
    sfFloatRect r_bed = {4.00, 82.00, 67.00, 47.00};

    if (event->key.code == game->keys[INTERACT] &&
        sfFloatRect_contains(&r_bed, rat_pos.x, rat_pos.y)) {
        get_time(game);
        save_data(game->data->save2, game->data->current);
    }
}
