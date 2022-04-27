/*
** EPITECH PROJECT, 2022
** Check Move Rat Collision for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_contact_pnj(game_t *game, sfVector2f rat_pos)
{
    sfFloatRect r_pnj;

    for (int idx = 0; game->assets->pnj[idx] != NULL; idx += 1) {
        r_pnj = sfSprite_getGlobalBounds(game->assets->pnj[idx]->sprite);
        r_pnj.left -= 11;
        r_pnj.width += 11;
        r_pnj.height += 11;
        if (sfFloatRect_contains(&r_pnj, rat_pos.x, rat_pos.y))
            return 0;
    }
    return 1;
}

int check_rat_collision(
    game_t *game, sfImage *hitbox, int offset_x, int offset_y)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.x += rat->speed * rat->speed_multiplier * offset_x;
    rat_pos.y += rat->speed * rat->speed_multiplier * offset_y;
    color = sfImage_getPixel(hitbox, rat_pos.x, rat_pos.y);
    if (color.r == 0 && color.g == 0 && color.b == 0 &&
        check_contact_pnj(game, rat_pos))
        return 1;
    return 0;
}
