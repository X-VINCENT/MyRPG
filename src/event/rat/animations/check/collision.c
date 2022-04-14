/*
** EPITECH PROJECT, 2022
** Check Move Rat Collision for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_rat_collision(
    game_t *game, sfImage *hitbox, int offset_x, int offset_y)
{
    rat_t *rat = game->assets->rat;
    sfVector2f rat_pos = sfSprite_getPosition(rat->movement_up);
    sfColor color;

    rat_pos.x += rat->speed * offset_x;
    rat_pos.y += rat->speed * offset_y;
    color = sfImage_getPixel(hitbox, rat_pos.x, rat_pos.y);
    if (color.r == 0 && color.g == 0 && color.b == 0)
        return 1;
    return 0;
}
