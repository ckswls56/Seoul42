CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_dipslay_file

SRCS = display_file.c
OBJS = display_file.o

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
