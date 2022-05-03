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
        sfClock *clock_turn;
        int turning;
        int turned_left_to_museum;

    } car_t;


#endif /* !CAR_H_ */
