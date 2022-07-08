NAME = libft.a

SRC = isalpha.c /


OBJ = (SRC=.c:.o)

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

all:

	$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJ)

re:

.PHONY:
