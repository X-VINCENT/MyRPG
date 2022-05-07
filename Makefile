##
## EPITECH PROJECT, 2022
## Makefile for My RPG
## File description:
## Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
##

NAME                =           my_rpg
TEST_NAME           =           unit_tests

SRC_MAIN            =           $(addprefix src/,                            \
								main.c)

SRC                 =           $(addprefix src/,                            \
								destroy/abilities/destroy.c                  \
								destroy/assets/appartment/destroy.c          \
								destroy/assets/bar/destroy.c			   	 \
								destroy/assets/city/destroy.c                \
								destroy/assets/clothe/destroy.c 			 \
								destroy/assets/game_menu/destroy.c           \
								destroy/assets/home_menu/destroy.c           \
								destroy/assets/home_menu/parallax/destroy.c  \
								destroy/assets/howtoplay/destroy.c           \
								destroy/assets/ice_shop/destroy.c 			 \
								destroy/assets/introduction/destroy.c 	     \
								destroy/assets/market/destroy.c 			 \
								destroy/assets/museum/destroy.c 			 \
								destroy/assets/rat/destroy.c                 \
								destroy/assets/settings/controls.c           \
								destroy/assets/settings/destroy.c            \
								destroy/assets/shop/destroy.c                \
								destroy/assets/stats/destroy.c               \
								destroy/assets/top_bar/destroy.c             \
								destroy/assets/destroy.c                     \
								destroy/assets/pnjs/destroy.c                \
								destroy/audio/destroy.c                      \
								destroy/audio/musics.c                       \
								destroy/audio/sounds.c                       \
								destroy/data/destroy.c                       \
								destroy/fights/destroy.c                     \
								destroy/inventory/destroy.c                  \
								destroy/particles/destroy.c                  \
								destroy/textures/destroy.c                   \
								destroy/destroy.c                            \
								destroy/save_game.c                          \
								destroy/save.c                               \
								display/abilities/display.c                  \
								display/appartment/display.c                 \
								display/bar/display.c                        \
								display/city/display.c                       \
								display/city/fire.c                          \
								display/city/minimap.c                       \
								display/inventory/display.c                  \
								display/pnjs/display.c                       \
								display/city/car.c                           \
								display/pnjs/move_circle.c                   \
								display/pnjs/check_intersect_circle.c        \
								display/fights/characters.c                  \
								display/fights/display.c                     \
								display/fights/gui.c                         \
								display/fights/result.c                      \
								display/game_menu/display.c                  \
								display/home_menu/parallax/animate.c         \
								display/home_menu/parallax/display.c         \
								display/home_menu/display.c                  \
								display/howtoplay/display.c                  \
								display/ice_shop/display.c 					 \
								display/introduction/display.c 			     \
								display/market/display.c 					 \
								display/museum/display.c 					 \
								display/clothe/display.c 					 \
								display/rat/actions.c                        \
								display/rat/display.c                        \
								display/settings/audio.c                     \
								display/settings/controls.c                  \
								display/settings/display.c                   \
								display/settings/graphics.c                  \
								display/settings/game.c                      \
								display/shop/display.c                       \
								display/stats/display.c                      \
								display/top_bar/display.c                    \
								display/transition/display.c                 \
								errors/check_assets.c                        \
								errors/check_audio.c                         \
								errors/check_env.c                           \
								errors/check_file.c                          \
								errors/check_fonts.c                         \
								errors/check_images.c                        \
								errors/check_data.c                          \
								errors/help.c                                \
								event/abilities/key_pressed.c                \
								event/abilities/mouse_moved.c                \
								event/abilities/mouse_pressed.c              \
								event/abilities/move_tree.c                  \
								event/abilities/set_abilities.c              \
								event/appartment/locations/door.c            \
								event/appartment/locations/locations.c       \
								event/appartment/key_pressed.c               \
								event/appartment/mouse_moved.c               \
								event/appartment/mouse_pressed.c             \
								event/bar/locations/door.c                   \
								event/bar/locations/locations.c              \
								event/bar/sell.c 		                     \
								event/bar/key_pressed.c                      \
								event/bar/mouse_moved.c                      \
								event/bar/mouse_pressed.c                    \
								event/inventory/key_pressed.c				 \
								event/city/locations/appartment.c            \
								event/city/locations/bar.c   	             \
								event/city/locations/pnjs.c                  \
								event/city/locations/clothe_shop.c 			 \
								event/city/locations/ice_cream_shop.c        \
								event/city/locations/locations.c             \
								event/city/locations/market.c                \
								event/city/locations/museum.c 				 \
								event/city/key_pressed.c                     \
								event/city/mouse_moved.c                     \
								event/city/mouse_pressed.c                   \
								event/clothe/locations/door.c 				 \
								event/clothe/locations/locations.c 			 \
								event/clothe/key_pressed.c 					 \
								event/clothe/mouse_moved.c 					 \
								event/clothe/mouse_pressed.c 				 \
								event/game_menu/key_pressed.c                \
								event/game_menu/mouse_moved.c                \
								event/game_menu/mouse_pressed.c              \
								event/fights/attacks/bite.c                  \
								event/fights/attacks/enemy.c                 \
								event/fights/attacks/kick.c                  \
								event/fights/key_pressed.c                   \
								event/fights/create_fight.c                  \
								event/fights/mouse_moved.c                   \
								event/fights/mouse_pressed.c                 \
								event/home_menu/key_pressed.c                \
								event/home_menu/mouse_moved.c                \
								event/home_menu/mouse_pressed.c              \
								event/howtoplay/key_pressed.c                \
								event/howtoplay/mouse_moved.c                \
								event/howtoplay/mouse_pressed.c              \
								event/market/locations/door.c 				 \
								event/market/locations/locations.c 			 \
								event/market/key_pressed.c 		             \
								event/market/mouse_moved.c 		             \
								event/market/mouse_pressed.c 		         \
								event/museum/locations/door.c 				 \
								event/museum/locations/locations.c 			 \
								event/museum/key_pressed.c 					 \
								event/museum/mouse_moved.c 					 \
								event/museum/mouse_pressed.c 				 \
								event/ice_cream_shop/locations/door.c        \
								event/ice_cream_shop/locations/locations.c   \
								event/ice_cream_shop/key_pressed.c           \
								event/ice_cream_shop/mouse_moved.c           \
								event/ice_cream_shop/mouse_pressed.c         \
								event/introduction/key_pressed.c             \
								event/rat/animations/check/check.c           \
								event/rat/animations/check/check2.c          \
								event/rat/animations/check/collision.c       \
								event/rat/animations/animate.c               \
								event/rat/animations/move.c                  \
								event/rat/animations/move2.c                 \
								event/rat/animations/position.c              \
								event/rat/mouse_moved.c                      \
								event/rat/mouse_pressed.c                    \
								event/rat/move_rat_check.c                   \
								event/settings/audio/key_pressed.c           \
								event/settings/audio/mouse_moved.c           \
								event/settings/audio/mouse_pressed.c         \
								event/settings/choose_key/key_pressed.c      \
								event/settings/choose_key/mouse_moved.c      \
								event/settings/choose_key/mouse_pressed.c    \
								event/settings/controls/key_pressed.c        \
								event/settings/controls/mouse_moved.c        \
								event/settings/controls/mouse_pressed.c      \
								event/settings/controls/move_controls.c      \
								event/settings/game/key_pressed.c            \
								event/settings/game/mouse_moved.c            \
								event/settings/game/mouse_pressed.c          \
								event/settings/graphics/key_pressed.c        \
								event/settings/graphics/mouse_moved.c        \
								event/settings/graphics/mouse_pressed.c      \
								event/settings/key_pressed.c                 \
								event/settings/mouse_moved.c                 \
								event/settings/mouse_pressed.c               \
								event/shop/key_pressed.c                     \
								event/shop/mouse_moved.c                     \
								event/shop/mouse_pressed.c                   \
								event/shop/mouse_released.c                  \
								event/stats/key_pressed.c                    \
								event/stats/mouse_moved.c                    \
								event/stats/mouse_pressed.c                  \
								event/top_bar/key_pressed.c                  \
								event/top_bar/mouse_moved.c                  \
								event/top_bar/mouse_pressed.c                \
								event/check_event.c                          \
								event/event_1.c                              \
								event/event_2.c                              \
								event/event_3.c                              \
								event/event_4.c                              \
								init/abilities/init.c                        \
								init/abilities/menu.c                        \
								init/assets/appartment/init.c                \
								init/assets/car/init_car.c                   \
								init/assets/appartment/skin_selector.c       \
								init/assets/bar/init.c		                 \
								init/assets/city/init.c                      \
								init/assets/city/animated/init_doors.c       \
								init/assets/clothe/init.c                    \
								init/assets/game_menu/init.c                 \
								init/assets/game_menu/save.c                 \
								init/assets/home_menu/init.c                 \
								init/assets/home_menu/parallax/init.c        \
								init/assets/howtoplay/init.c                 \
								init/assets/ice_cream/init.c                 \
								init/assets/introduction/init.c              \
								init/assets/market/init.c                    \
								init/assets/museum/init.c                    \
								init/assets/pnj/init_pnj.c                   \
								init/assets/pnj/black_first.c                \
								init/assets/pnj/pnj_guard_museum_left.c      \
								init/assets/pnj/guard_scene_two_m.c          \
								init/assets/pnj/museum_accueil_hotess.c      \
								init/assets/pnj/pnj_g_m_left_inside.c        \
								init/assets/pnj/pnj_g_m_right_inside.c       \
								init/assets/pnj/pnj_guard_museum_right.c     \
								init/assets/pnj/pnj_museum_indicator.c       \
								init/assets/pnj/guide_pnj_top_right.c        \
								init/assets/pnj/girl_pnj_appart_front.c      \
								init/assets/pnj/pnj_market_bar.c             \
								init/assets/pnj/cashier.c                    \
								init/assets/pnj/init_pnj_citizens.c          \
								init/assets/pnj/pnj_guard_last_museum.c      \
								init/assets/rat/actions.c                    \
								init/assets/rat/init.c                       \
								init/assets/rat/init2.c                      \
								init/assets/settings/audio.c                 \
								init/assets/settings/controls_choose_key.c   \
								init/assets/settings/controls.c              \
								init/assets/settings/game.c                  \
								init/assets/settings/graphics.c              \
								init/assets/settings/init.c                  \
								init/assets/shop/init.c                      \
								init/assets/stats/init.c                     \
								init/assets/stats/stat.c                     \
								init/assets/stats/wallet.c                   \
								init/assets/top_bar/init.c                   \
								init/assets/transition/init.c                \
								init/assets/end/init.c                       \
								init/assets/init.c                           \
								init/audio/init.c                            \
								init/audio/musics.c                          \
								init/audio/sounds.c                          \
								init/data/init.c                             \
								init/data/load_game.c                        \
								init/data/load_save.c                        \
								init/fights/enemy.c                          \
								init/fights/init.c                           \
								init/fights/lifebars.c                       \
								init/inventory/init.c                        \
								init/particles/init.c                        \
								init/textures/characters.c                   \
								init/textures/environnment.c                 \
								init/textures/icons.c                        \
								init/textures/init.c                         \
								init/textures/inventory.c                    \
								init/textures/menus.c                        \
								init/textures/objects.c                      \
								init/game.c                                  \
								init/keys.c                                  \
								stage/abilities.c                            \
								stage/appartment.c                           \
								stage/check_escape.c                         \
								stage/bar.c                                  \
								stage/city.c                                 \
								stage/clothe.c                               \
								stage/game_menu.c                            \
								stage/fights.c                               \
								stage/home_menu.c                            \
								stage/howtoplay.c                            \
								stage/ice_shop.c                             \
								stage/introduction.c                         \
								stage/market.c                               \
								stage/museum.c                               \
								stage/settings.c                             \
								stage/stage.c                                \
								stage/shop.c                                 \
								stage/stats.c                                \
								stage/end.c                                  \
								stage/transition.c                           \
								tools/keys/get_name.c                        \
								tools/keys/get_name2.c                       \
								tools/keys/get_name3.c                       \
								tools/language/abilities/english.c           \
								tools/language/abilities/french.c            \
								tools/language/abilities/german.c            \
								tools/language/abilities/origin.c            \
								tools/language/abilities/spanish.c           \
								tools/language/game_menu/english.c           \
								tools/language/game_menu/french.c            \
								tools/language/game_menu/german.c            \
								tools/language/game_menu/origin.c            \
								tools/language/game_menu/spanish.c           \
								tools/language/settings/english.c            \
								tools/language/settings/french.c             \
								tools/language/settings/german.c             \
								tools/language/settings/origin.c             \
								tools/language/settings/spanish.c            \
								tools/language/stats/english.c               \
								tools/language/stats/french.c                \
								tools/language/stats/german.c                \
								tools/language/stats/origin.c                \
								tools/language/stats/spanish.c               \
								tools/language/english.c                     \
								tools/language/french.c                      \
								tools/language/german.c                      \
								tools/language/language.c                    \
								tools/language/origin.c                      \
								tools/language/spanish.c                     \
								tools/list/manage_list.c                     \
								tools/save/read.c                            \
								tools/save/write.c                           \
								tools/arrow.c                                \
								tools/fps.c                                  \
								tools/location.c                             \
								tools/object.c                               \
								tools/object2.c                              \
								tools/res.c                                  \
								tools/reset_objects.c                        \
								tools/set_save_values.c                      \
								tools/time.c                                 \
								tools/view.c                                 \
								tools/volume.c                               \
								tools/xp.c                                   \
								rpg.c)

