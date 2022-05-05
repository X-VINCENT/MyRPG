/*
** EPITECH PROJECT, 2022
** Init Settings Graphics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_settings_graphics_titles(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2f p_res_title = init_pos(700, 305);
    sfVector2f p_fps_title = init_pos(700, 405);
    sfVector2f p_vsync_title = init_pos(700, 505);

    s_graphics->title_res = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_RESOLUTION);
    set_text_origin_middle_left(s_graphics->title_res);
    sfText_setPosition(s_graphics->title_res, p_res_title);
    s_graphics->title_fps = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_FRAMERATE);
    set_text_origin_middle_left(s_graphics->title_fps);
    sfText_setPosition(s_graphics->title_fps, p_fps_title);
    s_graphics->title_vsync = create_text(
        FONT_BUENARD, sfWhite, 36, ENGLISH_VSYNC);
    set_text_origin_middle_left(s_graphics->title_vsync);
    sfText_setPosition(s_graphics->title_vsync, p_vsync_title);
}

void init_settings_graphics_res(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2f p_arrow_left = init_pos(1450, 310);
    sfVector2f p_arrow_right = init_pos(1750, 310);
    sfVector2f p_res = init_pos(1600, 305);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f invert_scale = {-0.5, 0.5};

    s_graphics->res_left = create_arrow(game, p_arrow_left, scale);
    s_graphics->res_right = create_arrow(game, p_arrow_right, invert_scale);
    s_graphics->res = malloc(sizeof(sfText *) * 5);
    s_graphics->res[0] = create_text(FONT_BUENARD, sfWhite, 36, "1280x720");
    s_graphics->res[1] = create_text(FONT_BUENARD, sfWhite, 36, "1920x1080");
    s_graphics->res[2] = create_text(FONT_BUENARD, sfWhite, 36, "2560x1440");
    s_graphics->res[3] = create_text(FONT_BUENARD, sfWhite, 36, "3840x2160");
    s_graphics->res[4] = NULL;
    for (int idx = 0; s_graphics->res[idx] != NULL; idx += 1) {
        set_text_origin(s_graphics->res[idx]);
        sfText_setPosition(s_graphics->res[idx], p_res);
    }
}

void init_settings_graphics_fps(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2f p_arrow_left = init_pos(1450, 410);
    sfVector2f p_arrow_right = init_pos(1750, 410);
    sfVector2f p_fps = init_pos(1600, 405);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f invert_scale = {-0.5, 0.5};

    s_graphics->fps_left = create_arrow(game, p_arrow_left, scale);
    s_graphics->fps_right = create_arrow(game, p_arrow_right, invert_scale);
    s_graphics->fps = malloc(sizeof(sfText *) * 6);
    s_graphics->fps[0] = create_text(FONT_BUENARD, sfWhite, 36, "30");
    s_graphics->fps[1] = create_text(FONT_BUENARD, sfWhite, 36, "60");
    s_graphics->fps[2] = create_text(FONT_BUENARD, sfWhite, 36, "144");
    s_graphics->fps[3] = create_text(FONT_BUENARD, sfWhite, 36, "240");
    s_graphics->fps[4] = create_text(FONT_BUENARD, sfWhite, 36, "Unlimited");
    s_graphics->fps[5] = NULL;
    for (int idx = 0; s_graphics->fps[idx] != NULL; idx += 1) {
        set_text_origin(s_graphics->fps[idx]);
        sfText_setPosition(s_graphics->fps[idx], p_fps);
    }
}

void init_settings_graphics_vsync(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2f p_arrow_left = init_pos(1450, 510);
    sfVector2f p_arrow_right = init_pos(1750, 510);
    sfVector2f p_vsync = init_pos(1600, 505);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f invert_scale = {-0.5, 0.5};

    s_graphics->vsync_left = create_arrow(game, p_arrow_left, scale);
    s_graphics->vsync_right = create_arrow(game, p_arrow_right, invert_scale);
    s_graphics->vsync = malloc(sizeof(sfText *) * 3);
    s_graphics->vsync[0] = create_text(FONT_BUENARD, sfWhite, 36, "OFF");
    s_graphics->vsync[1] = create_text(FONT_BUENARD, sfWhite, 36, "ON");
    s_graphics->vsync[2] = NULL;
    for (int idx = 0; s_graphics->vsync[idx] != NULL; idx += 1) {
        set_text_origin(s_graphics->vsync[idx]);
        sfText_setPosition(s_graphics->vsync[idx], p_vsync);
    }
}

void init_settings_graphics(game_t *game)
{
    game->assets->settings->graphics = malloc(sizeof(settings_graphics_t));
    init_settings_graphics_titles(game);
    init_settings_graphics_res(game);
    init_settings_graphics_fps(game);
    init_settings_graphics_vsync(game);
}
