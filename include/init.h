/*
** EPITECH PROJECT, 2022
** Init Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "rpg.h"

// Map
    // init.c
    void init_map(game_t *game);

// init_assets.c
void init_assets(game_t *game);
void init_cursor(game_t *game);
void init_rat(game_t *game);

// init_game.c
game_t *init_game(void);
void init_window(game_t *game);
void init_event(game_t *game);
void init_view(game_t *game);

//init_sounds.c
void init_sounds(game_t *game);

#endif /* !INIT_H_ */
