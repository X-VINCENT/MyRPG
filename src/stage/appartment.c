/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_appartment_music(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_museum);
    sfMusic_stop(game->audio->musics->music_fight);
}

void display_skin(sfRenderWindow *window, skin_t *skin)
{
    if (skin->is_unlocked == 0)
        sfSprite_setTextureRect(skin->bg, R_SKIN_LOCKED);
    else
        sfSprite_setTextureRect(skin->bg, R_SKIN_UNLOCKED);
    sfRenderWindow_drawSprite(window, skin->bg, NULL);
    sfRenderWindow_drawSprite(window, skin->preview, NULL);
    sfRenderWindow_drawText(window, skin->value_text, NULL);
}

void display_skin_selector(game_t *game)
{
    skin_selector_t *skin_selector = game->assets->appartment->skin_selector;
    char *money_text = my_put_nbr_in_str(game->data->current->nb_golds);

    sfText_setString(skin_selector->money, money_text);
    set_text_origin(skin_selector->money);
    sfRenderWindow_drawSprite(game->window, skin_selector->bg, NULL);
    sfRenderWindow_drawText(game->window, skin_selector->title, NULL);
    sfRenderWindow_drawText(game->window, skin_selector->money, NULL);
    sfRenderWindow_drawSprite(game->window, skin_selector->gold, NULL);
    display_skin(game->window, skin_selector->blue);
    display_skin(game->window, skin_selector->green);
    display_skin(game->window, skin_selector->purple);
    display_skin(game->window, skin_selector->red);
    free(money_text);
}

void appartment_stage(game_t *game)
{
    appartment_t *apart = game->assets->appartment;

    set_appartment_music(game);
    sfRenderWindow_drawSprite(game->window, apart->bg, NULL);
    display_appartment(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, apart->bg_top, NULL);
    if (apart->is_saving == 1) {
        sfRenderWindow_drawSprite(game->window, apart->sign, NULL);
        sfRenderWindow_drawText(game->window, apart->press_interact, NULL);
    }
    if (apart->is_skin_selector_opened == 1)
        display_skin_selector(game);
    else
        check_rat_key_pressed(game);
    display_objects(game->window, apart->objects);
    event_objects(game, apart->objects, game->keys[INTERACT]);
    display_cursor(game);
}
