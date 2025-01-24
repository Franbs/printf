# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 00:42:50 by fbanzo-s          #+#    #+#              #
#    Updated: 2025/01/23 00:42:50 by fbanzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
NAMELIB = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_puthex_fd.c ft_putptr_fd.c

SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar rcs $(NAME) $(SRC_OBJ)

clean: 
	rm -f $(SRC_OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re