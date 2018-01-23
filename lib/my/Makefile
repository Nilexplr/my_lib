##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## lib
##

CC	=	ar rc

RM	=	rm -f

NAME	=	libmy.a

SRC	=	my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_revstr.c		\
		disp_stdarg.c		\
		my_putnbr_base.c	\
		disp_basearg.c		\
		my_putunsignedint.c	\
		disp_ptrarg.c		\
		my_printf.c		\
		my_str_isnum.c		\
		my_str_isalpha.c	\
		my_strcmp.c		\
		my_getnbr.c		\
		my_strcpy.c		\
		my_strncpy.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	= 	-I include -Wall -Wextra -W

all:	comp clean

comp:
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
