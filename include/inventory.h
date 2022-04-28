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

    #define LEGAL 0
    #define ILLEGAL 1

    #define R_EMPTY (sfIntRect){0, 0, 0, 0}
    #define R_BOMB (sfIntRect){0, 0, 0, 0}
    #define R_MONA (sfIntRect){0, 0, 0, 0}
    #define R_GOLD (sfIntRect){0, 0, 0, 0}
    #define R_WEAPON (sfIntRect){0, 0, 0, 0}
    #define R_PROMO_CODE (sfIntRect){0, 0, 0, 0}
    #define EMPTY_PRICE 100
    #define BOMB_PRICE 100
    #define MONA_PRICE 10000
    #define COIN_PRICE 10
    #define WEAPON_PRICE 500
    #define PROMO_CODE_PRICE 0

    enum item_name {
        EMPTY,
        BOMB,
        MONA,
        GOLD,
        WEAPON,
        PROMO_CODE,
        NB_ITEMS
    };

    typedef struct object {
        enum item_name name;
        sfSprite *sprite;
        int selling_price;
        int buying_price;
        int is_legal;
    } object_t;

    typedef struct item {
        enum item_name name;
        sfSprite **sprite;
        int *selling_price;
        int *legality;
    } item_t;

    typedef struct inventory {
        item_t **items;
        sfSprite **slots_on;
        sfSprite **slots_off;
        int selected;
    } inventory_t;

#endif /* !INVENTORY_H_ */
