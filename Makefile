##
## EPITECH PROJECT, 2018
## PSU_my_printf_2018
## File description:
## Makefile
##

SRC	=	my_printf.c	\
		my_putchar.c	\
		my_putstr.c	\
		second_file.c	\
		third_file.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-g -g3 -ggdb -I ./include

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
