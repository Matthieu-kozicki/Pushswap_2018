##
## EPITECH PROJECT, 2018
## push
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/my_putchar.c \
		src/my_put_nbr.c \
		src/my_putstr.c \
		src/sorted.c \
		src/arrayed.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I include/

NAME	=	push_swap

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

%.o: %.c
	gcc -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
