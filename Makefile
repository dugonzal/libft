# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/09 17:09:59 by ciclo             #+#    #+#              #
#    Updated: 2022/07/09 20:18:38 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c  ft_isalnum.c ft_isdigit.c ft_isascii.c  \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c \
  ft_strrchr.c ft_strchr.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

RM = /bin/rm -rf

CC = gcc

AR = ar rc

all : $(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo

 $(NAME): $(OBJ)

#$(CC) $(FLAGS) $(OBJ) -c $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "\n compilation done \n"

clean:

	@$(RM) $(OBJ)
	@echo "\n clean done \n"

fclean: clean

	@$(RM) $(NAME)
	@echo "\n fclean done\n"
re: fclean all

	@echo "\n re fclean all done\n"

.PHONY:  all clean fclean re
	@echo "\n phony done \n"
