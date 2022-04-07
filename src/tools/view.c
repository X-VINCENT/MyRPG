/*
** EPITECH PROJECT, 2022
** Zoom View City  Event for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void zoom_view(game_t *game)
{
    sfEvent *event = game->event->event;
    sfVector2f view_size = sfView_getSize(game->view);
    float zoom_x = sfSprite_getScale(game->assets->cursor).x;
    float zoom_y = sfSprite_getScale(game->assets->cursor).y;
    float offset = VIEW_ZOOM_VALUE;

    if (event->key.code == game->keys->zoom_in &&
        sfView_getSize(game->view).y > VIEW_MAX_ZOOM_IN) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x - offset * 16 / 9, view_size.y - offset});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            zoom_x - offset / 100, zoom_y - offset / 100});
    }
    if (event->key.code == game->keys->zoom_out &&
        sfView_getSize(game->view).y < VIEW_MAX_ZOOM_OUT) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x + offset * 16 / 9, view_size.y + offset});
        sfSprite_setScale(game->assets->cursor, (sfVector2f){
            zoom_x + offset / 100, zoom_y + offset / 100});
    }
}

void rotate_view(game_t *game)
{
    sfEvent *event = game->event->event;
    float rotation = sfView_getRotation(game->view);

    if (event->key.code == game->keys->rotate_left)
        sfView_setRotation(game->view, rotation + VIEW_ROTATE_VALUE);
    if (event->key.code == game->keys->rotate_right)
        sfView_setRotation(game->view, rotation - VIEW_ROTATE_VALUE);
}

void reset_view(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys->reset_view) {
        sfView_setSize(game->view, VIEW_DEFAULT_SIZE);
        sfView_setRotation(game->view, VIEW_DEFAULT_ROTATION);
    }
}

void check_and_center_view(
    game_t *game, sfSprite *character, sfSprite *background)
{
    sfVector2f pos = sfSprite_getPosition(character);
    sfVector2f view = sfView_getSize(game->view);
    sfFloatRect rect = sfSprite_getGlobalBounds(background);

    sfView_setCenter(game->view, pos);
}
