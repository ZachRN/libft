NAME = libft.a
OBJ_FILES = main.o ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memset.o ft_strchr.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $@ $^

%.o: %.
	$(CC) -c $(CFLAGS) -o $@ $<
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
