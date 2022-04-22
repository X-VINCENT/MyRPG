##
## EPITECH PROJECT, 2021
## Makefile for My Lib
## File description:
## Xavier VINCENT
##

NAME			=	libmy.a

SRC_MY			=	$(addprefix my/,                \
					my_arrlen.c                     \
					my_compute_power_rec.c          \
					my_compute_square_root.c        \
					my_convert_base.c               \
					my_find_prime_sup.c             \
					my_getnbr.c                     \
					my_getnbsize.c                  \
					my_is_prime.c                   \
					my_isneg.c                      \
					my_load_file_in_mem.c           \
					my_put_nbr_in_str.c             \
					my_put_nbr.c                    \
					my_putchar.c                    \
					my_puterror.c                   \
					my_putstr.c                     \
					my_revstr.c                     \
					my_showmem.c                    \
					my_showstr.c                    \
					my_sort_int_array.c             \
					my_str_isalpha.c                \
					my_str_islower.c                \
					my_str_isnum.c                  \
					my_str_isprintable.c            \
					my_str_isupper.c                \
					my_strcapitalize.c              \
					my_strcat.c                     \
					my_strcmp.c                     \
					my_strcpy.c                     \
					my_strlen.c                     \
					my_strlowcase.c                 \
					my_strncat.c                    \
					my_strncmp.c                    \
					my_strncpy.c                    \
					my_strstr.c                     \
					my_str_to_word_array.c          \
					my_strupcase.c                  \
					my_swap.c)

SRC_MY_PRINTF 	=	$(addprefix my_printf/,         \
					modstr.c                        \
					my_edit_str.c                   \
					my_printf.c                     \
					my_printf2.c                    \
					my_printf3.c                    \
					my_put_get.c)

OBJ_MY			=	$(SRC_MY:.c=.o)
OBJ_MY_PRINTF	=	$(SRC_MY_PRINTF:.c=.o)

ARCHIVE			=	ar rc
RM				=	rm -rf

all:				$(NAME)

$(NAME):			$(OBJ_MY) $(OBJ_MY_PRINTF)
	@echo "Make archive"
	@$(ARCHIVE) $(NAME) $(OBJ_MY) $(OBJ_MY_PRINTF)

clean:
	$(RM) $(OBJ_MY) $(OBJ_MY_PRINTF)

fclean: 			clean
	$(RM) $(NAME)

re:					fclean all

.PHONY:				all $(NAME) clean fclean re
