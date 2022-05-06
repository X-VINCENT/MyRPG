/*
** EPITECH PROJECT, 2022
** Key Pressed Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_rat_jump(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f p_rat = sfSprite_getPosition(rat->idle_front);

    if (rat->is_jumping == 1) {
        if (p_rat.y > 140)
            p_rat.y -= 2;
        else
            rat->is_jumping = 0;
        if (rat->is_dodging == 0)
            rat->is_dodging = 1;
    } else if (rat->is_jumping == 0)
        p_rat.y += (p_rat.y < 190) ? 1 : 0;
    if (p_rat.y < 190)
        if (rat->is_dodging == 0)
            rat->is_dodging = 1;
    set_rats_position(game, p_rat);
    sfClock_restart(rat->clock_jump);
}

void rat_jump_in_fights(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (time_elapsed(rat->clock_jump) > 0.01) {
        move_rat_jump(game);
        sfClock_restart(rat->clock_jump);
    }
}

void fights_key_pressed(game_t *game)
{
    sfVector2f p_rat = sfSprite_getPosition(game->assets->rat->idle_front);

    if (sfKeyboard_isKeyPressed(game->keys[DODGE]) && p_rat.y >= 190) {
        game->assets->rat->is_dodging = 1;
        game->assets->rat->is_jumping = 1;
    }
}
