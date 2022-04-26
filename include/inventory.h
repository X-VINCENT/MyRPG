/*
** EPITECH PROJECT, 2022
** Inventory Header for MyRPG
** File description:
** Xavier VINCENT - Gautier BONHUR - Hugo DUBOIS - Max PEIXOTO
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    #include "rpg.h"

    #define INVENTORY_SIZE 9

    enum item_name {
        EMPTY,
        BOMB,
        MONA,
        COIN,
        WEAPON
    };

    typedef struct item {
        enum item_name name;
        sfSprite *sprite;
        int is_legal;
        int price_for_sell;
        
    } item_t;

    typedef struct inventory {
        int selected;
        item_t **items;
        sfSprite **slots_on;
        sfSprite **slots_off;
    } inventory_t;

#endif /* !INVENTORY_H_ */