SRC_CSFML           =           $(addprefix csfml/,                          \
								animation.c                                  \
								audio.c                                      \
								audio2.c                                     \
								clock.c                                      \
								image.c                                      \
								init.c                                       \
								shape.c                                      \
								sprite.c                                     \
								text.c                                       \
								view.c                                       \
								window.c)

SRC_TESTS           =           $(addprefix tests/,                          \
								test_check_env.c                             \
								test_check_file.c)
SRC_TESTS           +=          $(SRC) $(SRC_CSFML)

OBJ_MAIN            =           $(SRC_MAIN:.c=.o)
OBJ                 =           $(SRC:.c=.o) $(SRC_CSFML:.c=.o)

CFLAGS              +=          -Iinclude
LDFLAGS             =           -Llib -lmy
LDFLAGS             +=          -lcsfml-graphics -lcsfml-window
LDFLAGS             +=          -lcsfml-system -lcsfml-audio
CRITERION           =           --coverage -lcriterion

COMPILING_LIBS      =           "*******  COMPILING LIBS.  *******"
LIBS_COMPILED       =           "*******   LIBS COMPILED   *******"
COMPILING_SRCS      =           "*******  COMPILING SRCS.  *******"
SRCS_COMPILED       =           "*******   SRCS COMPILED   *******"
COMPILING_TESTS     =           "*******  COMPILING TESTS  *******"
TESTS_COMPILED      =           "*******  TESTS COMPILED.  *******"
CLEANING            =           "*******     CLEANING.     *******"
CLEANED             =           "*******  CLEAN COMPLETED  *******"
TESTING             =           "*******      TESTING.     *******"
TESTED              =           "*******  TESTS FINISHED.  *******"

