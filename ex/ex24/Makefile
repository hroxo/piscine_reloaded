# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 09:50:22 by hroxo             #+#    #+#              #
#    Updated: 2025/10/08 10:36:48 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

INCLUDE	= -Iincludes/*

SRC =	srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c 
OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(OBJ) $(NAME)
re: fclean all

.PHONY: all re clean fclean
