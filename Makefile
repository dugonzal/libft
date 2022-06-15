NAME = libft.a

SRC = isalpha.c /

OBJ = (src:.c:.o)

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJ)

re:

.PHONY:
