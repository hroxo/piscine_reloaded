# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 11:23:18 by hroxo             #+#    #+#              #
#    Updated: 2025/10/08 11:42:59 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -Iincludes/*

SRC = main.c \
      srcs/utils.c
OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
