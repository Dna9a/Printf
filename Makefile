CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = ft_printf.c ft_putstr.c ft_put_num.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

res: all           # to delete
	cc main.c libftprintf.a
	./a.out