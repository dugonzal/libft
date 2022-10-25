# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 01:54:25 by ciclo             #+#    #+#              #
#    Updated: 2022/10/24 12:59:12 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCLUDES	=	./include
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -rf
AR			=	ar rcs


#Sources

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_strlen

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd

FTTO_DIR	=	ft_tol/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
SRC_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))


OBJSF		=	.cache_exists

# Rules for the main program and the objects files
$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)# | $(INCLUDES) directory if you want to use header files
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):#  create the directory for the objects if it doesn't exist mkdir -p para que no de error si ya existe
			mkdir	$(OBJS_DIR)
			mkdir	$(OBJS_DIR)$(FTIS_DIR)
			mkdir	$(OBJS_DIR)$(FTMEM_DIR)
			mkdir	$(OBJS_DIR)$(FTPUT_DIR)
			mkdir	$(OBJS_DIR)$(FTTO_DIR)
			mkdir	$(OBJS_DIR)$(FTSTR_DIR)
			mkdir  $(OBJS_DIR)$(FTLST_DIR)

all:		$(NAME)

clean:
			$(RM)	$(OBJS_DIR)
			$(RM)	$(OBJSF)
			echo "Libft objects deleted!"

fclean:		clean
			$(RM)	$(NAME)
			@echo "libft cleaned!"

re:			fclean all
			@echo "libft recompiled!"


.PHONY:		all clean fclean re
