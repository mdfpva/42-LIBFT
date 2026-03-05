NAME = libft.a

SRCS = ft_isalpha.c ft_memcpy.c \
	ft_isdigit.c ft_memmove.c \
	ft_isalnum.c ft_strlcpy.c \
	ft_isascii.c ft_strlcat.c \
	ft_isprint.c \
	ft_strlen.c ft_toupper.c \
	ft_memset.c ft_tolower.c \
	ft_bzero.c ft_atoi.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $<
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
