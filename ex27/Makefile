# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 17:38:18 by elerazo-          #+#    #+#              #
#    Updated: 2024/09/19 18:15:01 by elerazo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
