CC = gcc
CFLAGS = -g -Wall -Werror -Wextra -D BUFFER_SIZE=1000
NAME = tester

SRCS = get_next_line.c get_next_line_utils.c main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
