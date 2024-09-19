# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 15:48:52 by elerazo-          #+#    #+#              #
#    Updated: 2024/09/19 19:03:10 by elerazo-         ###   ########.fr        #
#                                                                              #
# ****************************************************************************

NAME = libft.a
SRC_DIR = srcs
INCLUDE_DIR = includes
SRC = 	$(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_swap.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR)

all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
