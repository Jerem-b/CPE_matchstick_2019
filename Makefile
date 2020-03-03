##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CC	=	gcc

CFLAGS += -g

LIBS += -L./lib/matchstick -lmatch -I./include -lm

all:	$(NAME)
$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(LIBS) $(CFLAGS)
clean:
	@rm -rf *.o
fclean:	clean
	@rm -rf $(NAME)
re: fclean all