all: $(NAME)

$(NAME): $(OBJ_MAIN) $(OBJ)
	@echo ""
	@echo $(COMPILING_LIBS)
	make -C lib re
	@echo $(LIBS_COMPILED)
	@echo ""
	@echo $(COMPILING_SRCS)
	@echo cc "\t" -o $(OBJ_MAIN)
	@echo cc "\t" -o $(OBJ)
	@$(CC) -o $(NAME) $(OBJ_MAIN) $(OBJ) $(CFLAGS) $(LDFLAGS)
	@echo $(SRCS_COMPILED)
	@echo ""

zip:
	@echo "*******  CHECKING FILES.  *******"
	if test -s assets.tar.gz; \
	then echo "*******  ASSETS ZIPPED  *******"; \
	else tar -zcvf assets.tar.gz ./assets && rm -rf ./assets; \
	fi
	@echo "*******  ASSETS ZIPPED  *******"

unzip:
	@echo "*******  UNZIPPING ASSETS.  *******"
	tar -zxvf assets.tar.gz
	$(RM) assets.tar.gz
	@echo "*******   ASSETS UNZIPPED   *******"

clean:
	@echo ""
	@echo $(CLEANING)
	$(RM) $(OBJ_MAIN)
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno
	@make -C lib clean
	@echo $(CLEANED)
	@echo ""

fclean: clean
	$(RM) $(NAME)
	@make -C lib fclean

re: clean all

fast:
	make fclean -j
	make -j
	make clean
	./my_rpg

tests_run:
	@echo ""
	@echo $(COMPILING_LIBS)
	make -C lib re
	@echo $(LIBS_COMPILED)
	@echo ""
	@echo $(COMPILING_TESTS)
	$(CC) -o $(TEST_NAME) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	@echo $(TESTS_COMPILED)
	@echo ""
	@echo $(TESTING)
	./$(TEST_NAME)
	$(RM) $(TEST_NAME)
	@echo $(TESTED)
	@echo ""

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: tests_run cover fclean

.PHONY: all $(NAME) clean fclean re fast tests_run cover my_tests zip unzip
