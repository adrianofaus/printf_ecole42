# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrianofaus <adrianofaus@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 16:58:08 by afaustin          #+#    #+#              #
#    Updated: 2022/05/25 22:50:06 by adrianofaus      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_SRC	=	./src/
PATH_INC	=	./includes/

HEADERS		=	$(PATH_INC)ft_printf.h
NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror -I $(PATH_INC)
CC			=	gcc $(CFLAGS)

SRCS		=	ft_printf.c ft_char.c ft_decimal.c ft_hex.c \
				ft_pointer.c ft_printf.c ft_string.c ft_printf_utils.c

OBJS		=	$(SRCS:%.c=%.o)

RM			=	rm -rf

all: 			$(NAME)

$(NAME):		$(addprefix $(PATH_SRC),$(OBJS))
				@ar -crs $(NAME) $(addprefix $(PATH_SRC), $(OBJS))
				@echo "\n\033[0;32mDone!"
				@echo -n "\033[0m"

$(PATH_SRC)%.o:	$(PATH_SRC)%.c $(HEADERS)
				@printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@
				@$(CC) -c -o $@ $<

clean:
				@$(RM) $(addprefix $(PATH_SRC), $(OBJS))
				@echo "\033[0;32mObj. files cleaned!"
				@echo -n "\033[0m"

fclean: 		clean
				@$(RM) $(NAME)
				@echo "\033[0;32mBinary Cleaned!"
				@echo -n "\033[0m"

re: 			fclean all

.PHONY: 		clean fclean
