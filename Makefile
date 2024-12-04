NAME    = libftprintf.a

SRCS    = ./sources/ft_printf.c \
          ./sources/ft_putnbr.c \
          ./sources/ft_write_char.c

OBJS    = $(SRCS:.c=.o)

CC      = cc

RM      = rm -f

INCLUDES = ./includes/ft_printf.h

CFLAGS  = -Wall -Wextra -Werror -I./includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
