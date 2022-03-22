/*
** EPITECH PROJECT, 2022
** Zoom View Map  Event for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void zoom_view(game_t *game)
{
    sfEvent *event = game->event->event;
    sfVector2f view_size = sfView_getSize(game->view);

    if (event->key.code == sfKeyLShift &&
        sfView_getSize(game->view).y > MAX_ZOOM) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x - ZOOM * 16 / 9, view_size.y - ZOOM});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            sfSprite_getScale(game->assets->cursor).x - ZOOM / 100,
            sfSprite_getScale(game->assets->cursor).y - ZOOM / 100});
    }
    if (event->key.code == sfKeyLControl &&
        sfView_getSize(game->view).y < MAX_DEZOOM) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x + ZOOM * 16 / 9, view_size.y + ZOOM});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            sfSprite_getScale(game->assets->cursor).x + ZOOM / 100,
            sfSprite_getScale(game->assets->cursor).y + ZOOM / 100});
    }
}
