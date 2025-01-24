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
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c

SRC_OBJ = $(SRC:.c=.o)

all: libft $(NAME)

libft:
	$(MAKE) -C libft

$(NAME): $(SRC_OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(SRC_OBJ)

cleanlibft:
	$(MAKE) -C libft clean

fcleanlibft:
	$(MAKE) -C libft fclean

clean: cleanlibft
	rm -f $(SRC_OBJ)

fclean: clean fcleanlibft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re