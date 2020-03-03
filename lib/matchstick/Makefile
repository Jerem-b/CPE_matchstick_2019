##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the lib
##

SRC =	check_win.c\
		display_map.c\
		error_handling.c\
		fill_struct.c\
		ia_turn.c\
		make_map.c\
		my_atoi.c\
		my_put.c\
		my_scanf.c\
		player_turn.c\
		remove_stick.c\
		ia_remove_stick.c\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmatch.a

all:    $(NAME)
	cp match.h ../../include/

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -c -g $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all