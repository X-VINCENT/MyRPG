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
								destroy/destroy.c                            \
								destroy/map/destroy.c                        \
								errors/check_env.c                           \
								errors/check_file.c                          \
								errors/check_pictures.c                      \
								errors/help.c                                \
								game/display/map/display.c                   \
								game/event/event_1.c                         \
								game/event/event_2.c					     \
								game/event/event_3.c					     \
								game/stage/map.c                             \
								game/tools/audio.c                           \
								game/tools/fps.c                             \
								game/tools/res.c                             \
								game/my_rpg.c                                \
								init/map/init.c                              \
								init/init_assets.c                           \
								init/init_game.c)

SRC_CSFML           =           $(addprefix csfml/,                          \
								animation.c                                  \
								audio.c                                      \
								audio2.c                                     \
								clock.c                                      \
								init.c                                       \
								shape.c                                      \
								sprite.c                                     \
								text.c                                       \
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

.PHONY: all $(NAME) clean fclean re tests_run cover my_tests zip unzip
