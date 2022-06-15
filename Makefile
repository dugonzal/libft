# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 20:04:23 by dugonzal          #+#    #+#              #
#    Updated: 2022/06/06 20:18:10 by dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c			\
	  ft_isdigit.c			\
	  ft_isalnum.c			\
	  ft_isascii.c			\
	  ft_isprint.c			\
	  ft_strlen.c			\
	  ft_strlcpy.c			\
	  ft_strlcat.c			\
	  ft_strncmp.c			\
	  ft_memchr.c			\
	  ft_toupper.c			\
	  ft_tolower.c			\
	  ft_strnstr.c			\
	  ft_atoi.c				\
	  ft_strchr.c			\
	  ft_strrchr.c			\
	  ft_memset.c			\
	  ft_bzero.c			\
	  ft_memcmp.c			\
	  ft_memcpy.c			\
	  ft_memmove.c			\
	  ft_calloc.c			\
	  ft_strdup.c			\
	  ft_substr.c			\
	  ft_strjoin.c			\
	  ft_split.c 			\
	  ft_itoa.c				\
	  ft_strtrim.c			\
	  ft_putchar_fd.c		\
	  ft_putstr_fd.c		\
	  ft_putendl_fd.c		\
	  ft_putnbr_fd.c		\
	  ft_strmapi.c			\
	  ft_striteri.c	\

SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			
OBJECTS = $(SRCS:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)

$(OBJ_BONUS): $(SRCS) $(SRC_BONUS)
	gcc $(CFLAGS) -c $(SRCS) $(SRC_BONUS)

bonus: $(OBJECTS) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJECTS) $(OBJ_BONUS)

clean:
	@rm -f $(OBJECTS) $(OBJ_BONUS)

fclean: clean
	@rm -f $(OBJECTS) $(OBJ_BONUS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
