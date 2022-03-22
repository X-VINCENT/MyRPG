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

    if (event->key.code == game->keys->zoom_in &&
        sfView_getSize(game->view).y > MAX_ZOOM) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x - ZOOM_VALUE * 16 / 9, view_size.y - ZOOM_VALUE});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            sfSprite_getScale(game->assets->cursor).x - ZOOM_VALUE / 100,
            sfSprite_getScale(game->assets->cursor).y - ZOOM_VALUE / 100});
    }
    if (event->key.code == game->keys->zoom_out &&
        sfView_getSize(game->view).y < MAX_DEZOOM) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x + ZOOM_VALUE * 16 / 9, view_size.y + ZOOM_VALUE});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            sfSprite_getScale(game->assets->cursor).x + ZOOM_VALUE / 100,
            sfSprite_getScale(game->assets->cursor).y + ZOOM_VALUE / 100});
    }
}

void rotate_view(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys->rotate_left)
        sfView_setRotation(game->view,
            sfView_getRotation(game->view) + ROTATE_VALUE);
    if (event->key.code == game->keys->rotate_right)
        sfView_setRotation(game->view,
            sfView_getRotation(game->view) - ROTATE_VALUE);
}
