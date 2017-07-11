# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/07/11 01:03:24 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c \
		  srcs/ft_strcmp.c srcs/ft_strlen.c \
		  srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o \
		  ft_strcmp.o ft_strlen.o \
		  ft_swap.o

HEADERS = includes

LIBRARY = libft.a

all:
	gcc -Wall -Wextra -Werror -I$(HEADERS) -c $(SOURCES) 
	ar rc $(LIBRARY) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all
