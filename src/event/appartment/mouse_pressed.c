/*
** EPITECH PROJECT, 2022
** Appartment Mouse Button Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"
void set_rats_textures_2(game_t *game, const sfTexture *texture)
{
    rat_t *rat = game->assets->rat;

    sfSprite_setTexture(rat->dodge_up, texture, sfFalse);
    sfSprite_setTexture(rat->dodge_down, texture, sfFalse);
    sfSprite_setTexture(rat->dodge_left, texture, sfFalse);
    sfSprite_setTexture(rat->dodge_right, texture, sfFalse);
    sfSprite_setTexture(rat->dodge_up_left, texture, sfFalse);
    sfSprite_setTexture(rat->dodge_up_right, texture, sfFalse);
    sfSprite_setTexture(rat->kick_down, texture, sfFalse);
    sfSprite_setTexture(rat->kick_left, texture, sfFalse);
    sfSprite_setTexture(rat->kick_right, texture, sfFalse);
    sfSprite_setTexture(rat->kick_up_left, texture, sfFalse);
    sfSprite_setTexture(rat->kick_up_right, texture, sfFalse);
    sfSprite_setTexture(rat->bite_left, texture, sfFalse);
    sfSprite_setTexture(rat->bite_right, texture, sfFalse);
}

void set_rats_textures(game_t *game, const sfTexture *texture)
{
    rat_t *rat = game->assets->rat;

    sfSprite_setTexture(rat->idle_front, texture, sfFalse);
    sfSprite_setTexture(rat->idle_back, texture, sfFalse);
    sfSprite_setTexture(rat->idle_left, texture, sfFalse);
    sfSprite_setTexture(rat->idle_right, texture, sfFalse);
    sfSprite_setTexture(rat->idle_back_left, texture, sfFalse);
    sfSprite_setTexture(rat->idle_back_right, texture, sfFalse);
    sfSprite_setTexture(rat->movement_up, texture, sfFalse);
    sfSprite_setTexture(rat->movement_down, texture, sfFalse);
    sfSprite_setTexture(rat->movement_left, texture, sfFalse);
    sfSprite_setTexture(rat->movement_right, texture, sfFalse);
    sfSprite_setTexture(rat->movement_up_left, texture, sfFalse);
    sfSprite_setTexture(rat->movement_up_right, texture, sfFalse);
    set_rats_textures_2(game, texture);
}

void skin_mouse_pressed(game_t *game, skin_t *skin, sfVector2f coords)
{
    sfFloatRect r_skin = sfSprite_getGlobalBounds(skin->bg);

    if (sfFloatRect_contains(&r_skin, coords.x, coords.y)) {
        if (skin->is_unlocked == 1) {
            game->assets->appartment->is_skin_selector_opened = 0;
            return set_rats_textures(
                game, sfSprite_getTexture(skin->preview));
        }
        if (game->data->current->nb_golds < skin->value)
            return;
        skin->is_unlocked = 1;
        game->data->current->nb_golds -= skin->value;
    }
}

void skin_selector_mouse_pressed(game_t *game)
{
    skin_selector_t *skin_selector = game->assets->appartment->skin_selector;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    skin_mouse_pressed(game, skin_selector->blue, coords);
    skin_mouse_pressed(game, skin_selector->green, coords);
    skin_mouse_pressed(game, skin_selector->purple, coords);
    skin_mouse_pressed(game, skin_selector->red, coords);
}

void appartment_mouse_pressed(game_t *game)
{
    appartment_t *appartment = game->assets->appartment;

    if (appartment->is_skin_selector_opened == 1)
        skin_selector_mouse_pressed(game);
    rat_mouse_pressed(game);
}
