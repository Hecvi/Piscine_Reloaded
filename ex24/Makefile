# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klaurine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 16:49:36 by klaurine          #+#    #+#              #
#    Updated: 2019/03/12 17:26:33 by klaurine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putstr.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = includes

all: library

library:
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(HEADERS)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
