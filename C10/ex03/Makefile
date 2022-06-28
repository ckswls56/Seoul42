CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_hexdump

SRCS = main.c print.c str.c words.c sub.c
OBJS = main.o print.o str.o words.o sub.o
H =ft.h

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(H)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
