NAME = libftprintf.a


INCLUDE = ft_printf.h


RM = rm -f


CC = gcc


CFLAGS = -Wall -Wextra -Werror


SRCs =	ft_printf.c		\
		format_printf.c	\


OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	@echo "Compiling .."
	ar rcs $(NAME) $(OBJs)
	@echo "Done !"

$.o : %.c
	$(cc) $(CFLAGS) -c $< -o $

clean :
	@echo "Remove .o  ..."
	$(RM) $(OBJs)
	@echo "Done !"

fclean : clean
	@echo "Remove lib ..."
	$(RM) $(NAME)
	@echo "Done !"

re : fclean all

.PHONY: all clean fclean re