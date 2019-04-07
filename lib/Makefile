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

SRC = *.c

INCLUDES = ./

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRC)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f $(NAME)

re: fclean all

