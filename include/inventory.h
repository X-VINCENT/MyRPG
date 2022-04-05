/*
** EPITECH PROJECT, 2022
** header_inventory
** File description:
** inventory
*/

#ifndef INVENTORY_H_
#define INVENTORY_H_

    #include "rpg.h"

    #define SLOT_PATH "assets/images/inventory/pack.png"
    #define INVENTORY_SIZE (9)

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
        sfSprite **slots;
    } inventory_t;

#endif /* !INVENTORY_H_ */
