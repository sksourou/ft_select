NAME = ft_select
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
LDFLAGS = -L libft/ -lft
SRCS = src/ft_select.c src/init.c

OBJS = $(SRCS:.c=.o)

all: lib $(NAME)

lib:
	make -C libft

$(NAME): $(OBJS)
	$(CC) -ltermcap -o $@ $^ $(LDFLAGS)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re