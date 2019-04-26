# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnita <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 17:43:11 by pnita             #+#    #+#              #
#    Updated: 2019/04/07 18:30:46 by pnita            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c          #все прописать полностью

OBJ = $(SRC:.c=.o)

INCLUDES = ./

all : $(NAME)

$(NAME): $(OBJ) 
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

$(OBJ) : $(SRC) libft.h
	@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRC)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
