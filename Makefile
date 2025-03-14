# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 20:06:49 by fbraune           #+#    #+#              #
#    Updated: 2025/03/13 20:51:22 by fbraune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC	 = gcc
Flag = -Wall -Wextra -Werror -c
SRC  = ft_*.c
OBJ  = ft_*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): libft.h
	$(CC) $(Flag) $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all
