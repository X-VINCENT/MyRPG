/*
** EPITECH PROJECT, 2022
** Inventory Header for MyRPG
** File description:
** Xavier VINCENT - Gautier BONHUR - Hugo DUBOIS - Max PEIXOTO
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    #include "rpg.h"

    #define SLOT_PATH_ON "assets/images/inventory/slot_on.png"
    #define SLOT_PATH_OFF "assets/images/inventory/slot_off.png"
    #define INVENTORY_SIZE 9

    enum item {
        NOTHING,
        CONSUMABLES,
        SCORE,
        SCORE_2,
        WEAPON
    };

    typedef struct inventory {
        int selected;
        int *items;
        sfSprite **slots_on;
        sfSprite **slots_off;
    } inventory_t;

#endif /* !INVENTORY_H_ */
