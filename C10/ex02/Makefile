CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_tail

SRCS = str.c file.c main.c
OBJS = str.o file.o main.o
H = ft.h

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
