SRC = ./srcs/*.c

OBJ = *.o

HEAD = ./includes

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	@gcc -c $(FLAGS) -I $(HEAD) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
