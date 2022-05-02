/*
** EPITECH PROJECT, 2022
** Zoom View City Event for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void zoom_view(game_t *game)
{
    sfEvent *event = game->event->event;
    sfVector2f view_size = sfView_getSize(game->view);
    float offset = VIEW_ZOOM_VALUE;

    if (event->key.code == game->keys[ZOOM_IN] &&
        sfView_getSize(game->view).y > VIEW_MAX_ZOOM_IN) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x - offset * 16 / 9, view_size.y - offset});
    }
    if (event->key.code == game->keys[ZOOM_OUT] &&
        sfView_getSize(game->view).y < VIEW_MAX_ZOOM_OUT) {
        sfView_setSize(game->view, (sfVector2f){
            view_size.x + offset * 16 / 9, view_size.y + offset});
    }
}

void rotate_view(game_t *game)
{
    sfEvent *event = game->event->event;
    float rotation = sfView_getRotation(game->view);

    if (event->key.code == game->keys[ROTATE_LEFT])
        sfView_setRotation(game->view, rotation + VIEW_ROTATE_VALUE);
    if (event->key.code == game->keys[ROTATE_RIGHT])
        sfView_setRotation(game->view, rotation - VIEW_ROTATE_VALUE);
}

void reset_view(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys[RESET_VIEW]) {
        if (game->stage == CITY_STAGE) {
            sfView_setSize(game->view, VIEW_CITY_SIZE);
            sfView_setRotation(game->view, VIEW_DEFAULT_ROTATION);
            return;
        }
        sfView_setSize(game->view, VIEW_DEFAULT_SIZE);
        sfView_setRotation(game->view, VIEW_DEFAULT_ROTATION);
    }
}

void check_and_center_view(
    game_t *game, sfSprite *character, sfSprite *background)
{
    sfVector2f pos = sfSprite_getPosition(character);
    sfVector2f size = sfView_getSize(game->view);
    sfVector2f center = sfView_getCenter(game->view);
    sfFloatRect rect = sfSprite_getGlobalBounds(background);

    if (pos.x - size.x / 2 <= 0)
        pos.x = size.x / 2;
    else if (pos.x + size.x / 2 >= rect.width)
        pos.x = rect.width - size.x / 2;
    if (pos.y - size.y / 2 <= 0)
        pos.y = size.y / 2;
    else if (pos.y + size.y / 2 >= rect.height)
        pos.y = rect.height - size.y / 2;
    if (pos.x != center.x || pos.y != center.y)
        sfView_setCenter(game->view, pos);
}
