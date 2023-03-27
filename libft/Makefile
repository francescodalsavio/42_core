NAME = libft.a
SRCS = ft_strlen.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    ar rc $(NAME) $(OBJS)
    ranlib $(NAME)

%.o: %.c
    gcc -Wall -Wextra -Werror -c $< -o $@

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
