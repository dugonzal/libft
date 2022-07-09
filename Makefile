# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/09 17:09:59 by ciclo             #+#    #+#              #
#    Updated: 2022/07/09 17:28:45 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = isalpha.c  ft_isalnum.c /

OBJ = $(SRC=.c:.o)

FLAGS = -Wall -Werror -Wextra

RM = /bin/rm -rf

CC = gcc

AR = ar rc

all : $(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo


$(NAME): $(OBJ)

	@$(AR) $(NAME) $(OBJS)
	@echo "\ncompilation done\n"

clean:

	@$(RM) $(OBJ)
	@echo "\n clean done \n"

fclean: clean

	@$(RM) $(NAME)
	@echo "\n fclean done\n"
re: fclean all

	@echo "\n re fclean all done\n"

.PHONY:
