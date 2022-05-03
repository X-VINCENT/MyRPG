/*
** EPITECH PROJECT, 2022
** CAR Header
** File description:
** car
*/

#ifndef CAR_H_
    #define CAR_H_

    #include "rpg.h"

    typedef struct car {
        sfSprite *car;
        sfClock *clock;
        sfClock *clock_animation;

    } car_t;

    typedef struct car_right {
        sfSprite *car;
        sfClock *clock;
        sfClock *clock_animation;
    } car_right_t;


#endif /* !CAR_H_ */
