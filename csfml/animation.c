/*
** EPITECH PROJECT, 2022
** Animation for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

void button_hover(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords)
{
    sfVector2f scale = sfSprite_getScale(sprite);

    if (!sprite || !clock || !global_bounds)
        return;
    if (sfFloatRect_contains(global_bounds, coords.x, coords.y) &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        if (scale.x < 1.10) {
            scale.x += 0.02;
            scale.y += 0.02;
            sfSprite_setScale(sprite, scale);
            sfClock_restart(clock);
        }
    } else if (scale.x > 1.00 &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        scale.x -= 0.02;
        scale.y -= 0.02;
        sfSprite_setScale(sprite, scale);
        sfClock_restart(clock);
    }
}

void button_hover_little(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords)
{
    sfVector2f scale = sfSprite_getScale(sprite);

    if (!sprite || !clock || !global_bounds)
        return;
    if (sfFloatRect_contains(global_bounds, coords.x, coords.y) &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        if (scale.x < 0.60) {
            scale.x += 0.015;
            scale.y += 0.015;
            sfSprite_setScale(sprite, scale);
            sfClock_restart(clock);
        }
    } else if (scale.x > 0.50 &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        scale.x -= 0.015;
        scale.y -= 0.015;
        sfSprite_setScale(sprite, scale);
        sfClock_restart(clock);
    }
}
