/*
** EPITECH PROJECT, 2022
** Appartment Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void save_abilities(game_t *game)
{
    ability_t **abilities = game->abilities->ability;
    save_t *save = game->data->current;

    for (int idx = 0; abilities[idx] != NULL; idx += 1)
        save->abilities[idx] = abilities[idx]->status;
}

void skin_selector_key_pressed(game_t *game)
{
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);
    sfEvent *event = game->event->event;
    sfFloatRect r_wardrobe = {4.00, 14.00, 56.00, 32.00};

    if (sfFloatRect_contains(&r_wardrobe, rat_pos.x, rat_pos.y)) {
        if (event->key.code == game->keys[INTERACT])
            game->assets->appartment->is_skin_selector_opened =
            (game->assets->appartment->is_skin_selector_opened == 0) ? 1 : 0;
        game->assets->appartment->is_choosing_skin = 1;
    }
    game->assets->appartment->is_choosing_skin = 0;
}

void appartment_key_pressed(game_t *game)
{
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);
    sfEvent *event = game->event->event;
    sfFloatRect r_bed = {4.00, 82.00, 67.00, 47.00};

    if (sfFloatRect_contains(&r_bed, rat_pos.x, rat_pos.y)) {
        save_abilities(game);
        if (event->key.code == sfKeyNum1 || event->key.code == sfKeyNumpad1)
            save_data(game->data->save1, game->data->current);
        if (event->key.code == sfKeyNum2 || event->key.code == sfKeyNumpad2)
            save_data(game->data->save2, game->data->current);
        if (event->key.code == sfKeyNum3 || event->key.code == sfKeyNumpad3)
            save_data(game->data->save3, game->data->current);
        game->assets->appartment->is_saving = 1;
        return;
    }
    game->assets->appartment->is_saving = 0;
    skin_selector_key_pressed(game);
}
