NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
HEADERS = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^

%.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) -o $@ $<

so:
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all clean fclean re
