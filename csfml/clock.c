/*
** EPITECH PROJECT, 2021
** Clock for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

float time_elapsed(sfClock *clock)
{
    float elapsed_time = 0;

    if (!clock)
        return -1;
    elapsed_time = sfTime_asSeconds(sfClock_getElapsedTime(clock));
    return elapsed_time;
}
