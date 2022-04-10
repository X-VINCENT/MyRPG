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
								destroy/assets/appartment/destroy.c          \
								destroy/assets/city/destroy.c                \
								destroy/assets/clothe/destroy.c 			 \
								destroy/assets/home_menu/destroy.c           \
								destroy/assets/home_menu/parallax/destroy.c  \
								destroy/assets/ice_shop/destroy.c 			 \
								destroy/assets/market/destroy.c 			 \
								destroy/assets/museum1/destroy.c 			 \
								destroy/assets/museum2/destroy.c 			 \
								destroy/assets/rat/destroy.c                 \
								destroy/assets/settings/destroy.c            \
								destroy/assets/top_bar/destroy.c             \
								destroy/assets/destroy.c                     \
								destroy/audio/destroy.c                      \
								destroy/audio/musics.c                       \
								destroy/audio/sounds.c                       \
								destroy/inventory/destroy.c                  \
								destroy/destroy.c                            \
								errors/check_env.c                           \
								errors/check_file.c                          \
								errors/check_pictures.c                      \
								errors/help.c                                \
								display/appartment/display.c                 \
								display/city/display.c                       \
								display/inventory/display.c                  \
								display/home_menu/parallax/animate.c         \
								display/home_menu/parallax/display.c         \
								display/home_menu/display.c                  \
								display/ice_shop/display.c 					 \
								display/market/display.c 					 \
								display/museum1/display.c 					 \
								display/museum2/display.c 					 \
								display/clothe/display.c 					 \
								display/rat/display.c                        \
								display/settings/audio.c                     \
								display/settings/controls.c                  \
								display/settings/display.c                   \
								display/settings/graphics.c                  \
								display/settings/game.c                      \
								display/top_bar/display.c                    \
								event/appartment/locations/door.c            \
								event/appartment/locations/locations.c       \
								event/appartment/key_pressed.c               \
								event/appartment/mouse_moved.c               \
								event/appartment/mouse_pressed.c             \
								event/inventory/key_pressed.c				 \
								event/city/locations/appartment.c            \
								event/city/locations/clothe_shop.c 			 \
								event/city/locations/ice_cream_shop.c        \
								event/city/locations/locations.c             \
								event/city/locations/market.c                \
								event/city/locations/museum.c 				 \
								event/city/key_pressed.c                     \
								event/city/mouse_moved.c                     \
								event/city/mouse_pressed.c                   \
								event/home_menu/key_pressed.c                \
								event/home_menu/mouse_moved.c                \
								event/home_menu/mouse_pressed.c              \
								event/ice_cream_shop/locations/door.c        \
								event/ice_cream_shop/locations/locations.c   \
								event/ice_cream_shop/key_pressed.c           \
								event/ice_cream_shop/mouse_moved.c           \
								event/ice_cream_shop/mouse_pressed.c         \
								event/rat/animations/check/appartment.c      \
								event/rat/animations/check/check.c           \
								event/rat/animations/check/city.c            \
								event/rat/animations/animate.c               \
								event/rat/animations/move.c                  \
								event/rat/animations/position.c              \
								event/rat/mouse_moved.c                      \
								event/rat/mouse_pressed.c                    \
								event/settings/audio/key_pressed.c           \
								event/settings/audio/mouse_moved.c           \
								event/settings/audio/mouse_pressed.c         \
								event/settings/controls/key_pressed.c        \
								event/settings/controls/mouse_moved.c        \
								event/settings/controls/mouse_pressed.c      \
								event/settings/game/key_pressed.c            \
								event/settings/game/mouse_moved.c            \
								event/settings/game/mouse_pressed.c          \
								event/settings/graphics/key_pressed.c        \
								event/settings/graphics/mouse_moved.c        \
								event/settings/graphics/mouse_pressed.c      \
								event/settings/key_pressed.c                 \
								event/settings/mouse_moved.c                 \
								event/settings/mouse_pressed.c               \
								event/top_bar/key_pressed.c                  \
								event/top_bar/mouse_moved.c                  \
								event/top_bar/mouse_pressed.c                \
								event/transitions/key_pressed.c              \
								event/transitions/mouse_moved.c              \
								event/transitions/mouse_pressed.c            \
								event/event_1.c                              \
								event/event_2.c					             \
								event/event_3.c					             \
								stage/appartment.c                           \
								stage/city.c                                 \
								stage/clothe.c                               \
								stage/home_menu.c                            \
								stage/ice_shop.c                             \
								stage/market.c                               \
								stage/museum1.c								 \
								stage/museum2.c 							 \
								stage/settings.c 							 \
								stage/stage.c                                \
								tools/audio.c                                \
								tools/fps.c                                  \
								tools/location.c                             \
								tools/res.c                                  \
								tools/view.c                                 \
								rpg.c                                        \
								init/assets/appartment/init.c                \
								init/assets/city/init.c                      \
								init/assets/city/animated/init_doors.c       \
								init/assets/clothe/init.c 					 \
								init/assets/home_menu/init.c                 \
								init/assets/home_menu/parallax/init.c        \
								init/assets/ice_cream/init.c                 \
								init/assets/market/init.c                    \
								init/assets/museum1/init.c 					 \
								init/assets/museum2/init.c 					 \
								init/assets/rat/init.c                       \
								init/assets/settings/audio.c                 \
								init/assets/settings/controls.c              \
								init/assets/settings/game.c                  \
								init/assets/settings/graphics.c              \
								init/assets/settings/init.c                  \
								init/assets/top_bar/init.c                   \
								init/assets/transitions/init.c               \
								init/assets/init.c                           \
								init/audio/init.c                            \
								init/audio/musics.c                          \
								init/audio/sounds.c                          \
								init/inventory/init.c                        \
								init/game.c)

SRC_CSFML           =           $(addprefix csfml/,                          \
								animation.c                                  \
								audio.c                                      \
								audio2.c                                     \
								clock.c                                      \
								convex_shape.c                               \
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

CFLAGS              +=          -Iinclude -W -Wall -Wextra
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

$(NAME): zip $(OBJ_MAIN) $(OBJ) unzip
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
