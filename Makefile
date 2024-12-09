# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 22:23:57 by mmounsif          #+#    #+#              #
#    Updated: 2024/12/09 22:44:44 by mmounsif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC := ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putnbr_base.c\
		
OBJ := $(SRC:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re