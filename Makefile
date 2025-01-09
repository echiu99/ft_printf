NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_conman.c ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_putun_int.c ft_puthexlo.c ft_puthexup.c ft_strlen.c ft_itoa.c ft_putchar_fd.c ft_hex_len.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
