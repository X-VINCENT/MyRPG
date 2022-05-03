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
        r_pnj.top -= 11;
        r_pnj.left -= 10;
        r_pnj.width += 21;
        if (sfFloatRect_contains(&r_pnj, rat_pos.x, rat_pos.y)
            && game->assets->pnj[idx]->is_dead == 0
            && game->stage == game->assets->pnj[idx]->stage)
            return 0;
    }
    return 1;
}

int check_contact_car(game_t *game, sfVector2f rat_pos)
{
    sfFloatRect r_car = sfSprite_getGlobalBounds(game->assets->car->car);
    sfFloatRect r_car_right = sfSprite_getGlobalBounds(
        game->assets->car_right->car);

    if (sfFloatRect_contains(&r_car, rat_pos.x, rat_pos.y) &&
        game->stage == CITY_STAGE)
        return 0;
    if (sfFloatRect_contains(&r_car_right, rat_pos.x, rat_pos.y) &&
        game->stage == CITY_STAGE)
        return 0;
    return 1;
}

int check_lasers_collision(game_t *game, sfVector2f rat_pos)
{
    sfFloatRect r_lasers;

    if (game->stage != MUSEUM_STAGE)
        return 1;
    r_lasers = sfSprite_getGlobalBounds(game->assets->museum->lasers);
    r_lasers.height += 63;
    if (sfFloatRect_contains(&r_lasers, rat_pos.x, rat_pos.y) &&
    game->assets->museum->are_lasers_unlocked == 0)
        return 0;
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
        check_contact_pnj(game, rat_pos) &&
        check_contact_car(game, rat_pos) &&
        check_lasers_collision(game, rat_pos))
        return 1;
    return 0;
}
