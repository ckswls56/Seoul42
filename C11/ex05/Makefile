GCC = gcc -Wall -Werror -Wextra
NAME = do-op
SRCS = main.c op_fun.c put_fun.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $^ -o $@

%.o : %.c
	$(GCC) -c $< -I. -o $(<:.c=.o)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
