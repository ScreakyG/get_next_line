CC = gcc
CFLAGS = -g -Wall -Werror -Wextra -D BUFFER_SIZE=1
NAME = tester

SRCS = get_next_line.c get_next_line_utils.c main.c
SRCS_B = get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(OBJS_B)
		$(CC) $(CFLAGS) $(OBJS_B) -o tester_bonus

clean:
		rm -f $(OBJS)
		rm -f $(OBJS_B)

fclean: clean
		rm -f $(NAME)
		rm -f tester_bonus

re: fclean all

.PHONY: all clean fclean re
